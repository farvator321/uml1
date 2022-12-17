#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__

#include "BaseData.h"

class DoubleData : public DoubleData {
private:
double m_data;
public:
DoubleData(Double data=0);
~DoubleData();
void print();
};
#endif
