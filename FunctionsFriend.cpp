class FunctionsFriend{
    public:
        FunctionsFriend(){
            regVar = 0;
        }
    private:
        int regVar;
        friend void friendFunc(FunctionsFriend &obj);
}
void friendFunc(FunctionsFriend &obj){
    obj.regVar = 10;
    cout << obj.regVar << endl;
}