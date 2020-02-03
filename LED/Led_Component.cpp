//
// Created by Michał Kopiel on 11/01/2020.
//

#include "Led_Component.h"

Led_Component::Led_Component() :
    actual_color{ RED },
    rgb_model{{255, 0, 0} },
    hsv_model{{359, 100, 100}},
    pins_values{5.0, 0.0 ,0.0}
{}

void Led_Component::setActualColor(const COLOR &&actualColor) {

    actual_color = actualColor;

    switch(actual_color){

        case RED : {

              rgb_model = std::vector<int> { {255, 0 , 0} };
              hsv_model = std::vector<int> { {359, 100, 100} };
            pins_values = std::vector<double> { {5.0, 0.0, 0.0} };
        } break;

        case GREEN : {

              rgb_model = std::vector<int> { {0, 255 , 0} };
              hsv_model = std::vector<int> { {120, 100, 100} };
            pins_values = std::vector<double> { {0.0, 5.0, 0.0} };
        } break;

        case BLUE : {

              rgb_model = std::vector<int> { {0, 0 , 255} };
              hsv_model = std::vector<int> { {240, 100, 100} };
            pins_values = std::vector<double> { {0.0, 0.0, 5.0} };
        } break;

        case MAGENTA : {

              rgb_model = std::vector<int> { {255, 0 , 255} };
              hsv_model = std::vector<int> { {300, 100, 100} };
            pins_values = std::vector<double> { {5.0, 0.0, 5.0} };
        } break;

        case YELLOW : {

              rgb_model = std::vector<int> { {255, 255 , 0} };
              hsv_model = std::vector<int> { {60, 100, 100} };
            pins_values = std::vector<double> { {5.0, 5.0, 0.0} };
        } break;

        case CYAN : {

              rgb_model = std::vector<int> { {0, 255 , 255} };
              hsv_model = std::vector<int> { {180, 100, 100} };
            pins_values = std::vector<double> { {0.0, 5.0, 5.0} };
        } break;

        case CHERRY : {

              rgb_model = std::vector<int> { {222, 49, 99} };
              hsv_model = std::vector<int> { {343, 78, 87} };
            pins_values = std::vector<double> { {4.35, 0.96, 1.90} };
        } break;

        case MINT : {

              rgb_model = std::vector<int> { {170, 240, 209} };
              hsv_model = std::vector<int> { {153, 29, 94} };
            pins_values = std::vector<double> { {3.33, 4.70, 4.09} };
        } break;

        case CORAL : {

            rgb_model = std::vector<int> { {255, 127, 80} };
            hsv_model = std::vector<int> { {16, 69, 100} };
            pins_values = std::vector<double> { {5.00, 2.49, 1.56} };
        } break;

        case KHAKI : {

            rgb_model = std::vector<int> { {189, 183, 107} };
            hsv_model = std::vector<int> { {56, 43, 74} };
            pins_values = std::vector<double> { {3.70, 3.58, 2.09} };
        } break;
    }
}

Led_Component::COLOR Led_Component::getActualColor() const {

    return actual_color;
}

const std::vector<int> & Led_Component::getRgbModel() const {

    return rgb_model;
}

const std::vector<int> & Led_Component::getHsvModel() const {

    return hsv_model;
}

const std::vector<double> & Led_Component::getPinsValues() const {

    return pins_values;
}
