#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,n,freq[26]={0},count=0,sum=1;
    scanf("%d",&n);
    char str[n][100];
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            freq[str[i][j]-97]++;
        }
        for(k=0;k<26;k++)
        {
            if(freq[k]>=sum)
                freq[k] = sum;
            else
                freq[k] = -1;
        }
        sum++;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]==n)
         count++;
    }
    printf("%d",count);
    return 0;
}
