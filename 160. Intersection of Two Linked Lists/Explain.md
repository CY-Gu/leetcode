## 這題解法是網路上的解法，這邊只是用來解釋

這個解法是一個對一個比較
流程如下: 

```=
headA : 4 1 8 4 5 null    5   0 1 8 4 5
        | | | | |   |     |   | | | | |
        | | | | |   |     |   | | | | |
headB : 5 0 1 8 4   5   null  4 1 8 4 5
```

這時候會發現，他們第一次intersection的node不是"1"嗎?
為甚麼答案是"8"呢?


用gdb看一下


![image](https://github.com/CY-Gu/leetcode/blob/master/160.%20Intersection%20of%20Two%20Linked%20Lists/when%201.PNG)

會發現其實這兩個"1"雖然val一樣，但他們pointer不一樣，也就是說這兩個其實是不同的node，所以不可能會相遇

那再看一下"8"這個node

![image](https://github.com/CY-Gu/leetcode/blob/master/160.%20Intersection%20of%20Two%20Linked%20Lists/when%208.PNG)

可以看到它們無論val還是pointer都是相同的，它們才是真正會相遇的共同node
