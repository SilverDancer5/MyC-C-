int rili[5][7];
int i,j;
for(i=0;i<5;i++)
    for(j=0;j<7,j++)
    rili[i][j]=0;
switch(xingqiji)
    {
        case 1:a[0][1]=1;break;
        case 2:a[0][2]=1;break;
        case 3:a[0][3]=1;break;
        case 4:a[0][4]=1;break;
        case 5:a[0][5]=1;break;
        case 6:a[0][6]=1;break;
        case 7:a[0][0]=1;break;
    }
    int x,y,k=2;
    for(x=xingqiji+1;x<7;x++)
        for(y=0;y<5;y++)
    {
        rili[y][x]=k;
        k++;
        if(x=6)
            printf("\n")
        printf("%d",rili[y][x])
    }


