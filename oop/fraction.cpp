#include <bits/stdc++.h>
using namespace std;
class Fraction{
private :
int numerator;
int denominator;
public:
Fraction(int numerator,int denominator){
    this ->denominator=denominator;
    this->numerator=numerator;
    }
   	void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}
    void add(Fraction F2){
        int lcm= this->denominator*F2.denominator;
        int x=lcm/this->denominator;
        int y=lcm/F2.denominator;
        int num=x*this->numerator+y*F2.numerator;
        this->numerator=num;
        this->denominator=lcm;
        


    }
    void print (){
        cout<<numerator<<'/'<<denominator<<endl;
    }
};
int main ()
{Fraction f1(10,20);
f1.print();
Fraction f2(2,4);
f1.add(f2);
f1.simplify();
f1.print();



  
return 0;
}