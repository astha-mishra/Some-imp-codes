#include<iostream>
using namespace std ;

int main()
{
	int t, v ,s=-1 ;
	long long int n, ans  ;
	cin >>t ;
	while(t--)
	{
		cin >> n ;
		ans = (n-1)*9 + 19 ;

		cout << ans << endl ;
	}
	return 0 ;
}
