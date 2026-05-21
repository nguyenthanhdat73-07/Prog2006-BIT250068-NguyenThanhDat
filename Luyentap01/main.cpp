#include <iostream>
using namespace std;

// Hàm tìm giá trị lớn nhất (Bài 5)
int timMax(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {

    // ===== BÀI 1 =====
    cout << "\n===== BAI 1: KIEM TRA SO CHAN LE =====\n";

    int n1;
    cout << "Nhap so: ";
    cin >> n1;

    if (n1 % 2 == 0)
        cout << "So chan\n";
    else
        cout << "So le\n";


    // ===== BÀI 2 =====
    cout << "\n===== BAI 2: TINH DIEN TICH =====\n";

    float W, H;
    cout << "Nhap W: ";
    cin >> W;

    cout << "Nhap H: ";
    cin >> H;

    cout << "Dien tich = " << W * H << endl;


    // ===== BÀI 3 =====
    cout << "\n===== BAI 3: IN TU N XUONG 1 =====\n";

    int n3;
    cout << "Nhap n: ";
    cin >> n3;

    for (int i = n3; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;


    // ===== BÀI 4 =====
    cout << "\n===== BAI 4: GIAI PHUONG TRINH AX + B = 0 =====\n";

    float a, b;
    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem\n";
        else
            cout << "Phuong trinh vo nghiem\n";
    } else {
        cout << "Nghiem x = " << -b / a << endl;
    }


    // ===== BÀI 5 =====
    cout << "\n===== BAI 5: TIM GIA TRI LON NHAT =====\n";

    int arr[] = {3, 8, 2, 10, 5};
    int size = 5;

    cout << "Mang: 3 8 2 10 5" << endl;
    cout << "Gia tri lon nhat = "
         << timMax(arr, size) << endl;


    // ===== BÀI 6 =====
    cout << "\n===== BAI 6: THU TRONG TUAN =====\n";

    int day;
    cout << "Nhap so tu 1 den 7: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Thu Hai"; break;
        case 2: cout << "Thu Ba"; break;
        case 3: cout << "Thu Tu"; break;
        case 4: cout << "Thu Nam"; break;
        case 5: cout << "Thu Sau"; break;
        case 6: cout << "Thu Bay"; break;
        case 7: cout << "Chu Nhat"; break;
        default: cout << "Khong hop le";
    }

    cout << endl;


    // ===== BÀI 7 =====
    cout << "\n===== BAI 7: TINH TONG 1 + 2 + ... + N =====\n";

    int n7, S = 0;
    cout << "Nhap n: ";
    cin >> n7;

    for (int i = 1; i <= n7; i++) {
        S += i;
    }

    cout << "Tong S = " << S << endl;

    return 0;
}