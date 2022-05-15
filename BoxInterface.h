#ifndef BOXINTERFACE
#define BOXINTERFACE

template <class ItemType>
class BoxInterface
{
public:
    virtual void setItem(const ItemType& theItem) = 0;
    virtual ItemType getItem() const = 0;
    virtual ~BoxInterface() {} // C++ Interlude 2 explains virtual destructors
}; // end BoxInterface
#endif