#include<iostream>
using namespace std;

#define PI 3.14

struct Point{
    public:
        Point(){}
        Point(int x, int y){
            m_x = x;
            m_y = y;
        }
    private:
        int m_x;
        int m_y;
};

class Circle{
    public:
        Circle(Point p, int radiux){
            m_p = p;
            m_radiux = radiux;
        }
        double circum(){
            return (2*PI*m_radiux);
        }
        double surface(){
            return (PI*m_radiux*m_radiux);
        }
    private:
        Point m_p;
        int m_radiux;
};

int main(){    
    Point p(0, 0);
    int radiux = 3;
    Circle circle(p, radiux);
    cout << "Circum: " << circle.circum() << endl;
    cout << "Surface: " << circle.surface() << endl;

    return 0;
}