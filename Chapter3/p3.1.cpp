#include <iostream>
#include "Sales_data.h"
using std::cin;	using std::cout; using std::endl; using std::cerr;
void func141();
void func262();
void func1();
void func2();
void func3();
void func11();
int func12();
void func13();
void func21();
void func31();

int main() {
	//func141();
	func262();
	return 0;
}

void func141()
{
	//func1();
	//func2();
	func3();
}

void func262()
{
	//func11();
	//func12();
	//func13();
	//func21();
	func31();
}

void func1() {
	int val = 50;
	const int finVal = 100;
	int sum = 0;
	while (val <= finVal) {
		sum += val;
		val++;
	}
	cout << "Sum is " << sum << endl;
}

void func2() {
	int val = 10;
	while (val >= 0) {
		cout << val << " ";
		val--;
	}
	cout << endl;
}

void func3() {
	int val1, val2;
	cout << "Please input 2 numbers:" << endl;
	cin >> val1 >> val2;
	/*if (val1 > val2) {
		int tmp = val1;
		val1 = val2;
		val2 = tmp;
	}*/
	while (val1 <= val2) {
		cout << val1 << " ";
		val1++;
	}
	cout << endl;
}

void func11()
{
	Sales_data data[3];
	for (int i = 0; i<3; i++) {
		cin >> data[i].ISBN >> data[i].num >> data[i].price;
		data[i].revenue = data[i].num * data[i].price;
	}
	for (int i = 0; i<3; i++) {
		cout << data[i].ISBN << " " << data[i].num << " " << data[i].revenue << endl;
	}
}
int func12()
{
	Sales_data data1, data2;
	cin >> data1.ISBN >> data1.num >> data1.price;
	cin >> data2.ISBN >> data2.num >> data2.price;
	data1.revenue = data1.num * data1.price;
	data2.revenue = data2.num * data2.price;

	Sales_data sum;
	if (data1.ISBN == data2.ISBN) {
		sum.ISBN = data1.ISBN;
		sum.num = data1.num + data2.num;
		sum.price = (data1.price + data2.price)*1.0 / 2;
		sum.revenue = data1.revenue + data2.revenue;

		cout << sum.ISBN << " " << sum.num << " " << sum.price << " " << sum.revenue << endl;
		return 0;
	} else {
		cerr << "Data must refer to the same ISBN\n";
		return -1;
	}
}
void func13()
{
	Sales_data data, sum;
	while (cin >> data.ISBN >> data.num >> data.price) {
		data.revenue = data.num * data.price;
		sum.num += data.num;
		sum.revenue += data.revenue;
	}
	sum.ISBN = data.ISBN;
	sum.price = sum.revenue * 1.0 / sum.num;
	cout << sum.ISBN << " " << sum.num << " " << sum.price << " " << sum.revenue << endl;
}

void func21()
{
	Sales_data curData, valData;
	cin >> curData.ISBN >> curData.num >> curData.price;
	int cnt = 1;
	while (cin >> valData.ISBN >> valData.num >> valData.price) {
		if (curData.ISBN == valData.ISBN) {
			cnt++;
		} else {
			cout << curData.ISBN << " " << cnt << endl;
			cnt = 1;
		}
		curData.ISBN = valData.ISBN;
	}
	cout << valData.ISBN << " " << cnt << endl;
}

void func31()
{
	Sales_data curData, valData;
	cin >> curData.ISBN >> curData.num >> curData.price;
	curData.revenue = curData.num * curData.price;
	while (cin >> valData.ISBN >> valData.num >> valData.price) {
		valData.revenue = valData.num * valData.price;
		if (curData.ISBN == valData.ISBN) {
			curData.num += valData.num;
			curData.revenue += valData.revenue;
			curData.price = curData.revenue * 1.0 / curData.num;
		} else {
			cout << curData.ISBN << " " << curData.num << " " << curData.price << " " << curData.revenue << endl;
			curData.num = valData.num;
			curData.price = valData.price;
			curData.revenue = valData.revenue;
			curData.ISBN = valData.ISBN;
		}
	}
	cout << valData.ISBN << " " << valData.num << " " << valData.price << " " << valData.revenue << endl;
}