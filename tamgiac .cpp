#include <iostream>
#include <math.h>
using namespace std;
class diem  
{
	private:
		int x,y;
	public:
		diem(){}// hàm tao k doi  
		diem(int hd, int td)// ham tao doi 
		{
			x=hd;y=td; 
		}
		void nhap()
		{
			cout<<"nhap x=";cin>>x;
			cout<<"nhap y=";cin>>y;
		}
		void xuat()
		{
			cout<<"x="<<x<<"va y="<<y<<endl;
		}
	friend float kc2d(diem d1, diem d2);
};
	float kc2d(diem d1, diem d2)
	{
		return sqrt((d1.x-d2.x)*(d1.x-d2.x)+(d1.y-d2.y)*(d1.y-d2.y));
	}
main ()
{
	diem d1,d2; float a[3]; int i=0;
	do
	{
		cout<<"nhap diem d1:\n";d1.nhap();
		cout<<"nhap diem d2:\n";d2.nhap();
		cout<<"---------\n";
		a[i]=kc2d(d1,d2); cout<<a[i]<<endl;i++;
	}while (i<=2);
	if ((a[0]+a[1]>a[2])&&(a[0]+a[2]>a[1])&&(a[2]+a[1]>a[0]))
	cout<<"la 3 canh cua tam giac";
	else cout<<"k phai 3 canh tam giac";
 } 
