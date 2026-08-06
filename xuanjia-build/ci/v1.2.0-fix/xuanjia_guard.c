#include <jni.h>
#include <stdint.h>
#include <string.h>

__attribute__((used, section(".xjkey"), visibility("hidden")))
static volatile char XJ_NATIVE_KEY[] =
        "XJ_KEY_N_XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

static int nibble(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

static jbyteArray get_key_part(JNIEnv *env, jclass clazz) {
    (void) clazz;
    volatile char *hex = XJ_NATIVE_KEY + 9;
    jbyte data[32];
    for (int i = 0; i < 32; ++i) {
        int hi = nibble(hex[i * 2]);
        int lo = nibble(hex[i * 2 + 1]);
        if (hi < 0 || lo < 0) return NULL;
        data[i] = (jbyte) ((hi << 4) | lo);
    }
    jbyteArray result = (*env)->NewByteArray(env, 32);
    if (result != NULL) (*env)->SetByteArrayRegion(env, result, 0, 32, data);
    memset(data, 0, sizeof(data));
    return result;
}

static JNINativeMethod methods[] = {
        {"nativeKeyPart", "()[B", (void *) get_key_part}
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    (void) reserved;
    JNIEnv *env = NULL;
    if ((*vm)->GetEnv(vm, (void **) &env, JNI_VERSION_1_6) != JNI_OK) return JNI_ERR;
    jclass clazz = (*env)->FindClass(env, "com/xuanyi/guard/StringVault");
    if (clazz == NULL) return JNI_ERR;
    if ((*env)->RegisterNatives(env, clazz, methods, sizeof(methods) / sizeof(methods[0])) != JNI_OK) {
        return JNI_ERR;
    }
    return JNI_VERSION_1_6;
}
