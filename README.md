# AutoWJX
This is a tiny program that can generate texts of the objective questions of Shanghai English Gaokao that can be fed into the wjx.cn website in order to minimalize the time of setting up the exam. 

这是一个自动生成上海英语模卷客观题问卷星批量添加栏目的程序

## 使用方法：
1. 在“answer.txt”中输入答案(大小写、是否带空格无关紧要)
2. 双击“simpaper1.1.exe”运行程序
3. 打开问卷星，创建考试问卷，在左上角点击添加姓名
4. 打开“output.txt”，复制其中文本，随后于批量添加考试题-->批量添加-->把文本复制进文本框

## 注意：
1. 程序运行时不会跳出任何窗口，或是只会有一个黑框闪过
2. 请确认输入答案为40个字符，若大于40个则超过40个部分会被忽略，若小于40个则所有缺失答案会被替换为'!'
3. 每次运行程序后，若“output.txt”不存在，程序会自行创建“output.txt”；若“output.txt”存在，输出结果会覆盖“output.txt”的原有内容
4. 若找不到“answer.txt”，可在程序同路径下自行创建
