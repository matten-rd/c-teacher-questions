#include <stdio.h>
#include <stdlib.h>

struct Vehicle {
    int numberOfWheels;
    float power;
};

struct Vehicle vehicle_create(int w, float p)
{
    struct Vehicle v;
    v.numberOfWheels = w;
    v.power = p;
    printf("address of v inside 'vehicle_create': %p\n", &v);
    return v;
}

struct Vehicle *p_vehicle_create(int w, float p) 
{
    struct Vehicle *v = malloc(sizeof(*v));
    v->numberOfWheels = w;
    v->power = p;
    printf("address of v inside 'p_vehicle_create': %p\n", v);
    return v;
}

int main()
{
    struct Vehicle veh1 = vehicle_create(4, 100.5);
    struct Vehicle *veh2 = p_vehicle_create(2, 15.5);
    printf("veh1 - address:%p wheels:%d power:%f\n", &veh1, veh1.numberOfWheels, veh1.power);
    printf("veh2 - address:%p wheels:%d power:%f\n", veh2, veh2->numberOfWheels, veh2->power);
    
    free(veh2);
}