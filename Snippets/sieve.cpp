# include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<bool> isPrime;
vector<int> sFactor;
void sieve(int n)
{
	isPrime.assign(n+1, true);
	sFactor.assign(n+1, 0);
	isPrime[0] = isPrime[1] = false;
	for(ll i=2; i<=n;i++)
	{
		if(isPrime[i])
		{
			sFactor[i] = i;
			for(ll j=i*i; j<=n; j+=i)
			{
				if(isPrime[j])
				{
					isPrime[j] = false;
					sFactor[j] = i;
				}
			}
		}
	}
}

int main(){
  return 0;
}