#include <iostream>
#include <math.h>
using namespace std;

//Zad.1
//bool f1(int a, int b) {
//    int suma = a + b;
//    if (suma % 2 == 0) {
//        return true;
//    }
//    return false;
//}

//Zad.2
//bool f2(int x, int y) {
//    int a = (x + y) / 2;
//    int g = sqrt(x * y);
//    if (a > g) {
//        return true;
//    }
//    return false;
//}

//Zad.3
//bool f3(int a, int b, int c) {
//    if (a == b && a != c) {
//        return true;
//    }
//    if (a == c && a != b) {
//        return true;
//    }
//    if (c == b && a != c) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}

//Zad.4
//int f4(int a, int b, int c, int d) {
//    int T[4];
//    T[0] = a;
//    T[1] = b;
//    T[2] = c;
//    T[3] = d;
//    int temp = 0;
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (T[i] <= T[j]) {
//                temp++;
//            }
//        }
//        if (temp == 4) {
//            cout << T[i];
//        }
//    }
//    return 0;
//}

//Zad.5
//bool f5(int a, int b, int c) {
//    if (a <= b + c && b <= a + c and c <= a + b) {
//        return true;
//    }
//    return false;
//}

int main()
{
    int a, b, c, d;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Podaj liczbe: ";
    cin >> b;
    cout << "Podaj liczbe: ";
    cin >> c;
    //cout << "Podaj liczbe: ";
    //cin >> d;
    
    //Odwołania do funkcji
    //1
    //cout << f1(a, b);
    //2
    //cout << f2(a, b);
    //3
    //cout << f3(a, b, c);
    //4
    //cout << f4(a, b, c, d);
    //5
    //cout << f5(a, b, c);
    //6
    //cout << f6(a, b);
    return 0;
}
