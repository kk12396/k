# 玄忆工作室开发 Skills v1.2.0

一套面向正式网站、Android App、Windows 客户端、插件、后台及双端/三端项目的模块化开发规则。

## 主入口

- GitHub：https://github.com/kk12396/k/blob/main/development-skills/INDEX.md
- Raw：https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
- 自定义指令引用片段：https://github.com/kk12396/k/blob/main/development-skills/CUSTOM_INSTRUCTION_SNIPPET.md
- 开发前确认清单：https://github.com/kk12396/k/blob/main/development-skills/security-audit/PRE_DEVELOPMENT_CHECKLIST.md

## 模块

- `software-engineering`：需求、开发、修复、升级与完成定义。
- `ui-design`：设计系统、大厂产品研究、移动端安全区和图标质量。
- `web-php-mysql`：新版/旧版、手机 KSWEB 测试、后台模式、HTTP/HTTPS、安装和迁移。
- `android-app`：普通 Android、AIDE/AIDE-Plus、可选云控、最高可实现加固和用户最终签名。
- `multi-platform-contract`：双端/三端共享契约、本地优先、HTTP兼容和云控边界。
- `security-audit`：后台凭据、客户端秘密、云控、接口、文件和 APK 加固审计。
- `testing-debugging`：复现、根因、回归、构建和跨端测试。
- `release-migration`：版本、迁移、加固、未正式签名 APK、产物和发布检查。

## v1.2.0 固定规则

1. 包含网页时只问“新版还是旧版”：新版=PHP8.2+MySQL8.0；旧版=PHP7.4+MySQL5.6/5.7，并默认按安卓手机 KSWEB 测试兼容处理。
2. 包含后台时只问“自用还是经典”：自用=`/adminsc + admincs/asd.cc`；经典=`/admin + admin/123456`。
3. 默认不强制首次登录改密，方便多轮测试；登录页不得展示凭据，数据库只保存密码哈希。
4. 默认兼容 HTTP 和 HTTPS，不强制证书；本地、局域网、KSWEB 和无证书测试地址可正常使用。
5. 只有软件确实需要云控时才索取云控地址和资料；用户主动提供时直接采用，普通本地软件不强制接入。
6. 云端 URL 和公开 App Key 可存在客户端；App Secret、管理员密码、数据库密码、私钥和长期万能令牌不得进入客户端。
7. 用户说“加固 APK”时，直接完成当前环境和项目兼容范围内能做到的最好加固，可使用可信第三方工具。
8. 最终正式签名由用户完成，默认交付 `hardened-unsigned APK`、签名/对齐说明和校验信息；临时测试签名副本必须单独标记。
9. App+网页双端默认交付 APK + 可部署网页版源码；网页+Android+PC 三端默认交付 APK + Windows EXE + 可部署网页版源码。
10. 双端/三端开发先建立共享契约，设备端能处理的内容优先本地完成。

来源与参考项目见 `SOURCE_NOTICE.md`，版本变化见 `CHANGELOG.md`。
