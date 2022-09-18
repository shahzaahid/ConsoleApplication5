#include<iostream>
using namespace std;
int square(int input)
{
	input = input * input;
	return input;
}
 void evenodd(int input2)
{
	if (input2 % 2 == 0)
		cout << input2 << " is an even number" << endl;
	else if (input2 == 0)
		cout << input2 << " Nither this number is even nor odd" << endl;
	else
		cout << input2 << " is an odd number: " << endl;

}
int main()
{
	cout << "Enter the number: " << endl;
	int num1 = 0;
	cin >> num1;
	int result = square(num1);
	cout << "The square of " << num1 << " is " << result <<endl;
	evenodd(num1);
	system("pause > 0");
}