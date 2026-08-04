# 玄忆工作室开发 Skills v1.3.5

一套面向正式网站、Android App、Windows 客户端、插件、后台及双端/三端项目的模块化开发规则。

## ChatGPT 推荐用法

- 个性化自定义指令使用仓库中的“稳定版”，核心规则直接写在指令内。
- 不再要求每次新对话都强制访问 GitHub 或 Raw 地址，避免网络策略阻断正常开发。
- GitHub INDEX 与各 Skill 仅在复杂任务、专项规则确实需要且当前环境可访问时读取。
- 外部访问失败时直接按核心指令继续，不反复搜索，也不连续提示“读取失败”。
- 更稳定的长期方案是把 INDEX 和常用 Skill 上传到 ChatGPT Project 作为参考文件，并在 Project 中使用项目指令。

## 主入口

- GitHub：https://github.com/kk12396/k/blob/main/development-skills/INDEX.md
- Raw：https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
- 稳定版个性化自定义指令：https://github.com/kk12396/k/blob/main/development-skills/CUSTOM_INSTRUCTION_SNIPPET.md
- 开发前确认清单：https://github.com/kk12396/k/blob/main/development-skills/security-audit/PRE_DEVELOPMENT_CHECKLIST.md

## 模块

- `software-engineering`：需求、开发、修复、升级与完成定义。
- `ui-design`：设计系统、大厂产品研究、移动端安全区和图标质量。
- `web-php-mysql`：新版/旧版、手机 KSWEB、后台模式、HTTP/HTTPS、自定义表前缀、安装和迁移。
- `android-app`：minSdk23、target/compileSdk36、无maxSdkVersion、普通 Android、AIDE/AIDE-Plus、签名交付和最高可实现加固。
- `multi-platform-contract`：双端/三端共享契约、本地优先、HTTP兼容和云控边界。
- `security-audit`：后台凭据、客户端秘密、云控、接口、文件和 APK 加固审计。
- `testing-debugging`：系统化复现、证据收集、根因反向追踪、单一假设实验、三次失败停止门禁和完成前验证。
- `release-migration`：版本、Android API矩阵、数据库表前缀、迁移、加固、正式签名、安装升级和发布检查。

## Bug 调试入口

- [系统化修 Bug Skill](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/SKILL.md)
- [根因反向追踪](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/ROOT_CAUSE_TRACING.md)
- [完成前验证门禁](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/VERIFICATION_GATE.md)
- [连续失败阶段报告模板](https://github.com/kk12396/k/blob/main/development-skills/testing-debugging/BUG_SESSION_REPORT.md)

## v1.3.5 固定规则

1. GitHub 规则改为按需读取，不再作为每次新对话的强制网络前置条件。
2. 外部访问失败时继续执行，不反复提示网络策略问题；用户本次要求优先。
3. Android 固定 `minSdk=23`、`targetSdk=36`、`compileSdk=36`，不设置 `maxSdkVersion`。
4. 网站安装器允许自定义数据库表前缀，旧站升级沿用原前缀。
5. 网页环境：新版 PHP8.2+MySQL8.0；旧版 PHP7.4+MySQL5.6/5.7并兼容KSWEB。
6. 后台：自用 `/adminsc + admincs/asd.cc`；经典 `/admin + admin/123456`。
7. 默认兼容 HTTP/HTTPS，不强制改密；云控按需接入。
8. Android APK 必须已签名可安装，已有项目沿用原签名，新项目签名私密交付。
9. 用户要求加固 APK 时直接执行当前环境可实现的最佳兼容加固。
10. 修 Bug 必须先复现和追根因，每轮只验证一个假设；三次失败后停止盲修。
11. 没有当前版本的新鲜验证证据，不得宣称修复或交付完成。
12. App+网页默认交付已签名 APK + 可部署网页版源码；三端另交 Windows EXE。

来源与参考项目见 `SOURCE_NOTICE.md`，调试来源许可见 `testing-debugging/SOURCE_NOTICE.md`，版本变化见 `CHANGELOG.md`。