// // #include <iostream>
// // #include <stack>
// // using namespace std;
// // bool isBalanced(string str)
// // {
// //     stack<char> s;
// //     for (auto ch : str)
// //     {
// //         switch (ch)
// //         {
// //         case '(':
// //             s.push(ch);
// //             break;
// //         case '{':
// //             s.push(ch);
// //             break;
// //         case '[':
// //             s.push(ch);
// //             break;
// //         case ')':
// //             if (!s.empty() and s.top() == '(')
// //             {
// //                 s.pop();
// //             }
// //             else
// //             {
// //                 return false;
// //             }
// //             break;
// //         case '}':
// //             if (!s.empty() and s.top() == '{')
// //                 s.pop();
// //             else
// //                 return false;
// //             break;

// //         case ']':
// //             if (!s.empty() and s.top() == '[')
// //                 s.pop();
// //             else
// //                 return false;
// //             break;
// //         }
// //     }
// //     if (s.empty())
// //     {
// //         return true;
// //     }
// //     else
// //     {
// //         return false;
// //     }
// //     // return s.empty();
// // }
// // int main()
// // {
// // string str = "{([{}])}[[";
// //     isBalanced(str) ? cout << "Is Balanced" << endl : cout << "Not Balanced!" << endl;
// // }

// // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// #include <iostream>
// #include <stack>
// using namespace std;

// bool isBalanced(string str)
// {
//     stack<char> s;
//     for (auto ch : str)
//     {
//         switch (ch)
//         {
//         case '(':
//             s.push(ch);
//             break;
//         case '{':
//             s.push(ch);
//             break;
//             case '[' : s.push(ch); break;
//             case ')' : if(!s.empty() and s.top() ==  '(')
//                 {
//                     s.pop();
//                 }else{
//                     return false;
//                 }
//                 break;
//             case ']' : if(!s.empty() and s.top() ==  '[')
//                 {
//                     s.pop();
//                 }else{
//                     return false;
//                 }
//                 break;
//             case '}' : if(!s.empty() and s.top() ==  '{')
//                 {
//                     s.pop();
//                 }else{
//                     return false;
//                 }
//                 break;
//         }
//     }
//     if(s.empty())
//     {
//         return true;
//     }else{
//         return false;
//     }
// }
// int main()
// {
//     string str = "{([{}])}";
//     isBalanced(str) ? cout << "String is balanced" << endl : cout << "String is unbalanced" << endl;
// }

// ????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    for (char ch : str)
    {
        switch (ch)
        {
        case '{':
            s.push(ch);
            break;
        case '[':
            s.push(ch);
            break;
        case '(':
            s.push(ch);
            break;
        case '}':
            if (s.top() == '{' and !s.empty())
            {
                s.pop();
            }
            else
            {
                return false;
            }
        case ')':
            if (s.top() == '(' and !s.empty())
            {
                s.pop();
            }
            else
            {
                return false;
            }
        case ']':
            if (s.top() == '[' and !s.empty())
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
        if (s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    string str = "[{()}]{}";
    isBalanced(str) ? cout << "String is Balanced!" << endl : cout << "String is Unbalanced!" << endl;
}