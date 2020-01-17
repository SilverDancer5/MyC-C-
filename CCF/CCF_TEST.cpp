#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

const int maxn = 1000010;

int tmp[maxn];

int cmp(int a, int b) {
    return a > b;
}


int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> tmp[i];
    }

    sort(tmp, tmp + n, cmp);



    long long int cut = 0;
    int times = 0;
    for(int i = 0; i < n; i++) {
        cut += tmp[i];
        times++;
        if(cut >= k) {
            cout << times;
            return 0;
        }
    }

    cout << -1;

	return 0;

}
