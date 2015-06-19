#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t792;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1526;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1525;
// System.Text.RegularExpressions.Match
struct Match_t1517;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t1517  : public Group_t1523
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t792 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1525 * ___groups_9;
};
struct Match_t1517_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1517 * ___empty_10;
};
