//#include<iostream>
////������� 2
//using namespace std;
//double f1(double x);
//double f2(double x);
//double dihotom(double (*f)(double x), double e);
//void main() {
//	double e = 0.001;
//	cout << "x^3+x-3" << endl;
//	cout << "x=" << dihotom(f1, e) << endl;
//	cout << "cos(x)^3" << endl;
//	cout << "x=" << dihotom(f2, e) << endl;
//}
//double f1(double x) {
//	return pow(x, 3) + x - 3;
//}
////a=0 b=100
//double f2(double x) {
//	return pow(cos(x), 3);
//}
//double dihotom(double (*f)(double x), double e) {
//	double a;
//	double b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	double x;
//	while (b - a > 2 * e) {
//		x = (a + b) / 2;
//		if (f(x) * f(a) <= 0) {
//			b = x;
//		}
//		else {
//			a = x;
//		}
//		if (x == 0) {
//			break;
//		}
//	}
//	return x;
//}