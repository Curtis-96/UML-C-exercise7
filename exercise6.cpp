#include <iostream>
#include <vector>
using namespace std;

class Point
{
double x;
  double y;
  double z;
  double Point[4];
    

public:
    int demension;
    
    class Point(int d)
    {
        x=0;
        y=0;
        z=0;
    }
    Point(int d, double array[])
    {
        double *p=new double(array[5]);
        
        int i;
        
        
        if(d==3)
        {
            for( i>0; i!=0; i++)
            {
                array[i]=0;
            }
        }
    }


 Point(const Point &arg)
  {
      Point* ptr;
      ptr=new point;
      *ptr=arg.Point;
  };

~Point(void)
{
  delete array[5];
};
    
class Point operator+(class Point obj)
{
  obj.x=this->x+obj.x;
  obj.y=this->y+obj.y;
  obj.z=this->z+obj.z;
};

class Point operator +=(class Point obj)
{
  obj.x=obj.x+1;
  obj.y=obj.y+1;
  obj.z=obj.z+1;
};

double operator[](int i)
{
    if(i<demension)
    {
        throw invalid_argument("invalid argument");
    }
  return Point[i];
};
                               
};
