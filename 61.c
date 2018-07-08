#include<stdio.h>
void main()
{
    char a[100],b[100];
    int n,i,j,m[100];
    gets(a);
    gets(b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=97&&a[i]<=123)
        a[i]=a[i]-32;
        if(b[i]>=97&&b[i]<=123)
        b[i]=b[i]-32;
    }
    for(i=0;i<n;i++)
    {
        m[i]=((a[i]-65)+(b[i]-65));
        if(m[i]>26)
        m[i]=m[i]-26;
        printf("%c",m[i]+98);
    }
}
