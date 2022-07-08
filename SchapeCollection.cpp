#include <iostream>
#include <vector>

using namespace std;

class Shape {
    public:
        virtual void print() = 0;
};

class Circle : public Shape {

    public: void print(){
        cout<<"I am a circle"<<endl;
    }

};
class Rectangle : public Shape {

    public: void print(){
        cout<<"I am a rectangle"<<endl;
    }

};
class Squere : public Shape {

    public: void print(){
        cout<<"I am a squere"<<endl;
    }

};

class ShapeCollection {
    private: vector<Shape*> shapes;
    public: void add(Shape* s){
        shapes.push_back(s);
    }
    void print() {
        for (Shape* shape : shapes){
            shape->print();
        }
    }
};

int main (){
    ShapeCollection collection;
    
    collection.add(new Squere());
    collection.add(new Circle());
    collection.add(new Rectangle());
    collection.add(new Squere());
    
    collection.print();
}