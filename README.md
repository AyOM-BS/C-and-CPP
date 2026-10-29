# C-and-CPP

C 与 C++ 的练习代码，按主题分目录保存。**这个仓库只放源码**（`.c` / `.cpp` / `.h` / `.hpp`）和工程文件（`.slnx` / `.vcxproj` / `.filters`）——`.vs/`、`x64/`、`Debug/`、`*.obj`、`*.pdb`、`*.exe` 这类构建产物由 `.gitignore` 挡在外面，不进版本库。

## 目录

Visual Studio 一个工程是一个文件夹、里面再套一层同名文件夹，所以路径会长成 `Queue/Queue/Queue.cpp` 这样。

### 数据结构（C 实现）

| 目录 | 内容 |
| --- | --- |
| `seqlist/` | 顺序表：`realloc` 倍增扩容、插入删除搬元素 |
| `linked list/` | 单链表：无头结点 + 二级指针改头、头插尾插、断链处理 |
| `list/` | 双向链表：多一个 `prev`，尾删不再需要找前驱 |
| `StaackQueue/` | 顺序栈：`top` 指向下一个空位，`capacity` 满即翻倍 |
| `Queue/` | 链式队列：`head` 出、`tail` 进，出空后 `tail` 要置空 |
| `suanfa/` | LeetCode 题解存档（链表、数组、栈、队列共 25 题） |
| `midfind/` | 二分查找单文件示例 |
| `digui/` | 递归练习集（71 个小题目，见下） |

### 小游戏（C 实现，练二维数组与多文件）

| 目录 | 内容 |
| --- | --- |
| `guess/` | 猜数字 |
| `sanziqi/` | 三子棋：二维数组棋盘 + 判定胜负 |
| `saolei/` | 扫雷：二维数组 + 递归展开空白格 |

### C++（面向对象与模板）

| 目录 | 内容 |
| --- | --- |
| `class mutiple file/` | 类的多文件写法：`point.h/cpp` + `circle.h/cpp` + `judge.cpp` |
| `campany management/` | 职工管理系统：纯虚基类 `worker` + `boss`/`manager`/`staff` 派生，指针数组存多态对象，`fstream` 读写 `worker.txt` |
| `intimate array/` | 数组类模板 `MyArray.hpp`：`operator[]`、`operator=`、拷贝构造（深拷贝，内部 `new T[]`） |
| `class template multiple file 1/` | 类模板分文件方案一：`person.cpp` 里写实现，`test.cpp` 用 `#include "person.cpp"` |
| `class template multiple file 2/` | 类模板分文件方案二：实现直接写进 `person.hpp` |
| `SpeechCompetition/` | 演讲比赛管理：`vector<Speaker>` + `shuffle` 随机分组、`sort` 配自定义仿函数（`compare.h` 里升／降两个重载），十个评委去最高最低取平均，结果追加写 `winner.csv` |
| `StaffPartition/` | 职工分组：`multimap<int, staff>` 以工资取模做 key，`find` + `count` 与遍历判断两种取组写法对照 |
| `cpp exercise/` | 日常练习：进制变换、评委打分、数字游戏、按年龄排序 |
| `school work/` | 课程作业 |

## 两点说明

1. **`suanfa/`、`school work/`、`cpp exercise/`、`digui/` 里的代码整体是注释掉的**——写完粘贴进来、注释掉留给以后回看，是题解存档而不是可直接编译的工程。`suanfa/suanfa/linked list sort.cpp` 是空文件。要跑其中某一题，取消注释即可。
2. **注释是 GBK 编码**，在 GitHub 网页上会显示成乱码。用 VS / VS Code 打开（会按系统编码识别）正常。

## 编译

各目录下都有 `.slnx` 工程文件，用 Visual Studio 打开即可；单文件示例（`midfind/`、`guess/`）也可以直接 `gcc` / `g++` 编译。
