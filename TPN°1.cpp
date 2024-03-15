#include <bits/stdc++.h>
using namespace std;
bool EsMultiploDe3(int num);
int main ()
{
	int n;
	string msg = "NO ES MULTIPLO";
	cout<<"Ingresar el numero a verificar: ";
	cin>>n;
	if (EsMultiploDe3(n))
	{
		msg = "ES MULTIPLO";
	}
	cout<<msg;
	return 0;
}
bool EsMultiploDe3(int num)
{
	bool flag = false;
	if (num % 3 == 0)
	{
		flag = true;
	}
	return flag;
}