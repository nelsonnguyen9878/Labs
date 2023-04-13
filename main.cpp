#include <iostream>
using namespace std;

// struct
struct cake {

    string flavor;
    int layer_count;
    double layer_height;

};

cake BuildCake(string flavor_choice, int layers, double height_per_layer) {
    //TO-DO: create a local cake struct and set values using the input parameters
    cake build_cake;

    build_cake.flavor = flavor_choice;
    build_cake.layer_count = layers;
    build_cake.layer_height = height_per_layer;

    return build_cake;
}



int main() {

    cake Nelsons_Cake;

    //TO-DO: set values of struct members
    string flavor_choice;
    int layers;
    double height_per_layer;

    // getting user values
    cin >> flavor_choice >> layers >> height_per_layer;

    // setting struct by using the function
    Nelsons_Cake = BuildCake(flavor_choice, layers, height_per_layer);

    //FIX-ME: complete the output using appropriate struct members

    cout << "The flavor of your cake is: " << Nelsons_Cake.flavor << endl;
    cout << "Your cake has " << Nelsons_Cake.layer_count << " layers"  << endl;
    cout << "The height of each layer in your cake is: " << Nelsons_Cake.layer_height << endl;

    return 0;
}