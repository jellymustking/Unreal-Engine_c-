#include <iostream>

using namespace std;

int main()
{
	int val1;
	cout << "첫 번째 숫자 입력: " << endl;
	cin >> val1;

	int val2;
	cout << "두 번째 숫자 입력: " << endl;
	cin >> val2;

	int val3;
	cout << "입력한 수의 배수를 더합니다" << endl;
	cin >> val3;

	int result = 0;
	int result2 = 0;
	int result3 = 0;
	int result4 = 0;

	for (int i= val1; val1 <= val2; val1+= val3)
		
		result += val1;
		
		cout << "배수를 더한 값은" << result  << "입니다" << endl;
		
		val1 = 0;
	for (int i = val1; val1 <= val2; val1 += 2)
	
		result2 += val1;
		cout <<"짝수의 합은"<<result2 <<"입니다"<< endl;
	
	for (val1 = 1; val1 <= val2; val1 += 2)
	
		result3 += val1;
	
		cout <<"홀수의 합은"<< result3 << "입니다"<<endl;
		
		result4 = result2 - result3;
		cout << "짝수는 더하고 홀수는 뺀 값은" << result4 << "입니다" << endl;
		

	return 0;
}