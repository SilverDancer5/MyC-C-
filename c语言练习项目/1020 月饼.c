#include<stdio.h>
#include<stdlib.h>

typedef struct FoodInf
{
    double stock;
    double sum;
    double price;
}Food;

int cmp(const void *a, const *b)
{
    Food aa = *(Food*)a;
    Food bb = *(Food*)b;
    return bb.price > aa.price ? 1 : -1;
}

int main()
{
  int N, D, i;
  double income=0.0, sum=0.0;
  scanf("%d %d", &N, &D);

  Food food[1001];
  for(i=0; i<N; i++)
    scanf("%lf", &food[i].stock);
  for(i=0; i<N; i++)
  {
    scanf("%lf", &food[i].sum);
    food[i].price = food[i].sum / food[i].stock;
  }
  qsort(food, N, sizeof(food[0]), cmp);
  for(i=0; i<N; i++)
  {
    sum += food[i].stock;
    if((int)sum > D)
    {
        int j = i;
        for(j=0; j<i; j++)
        {
            income += food[j].sum;
            D -= food[j].stock;
        }
        income += food[i].price*D;
        break;
    }
  }
  printf("%.2lf", income);

}
