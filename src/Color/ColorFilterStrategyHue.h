/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef COLOR_FILTER_STRATEGY_HUE_H
#define COLOR_FILTER_STRATEGY_HUE_H

#include "ColorFilterStrategyAbstractBase.h"

/// Leaf class for hue strategy for ColorFilter
class ColorFilterStrategyHue : public ColorFilterStrategyAbstractBase
{
 public:
  /// Single constructor.
  ColorFilterStrategyHue();

  virtual ~ColorFilterStrategyHue();

  virtual double pixelToZeroToOne  (const QColor &pixel,
                                    QRgb rgbBackground) const;
  virtual int zeroToOneToValue (double s) const;

};

#endif // COLOR_FILTER_STRATEGY_HUE_H
