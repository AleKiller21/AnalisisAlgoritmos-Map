#include "Test.h"
#include "Map.h"

void test()
{
    Map map;
    map.put("A",10);
    map.put("B",20);
    map.put("C",30);
    map.put("arroz",100);
    map.put("zorra",200);
    map.put("abc",1);
    map.put("acb",2);
    map.put("bac",3);

    if(map.get("A")==10
       && map.get("B")==20
       && map.get("C")==30
       && map.get("arroz")==100
       && map.get("zorra")==200
       && map.get("abc")==1
       && map.get("acb")==2
       && map.get("bac")==3
       )
   {
       cout<<"Pass"<<endl;
   }else
   {
       cout<<"Fail"<<endl;
   }

}
