//
// Created by Michał Kopiel on 11/01/2020.
//

#ifndef PROJECT_NAME_LED_COMPONENT_H
#define PROJECT_NAME_LED_COMPONENT_H
#include <vector>

class Led_Component {

public:
    enum COLOR {
        RED, GREEN, BLUE,
        MAGENTA, YELLOW, CYAN,
        CHERRY, MINT, CORAL,
        KHAKI};

private:
    COLOR actual_color;

    std::vector<int> rgb_model;
    std::vector<int> hsv_model;
    std::vector<double> pins_values;
public:

    void setActualColor(const COLOR &&actualColor);

    COLOR getActualColor() const;

    const std::vector<int> & getRgbModel() const;

    const std::vector<int> & getHsvModel() const;

    const std::vector<double> & getPinsValues() const;

public:
    Led_Component();
    Led_Component(Led_Component && oryginal) = default;
    Led_Component & operator=(Led_Component && oryginal) = default;
};


#endif //PROJECT_NAME_LED_COMPONENT_H
