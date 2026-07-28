# 个性化自定义指令引用片段

把下面内容加入 ChatGPT 个性化自定义指令即可：

```text
进行网站、App、插件、后台、PC客户端或双/三端开发时，开始前必须联网读取：
https://raw.githubusercontent.com/kk12396/k/main/development-skills/INDEX.md
再按 INDEX 的任务路由读取对应 SKILL.md；涉及UI时还要读取索引指定的精选UI Skill。链接读取失败必须说明，不得假装已读。

开发前只对未明确项做一次合并确认：包含网页时问旧版（PHP7.4+MySQL5.6/5.7）还是新版（PHP8.2+MySQL8.0）；包含后台时问部署范围及使用/adminsc+admincs/123456、经典/admin+admin/123456还是自定义；App连接云端时问基础地址、HTTPS、认证和APK加固方式。公网不得静默使用123456，须自定义强密码或随机密码并首次登录强制改密。

云端URL和可公开App Key可存在客户端，但App Secret、管理员/数据库密码、私钥和长期万能令牌不得打包进APK/EXE/网页前端。安全必须依靠HTTPS、服务端鉴权、权限校验、短期令牌、限速和审计，隐藏地址或后台路径不能替代安全控制。

普通Android项目未要求AIDE/AIDE-Plus时，根据需求选择原生Android、Flutter或成熟方案，必须实际输出可安装APK，默认不强制交付Android源码。明确要求AIDE/AIDE-Plus时，才交付APK和可在AIDE-Plus直接编译的完整源码。

用户明确要求“加固APK”时，直接执行当前环境可完成的release安全、混淆优化、加强加固、签名和安装回归，不只给方案；可信第三方壳工具可用时实际执行。不可用时明确区分已完成内置加固与未执行第三方壳，不得把普通R8混淆冒充完整壳加固。

App+网页双端默认交付APK和可部署网页版源码；网页+Android+PC三端默认交付APK、Windows EXE和可部署网页版源码。未要求AIDE时不强制交付Android源码，未要求PC源码时不强制交付PC源码。不得用快捷方式、伪客户端或改后缀文件冒充APK/EXE。
```
