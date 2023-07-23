using namespace std;
#include <iostream>
#include <string>
const int Max_Size = 100;
class Stack
{
private:
	int top;
	int item[Max_Size];
public:
	Stack()
	{
		top = -1;
	}
	void push(int Element)
	{
		if (top >= Max_Size - 1)cout << "Stack Overflow";
		else
		{
			top++;
			item[top] = Element;
		}
	}
	void pop()
	{
		if (top == -1) cout << "Stack Underflow";
		else
		{
			top--;
		}
	}
	void pop(int &Memory)
	{
		if (top == -1) cout << "Stack Underflow";
		else
		{
			Memory = item[top];
			top--;
		}
	}
	void get_top(int &num)
	{
		num = item[top];
	}

	void print()
	{
		for (int i = top; i >= 0; i--)
		{
			cout << "| " << item[i] << " |\n";
		}
	}

};
int main()
{
	int x = 0;
	Stack s;
	s.push(6);
	s.push(16);
	s.push(26);
	s.push(37);
	s.pop(x);
	s.push(36);
	s.print();
	cout << "-------------------------------\n";
	cout << "Last poped element is: " << x << "\n";
	cout << "-------------------------------\n";
	int v = 0;
	s.get_top(v);
	cout << "Stack top is: " << v << "\n";
	return 0;
}