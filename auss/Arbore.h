class Arbore
{
    private:
        struct node
        {
            int val;
            node* st;
            node* dr;
        };

        node* radacina;

        void AdaugareFrunzeP(int val, node* Ptr);
        void PrintInOrdineP(node* Ptr);
        node* ReturnareNodP(int val,node* Ptr);
    public:
        Arbore();
        node* CreeareFrunza(int val);///functie de creeare de frunze
        void AdaugareFrunze(int val);///functie de adaugare de frunze
        void PrintInOrdine();
        node* ReturnareNod(int val);
        int ReturnareValRadacina();
        void PrintFiii(int val);

};
