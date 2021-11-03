Vector cross_product(Vector a, Vector b) {
    Vector c;
    get<0>(c) =  get<1>(a)*get<2>(b) - get<2>(a)*get<1>(b);
    get<1>(c) =  get<2>(a)*get<0>(b) - get<0>(a)*get<2>(b);
    get<2>(c) =  get<0>(a)*get<1>(b) - get<1>(a)*get<0>(b);
    return c;
    /*****************
    # YOUR CODE HERE #
    *****************/
}