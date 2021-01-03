#include<iostream>
#include<conio.h>
#include<string.h>
struct MCQ {
	char Question[50];
		char a[15];
	char b[10];
	char c[15];
	char d[15];
		char crt[10];
};


using namespace std;
int main() {
	MCQ b;
	strcpy_s(b.Question, "Question: What is Capital of Pakistan?");
	strcpy_s(b.a, "Karachi");
	strcpy_s(b.b, "Quetta");
	strcpy_s(b.c, "Lahore");
	strcpy_s(b.d, "Islamabad");
	strcpy_s(b.crt, "Islamabad");
	cout << b.Question << endl;
	cout <<"a) "<< b.a << " " <<"b) "<< b.b << " " <<"c) "<< b.c << " " <<"d) " << b.d << endl;
	cout << "Enter a correct anwser " << endl;
	char e[20];
	cin.getline(e, 20);
	
	
	 if (strcmp(b.crt, e) == 0) {
		cout << "Correct Answer : "<<b.crt;
	}
	else 
		cout << "Incorect anwser ";
	





		_getch();




}
