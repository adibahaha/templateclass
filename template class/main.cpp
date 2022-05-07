//
//  main.cpp
//  template class
//
//  Created by Adiba Haque on 3/21/22.
//

#include <iostream>

template<class T>
class Arithmatic
{
private:
    T a;
    T b;
public:
    Arithmatic(T a, T b);
    T add();
    T sub();
};//template ends here

template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a=a;
    this->b = b;
}//template ends here

template <class T>
T Arithmatic<T>::add()
{
    T c;
    c = a+b;
    return c;
}

template <class T>
T Arithmatic<T>::sub()
{
    T c;
    c = a-b;
    return c;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Arithmatic<int> ar(10,5);
    cout<<ar.add();
    Arithmatic<float> ar1(1.5,1.2);
    cout<<ar1.add();
    return 0;
}
