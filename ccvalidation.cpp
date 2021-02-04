
#include <bits/stdc++.h>
using namespace std;

bool validation(const string& cn)
{
	int Digits = cn.length();

	int Sum = 0, is2nd = false;
	for (int i = Digits - 1; i >= 0; i--) {
		int d = cn[i] - '0';
		if (is2nd == true)	d = d * 2;
		Sum += d / 10;
		Sum += d % 10;
		is2nd = !is2nd;
	}
	return (Sum % 10 == 0);
}

int main()
{
	string cardNo;
  cout<<"Enter your credit card number:"<<endl;
  cin>>cardNo;
	if (validation(cardNo))
		cout<<"This is a valid card"<<endl;
	else
		cout<<"This is not a valid card"<<endl;
	return 0;
}
