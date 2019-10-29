#include <stdio.h>
#include <stdlib.h>
#include<string>

int main()
{
    int n , q, i , p, j= 0 ,k ;
    int cnt = 0 ;
    string s ;
    char mp ;
    scanf("%d",&n);
    scanf("%s",&s);
    scanf("%d",&q);
    int a[q] , ans[q];
    for(i = 0 ; i < q ; i++)
    {
        scanf("%d",&a[i]);
        ans[i] = 0 ;
    }

    i = 0 ;
    while(cnt!= q)
    {
        mp = s[a[i]- 1];

        for(k = 0 ; k < (a[i]-1) ; k++)
        {
            if(s[k] == mp)
            {
                ans[j]++ ;
            }
        }
        j++ ;
        cnt++ ;
        i++ ;
    }

        for(i = 0 ; i < q ; i++)
            printf("%d\n",ans[i]) ;
    return 0;
}
