# 玄忆工作室开发 Skills v1.3.3

一套面向正式网站、Android App、Windows 客户端、插件、后台及双端/三端项目的模块化开发规则。

## 主入口

- GitHub：https://github.com/kk12396/k/blob/main/development-skills/INDEX.md
- Raw：https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
- 完整个性化自定义指令：https://github.com/kk12396/k/blob/main/development-skills/CUSTOM_INSTRUCTION_SNIPPET.md
- 开发前确认清单：https://github.com/kk12396/k/blob/main/development-skills/security-audit/PRE_DEVELOPMENT_CHECKLIST.md

## 模块

- `software-engineering`：需求、开发、修复、升级与完成定义。
- `ui-design`：设计系统、大厂产品研究、移动端安全区和图标质量。
- `web-php-mysql`：新版/旧版、手机 KSWEB、后台模式、HTTP/HTTPS、自定义表前缀、安装和迁移。
- `android-app`：API23最低兼容、普通 Android、AIDE/AIDE-Plus、可选云控、项目签名交付和最高可实现加固。
- `multi-platform-contract`：双端/三端共享契约、本地优先、HTTP兼容和云控边界。
- `security-audit`：后台凭据、客户端秘密、云控、接口、文件和 APK 加固审计。
- `testing-debugging`：系统化复现、证据收集、根因反向追踪、单一假设实验、三次失败停止门禁和完成前验证。
- `release-migration`：版本、数据库表前缀、迁移、加固、正式签名、安装升级、产物和发布检查。

## Bug 调试入口

- [系统化修 Bug Skill](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/SKILL.md)
- [根因反向追踪](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/ROOT_CAUSE_TRACING.md)
- [完成前验证门禁](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/VERIFICATION_GATE.md)
- [连续失败阶段报告模板](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/BUG_SESSION_REPORT.md)

调试规则参考 `obra/superpowers` 的 Systematic Debugging、Root Cause Tracing 与 Verification Before Completion，并针对 Android、PHP/MySQL、KSWEB、APK签名/加固和双/三端联调重新编写。

## v1.3.3 固定规则

1. Android 新项目默认 `minSdk=23`，最低兼容 Android 6.0；`compileSdk` 和 `targetSdk` 使用符合当前构建、依赖和发布要求的较新稳定版本。
2. 高于 API23 的系统接口必须做版本判断、兼容层或降级处理；依赖不得静默提高最低版本，交付前验证 API23 和一个较新系统版本。
3. 个性化指令只保留入口、固定偏好和不可省略的交付底线；详细规范由 INDEX 按任务路由加载，避免重复和冲突。
4. 包含网页时只问“新版还是旧版”：新版=PHP8.2+MySQL8.0；旧版=PHP7.4+MySQL5.6/5.7，并默认按安卓手机 KSWEB 测试兼容处理。
5. 包含后台时只问“自用还是经典”：自用=`/adminsc + admincs/asd.cc`；经典=`/admin + admin/123456`。
6. 默认不强制首次登录改密，默认兼容 HTTP 和 HTTPS，只有确实需要时接入云控。
7. 所有网站安装器必须提供可编辑的数据库表前缀；全站统一解析表名，禁止硬编码完整表名，旧站升级沿用原前缀。
8. 所有 Android APK 主要交付物必须已经签名、可直接安装；已有应用沿用原签名，新项目签名文件私密交付给用户。
9. 用户说“加固 APK”时，直接完成当前环境和项目兼容范围内能做到的最好加固，并使用同一份交付签名完成最终签名、API23兼容和升级验证。
10. 修 Bug 前必须先复现、读取完整错误与日志、追踪根因；每轮只验证一个假设，不得堆叠猜测性补丁。
11. 同一问题连续三次修复失败后必须停止盲修，提交阶段报告并复查架构、状态、依赖和环境。
12. 没有当前版本的新鲜验证证据，不得宣称“已修复”；必须验证原始复现、完整构建、安装/部署和关联回归。
13. App+网页双端默认交付已签名可安装 APK + 可部署网页版源码；网页+Android+PC 三端默认交付已签名可安装 APK + Windows EXE + 可部署网页版源码。

来源与参考项目见 `SOURCE_NOTICE.md`，调试来源许可见 `testing-debugging/SOURCE_NOTICE.md`，版本变化见 `CHANGELOG.md`。