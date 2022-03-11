#include <iostream>

int max (int a, int b, int c) {
    if ( a > b && a > c) {
        return a;
    } else if (b > a && b > c){
        return b;
    } else 
    return c;
}

int max (int a, int b){
    if (a>b){
        return a;
    } else 
    return b;
}

int main () {

    using namespace std;

    for(int i = 1000; i <=9999; ++i){
        int num = i;
        int a, b1, b, c1, c, d1, d;
        a = num % 10;
        b1 = num % 100;
        b = b1 / 10;
        c1 = num % 1000;
        c = c1 / 100;
        d1 = num % 10000;
        d = d1 / 1000;
        int dc = d+c;
        int cb = c+b;
        int ba = b+a;
        if(max(dc, cb, ba) == dc){
            if (max(cb, ba) == cb) {
                if (cb == 12 && ba == 7){
                    cout << cb << ba << "\t" << num << "\n";
                }
            } else 
                if (ba == 12 && cb == 7){
                    cout << ba << cb << "\t" << num << "\n";
                }
        } else if (max(dc, cb, ba) == cb){
            if (max (dc, ba ) == dc){
                if (dc == 12 && ba == 7){
                    cout << dc << ba << "\t" << num << "\n";
                }
            } else 
                if (ba == 12 && dc == 7){
                    cout << ba << dc << "\t" << num << "\n";
                }
        } else 
            if(max(dc, cb) == dc){
                if (dc == 12 && cb == 7){
                    cout << dc << cb << "\t" << num << "\n";
                }
            } else {
                if (cb == 12 && dc == 7){
                    cout << cb << dc << "\t" << num << "\n";
                }
            } 
            

    }
    return 0;
}
