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

    // to delete a element
    st.pop()

        // size
        cout
        << st.size() << endl;
    // remove
    // to check only that stack is empty or not
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