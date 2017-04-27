#include "Map.h"

Map::Map()
{
  for(int i = 0; i < 9999999; i++)
  {
    array.push_back(new vector< pair<string, int>* >);
  }
}
int Map::hash(string str)
{
  int sum = 0;
  for(int i = 0; i < str.length(); i++)
  {
    sum += (i + 1);
    sum *= str[i];
    sum %= 10000;
  }

  return sum;
}
void Map::put(string key, int value)
{
  vector< pair<string, int>* >* v = array[hash(key)];
  (*v).push_back(new pair<string, int>(key, value));
}

int Map::get(string key)
{
  vector< pair<string, int>* >* v = array[hash(key)];
  for(int i = 0; i < v->size(); i++)
  {
    if()
  }
}
