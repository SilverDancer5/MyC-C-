#include<bits/stdc++.h>

using namespace std;

const int maxn = 200010;

int num[maxn] = {0};

void flag(int n, int avg) {
    int j = n, x = 1;
    for(int i = 1; i <= n; i++) {
        if(i % (n/3) == 0) {
            x++;
        }
        if(i+j == avg) {
            num[i] = x;
            num[j] = x;
        }
        j--;
    }
}

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i ++) {
        sum += i;
    }

    int avg = sum / 3;

    if(sum % 3 != 0) {
        cout << "Impossible";
        return 0;
    }else {
        if(avg > n) {
            flag(n, avg);
            for(int i = 1; i <= n; i++) {
                cout << num[i];
            }
        }

    }



    return 0;
}

