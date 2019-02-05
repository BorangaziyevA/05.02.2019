#include<iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

void change_number(int &n)
{
	n = n * 10;
}

void powerA3(int A, int &B)
{
	B = A * A * A;
}

void powerA234(int A, int &B, int &C, int &D)
{
	B = pow(A,2);
	C = pow(A,3);
	D = pow(A,4);
}

void Mcan(int X, int Y, int  &AMean, int &GMean)
{
	AMean = (X + Y) / 2;
	GMean = sqrt(X*Y);
}

void TrianglePS(int a, int &P, int &S)
{
	P = 3 * a;
	S = pow(a, 2)*sqrt(3) / 4;
}

void RectPS(int x1, int y1, int x2, int y2, int  &P, int &S)
{	
	int a, b;
	a = abs(x1 - x2);
	b = abs(y1 - y2);

	P = a + a + b + b;
	S = a * b;
}

void DigitCountSum(int K, int &C, int &S)
{
	C = 0;
	S = 0;
	do
	{
		C++;
		S = S + K / 10;
		K = K / 10;

	} while (K != 0);
}

void invertDigits(int &K)
{
	int A, B = 0, count = 0;
	int q = 10, w = 10000, e = 1;
	A = K;
	
	do
	{
		count++;
		A = A / 10;

	} while (A != 0);

	for (size_t i = 0; i < count; i++)
	{
		B = B + ((K % q) / e) * w ;
		q = q * 10;
		e = e * 10;
		w = w / 10;
	}
	K = B;


	for (size_t i = 0; i < count + 3; i++)
	{
		if (K % 10 == 0)
		{
			K = K / 10;
		}
	}

}

bool Schislo(int n)
{
	int sum = 0;
	for (size_t i = 1; i < n; i++)
	{
		if (n %i == 0)
		{
			sum = sum + i;

		}

	}
	return (sum == n);
}

void Schislodiap(int start, int finish)
{
	for (size_t i = start; i < finish; i++)
	{
		if (Schislo(i))
		{
			cout << i << endl;
		}
	}
}

bool AlfChs(char A)
{
	if ('A' > 0 || 'A' <=0 || 'A' > 'a' || 'A' < 'z' )
	{
		return 0;
	}
	else return 1;
}

int main()
{
	int flag = 0;
	do
	{
		int x;
		cin >> x;
		cout << AlfChs('x') << endl;

	} while (flag == 1);


	////////8/////
			//int x, y;
		//cin >> x >> y;
		//Schislodiap(x, y);


	///////7///////
	//	int q;
//cin >> q;
//invertDigits(q);
//cout << q << endl;


	///////6///////
	//int q, w, e;
//cin >> q;
//DigitCountSum(q, w, e);
//cout << w << " " << e << endl;


	////////5////////
	//int q, w, e, r, t, y;
//cin >> q >> w >> e >> r;
//RectPS(q, w, e, r, t, y);
//cout << t << endl;
//cout << y << endl;

	////////4///////
	//int x, y, z;
//cin >> x;
//TrianglePS(x, y, z);
//cout << y << endl;
//cout << z << endl;

	///////3//////
	//int x, y, z, q;
//cin >> x >> y;
//Mcan(x, y, z, q);
//cout << z << endl;
//cout << q << endl;

	/////////2////////
	//int x, y, z, d;
//cin >> x;
//powerA234(x,y,z,d);
//cout << y  << endl;
//cout << z << endl;
//cout << d << endl;

//cout << "Continue?" << endl;
//cin >> flag;

	
	system("pause");
	return 0;
}