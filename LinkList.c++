#include<iostream>
using namespace std;

struct Hero{
    public:
        Hero(int rank, string name, string nickname){
            m_Rank = rank;
            m_Name = name;
            m_NickName = nickname;
            next = NULL;
        }
    public:
        int m_Rank;
        string m_Name;
        string m_NickName;
        Hero *next;
};

class HeroList{
    public:
        HeroList(){
            head = NULL;
        }
        void insertNode(Hero *newHero){
            if(head==NULL){
                head = newHero;
            }
            else{
                if(newHero->m_Rank < head->m_Rank){
                    newHero->next = head;
                    head = newHero;
                }
                else if(newHero->m_Rank == head->m_Rank){
                    cout << "The hero had already existed in the list!" << endl;
                }
                else{
                    Hero *first = head, *last = head->next;
                    while((last!=NULL) && (newHero->m_Rank > last->m_Rank)){
                        first = last;
                        last = last->next;
                    }
                    first->next = newHero;
                    newHero->next = last;
                }
            }
        }
        void deleteNode(string name){
            if(head==NULL){
                cout << "The hero list is empty!" << endl;
                return;
            }
            if(head->m_Name==name){
                head = head->next;
                return;
            }
            Hero *first = head, *last = head->next;
            while(last!=NULL){
                if(last->m_Name==name){
                    first->next = last->next;
                    return;
                }
                else{
                    first = last;
                    last = last->next;
                }
            }
        }
        void findNode(string name){
            Hero *hero = head;
            while(hero!=NULL){
                if(hero->m_Name==name){
                    cout << hero->m_Rank << "   " << hero->m_Name << "   " << hero->m_NickName << endl;
                    return;
                }
                hero = hero->next;
            }
        }
        void reviseNode(string name, string new_name){
            Hero *hero = head;
            while(hero!=NULL){
                if(hero->m_Name==name){
                    hero->m_Name = new_name;
                    cout << hero->m_Rank << "   " << hero->m_Name << "   " << hero->m_NickName << endl;
                    return;
                }
                hero = hero->next;
            }
        }
        void printHeros(){
            cout << "------------ Printing heros ------------" << endl;
            Hero* node = head;
            while(node != NULL){
                cout << node->m_Rank << "   " << node->m_Name << "   " << node->m_NickName << endl;
                node = node->next;
            }
        }
    public:
        Hero *head;
};

int main(){
    HeroList HL;

    int rank;
    string name;
    string nickname;
    cout << "Adding hero:" << endl;
    for(int i=0; i<4; ++i){
        cin >> rank >> name >> nickname;
        Hero *newHero = new Hero(rank, name, nickname);
        HL.insertNode(newHero);
    }
    HL.printHeros();

    cout << "Deleting hero:" << endl;
    cin >> name;
    HL.deleteNode(name);
    HL.printHeros();

    cout << "Finding hero" << endl;
    cin >> name;
    HL.findNode(name);

    cout << "Revising hero: old name -> new name" << endl;
    string new_name;
    cin >> name >> new_name;
    HL.reviseNode(name, new_name);  

    return 0;
}

/*
5 Guansheng Ruyunlong
6 Linchong Baozitou
13 Luzhishen Huaheshang
10 Chaijin Xiaoxuanfeng
*/