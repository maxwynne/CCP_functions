vector<int> vec; // vec = global

struct Record {
    string name; // name = member (a string member)
    // ...
};

void fct(int arg) // fct = global function, arg = local integer argument

{
    string motto {"Who dares wins"}; // motto = local
    auto p = new Record{"Hume"}; // p points to unnamed Record (created by new)
    // ...
}
