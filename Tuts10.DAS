Bài 1:
Time sort và CubeSort là thuật toán sắp xếp nhanh nhất trong mọi trường hợp

Ý tưởng:

Time sort:
Chia làm 2 bước

Bước 1:
Xếp dãy dữ liệu thành một Heap(cấu trúc cây nhị phân). Với Max-Heap(nút gốc có giá trị lớn nhất) hoặc
Min-Heap(nút gốc có giá trị nhỏ nhất) Thỏa mãn một vài yêu cầu sau:

+ Nút cha sẽ luôn hơn hơn hoặc nhỏ hơn tất cả các nút con. Nút gốc của Heap sẽ luôn lớn nhất hoặc nhỏ nhất
+ Heap được tạo thành phải là một cây nhị phân đầy đủ, tức ngoại trừ các nút lá ở cùng một cấp độ các nút nhahs
  không được thiếu.
  
Bước 2:

2.1: Đưa phần tử Lớn nhất hoặc nhỏ nhất lên của heap vào mảng kết quả. Mảng sẽ chứa các phần tử đã được sắp xêsp
2.2: Sắp xếp lại heap sau khi loại bỏ núp gốc(có giá trị MAX, MIN) để tìm phần tử tiếp theo 
(MAX, MIN sau số vừa loại bỏ)
2.3 Thực hiện lại Bước 1 đến khi tất cả các phần tử của mảng đều được đưa vào Heap.

=> mảng kết quả sẽ là Giảm dần (Max-heap) Tăng dần(Min-heap)

CubeSort:( chưa hiểu ý tưởng lắm)


Bài 2:

Thời gian sắp xếp là n.
Giải thích có 0 và 1 và chỉ cần sắp xếp.
VD sắp xếp tằng. thì 1 phần là toàn số 0 và phần còn lại là toàn số 1 ở 1 đầu của mảng
(với các chỉ số i, j tương ứng)

Bài 3:

Đánh giá 1 cách tổng quan thì có:

Trường hợp Tốt nhất:
QuickSort và MergeSort  : O(nLog(n));
InsertSort              : O(n);

Nhưng đánh giá tổng quan với mọi trường hợp tham số đầu vào thì Merger và QuickSort vẫn chiếm ưu thế hơn
và trường hợp tham số như vậy là rất thấp.

Bài 4: so sánh 2 phần tử có bằng nhau không?

So sánh trực tiếp thế thôi.
thời gian chạy 1ms

Bài 5:
So sánh 2 mảng có cùng số phần tử là n có giống nhau hay không.
+ Sắp xếp 2 mảng với thuật toán QuickSort.
+ Dùng while so sánh các phần tử của nhau.

thời gian thực hiện 2nlog(n) + n hoắc 2n^2 + n;


