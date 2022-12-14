//
// Created by Admin on 26.10.2022.
//

#ifndef UNIVERSITY_VECTOR_FACTORY_PROVIDER_H
#define UNIVERSITY_VECTOR_FACTORY_PROVIDER_H

#include "A_Container_Factory.h"
#include "Inheritance_Vector_Factory.h"
#include "Template_Vector_Factory.h"
#include "Flyweight_Map_Factory.h"
#include "iostream"

class Factory_Provider {
public:
    A_Container_Factory* GetVectorFactory() const noexcept;
};


#endif //UNIVERSITY_VECTOR_FACTORY_PROVIDER_H
