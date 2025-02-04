#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> st;

    // push element

    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout << st.size() << endl;
    // remove
    st.empty();
    cout << st.size() << endl;

    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}