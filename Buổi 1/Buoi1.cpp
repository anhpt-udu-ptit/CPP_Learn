// Dấu "//" để chú thích một dòng
/* Dấu "/*" để chú thích nhiều dòng
   Chú thích giúp người đọc hiểu được ý đồ của người viết code
   Chú thích không ảnh hưởng gì đến chương trình
*/
// Thư viện nhập xuất cơ bản
#include <iostream>
// Thư viện để sử dụng setprecision
#include <iomanip>
// Thư viện tổng hợp khi định nghĩa các hàm, cấu trúc dữ liệu chuẩn và dùng thư viện này
// thì không cần phải include từng thư viện con
#include <bits/stdc++.h>
// Không gian tên chuẩn
using namespace std;
//Số nguyên: int, long long
//int: 4 byte = 32 bit : -2^31 -> 2^31-1
//long long: 8 byte = 64 bit : -2^63 -> 2^63-1
//Số thực: float, double
//float: 4 byte, double: 8 byte

//Ký tự: char
//char: 1 byte
//Cho vào dấu nháy đơn 'A'
//Phải cho vào dấu nháy đơn thì nó mới là ký tự còn không sẽ bị hiểu là biến hoặc lỗi
//Khi cho vào dấu nháy kep "A" thì nó là một chuỗi ký tự string
//Chuỗi ký tự: string
//string: thư viện <string>
#include <string>





// Hàm chính
int main() {
    //In ra Hello World
    cout << "Hello World" << endl;
    // Khai báo biến hoặc có thể khai báo trực tiếp khi nhập ví dụ float a = 3.14, b = 2.71;
    // Biến không được làm bắt đầu bằng số và không được có ký tự đặc biệt trừ dấu gạch dưới _
    // Tên biến nên đặt có ý nghĩa để dễ hiểu
    float a, b;
    // Nhập dữ liệu
    cin >> a >> b;
    // Xuất dữ liệu bình thường
    cout << a << " " << b << endl;
    // Xuất dữ liệu với 2 chữ số thập phân
    cout << fixed << setprecision(2) << a << " " << b << endl;

    //Tổng Hiệu Tích Thương 2 số
    //Khai báo biến
    //a, b: 2 số thực
    //Tổng: a + b
    //Hiệu: a - b
    //Tích: a * b
    /*Thương: a / b (khi chia 2 số nguyên thì kết quả sẽ là số nguyên,
    muốn ra số thực thì phải ép kiểu ít nhất 1 số thành số thực ví dụ (double)a / b
    với (double) là ép kiểu sang số thực)*/
    //Chia lấy dư: a % b (chỉ áp dụng cho số nguyên ví dụ 12 % 5 = 2 là 12 là chia 5 dư 2)
    //Ví dụ áp dụng tính diện tích hình tam giác khi biết chiều cao và đáy
    double chieu_cao, day;
    //Nhập chiều cao và đáy
    cout << "Nhập chiều cao: ";
    cin >> chieu_cao;
    cout << "Nhập đáy: ";
    cin >> day;
    //Tính diện tích
    double dien_tich = 0.5 * chieu_cao * day;
    cout << "Dien tich hinh tam giac: " << dien_tich << fixed << setprecision(1) << endl;

    //Ví dụ về tràn số
    //int a = 100000;
    //int b = 200000;
    //int c = a * b;
    //cout << c << endl;
    //Kết quả in ra sẽ bị sai vì vượt quá giới hạn của kiểu int
    //Phải dùng long long để lưu kết quả
    int c = 100000;
    int d = 200000;
    long long e = (long long)c * d; //1LL * c * d cũng được
    cout << e << endl;

    //Kiểu dữ liệu boolean
    //Chỉ có 2 giá trị true (1) và false (0)
    //Các số khác 0 đều được hiểu là true còn 0 là false
    /*Các phép so sánh đều trả về kiểu boolean ">" là lớn hơn, "<" là nhỏ hơn, 
    ">=" là lớn hơn hoặc bằng, "<=" là nhỏ hơn hoặc bằng, "==" là bằng, "!=" là khác*/
    //Ví dụ
    int x = 5;
    int y = 10;
    bool kq = (x < y); //kq = true
    cout << kq << endl; //In ra 1
    
    //Toán tử 2 ngôi và 1 ngôi
    //Toán tử 2 ngôi: +, -, *, /, %, >, <, >=, <=, ==, !=
    //Toán tử 1 ngôi: ++, -- (tăng hoặc giảm 1 đơn vị)
    int z = 5;
    z++; //z = z + 1
    cout << z << endl; //In ra 6

    //Các cổng and, or, not
    //and: && (cả 2 đều đúng thì kết quả đúng)
    //or: || (1 trong 2 đúng thì kết quả đúng)
    //not: ! (đảo ngược giá trị)
    /*And
    0 0 | 0
    0 1 | 0
    1 0 | 0
    1 1 | 1
    */
    /*Or
    0 0 | 0
    0 1 | 1
    1 0 | 1
    1 1 | 1
    */
    /*Not
    0 | 1
    1 | 0
    */
   //Ví dụ
    bool p = true;
    bool q = false;
    cout << (p && q) << endl; //In ra 0
    cout << (p || q) << endl; //In ra 1
    cout << (!p) << endl; //In ra 0
    cout << (!q) << endl; //In ra 1

    //Cấu trúc rẽ nhánh if else
    if (a > b) {
        cout << "a lon hon b" << endl; //Nếu if đúng thì thực hiện đoạn này
    } else if (a < b) {
        cout << "a nho hon b" << endl; //Nếu else if đúng thì thực hiện đoạn này
    } else {
        cout << "a bang b" << endl; //Nếu cả 2 đều sai thì thực hiện đoạn này
    }
    //Ví dụ if (0) thì không thực hiện vì 0 là false
    //if (1) thì thực hiện vì 1 và các số khác 0 đều là true
    //if ((1 < 0) && (2 > 1)) là ví dụ về 2 điều kiện trong 1 if tương tự với or và not

    return 0;
}
    //Cách để thêm dấu "//" vào đầu dòng nhanh
    //Windows: Ctrl + K + C để thêm, Ctrl + K + U để bỏ