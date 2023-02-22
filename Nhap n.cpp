#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So ban vua nhap la: "<<n;
	//Tinh them tong tu 1 den n
	int S = 0;
	for (int i = 1; i<=n; i++)
		S = S + i;
	cout<<"Tong tu 1 den "<<n<<" = "<<S<<endl;
}
