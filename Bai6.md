##Bài 6

##Đề: Cho một ma trận vuông cấp n. ta sẽ có n*n toà nhà với các chiều cao tương ứng. hãy in ra số tòa nhà bạn có thể quan sát được, biết bạn chỉ có thể đứng từ bên ngoài nhìn vào ma trận vuông toà nhà bằng cáchđi xung quanh ma trận.

##Test
- Input:
+ Dòng 1: gồm số nguyên n (n <= 10^3)
+ n dòng tiếp theo mỗi dòng chứa n số nguyên (các số không quá 10^5).
- Output:
+ Gồm một số nguyên duy nhất số toà nhà bạn có thể nhìn thấy được.

|Input|Output|
|:--------|--------:|
|4<br/>2 8 5 10<br/>3 8 9 2<br/>4 2 3 8<br/>9 8 11 10|12|

Test ví dụ được giải như sau: ta có thể nhìn thấy 
+ Ở hàng 1 ta thấy được 4 toà nhà 2 8 5 10
+ Ở hàng 2 ta thấy được 4 toà nhà 3 8 9 2
+ Ở hàng 3 ta thấy được 2 tòa nhà 4 8
+ Ở hàng 4 ta thấy được 4 toà nhà 9 8 11 10