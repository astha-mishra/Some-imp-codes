#include <iostream>
#include<algorithm>


using namespace std;

int main()
{
    int n , i , j, cnt = 0 ;
    cin >> n ;
    unsigned long long int  vis[n] ;
    bool b[n] ;

    for(i = 0 ; i < n ; i++)
        cin >> vis[i] ;

    for(i = 0 ; i < n ; i++)
        b[i] = true;

    sort(vis,vis+n) ;
    i = 0 ;
    j = 1 ;
        while(j != n )
        {
            if(vis[i]< vis[j] && (b[i] == b[j]) && (b[i] == true))
            {
                b[i] = false ;
                b[j] = false ;
                i++;
                j++ ;
            }
            else if (vis[i]< vis[j] && (b[j] == false))
            {
                j++ ;
            }
            else
            {
                i++ ;
                j++ ;
            }
        }
    for(i =0 ; i<n ; i++)
    {
        if(b[i] == true)
        {
            cnt++ ;
        }
    }

    cout << cnt << endl ;
    return 0;
}
