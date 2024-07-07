#include <iostream>
using namespace std;
class node
{
public:
    int K;
    int V;
    node *next;

    node(int K, int V)
    {
        this->K = K;
        this->V = V;
        this->next = NULL;
    }
};
class HashMap
{
    int N;    // To store the hash table Capacity(Size of arr)
    int M;    // To store hash table size(no of key value pairs till now i.e intitially 0)
    double L; // To store the load factor threshold

    node **T; // To store address of array of node* that represents hashtable

    int hashFunction(int K)
    {
        // Transform K into hash index
        return K % N;
    }

    void transfer(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            insert(temp->K, temp->V);
            temp = temp->next;
        }

        // 2.relese the memory allocated for linkedList represented by head pointer
        while (head != NULL)
        {
            temp = head->next;
            delete temp;
            head = head->next;
        }
    }

    void rehash()
    {
        // 1.save pointer to the current HashMap and its capacity(N)
        node **oldT = T;
        int oldN = N;

        // 2. Create a hashMap with double capacity
        N = 2 * N;
        T = new node *[N];
        for(int i = 0;i < N;i++)
        {
            T[i] = NULL; 
        }
        M = 0; // Abhi humne naye array me kuch bhi insert nahi kiya hai

        // 3.transfer (K,V) pairs from old hashMap to updated hashmap
        for (int i = 0; i < oldN; i++)
        {
            transfer(oldT[i]); // sare index pe jo linkedList hai uska head node hai(oldT[i] me)
        }

        // 4.relese the memory allocated to the old hashMap
        delete [] oldT;
    }

public:
    HashMap(int N = 5, double L = 0.7)
    {
        this->N = N;
        this->M = 0; // Initially 0 key-value pairs
        this->L = L;

        T = new node *[N];
        for (int i = 0; i < N; i++)
        {
            T[i] = NULL;
        }
    }

    void insert(int K, int V)
    {
        // 1. Transform the key into hash Index
        int hashIdx = hashFunction(K);

        // 2. Create a node with given key-value pairs and insert it at head of LinkedList
        //  and update the head node as newly created node
        node *n = new node(K, V);
        n->next = T[hashIdx];
        T[hashIdx] = n;
        M++; // as we have successfully inserted one key-value pair

        // 3.rehash,if load factor exceeds the load factor threshold
        double loadFactor = M * 1.0 / N;
        if (loadFactor > L)
        {
            // Rehash ->double the capacity of arr
            cout << "rehashing..." << endl;
            rehash();
        }
    }

    node *find(int K)
    {
        // 1.transform the key into hashIndex using hash-Function
        int hashIdx = hashFunction(K);

        // 2.Search for the node with the given key in the linedList stored at hash-Index
        node *temp = T[hashIdx];
        while (temp != NULL)
        {
            if (temp->K == K)
            {
                // You've found the key
                return temp;
            }
            temp = temp->next;
        }
        return NULL; // Key Not found
    }

    void erase(int K)
    {
        // 1.transform the key into hash Index using hash function
        int hashIdx = hashFunction(K);

        // 2. delete the node with given key from linkedList stored at hashIndex
        node *curr = T[hashIdx];

        if (curr != NULL and curr->K == K)
        {
            // We have found the key at head node of list present at hash index of array
            T[hashIdx] = curr->next;
            delete curr;
            M--; // As we have deleted 1 (Key-Value pairs)
        }
        else
        {
            node *prev = NULL;
            while (curr != NULL)
            {
                if (curr->K == K)
                {
                    prev->next = curr->next;
                    delete curr;
                    M--;
                    break;
                }
                prev = curr;
                curr = curr->next;
            }
        }
    }

    void printList(node *head)
    {
        while (head != NULL)
        {
            cout << "(" << head->K << "," << head->V << ")";
            head = head->next;
        }
        cout << endl;
    }

    void printHashMap()
    {
        for (int i = 0; i < N; i++)
        {
            // Print the linked List at ith index of hashMap
            cout << i << " : ";
            printList(T[i]);
        }
        cout << endl;
    }
};
int main()
{
    HashMap hashMap;
    hashMap.insert(0, 0);
    hashMap.insert(2, 4);
    hashMap.insert(7, 49);

    hashMap.printHashMap();

    hashMap.insert(8, 64);

    hashMap.printHashMap();

    // hashMap.insert(6, 36);
    // hashMap.insert(12,144);
    // hashMap.insert(9,81);

    // hashMap.printHashMap();

    int K = 7;
    node *temp = hashMap.find(K);
    temp != NULL ? cout << temp->V << endl : cout << K << " not found" << endl;
    // if (temp != NULL)
    // {
    //     cout << temp->V << endl;
    // }
    // else
    // {
    //     cout << "Key not found!" << endl;
    // }

    if (temp != NULL)
    {
        hashMap.erase(K);
        hashMap.printHashMap(); // Key delete hone ke baad ka hashMap
    }

    temp = hashMap.find(K);
    temp != NULL ? cout << temp->V << endl : cout << K << " not found" << endl;
}