#include <iostream>

using namespace std;

int main()
{
	int val1;
	cout << "ù ��° ���� �Է�: " << endl;
	cin >> val1;

	int val2;
	cout << "�� ��° ���� �Է�: " << endl;
	cin >> val2;

	int val3;
	cout << "�Է��� ���� ����� ���մϴ�" << endl;
	cin >> val3;

	int result = 0;
	int result2 = 0;
	int result3 = 0;
	int result4 = 0;

	for (int i= val1; val1 <= val2; val1+= val3)
		
		result += val1;
		
		cout << "����� ���� ����" << result  << "�Դϴ�" << endl;
		
		val1 = 0;
	for (int i = val1; val1 <= val2; val1 += 2)
	
		result2 += val1;
		cout <<"¦���� ����"<<result2 <<"�Դϴ�"<< endl;
	
	for (val1 = 1; val1 <= val2; val1 += 2)
	
		result3 += val1;
	
		cout <<"Ȧ���� ����"<< result3 << "�Դϴ�"<<endl;
		
		result4 = result2 - result3;
		cout << "¦���� ���ϰ� Ȧ���� �� ����" << result4 << "�Դϴ�" << endl;
		

	return 0;
}