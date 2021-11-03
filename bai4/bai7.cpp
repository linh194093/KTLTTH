
template<class T>
set<T> set_union(const set<T> &a, const set<T> &b) {
    set<T> c;
    for (int i : a) c.insert(i);
    for (int i : b) c.insert(i);
    return c;
}

template<class T>
set<T> set_intersection(const set<T> &a, const set<T> &b) {
    set<T> c;
    set<T> d;
    int temp;
    for (int i : a) c.insert(i);
    for (int i : b){
        temp = c.size();
        c.insert(i);
        if (temp == (int)c.size()) d.insert(i);
    }

    return d;
}