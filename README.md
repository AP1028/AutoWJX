# AutoWJX
This is a tiny program that can generate texts of the objective questions of Shanghai English Gaokao or the ‘redbook’ that can be fed into the wjx.cn website in order to minimalize the time of setting up the exam. 

这是一个自动生成上海英语模卷客观题和“红书”问卷星批量添加栏目的程序

## 使用方法：
1. 在“answer.txt”中输入答案(大小写、是否带空格无关紧要)
2. 双击“simpaper.exe”或是“redbook.exe”运行程序
3. 打开问卷星，创建考试问卷，在左上角点击添加姓名
4. 打开“output.txt”，复制其中文本，随后于批量添加考试题-->批量添加-->把文本复制进文本框

## 注意：
1. 程序运行时不会跳出任何窗口，或是只会有一个黑框闪过
2. 请确认输入答案为40(红书33)个字符，若数量不符则会忽略超出部分或将所有缺失答案替换为'!'
3. 每次运行程序后，若“output.txt”不存在，程序会自行创建“output.txt”；若“output.txt”存在，输出结果会覆盖“output.txt”的原有内容
4. 若没有“answer.txt”，可在程序同路径下自行创建

## P.S.
1. 本程序由Dev-C++编写，由于ANSI格式g++编译中文乱码因此上传代码编码为UTF-8
