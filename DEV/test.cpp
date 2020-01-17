#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int maxN = 1111;
double F[maxN] = {};
int main(int argc, char *argv[]) {
	int k, key, count = 0;			
	double value;
	
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &key, &value);
		F[key] += value;
	}
	
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &key, &value);
		F[key] += value;
	}
	
	while(F[count] != 0) {
		count++;
	}
	printf("%d", count);
	for(int i=maxN-1; i>=0; i--) {
		if(F[i] != 0) printf(" %d %.1lf", i, F[i]);
	}
}






