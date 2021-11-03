template<class T>
map<T, double> fuzzy_set_union(const map<T, double> &a, const map<T, double> &b) {
    map<T, double> tmp = a;
    for (auto i : b) {
        tmp[i.first] = tmp[i.first] > i.second ? tmp[i.first]:i.second;
        auto i2 = tmp.find(i.first);
        if (i2 == tmp.end()) {
            tmp[i.first] = i.second;
        } else {
            double t = i2->second >  i.second? i2-> second : i.second;
            i2->second = t;
        }
    }
    return tmp;

}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double> &a, const map<T, double> &b) {
    map<T, double> tmp;
    for (auto i : a) {
        auto i2 = b.find(i.first);
        double k = i.second;
        if (i2 != b.end()) {
            tmp[i.first] = k >  i2->second ? i2 -> second : k;
        }
    }
    return tmp;

}