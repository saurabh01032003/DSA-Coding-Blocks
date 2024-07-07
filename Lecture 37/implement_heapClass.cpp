// #include <iostream>
// #include <vector>
// using namespace std;
// class minHeap{
    
//     vector<int> v;
//     void heapify(int i)
//     {
//         // Find left and right Child of given node i.e i
//         int leftIdx = 2*i+1;
//         int rightIdx = 2*i+2;

//         int min_idx = i;//Assume minimum of root,rightChild and leftChild is i 
//         if(leftIdx < v.size()/*To avoid array out of bound*/ and v[leftIdx] < v[min_idx])
//         {
//             min_idx = leftIdx;
//         }

//         if(rightIdx < v.size() /*To avoid array out of bound*/ and v[rightIdx] < v[min_idx])
//         {
//             min_idx = rightIdx;
//         }
//         // Now we have index which has minimum value;
//         if(min_idx != i)//Agar min_idx root Node hai tb toh satisfy kr hi raha heap property
//         {
//             swap(v[i],v[min_idx]);
//             heapify(min_idx);//Smaller instance of same problem
//         }
//     }

//     public:

//     void push(int data)
//     {
//         v.push_back(data);
//         // Now it is possible that our minHeap property fails after insertion
//         int childIdx = v.size()-1;// Index of newly inserted element
//         // int parentIdx;
//         // if(childIdx % 2 == 0)
//         // {
//         //     parentIdx = childIdx/2-1;
//         // }else{
//         //     parentIdx = childIdx/2;
//         // }
//         int parentIdx = childIdx % 2 != 0 ? childIdx/2 : childIdx/2-1;
//         //Swap parent with child as long as heap property fails
//         while(parentIdx >= 0 /*To avoid array out of bound*/ and v[parentIdx] > v[childIdx])
//         {
//             swap(v[childIdx],v[parentIdx]);
//             childIdx = parentIdx;
//             parentIdx = childIdx % 2 != 0 ? childIdx/2 : childIdx/2-1;//Parent Index ko upar vejte jao
//         }
//     }

//     void pop(){
//         swap(v[0],v[v.size()-1]);//Swap minimum element with last element
//         v.pop_back();//minimum element will be deleted 
//         heapify(0);//Call heapify at 0 index

//     }

//     int top(){
//         return v[0];
//     }

//     int size()
//     {
//         return v.size();
//     }

//     bool empty()
//     {
//         return v.empty();
//     }


// };
// int main()
// {
//     minHeap m;
//     m.push(1);
//     m.push(3);
//     m.push(2);
//     m.push(7);
//     m.push(5);
//     m.push(4);
//     m.push(6);
//     m.push(8);
//     m.push(0);

//     cout << m.size() << endl;

//     while(!m.empty())
//     {
//         cout << m.top() << " ";
//         m.pop();
//     }
// }


// ###################################################################################################################################################################################################################################

// Max-Heap Class 
#include <iostream>
#include <vector>
using namespace std;
class minHeap{
    
    vector<int> v;
    void heapify(int i)
    {
        // Find left and right Child of given node i.e i
        int leftIdx = 2*i+1;
        int rightIdx = 2*i+2;

        int max_idx = i;//Assume maximum of root,rightChild and leftChild is i //***Change
        if(leftIdx < v.size()/*To avoid array out of bound*/ and v[leftIdx] > v[max_idx])//**Change
        {
            max_idx = leftIdx;
        }

        if(rightIdx < v.size() /*To avoid array out of bound*/ and v[rightIdx] > v[max_idx])//**Change
        {
            max_idx = rightIdx;
        }
        // Now we have index which has minimum value;
        if(max_idx != i)//Agar min_idx root Node hai tb toh satisfy kr hi raha heap property
        {
            swap(v[i],v[max_idx]);
            heapify(max_idx);//Smaller instance of same problem
        }
    }

    public:

    void push(int data)
    {
        v.push_back(data);
        // Now it is possible that our minHeap property fails after insertion
        int childIdx = v.size()-1;// Index of newly inserted element
        // int parentIdx;
        // if(childIdx % 2 == 0)
        // {
        //     parentIdx = childIdx/2-1;
        // }else{
        //     parentIdx = childIdx/2;
        // }
        int parentIdx = childIdx % 2 != 0 ? childIdx/2 : childIdx/2-1;
        //Swap parent with child as long as heap property fails
        while(parentIdx >= 0 /*To avoid array out of bound*/ and v[parentIdx] < v[childIdx]) //*Change
        {
            swap(v[childIdx],v[parentIdx]);
            childIdx = parentIdx;
            parentIdx = childIdx % 2 != 0 ? childIdx/2 : childIdx/2-1;//Parent Index ko upar vejte jao
        }
    }

    void pop(){
        swap(v[0],v[v.size()-1]);//Swap minimum element with last element
        v.pop_back();//minimum element will be deleted 
        heapify(0);//Call heapify at 0 index

    }

    int top(){
        return v[0];
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }


};
int main()
{
    minHeap m;
    m.push(1);
    m.push(3);
    m.push(2);
    m.push(7);
    m.push(5);
    m.push(4);
    m.push(6);
    m.push(8);
    m.push(0);

    cout << m.size() << endl;

    while(!m.empty())
    {
        cout << m.top() << " ";
        m.pop();
    }
}