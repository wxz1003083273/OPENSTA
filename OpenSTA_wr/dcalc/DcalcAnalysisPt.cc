// OpenSTA, Static Timing Analyzer
// Copyright (c) 2019, Parallax Software, Inc.
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "Machine.hh"
#include "StringUtil.hh"
#include "DcalcAnalysisPt.hh"

namespace sta {

DcalcAnalysisPt::DcalcAnalysisPt(Corner *corner,
				 DcalcAPIndex index,
				 const OperatingConditions *op_cond,
				 const MinMax *cnst_min_max,
				 const MinMax *delay_min_max,
				 const MinMax *slew_min_max,
				 const MinMax *check_clk_slew_min_max,
				 const ParasiticAnalysisPt *parasitic_ap) :
  corner_(corner),
  index_(index),
  op_cond_(op_cond),
  cnst_min_max_(cnst_min_max),
  delay_min_max_(delay_min_max),
  slew_min_max_(slew_min_max),
  check_clk_slew_min_max_(check_clk_slew_min_max),
  parasitic_ap_(parasitic_ap)
{
}

void
DcalcAnalysisPt::setOperatingConditions(const OperatingConditions *op_cond)
{
  op_cond_ = op_cond;
}

void
DcalcAnalysisPt::
setParasiticAnalysisPt(const ParasiticAnalysisPt *parasitic_ap)
{
  parasitic_ap_ = parasitic_ap;
}

void
DcalcAnalysisPt::setCheckClkSlewIndex(DcalcAPIndex index)
{
  check_clk_slew_index_ = index;
}

int 
DcalcAnalysisPt::libertyIndex() const
{
  return index_; // same for now
}

} // namespace
