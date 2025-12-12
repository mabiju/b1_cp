// program to calculate kinetic energy
#include <stdio.h>
int main() {
    float mass, velocity, kinetic_energy;
    printf("Enter mass (in kg): ");
    scanf("%f", &mass);
    printf("Enter velocity (in m/s): ");
    scanf("%f", &velocity);
    kinetic_energy = 0.5 * mass * velocity * velocity;
    printf("Kinetic Energy: %.2f Joules\n", kinetic_energy);
    return 0;
}   