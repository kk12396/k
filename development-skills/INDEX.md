# 玄忆工作室开发 Skills 索引

本目录用于网站、Android App、Windows 客户端、插件、后台及双端/三端项目。执行开发任务时先读本索引，再按任务读取对应 Skill；不得只读索引后凭经验跳过专项规则。

## 强制路由

| 任务 | 必读 Skill |
|---|---|
| 所有正式开发、修复、升级 | `software-engineering/SKILL.md` |
| 涉及页面、组件、图标、交互或视觉 | `ui-design/SKILL.md`，并读取精选 UI Skill |
| 任何包含网页、PHP、MySQL 的任务 | `web-php-mysql/SKILL.md` |
| Android App | `android-app/SKILL.md` |
| App+网页双端或网页+Android+PC 三端 | `multi-platform-contract/SKILL.md` |
| 登录、权限、上传、支付、后台、密钥或公开接口 | `security-audit/SKILL.md` |
| 报错、闪退、卡顿、功能异常 | `testing-debugging/SKILL.md` |
| 更新旧项目、数据库变化、安装包和版本交付 | `release-migration/SKILL.md` |

## 最高优先级规则

1. 需求涉及网页且用户尚未说明版本时，开始开发前只问一次：`网页版使用旧版（PHP7.4 + MySQL5.6/5.7）还是新版（PHP8.2 + MySQL8.0）？` 得到答案后不再重复确认。
2. 普通 Android 项目未要求 AIDE/AIDE-Plus 时，根据需求选择原生 Android、Flutter 或成熟方案，必须实际生成可安装 APK；默认不强制交付 Android 源码。
3. 明确要求 AIDE/AIDE-Plus 时，才要求 Android 源码可在 AIDE-Plus 直接编译，并实际交付 APK 与源码。
4. App+网页双端默认交付：可安装 APK + 可部署网页版源码。网页+Android+PC 三端默认交付：可安装 APK + Windows EXE + 可部署网页版源码。未要求 AIDE 时，不强制交付 Android 源码；未要求 PC 源码时，不强制交付 PC 源码。
5. 不得用网页快捷方式、仅打开网址的套壳或伪 EXE 冒充独立客户端；用户明确允许 WebView/套壳时除外。
6. 双端/三端开发前必须先建立共享功能矩阵、数据模型、API 契约、状态码、权限、同步与错误处理，之后各端只能依据共享契约实现。
7. 设备端能完成的计算、转换、识别、生成、缓存和数据管理优先本地处理；仅同步、协作、备份和必要运营数据上云。
8. 未实际构建、安装、部署或测试的内容，必须标记未验证，不得宣称已完成。

## UI Skill

涉及 UI 时必须读取：

https://raw.githubusercontent.com/kk12396/k/main/ui-style-library/SKILL.md

读取失败时应说明失败，不得假装已读取。

## 推荐执行顺序

需求与环境确认 → 读取专项 Skill → 功能矩阵/设计系统/API 契约 → 实现 → 单端测试 → 跨端联调 → 安全检查 → 迁移与升级验证 → 构建安装包 → 最终验收与交付。
