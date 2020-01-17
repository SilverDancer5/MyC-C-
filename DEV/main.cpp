#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int maxn = 2010;

bool hashMap[maxn] = {false};
int map[maxn] = {0};

int main() {
	int n;
	scanf("%d", &n);
	
	int num;
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		num = abs(num);
		map[num] ++;
	}
	
	int count = 0;
	for(int i = 1; i < maxn; i++) {
		if(map[i] == 2) {
			count ++;
		}
	}
	printf("%d", count);
	
	return 0;
}

