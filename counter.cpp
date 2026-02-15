#include <iostream>
#include <string>
using namespace std;

class expression
{
private:
    bool verbose;

public:
    expression(bool verbose = true) {
        this->verbose = verbose;
        if (this->verbose)
            cout << "created expr.: " << this << endl;
    }

    ~expression() {
        if (this->verbose)
            cout << "killed expr.: " << this << endl;
    }
};

int main()
{
    cout << "I am Jack's string parser" << endl;
    cout << "Use symbols: x, 0..9, *, /, +, -, ()" << endl;
    cout << "Enter expression:\n(x^2+1) / (x^3-x-1)" << endl;

    string input;
    input = "(x^2+1) / (x^3-x-1)";
    /*cin >> input;*/ // single expression to be processed
    
    // --------------------

    expression* f = new expression;

    cout << "\n\t(string is converted to 'expression' object, then some magic)\n" << endl;

    // --------------------

    cout << "Expression value: ..." << endl;
    //f.find_value();

    delete f;

    return 0;
}