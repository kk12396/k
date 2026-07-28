# 玄忆工作室开发 Skills v1.0.0

一套面向正式网站、Android App、Windows 客户端、插件、后台及双端/三端项目的模块化开发规则。

## 主入口

- GitHub：https://github.com/kk12396/k/blob/main/development-skills/INDEX.md
- Raw：https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
- 自定义指令引用片段：https://github.com/kk12396/k/blob/main/development-skills/CUSTOM_INSTRUCTION_SNIPPET.md

## 模块

- `software-engineering`：需求、开发、修复、升级与完成定义。
- `ui-design`：设计系统、大厂产品研究、移动端安全区和图标质量。
- `web-php-mysql`：旧版/新版环境确认、PHP/MySQL兼容、安装和迁移。
- `android-app`：普通 Android 与 AIDE/AIDE-Plus 两种交付模式。
- `multi-platform-contract`：双端/三端共享契约、本地优先和联调。
- `security-audit`：身份、权限、输入、文件、API、客户端和隐私安全。
- `testing-debugging`：复现、根因、回归、构建和跨端测试。
- `release-migration`：版本、迁移、产物、发布检查和最终报告。

## 本版关键规则

1. 网页开发开始前，如用户未说明，必须先确认旧版或新版。
2. 普通 Android 项目不强制 AIDE，必须实际生成 APK，默认不强制源码。
3. App+网页双端默认交付 APK + 可部署网页版源码。
4. 网页+Android+PC 三端默认交付 APK + Windows EXE + 可部署网页版源码。
5. 只有明确要求 AIDE/AIDE-Plus 时，才强制交付可在 AIDE-Plus 编译的 Android 源码。
6. 双端/三端开发先建立共享契约，优先本地处理，避免各端逻辑不一致。

来源与参考项目见 `SOURCE_NOTICE.md`。
