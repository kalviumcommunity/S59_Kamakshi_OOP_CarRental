#ifndef LUXURYCAR_H
#define LUXURYCAR_H

#include "Car.h" 

class LuxuryCar : public Car {  
private:
    bool hasSunroof;          
    bool luxuryPackage; 

public:
    LuxuryCar(); 
    LuxuryCar(int id, std::string make, std::string model, int year, double rentalPrice, bool luxuryPackage);
    ~LuxuryCar();

    bool getHasSunroof() const;
    void setHasSunroof(bool hasSunroof);

    bool getLuxuryPackage() const;
    void setLuxuryPackage(bool luxuryPackage);

    void activateLuxuryPackage();
    void getDetails() const override;
};

#endif