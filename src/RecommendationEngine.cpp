#include<iostream>
#include<string>
#include<RecommendationEngine.h>
#include<vector>
using namespace std ;

Products* recommendation(vector<Products*> All, vector<Products*> cart) {
    Products* best = nullptr;
    float bestScore = 0;

    for (auto* pro : All) {
        bool inCart = false;
        for (auto* c : cart) {
            if (c->getId() == pro->getId()) {
                inCart = true;
                break;
            }
        }
        if (inCart) continue; 
        float score = pro->similarityScore(cart);
        if (score > bestScore) {
            best = pro;
            bestScore = score;
        }
    }
    return best;
}

