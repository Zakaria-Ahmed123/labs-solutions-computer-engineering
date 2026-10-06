// LIFO : Last in first out => stack 
// FIFO : First in first out => Queue  
#include <iostream>
#include <queue>
using namespace std; 
int main ()  { 
    queue<int> que;
    que.push(3);
    que.push(4);
    que.push(5);
    while (!que.empty()){ 
        cout<<que.front()<<" ";
        que.pop(); // it pops from the bottom (the front), the top is called the rear end   
    }
    // its size = qu.size , initialize with the size same as the stack v(size )
    return 0; 
}  