#include <iostream>
#include <vector>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"

int main() {
    std::vector<Transformer*> transformers;
    
    transformers.push_back(new Autobot("Bumblebee"));
    transformers.push_back(new Autobot("Hot Rod"));
    transformers.push_back(new Autobot("Ironhide"));

    transformers.push_back(new Decepticon("Starscream"));
    transformers.push_back(new Decepticon("Soundwave"));
    transformers.push_back(new Decepticon("Shockwave"));

    transformers.push_back(new Transformer("Generic Transformer 1"));
    transformers.push_back(new Transformer("Generic Transformer 2"));
    transformers.push_back(new Transformer("Generic Transformer 3"));

    for (auto transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ultra();
    }

    for (auto transformer : transformers) {
        delete transformer;
    }

    return 0;
}
