double area(Point a, Point b, Point c) {
    double ha = sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
    double hb = sqrt((a.first-c.first)*(a.first-c.first) + (a.second-c.second)*(a.second-c.second));
    double hc = sqrt((c.first-b.first)*(c.first-b.first) + (c.second-b.second)*(c.second-b.second));
    double p = (ha + hb + hc)/2;
    return sqrt(p * (p - ha) * (p - hb) * (p -hc));
    /*****************
    # YOUR CODE HERE #
    *****************/
}

