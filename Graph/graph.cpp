#include <bits/stdc++.h>
using namespace std;
void BFS(int startingNode, vector<int> aj[], int size)
{

    vector<bool> visited(size, false);
    queue<int> q;

    visited[startingNode] = true;
    q.push(startingNode);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        // 0 1 nikala show krdia fr 1 k baju ko visit mark krny ka
        // 0 1 2 3 4 5 6
        cout << node << " ";
        for (int nei : aj[node])
        {
            if (!visited[nei])
            {
                visited[nei] = true;
                // 0 k baju mei 1 hogya push , 2 gya push
                // q = 1, 2 , 3 , 4 , 5 , 6
                // visited true(1,2)
                q.push(visited[nei]);
            }
        }
    }
}
// q :   3 7
// v : 15 20 17 10 25 3 7 
// baju: 20 
// printed 15 20 17 10 25 5 3 7

//          10
    //     /  \
    //   5     20
    //  / \    / \
    // 3   7  15  25
    //        \
    //        17

int main()
{
    int size = 10;
    vector<int> adjList[10];
    // Add edges (undirected)
    // // 0
    //    / \
    //   1   2
    //  /   / \
    // 3   4   5
    //        /
    //       6

    adjList[0].push_back(1);
    adjList[1].push_back(0);

    adjList[0].push_back(2);
    adjList[2].push_back(0);

    adjList[1].push_back(3);
    adjList[3].push_back(1);

    adjList[2].push_back(4);
    adjList[4].push_back(2);

    adjList[2].push_back(5);
    adjList[5].push_back(2);

    adjList[5].push_back(6);
    adjList[6].push_back(5);
    BFS(0,adjList,size);
    return 0;
}