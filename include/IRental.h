#ifndef IRENTAL_H
#define IRENTAL_H

class IRental {
public:
    virtual ~IRental() = default;
    virtual double calculateRentalCost(int days) const = 0;
    virtual bool isAvailable() const = 0;
    virtual void rent(int days) = 0;
    virtual void returnItem() = 0;
};
#endif