/**
 * @file spl_label.h
 *
 * @brief Componenets for creating x,y and title labels
 *
 * @ingroup SimpleCustomPlotInternal
 *
 * @author Frans Rosencrantz
 * Contact: Frans.Rosencrantz@gmail.com
 *
 */

#pragma once

#include <juce_gui_basics/juce_gui_basics.h>

#include "spl_utils.h"

namespace scp {
/**
 * \class PlotBase
 * \brief A class for creating x, y and title labels
 *
 * The idea is to use this componenet to draw the x, y and title labels.
 */
class PlotLabel : public juce::Component {
 public:
  PlotLabel();

  /** @brief Set the x-label text
   *
   *  Set the text that will be display on the x-axis.
   *
   *  @param x_label the text that will be drawn on the x-axis.
   *  @return void.
   */
  void setXLabel(const std::string &x_label);

  /** @brief Set the y-label text
   *
   *  Set the text that will be display on the y-axis.
   *
   *  @param y_label the text that will be drawn on the y-axis.
   *  @return void.
   */
  void setYLabel(const std::string &y_label);

  /** @brief Set the title-label text
   *
   *  Set the text that will be display on the upper x-axis.
   *
   *  @param title_label the text that will be drawn on the upper x-axis
   *  @return void.
   */
  void setTitle(const std::string &title_label);

  void resized() override;
  void paint(juce::Graphics &g) override;
  void lookAndFeelChanged() override;

 private:
  juce::Label m_x_label, m_y_label, m_title_label;
  LookAndFeelMethodsBase* m_lookandfeel;
};
}  // namespace scp