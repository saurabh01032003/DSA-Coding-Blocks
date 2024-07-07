#include<iostream> 
using namespace std;
template <typename T>
class node {
public:

	T val;
	node<T>* next;

	node(T val) {
		this->val = val;
		this->next = NULL;
	}

};

template <typename T>
class forward_list {

	node<T>* head;
	int  count;

	public : 

		forward_list() {
			head = NULL;
			count = 0;
		}

		void push_front(T val) {
			node<T>* n = new node<T>(val);
			n->next = head;
			head = n;

			count++;
		}

		void pop_front() {
			if(head == NULL) {
				// LL is empty
				return;
			}

			node<T>* temp = head->next;
			delete head;
			head = temp;

			count--;
		}

		int size() {
			return count;
		}

		bool empty() {
			return head == NULL; // or count == 0
		}

		T front() {
			return head->val;
		}

		void traverse() {
			node<T>* temp = head;
			while(temp != NULL) {
				cout << temp->val << " ";
				temp = temp->next;
			}
			cout << endl;
		}

};

int main() {

	forward_list<string> fw;

	fw.push_front("DadaJi");
	fw.push_front("Papa");
	fw.push_front("Sakshi");
	fw.push_front("Sushant");
	fw.push_front("Saurabh");

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();
	fw.pop_front();

	fw.empty() ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}