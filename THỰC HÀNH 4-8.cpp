//Viết chương trình tính tiền cước TAXI.Biết rằng :
//km đầu tiên là 15000đ
//từ km số 2 đến km30 là 13000đ
//Nếu lớn hơn 30km thì mỗi km thêm sẽ là 10000đ
//Hãy nhập số km từ bàn phím sau đó in ra số tiền phải trả

#include <iostream>
using namespace std;

int main()
{								
	int km;						
	int money = 15000;			

	cout << "Nhap so km: "; cin >> km;

	if (km >= 1 && km <= 30)
		cout << "Tong tien phai tra: " << money + (km - 1) * 13000;
	else
		cout << "Tong tien phai tra: " << money + 29 * 13000 + (km - 30)*10000;

}