#include <bits/stdc++.h>

using namespace std;

#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define Pair pair < int, int >
#define ll long long
#define ull unsigned long long
#define Mod  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void explainPair() {
    //pair is treated as a data type
    // took in the utility library
    pair < int, int > p = {1, 3};
    cout<< p.first << " " << p.second << "\n";

    pair<int, pair<int,int>> p1 ={1,{3,4}};
    cout<< p1.first << " " << p1.second.first << " " << p1.second.second << "\n";

    pair<int,int> arr[] ={{},{},{}};

    cout<<arr[1].second<<" ";

}

void explainVector(){
    //arrays are constant in size , not dynamic
    //vector are dynamic arrays
    // declared as vector < data_type > name;
    //emplace_back() is faster than push_back()
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    //emplace_back() automatically takes care of the data type

    vector<int> v1(5,100); // this directly creates a vector of size 5 and all the elements are 100
    vector<int> v2(5); // this creates a vector of size 5 and all the elements are 0
    vector<int> v3(v1); // this creates a vector v3 and copies all the elements of v1 into v3
    vector<int> v4(v1.begin(),v1.end()); // this creates a vector v4 and copies all the elements of v1 into v4

    // how to access the elements of a vector

    vector<int>::iterator it = v1.begin(); // this is a pointer to the first element of the vector {1,2,3,4,5,x} , at 1's address
    it++; // this points to the second element of the vector
    cout<<*(it)<<" "; // this prints the second element of the vector

    //example v1 = {1,2,3,4,5}
    vector<int>::iterator it1 = v1.end(); // iterator points to the address after 5's address {1,2,3,4,5,x}
    //vector<int>::iterator it2 = v1.rend; //  iterator points one address before 1's address {x,0,1,2,3,4,5} but iterates in reserve order
    //vector<int>::iterator it3 = v1.rbegin(); // iterator points to 5's address {0,1,2,3,4,5} but iterates in reserve order

    cout << v1[0] << " " << v1.at(0) << " " << v1.front() << " " ; // all these print first element 
    cout << v1.back() << "\n"; // prints last element

    //IMPORTANT Summary: v.end() and v.begin() points to the address[iterator]


    // how to print the entire vector
    for (vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    //another way to print the entire vector
    for (auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //IMPORTANT auto is a keyword that automatically detects the data type of the variable

    //another way to print the entire vector
    for (int x:v){
        cout<<x<<" ";
    }
    //another way to print the entire vector(MOST PREFERRED)
    for (auto x:v){
        cout<<x<<" ";
    }

    //ERAISING elements in a vector
    // {10,20,12,23,25}
    v.erase(v.begin()+2); // this erases the element at index 2 {10,20,23}
    v.erase(v.begin()+2,v.begin()+4); // this erases the elements from index 2 to index 3 {10,20,25}

    //INSERTING elements in a vector

    vector<int> v5(2,100); // {100,100}
    v5.insert(v5.begin(),300); // {300,100,100}
    v5.insert(v5.begin()+1,2,10); // {300,10,10,100,100} (place_start, number of times, element)

    //vector<int> copy(2,50); // {50,50}
    //v5.insert(v5.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100} (place_start, copy_start, copy_end)

    //SIZE
    cout<<v5.size()<<" ";// 7

    //Remove last element
    v5.pop_back(); // {50,50,300,10,10,100}

    //Swap
    vector<int> v6 = {1,2,3};
    vector<int> v7 = {4,5,6};
    v6.swap(v7); // v6 = {4,5,6} , v7 = {1,2,3}

    //Clear
    v7.clear(); // v7 = {}

    //To check if the vector is empty
    cout<<v7.empty(); // 1
    cout<<v6.empty(); // 0


}

void explainList() {
    //similar to vector but has some extra functions
    //declared as list < data_type > name;
    list<int> ls;
    ls.push_back(1);// {1}
    ls.emplace_back(2); // {1,2}
    ls.emplace_front(3); // {3,1,2}
    ls.push_front(4);// {4,3,1,2}
    //all other same as vector
}

void explainDeque(){
    //similar to vector
    //declared as deque < data_type > name;
    deque<int> dq;
    dq.push_back(1);// {1}
    dq.emplace_back(2); // {1,2}
    dq.emplace_front(3); // {3,1,2}
    dq.push_front(4);// {4,3,1,2}

    //deque has pop_front()
    dq.pop_back(); // {4,3,1}
    dq.pop_front(); // {3,1}

    dq.front(); // 3
    dq.back(); // 1

}

void explainStack(){
    //Stack is Last in First Out (LIFO) type data structure , similar to a stack of plates or books
    //declared as stack < data_type > name;
    //PUSH/EMPLACE , POP , TOP //EMPTY,SIZE,SWAP
    stack<int> st;
    //there is not concept of indeces in stack
    st.push(1); // {1}
    st.push(2); // {1,2}
    st.push(3); // {1,2,3}
    st.push(4); // {1,2,3,4}
    st.emplace(5); // {1,2,3,4,5}

    cout<< st.top(); // 5
    st.pop(); // {1,2,3,4}
    cout<< st.top(); // 4
    cout<< st.size(); // 4
    cout<< st.empty(); // 0

    stack<int> st1,st2;
    st1.swap(st2);

}

void explainQueue(){
    //First in First Out (FIFO) type data structure , similar to a queue of people
    //declared as queue < data_type > name;
    //PUSH/EMPLACE , POP , FRONT, BACK //EMPTY,SIZE,SWAP
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(3); // {1,2,3}

    q.back()+=5;
    cout<<q.back(); //prints 8
    cout<<q.front(); //prints 1
    q.pop(); // {2,8}
    cout<<q.front(); //prints 2
}

//PUSH=O(logn) , POP=O(logn) , TOP=O(1)

void explainPQ(){
    //MAX SORTED + NOT UNIQUE
    //Priority Queue is a data structure in which the elements are stored in a particular order(DEFAULT=MAX HEAP(Max stuff at top) or descending order)
    //declared as priority_queue < data_type > name;
    //PUSH/EMPLACE , POP , TOP //EMPTY,SIZE,SWAP
    priority_queue<int> pq;
    pq.push(1); // {1}
    pq.push(2); // {2,1}
    pq.emplace(3); // {3,2,1}

    cout<<pq.top(); //prints 3
    pq.pop(); // {2,1}
    cout<<pq.top(); //prints 2

    //IMPORTANT: By default the priority queue is a max heap
    //To make it a min heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(1); // {1}
    pq1.push(2); // {1,2}
    pq1.emplace(3); // {1,2,3}

    cout<<pq1.top(); //prints 1
    pq1.pop(); // {2,3}
    cout<<pq1.top(); //prints 2

}


void explainSet(){
    //MIN SORTED + UNIQUE
    //Set is a data structure in which the elements are stored in a particular order(DEFAULT=MIN HEAP or ASCENDING ORDER) AND UNIQUE
    //declared as set < data_type > name;
    //INSERT , ERASE , FIND, COUNT(ALL THESE FUNCTIONS HAVE O(logn)) // EMPTY , SIZE , SWAP
    set<int> s;
    s.insert(1); // {1}
    s.insert(2); // {1,2}
    s.emplace(3); // {1,2,3}
    s.insert(3); // {1,2,3} // no duplicates

    //IMPORTANT: By default the set is a ascending order
    //To make it a descending order
    set<int,greater<int>> s1;
    s1.insert(1); // {1}
    s1.insert(2); // {2,1}
    s1.insert(3); // {3,2,1}
    s1.insert(3); // {3,2,1} // no duplicates

    auto it = s.find(2); // returns an iterator to the element 2
    s.erase(1); // {2,3}   // ERASE=O(logn)
    int cnt=s.count(2); // 1
    s.erase(it); // {3} // ERASE=O(1)

    //{1,2,3,4,5}
    auto it1 = s.find(2); // {1,2,3,4,5} // it1 points to 2
    auto it2 = s.find(4); // {1,2,3,4,5} // it2 points to 4
    s.erase(it1,it2); // {1,4,5} // ERASE=O(n)


    //HERE STL SET IS USED AS A BALANCED BINARY SEARCH TREE
    //they return an iterator to the element
    //LOWER BOUND RETURNS A POINTER POINTING TO THE ELEMENT IF IT OCCURS, IT NOT THEN IT POINTS TO THE NEXT GREATER ELEMENT, IF NO GREATER ELEMENT THEN IT POINTS TO THE END{1,4,5,6,9,9,x}
    auto it3 =s.lower_bound(4); // {1,4,5,6,9,9} // it3 points to 4
    auto it4 =s.lower_bound(7); // {1,4,5,6,9,9} // it4 points to 9
    auto it5 =s.lower_bound(10); // {1,4,5,6,9,9} // it5 points to x

    //UPPER BOUND RETURNS A POINTER POINTING TO THE NEXT GREATER ELEMENT, IF NO GREATER ELEMENT THEN IT POINTS TO THE END{1,4,5,6,9,9,x}
    auto it6 =s.upper_bound(0); // {1,4,5,6,9,9} // it6 points to 1
    auto it7 =s.upper_bound(4); // {1,4,5,6,9,9} // it7 points to 5
    auto it8 =s.upper_bound(9); // {1,4,5,6,9,9} // it8 points to x

}

void explainMultiSet(){
    //MIN SORTED + NOT UNIQUE
    //MultiSet is a data structure in which the elements are stored in a particular order(DEFAULT=MIN HEAP or ASCENDING ORDER) AND NOT UNIQUE
    //declared as multiset < data_type > name;
    //INSERT , ERASE , FIND, COUNT // EMPTY , SIZE , SWAP

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(2); // {1,2}
    ms.insert(1); //  {1,1,2}

    ms.erase(1); // {2}
    ms.insert(1); // {1,2}
    ms.insert(1); // {1,1,2}
    //as find() returns an iterator to the element , so we can use it to erase a single element
    ms.erase(ms.find(2)); // {1,1}
    ms.erase(ms.find(1),ms.find(1)++); // {} //

}

void explainUSet(){ 
    unordered_set<int> us;
    //MOST OPERATIONS HAVE O(1) TIME COMPLEXITY
    // UNIQUE, UNSORTED
    //declared as unordered_set < data_type > name;
    //all functions work but lower_bound and upper_bound doesnot work
}
void explainMap(){
    //SORTED KEYS+UNIQUE KEYS

    //declared as map < data_type1, data_type2 > name;
    map <int,int> mpp;
    map < pair<int,int>,int> mpp2;
    map <int,pair<int,int>> mpp3;

    mpp[1]=2; // {1:2}
    mpp.emplace(3,1); // {1:2,3:1}
    mpp.insert({2,4}); // {1:2,2:4,3:1}


    //for accessing a map
    for (auto it:mpp){
        cout<<it.first<<" "<<it.second<<"\n";
    }

    auto it = mpp.find(2); // returns an iterator to the Key(element) 2
    cout<<it->second; // prints 4
    cout<<it->first; // prints 2

    //lower and upper bound functions also work


}

void explainMultimap(){
    //TIME COMPLEXITY O(logn)
    //DUPLICATE KEYS + SORTED KEYS
    //mpp[key] cant be used here
}

void explainUMap(){
    //TIME COMPLEXITY O(1)
    //UNSORTED KEYS + UNIQUE KEYS
    //all functions work but lower_bound and upper_bound doesnot work
}
bool compare(pair<int,int> a,pair<int,int> b){
        if(a.second>b.second) return false;
        if (a.second < b.second) return true;

        if(a.first>b.first) return true;
        else return false;

    };
void explainMisc(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    vector <int> v = {1,2,3,4,5};
    sort(v.begin(),v.end()); // sorts the vector in ascending order
    sort(a,a+n); // sorts the array in ascending order 
    sort (a, a+2); // sorts the first two elements of the array in ascending order

    //Using comparator function
    sort (a, a+n, greater<int>()); // sorts the array in descending order // greater<int>() is a in-built comparator function

    //HOW TO USE CUSTOM COMPARATOR FUNCTION

    pair<int, int>  p[] ={{1,2},{2,1},{4,1}};
    // sort ir according to second element
    // if second element is samme , then sort 
    // it according to first element but in descending order
    sort(p,p+3,compare);

    int  num=7;
    int ct = __builtin_popcount(num);

    long long num2=165786578687;
    int ct2 = __builtin_popcountll(num2);

    string s ="123";
    do {
        cout<<s<<endl;

    }while (next_permutation(s.begin(),s.end()));

    auto maxi = max_element(a,a+n); // returns the iterator to the maximum element in the array
    int max=*maxi; // returns the maximum element in the array
    auto mini = min_element(a,a+n); // returns the iterator to the minimum element in the array
    int min=*mini; // returns the minimum element in the array  

}
void Solve(){
    //explainPair();
    //explainVector();
    //explainList();
    //explainDeque();
    //explainStack();
    //explainQueue();
    //explainPQ();
    //explainSet();
    //explainMultiSet();
    //explainUSet();
    //explainMap();
    //explainMultimap();
    //explainUMap();
    explainMisc();

}

int main(){
    Fast_IO();
    int t = 1;
    //cin >> t;
    while(t--)
        Solve();
    return 0;
}