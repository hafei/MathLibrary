//
// Created by Sean on 2024/5/20.
//

#include "MathLibrary.h"

extern "C" {
    __declspec(dllexport) int add(int a, int b) {
        return a + b;
    }
}

