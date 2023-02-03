#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

class doublylinkedlist {

    public:

        int value;
        doublylinkedlist * left;
        doublylinkedlist * right;
        


};

class doublylinkedlistcapsule {

    public:
        
        doublylinkedlist * doublylinkedlistpointer = new doublylinkedlist;

        doublylinkedlistcapsule(int size){
            
            
            int i = 0;
            while (i < size) {
                doublylinkedlistpointer->value = i;
                doublylinkedlistpointer->right = new doublylinkedlist;
                doublylinkedlistpointer->right->left = doublylinkedlistpointer;
                doublylinkedlistpointer = doublylinkedlistpointer->right;
                i+=1;
            }
            

        }
        int getValue(){
            return doublylinkedlistpointer->value;
        }
        void moveLeft() {
            doublylinkedlistpointer = doublylinkedlistpointer->left;

        }
        void moveRight() {
            doublylinkedlistpointer = doublylinkedlistpointer->left;

        }



};

#endif