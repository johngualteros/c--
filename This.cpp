class This{
    public:
        This(int a) : var(a)
        {}
        void print(){
            cout << var << endl;
            cout << this->var << ""endl;
            cout << (*this).var << endl;
        }
    private:
        int var;
}