CÁC LƯU Ý CẦN ÁP DỤNG ĐỂ ĐỀ BÀI ĐĂNG ĐƯỢC CHUYÊN NGHIỆP HƠN :))
- Sử dụng $$ để đánh dấu các biến, số, giới hạn quan trọng
    + Ví dụ:
        * Nên đánh dấu N <= 10^5
        * Không nên đánh dấu số 5 nếu trong cốt truyện của đề có để nhân vật học lớp 5, tại số 5 không quan trọng
    + Xem thêm latex để đánh dấu cá kí tự đặc biệt như !=, <=, ...
- Không đăng những bài có input/output không chặt chẽ
    + Ví dụ:
        * Không nên đăng bài in ra IMPOSSIBLE nếu không tìm được kết quả thỏa mãn input
        * Thay vào đó, in ra -1 chẳng hạn :v
- Nếu đăng bài OI, giới hạn subtask để ở hint
- Nếu cần giải thích output, cũng để ở hint, nhưng trước ràng buộc subtask

Làm theo các bước sau để sinh test:
- Chỉnh lại biến path trong file gen.py
- Để chạy lệnh sinh test, dùng "python gen.py <left> <right>"
    + Ví dụ:
        * Chạy lệnh "python gen.py 6 10"
        * Chương trình python sẽ compile file 2 file test.inp.cpp và test.out.cpp và sinh các test đánh số từ 6 đến 10 trong folder testcase
- File gen.py không cần phải đi compile test.inp.cpp và test.out.cpp trước mỗi khi cần sinh test (quá tiện :3)

https://youtu.be/OgZ2m4By90g

https://github.com/Canuc80k/Tesgetor

input path\to\testcase\1.in
output path\to\testcase\1.in path\to\testcase\1.out

tham khảo cú pháp latex tại đây: https://hackmd.io/@PgwqUKe0RWCzhadps0OdQw/Hk50LywH0/edit