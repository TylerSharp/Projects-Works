// A inefficient implementation of a priority queue using an array.
// Written by Glen D. Granzow on November 18, 2016.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// This priority queue is designed to only contain non-negative values.
// The largest value is considered the highest priority.

class PriorityQueue
{
private:
  static int const CAPACITY = 100, MARKER = -1;
  int priority[CAPACITY];

public:
  PriorityQueue()
  {
    for (int index = 0; index < CAPACITY; index++)
    {
      priority[index] = MARKER;  // Available space is marked using the MARKER.
    }
  }
  
  bool insert(int value)
  {
    for (int index = 0; index < CAPACITY; index++)
    {
      if (priority[index] == MARKER)
      {
        priority[index] = value;
        return true;  // Successfully inserted the value in the priority queue.
      }
    }
    return false;     // Unable to insert because the priority queue is full.
  }
  
  int pull()
  {
    int index_of_max_so_far = 0;
    
    for (int index = 1; index < CAPACITY; index++)
    {
      if (priority[index] > priority[index_of_max_so_far])
      {
        index_of_max_so_far = index;
      }
    }
    
    int maximum_priority = priority[index_of_max_so_far];
    priority[index_of_max_so_far] = MARKER;
    return maximum_priority;
  }
  
  bool is_empty()
  {
    for (int index = 0; index < CAPACITY; index++)
    {
      if (priority[index] != MARKER)
      {
        return false;
      }
    }
    return true;    
  }
};

int main()
{
  srand(time(0));
  
  PriorityQueue priority_queue;
  
  cout << "Insert in the priority queue:";
  
  for (int i = 0; i < 10; i++)
  {
    int random_number = rand() % 10 + 1;
    priority_queue.insert(random_number);
    cout << ' ' << random_number;
  }
  
  cout << endl;
  cout << "Pulling from the priority queue:" << endl;

  while (not priority_queue.is_empty())
  {
    cout << ' ' << priority_queue.pull();
    string user_input;
    getline(cin, user_input);
  }

  cout << endl;  
  return 0;
}