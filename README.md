## 2024 
### 第0周 2024/10/24-2024/11/8

2024-10-24 23:28:44
- deque
- 容器遍历总结 
    - `for (auto &i : container)`
    - `for (auto i = container.begin(); i != container.end(); ++i)`
    - `for (size_t i = 0; i < container.size(); ++i)`
    - `std::for_each(container.begin(), container.end(), [](const auto& item){ ... })`
- observer/template/command design pattern
- std::function 
- vim: /{string} -> %s///gn 

2024-10-25 23:08:06
- list 容器: 利用好资料，多去练习记忆
- 密码学: CPA 归约证明
- observer design pattern 例子练习
- rust https://tourofrust.com/TOC_zh-cn.html 速过了前5章内容
    - 可变引用和不可变引用

> 反思：
> 1. 学校的课程应付的比较慢，拖累了今天的进度，尽量不要占用整块的的时间来弄
> 2. 虽然练习的过程有些慢，但一定要踏踏实实的。专注专注在专注！
> 3. 今天练习英语听力的过程，还是要提高语料的利用率！
> 4. 下午的时候状态不是太好，peer pressure了，万丈高楼平地起，一步步来，想清楚了就不要害怕
> 5. 抓紧一切可以利用的时间！

2024-10-27 23:39:30
- 学完了设计模式，但是还是不牢固
- rust 基本上速过完了
- STL后面的几个容器都速览了一遍，缺练习

> 反思：
> 1. 昨天下午和今天早上都很内耗，内耗消耗了大量的时间，效率很低
> 2. 认清自己的本性挺不容易的，多反思

2024-10-28 23:45:27
- QT 入门 5节，2倍速学习还是可以的，感觉框架的学习主要是要围绕项目来做
- 预习了os video2的材料，内容非常好！可以说想要学好就得踏踏实实
- forward_list 容器练习 1h左右
- 密码学作业


2024-11-8 23:25
- 密码学大作业--基于混淆电路的MPC协议
- 随机化算法大作业--基于马尔科夫过程的个性化推荐系统初探
- 操作系统三个算法用Cpp语言实现了

### 第一周 2024/11/11-2024/11/17

2024/11/11 17:10:21
- 配置完rCore实验环境
- vs QT实验环境的配置

2024/11/12 
- 协议设计课程通过协议设计，学会了COBS算法，传统协议会采用通过采用特定的定界符来标识帧的开始和结束，并使用转义机制来处理数据中的定界符这种方法，COBS算法通过改变编码方式，减少了协议开销（不需要格外的转义字符的添加），自学太爽了

