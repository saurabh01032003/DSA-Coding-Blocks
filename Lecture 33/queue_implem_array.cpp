// #include <iostream>
// using namespace std;
// template <typename T>
// class queue
// {
// 	T* arr; // pointer to array that internally represents queue

// 	int f;  // to store the array index at which we have performed
// 	        // the last pop operation

// 	int r;  // to store the array index at which we have performed
// 	        // the last push operation

// 	int n;  // to store the maximum queue capacity

// 	int count; // to store the queue size

// public:
//     queue(int n)
//     {
//         arr = new T[n];
//         f = r = -1;
//         this->n = n;
//         count = 0;
//     }

//     void push(T data)
//     {
//         if (r == n - 1)
//         {
//             cout << "Overflow Condition" << endl;
//             return;
//         }
//         r = r + 1;
//         arr[r] = data;
//         count++;
//     }

//     void pop()
//     {
//         if (r == f)
//         {
//             cout << "Underflow Condition" << endl;
//             return;
//         }
//         f = f + 1;
//         count--;
//     }

//     int size()
//     {
//         return count; // or r-f
//     }

//     bool empty()
//     {
//         return r == f;
//     }

//     T front()
//     {
//         return arr[f + 1];
//     }
// };
// int main()
// {
//     queue<int> q(5);
//     cout << "Size of queue is : " << q.size() << endl;
//     cout << "Is queue empty() : " << q.empty() << endl << endl;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     cout << "Size of queue is : " << q.size() << endl;
//     cout << "Front of queue is : " << q.front() << endl;
//     cout << "Is queue empty() : " << q.empty() << endl << endl;

//     q.pop();
//     q.pop();
//     cout << "Size of queue is : " << q.size() << endl;
//     cout << "Front of queue is : " << q.front() << endl;
//     cout << "Is queue empty() : " << q.empty() << endl << endl;

//     q.push(20);
//     q.push(30);
//     // q.push(40);
//     // q.push(50);
//     cout << "Size of queue is : " << q.size() << endl;
//     cout << "Front of queue is : " << q.front() << endl;
//     cout << "Is queue empty() : " << q.empty() << endl << endl;
// }

// #################################################################################################################################
#include<iostream>

using namespace std;

template<typename T>
class queue {

	T* arr; // pointer to array that internally represents queue
	
	int f;  // to store the array index at which we have performed 
	        // the last pop operation
	
	int r;  // to store the array index at which we have performed 
	        // the last push operation
	
	int n;  // to store the maximum queue capacity
	
	int count; // to store the queue size
	
	public :

		queue(int n) {
			arr = new T[n];
			// f = -1;
			// r = -1;
			f = r = -1;
			count = 0;
			this->n = n;
		}

		void push(T val) {
			if(r == n-1) {
				// queue is full
				return;
			}
			r = r+1;
			arr[r] = val;
			count++;
		}

		void pop() {
			if(f == r) {
				//  queue is empty
				return;
			}
			f = f+1;
			count--;
		}

		T front() {
			return arr[f+1];
		}

		bool empty() {
			return f == r;
		}

		int size() {
			return count; // or r-f
		}

};

int main() {

	queue<int> q(5);

	cout << "size : " << q.size() << endl;
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	return 0;
}