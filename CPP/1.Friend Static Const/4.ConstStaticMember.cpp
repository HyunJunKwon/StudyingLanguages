/*
Ŭ���� ���� ����� const �������(���)�� �ʱ�ȭ�� �̴ϼȶ������� ���ؾ߸��Ѵ�.
�׷��� const static���� ����Ǵ� �������(���)�� ������ ���� ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.
const static ���������, Ŭ������ ���ǵ� �� ������ ���� �����Ǵ� ����̱� ������, �ʱ�ȭ�� ����!!!!  
*/ 
#include <iostream>
using namespace std;

class CountryArea
{
public:
	const static int RUSSIA			=1707540;
	const static int CANADA			=998467;
	const static int CHINA			=957290;
	const static int SOUTH_KOREA	=9922; 
};

int main(void)
{
	cout<<"���þ� ����: "<<CountryArea::RUSSIA<<"��"<<endl;
	cout<<"ĳ���� ����: "<<CountryArea::CANADA<<"��"<<endl;
	cout<<"�߱� ����: "<<CountryArea::CHINA<<"��"<<endl;
	cout<<"�ѱ� ����: "<<CountryArea::SOUTH_KOREA<<"��"<<endl; // ���ǵ� ����� �����ϱ� ���ؼ� ���� ��ü�� ������ �ʿ�� ����..  
	return 0;
}