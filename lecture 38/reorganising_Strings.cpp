// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     string str = "aaaaabbbbccc";
//     int freq[26] = {0};
//     for (int i = 0; i < str.size(); i++)
//     {
//         freq[str[i] - 'a']++;
//     }

//     // for (int i = 0; i < 26; i++)
//     // {
//     //     cout << freq[i] << " ";
//     // }

//     priority_queue<pair<int, char>> maxHeap; // Pair me first element wahi hoga jiske according aap max heap ki property chahte ho i.e frequency ke acoording so write <int(first->its freq),char(afterward)>
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > 0)
//         {
//             maxHeap.push({freq[i], i + 'a'});
//         }
//     }

//     string output = "";
//     while (!maxHeap.empty())
//     {
//         if (maxHeap.size() == 1)
//         {
//             pair<int, char> topRemaining = maxHeap.top();
//             maxHeap.pop();
//             int freqOfRemainig = topRemaining.first;
//             if (freqOfRemainig > 1)
//             {
//                 output = "";
//             }
//             else
//             {
//                 output += topRemaining.second;
//             }
//         }
//         else
//         {
//             pair<int, char> pFirstMax = maxHeap.top();
//             maxHeap.pop();
//             pair<int, char> pSecondMax = maxHeap.top();
//             maxHeap.pop();

//             output += pFirstMax.second;
//             output += pSecondMax.second;

//             pFirstMax.first--;
//             if (pFirstMax.first > 0)
//             {
//                 maxHeap.push(pFirstMax);
//             }

//             pSecondMax.first--;
//             if (pSecondMax.first > 0)
//             {
//                 maxHeap.push(pSecondMax);
//             }
//         }
//     }
//     cout << endl;
//     cout << "Output is : " << output << endl;
// }

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string str = "aaaabbbcc";
    int freq[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;

    priority_queue<pair<int, char>> maxHeap;
    string output = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            maxHeap.push({freq[i], i + 'a'});
        }
    }
    while (!maxHeap.empty())
    {
        if (maxHeap.size() == 1)
        {
            pair<int,char> remaining = maxHeap.top();
            maxHeap.pop();
            if(remaining.first > 1)
            {
                output = " ";
            }else{
                output += remaining.second;
            }
        }
        else
        {
            pair<int, char> firstMax = maxHeap.top();
            maxHeap.pop();
            pair<int, char> secondMax = maxHeap.top();
            maxHeap.pop();

            output += firstMax.second;
            output += secondMax.second;

            firstMax.first--;
            if (firstMax.first > 0)
            {
                maxHeap.push(firstMax);
            }

            secondMax.first--;
            if (secondMax.first > 0)
            {
                maxHeap.push(secondMax);
            }
        }
    }
    cout << "Output String is : " << output << endl;
}