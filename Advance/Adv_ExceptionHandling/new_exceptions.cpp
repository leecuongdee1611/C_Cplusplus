#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        cout << "MyException cought" << endl;
        cout << e.what() << endl;
    }
    catch (std::exception &e)
    {
        // Other errors
    }
}