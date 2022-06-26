#include <iostream>
#include <string>
void func11();
int func12();
void func13();
void func2();
void func3();

struct Sales_data {
	std::string ISBN;
	unsigned int num = 0;
	double price;
	double revenue = 0;
};

int main()
{
	//func11();
	//func12();
	//func13();
	//func2();
	func3();
}

void func11()
{
	Sales_data data[3];
	for (int i = 0; i<3; i++) {
		std::cin >> data[i].ISBN >> data[i].num >> data[i].price;
		data[i].revenue = data[i].num * data[i].price;
	}
	for (int i = 0; i<3; i++) {
		std::cout << data[i].ISBN << " " << data[i].num << " " << data[i].revenue << std::endl;
	}
}
int func12()
{
	Sales_data data1, data2;
	std::cin >> data1.ISBN >> data1.num >> data1.price;
	std::cin >> data2.ISBN >> data2.num >> data2.price;
	data1.revenue = data1.num * data1.price;
	data2.revenue = data2.num * data2.price;

	Sales_data sum;
	if (data1.ISBN == data2.ISBN) {
		sum.ISBN = data1.ISBN;
		sum.num = data1.num + data2.num;
		sum.price = (data1.price + data2.price)*1.0 / 2;
		sum.revenue = data1.revenue + data2.revenue;

		std::cout << sum.ISBN << " " << sum.num << " " << sum.price << " " << sum.revenue << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN\n";
		return -1;
	}	
}
void func13()
{
	Sales_data data, sum;
	while (std::cin >> data.ISBN >> data.num >> data.price) {
		data.revenue = data.num * data.price;
		sum.num += data.num;
		sum.revenue += data.revenue;
	}
	sum.ISBN = data.ISBN;
	sum.price = sum.revenue * 1.0 / sum.num;
	std::cout << sum.ISBN << " " << sum.num << " " << sum.price << " " << sum.revenue << std::endl;
}

void func2()
{
	Sales_data curData, valData;
	std::cin >> curData.ISBN >> curData.num >> curData.price;
	int cnt = 1;
	while (std::cin >> valData.ISBN >> valData.num >> valData.price) {
		if (curData.ISBN == valData.ISBN) {
			cnt++;
		} else {
			std::cout << curData.ISBN << " " << cnt << std::endl;
			cnt = 1;
		}
		curData.ISBN = valData.ISBN;
	}
	std::cout << valData.ISBN << " " << cnt << std::endl;
}

void func3()
{
	Sales_data curData, valData;
	std::cin >> curData.ISBN >> curData.num >> curData.price;
	curData.revenue = curData.num * curData.price;
	while (std::cin >> valData.ISBN >> valData.num >> valData.price) {
		valData.revenue = valData.num * valData.price;
		if (curData.ISBN == valData.ISBN) {
			curData.num += valData.num;
			curData.revenue += valData.revenue;
			curData.price = curData.revenue * 1.0 / curData.num;
		} else {
			std::cout << curData.ISBN << " " << curData.num << " " << curData.price << " " << curData.revenue << std::endl;
			curData.num = valData.num;
			curData.price = valData.price;
			curData.revenue = valData.revenue;
			curData.ISBN = valData.ISBN;
		}
	}
	std::cout << valData.ISBN << " " << valData.num << " " << valData.price << " " << valData.revenue << std::endl;
}