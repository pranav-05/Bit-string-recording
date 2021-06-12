#include<iostream>
using namespace std;
#define INF 1000
int b[16];
int zero[16], one[16];
int swap(int *a, int goal, int fr, int to);
int swap(int *a, int goal, int fr, int to) //zero, b, i, n
{ 
	int i;
	for (i = fr+1; i < to; i++) 
    {
		if (a[i] == goal) 
        { 
            a[i] = a[fr], a[fr] = goal;
            return i - fr; 
        }
	}
	return INF;
}
int main()
{
    int n, m, p, i, j, bit, cnt0, cnt1;
    cin>>n;
    cin>>m;
    for (i = 0; i < n; i++) 
    {
        cin>>b[i];
    }
    for (bit = 0, j = i = 0; i < m; i++, bit = !bit)
    {
		cin>>p;
		while (p--) 
        zero[j] = bit, one[j++] = !bit;
	}
    for (cnt0 = cnt1 = 0, i = 0; i < n; i++)
    {
		if (zero[i] != b[i]) 
		{
			cnt0 += swap(zero, b[i], i, n);
		}
		if ( one[i] != b[i])
		{
			 cnt1 += swap( one, b[i], i, n);
		}
	}
    if (cnt0 > cnt1)
    { 
        cnt0 = cnt1;
    }
    cout<<cnt0;
    return 0;
}