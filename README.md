# 简介
这是一个自定义随机字符串生成器，使用 Visual Studio 2019 编写，目前只能通过修改源码的方式来指定字符串的格式和生成数量，同时会保存到文件。

# 效果

这就是我们生成一条字符串的实际代码，会保存到 `tmp` 变量中

```c
sprintf_s(tmp, "G0 X%s Y%s Z%s E%s", generateRandomString(2), generateRandomString(2), generateRandomString(2), generateRandomString(2));
```

上面的代码中的

`G0 X%s Y%s Z%s E%s ` ：就是我们要生成的字符串的格式，%s 都会被后面的随机字符替代，其它字符为自定义固定字符。  
`generateRandomString(length)` ：函数会随机生成length长度的字符串并返回该值。

运行工程代码，会生成以下数据

```
G0 X`3 YD^ ZOg E[k
G0 X*y Y<h Z\F E4q
G0 XvE YJ? Z"- Ei[
...
```
这样就完成了随机字符串的批量生成。
