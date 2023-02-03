#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class linkedlist {

    public:

        int value;
        linkedlist * next;
        


};

class linkedlistcapsule {

    public:

        linkedlist * linkedlisthead = new linkedlist;
        linkedlist * linkedlistpointer = linkedlisthead;

        linkedlistcapsule(int size){
            
            
            int i = 0;
            while (i < size) {
                linkedlistpointer->value = i;
                linkedlistpointer->next = new linkedlist;
                linkedlistpointer = linkedlistpointer->next;
                i+=1;
            }
            
            linkedlistpointer = linkedlisthead;
            

        }
        int getValue(){
            return int(linkedlistpointer->value);
        }
        void movetoNext() {
            linkedlistpointer = linkedlistpointer->next;

        }
        void moveToHead() {
            linkedlistpointer = linkedlisthead;
        }



};

#endif