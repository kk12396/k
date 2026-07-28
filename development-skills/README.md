# 玄忆工作室开发 Skills v1.1.0

一套面向正式网站、Android App、Windows 客户端、插件、后台及双端/三端项目的模块化开发规则。

## 主入口

- GitHub：https://github.com/kk12396/k/blob/main/development-skills/INDEX.md
- Raw：https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
- 自定义指令引用片段：https://github.com/kk12396/k/blob/main/development-skills/CUSTOM_INSTRUCTION_SNIPPET.md
- 开发前安全确认：https://github.com/kk12396/k/blob/main/development-skills/security-audit/PRE_DEVELOPMENT_CHECKLIST.md

## 模块

- `software-engineering`：需求、开发、修复、升级与完成定义。
- `ui-design`：设计系统、大厂产品研究、移动端安全区和图标质量。
- `web-php-mysql`：旧版/新版环境确认、后台配置、PHP/MySQL兼容、安装和迁移。
- `android-app`：普通 Android、AIDE/AIDE-Plus、云端秘密和 APK 加固。
- `multi-platform-contract`：双端/三端共享契约、本地优先、安全边界和联调。
- `security-audit`：开发前安全确认、身份、权限、输入、文件、API、客户端和隐私安全。
- `testing-debugging`：复现、根因、回归、构建和跨端测试。
- `release-migration`：版本、迁移、签名、APK 加固、产物和发布检查。

## 本版关键规则

1. 网页开发开始前，如用户未说明，必须先确认旧版或新版。
2. 包含后台时，开发前确认本机/内网/公网及后台路径、初始账号密码方案。
3. 支持 `/adminsc + admincs/123456`、经典 `/admin + admin/123456` 或自定义；弱密码不得静默用于公网。
4. 云端 URL 可存在客户端，但 App Secret、管理员/数据库密码、私钥和长期万能令牌不得进入 APK/EXE/网页前端。
5. 普通 Android 项目不强制 AIDE，必须实际生成 APK，默认不强制源码。
6. 用户要求 APK 加固时直接执行可用加固、签名和安装回归，并准确区分内置加固与第三方壳。
7. App+网页双端默认交付 APK + 可部署网页版源码。
8. 网页+Android+PC 三端默认交付 APK + Windows EXE + 可部署网页版源码。
9. 双端/三端开发先建立共享契约，优先本地处理，避免各端逻辑不一致。

来源与参考项目见 `SOURCE_NOTICE.md`，版本变化见 `CHANGELOG.md`。
