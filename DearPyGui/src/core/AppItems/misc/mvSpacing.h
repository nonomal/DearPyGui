#pragma once

#include "mvTypeBases.h"

namespace Marvel {

	MV_REGISTER_WIDGET(mvSpacing, MV_ITEM_DESC_DEFAULT, StorageValueTypes::Int, 1);
	class mvSpacing : public mvIntPtrBase
	{

	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

		MV_APPLY_WIDGET_REGISTRATION2(mvAppItemType::mvSpacing, add_spacing)

		MV_START_EXTRA_COMMANDS
		MV_END_EXTRA_COMMANDS

		MV_START_GENERAL_CONSTANTS
		MV_END_GENERAL_CONSTANTS

		MV_START_COLOR_CONSTANTS
		MV_END_COLOR_CONSTANTS

		MV_START_STYLE_CONSTANTS
		MV_END_STYLE_CONSTANTS

		mvSpacing(const std::string& name);

		void draw(ImDrawList* drawlist, float x, float y) override;

	};

}