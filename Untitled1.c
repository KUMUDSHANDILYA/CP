#include<stdio.h>
#include<string.h>
int check(char str2[21], char str1[21]);
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][21];
    int i;
    for(i=0;i<n;i++)
    {
        getchar();
        gets(str[i]);
    }
    int q;
    scanf("%d",&q);
    char quer[q][21];
    for(i=0;i<q;i++)
    {
        getchar();
        gets(quer[i]);
    }
    int j;
    for(i=0;i<q;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(check(quer[i],str[j])==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
int check(char str2[21], char str1[21])
{
    int l1=strlen(str1);
    int l2=strlen(str2);
    if(l2!=l1)
    {
        return -1;
    }
    else
    {
        int i=0;
        while(i<l1)
        {
            if(str1[i]!=str2[i])
            {
                return -1;
            }
            i++;
        }
        if(i==l1)
        {
            return 1;
        }
    }
}
