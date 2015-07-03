## 做新任务时的流程

1. 新建分支
2. 同步引擎仓库开发分支的最新代码（注意同步submodule）
3. 任务开发
4. 提交到本地仓库
5. 同步到自己的远程仓库
6. 向引擎开发分支提交pull request
7. 如果有冲突的话，需要同步引擎开发分支最新代码，然后从4开始

**注意事项**

* 一个pull request做一件事情
* commit的注释用英文，且需要说清楚做什么
* 一个pull request可以有多个commit，但不要太多
* pull request的标题和概要需要写清楚，比如[这个pull request](https://github.com/cocos2d/cocos2d-x/pull/12633)
* 提交pull request前先检查是否有冲突
* 提交pull request时需要选择正确的分支
* 在pull request的comment写上`[ci rebuild]`可以让jenkins重新编译

## git常用命令

* 创建分支: `git checkout -b new_branch_name exiting_branch_name`
* 查看状态: `git status`
* 同步子模块: `git submodule update`
* 同步本地分支到远程仓库: `git push origin branch_name`
* 同步远程仓库分支: `git pull [--rebase] remote_repo_address branch_name`
* 删除自己远程仓库分支: `git push origin :branch_name`
* 提交修改到本地仓库: `git commit -am comment`
* 删除本地分支: `git branch -d branch_name`

## 新任务的git命令

```
git checkout v3
git pull --rebase upstream v3
git checkout -b fix_typo


修改代码

git commit -am "fix a typo"
git push origin fix_typo
```

## 工具

* [sourcetree](https://www.sourcetreeapp.com/)

## 资料

* [git权威指南](http://product.china-pub.com/194010)
* [git官方文档](http://git-scm.com/docs/gittutorial)
* [github使用入门](https://guides.github.com/activities/hello-world/)