#include <iostream>
using namespace std;

class simpleCalculator
{
protected:
    float sum;
    float difference;
    float product;
    float division;
    float a, b;

public:
    void set_sum(float x, float y)
    {
        a = x;
        b = y;
        sum = x + y;
    }
    void set_difference(float x, float y)
    {
        a = x;
        b = y;
        difference = a - b;
    }
    void set_product(float x, float y)
    {
        a = x;
        b = y;
        product = a * b;
    }
    void set_division(float x, float y)
    {
        a = x;
        b = y;
        division = a / b;
    }
};
class scientificCalculator
{
protected:
    float minimum;
    float maximum;
    float x, y;

public:
    int get_min(float x, float y)
    {
        minimum = min(x, y);
        return minimum;
    }
    int get_max(float x, float y)
    {
        maximum = max(x, y);
        return maximum;
    }
};
class hybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void output()
    {
        cout << "sum of " << a << " and " << b << " is : " << sum << endl;
        cout << "difference of " << a << " and " << b << " is : " << difference << endl;
        cout << "product of " << a << " and " << b << " is : " << product << endl;
        cout << "division of " << a << " and " << b << " is : " << division << endl;
        cout << "minimum of " << a << " and " << b << " is : " << get_min(a, b) << endl;
        cout << "maximum of " << a << " and " << b << " is : " << get_max(a, b) << endl;
        cout << "sum of " << sum << " and " << product << " is " << sum + product << endl;
    }
    
};
int main()
{
    hybridCalculator calculation;
    calculation.set_sum(2, 3);
    calculation.set_difference(2, 3);
    calculation.set_product(2, 3);
    calculation.set_division(2, 3);
    calculation.get_min(2, 3);
    calculation.get_max(2, 3);
    calculation.output();
 

    return 0;
}
//multiple inh and public