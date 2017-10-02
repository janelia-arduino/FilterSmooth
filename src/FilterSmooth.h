// ----------------------------------------------------------------------------
// FilterSmooth.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef FILTER_SMOOTH_H
#define FILTER_SMOOTH_H
#include <Arduino.h>
#include <util/atomic.h>


template <uint8_t sample_count_>
class FilterSmooth
{
public:
  FilterSmooth();
  void addSample(const int &value);
  int getFilteredValue();
private:
  int raw_values_[sample_count_];
  uint8_t index_;
  long total_;
};
#include "FilterSmooth/FilterSmoothDefinitions.h"

#endif
