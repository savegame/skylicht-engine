/*
!@
MIT License

Copyright (c) 2020 Skylicht Technology CO., LTD

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

This file is part of the "Skylicht Engine".
https://github.com/skylicht-lab/skylicht-engine
!#
*/

#pragma once

#include "GUI/Type.h"

namespace Skylicht
{
	namespace Editor
	{
		namespace GUI
		{
			class CThemeConfig
			{
			public:
				static std::string FontName;
				static std::string FontPath;

				static SGUIColor White;
				static SGUIColor Black;

				static SGUIColor WindowBackgroundColor;
				static SGUIColor WindowInnerColor;
				static SGUIColor DefaultTextColor;
				static SGUIColor DefaultIconColor;
				static SGUIColor IconPressColor;
				static SGUIColor TextPressColor;

				static SGUIColor ButtonColor;
				static SGUIColor ButtonTextColor;
				static SGUIColor ButtonHoverColor;
				static SGUIColor ButtonPressColor;
				static SGUIColor ButtonFocusColor;

				static SGUIColor TabTextColor;
				static SGUIColor TabTextFocusColor;
				static SGUIColor TabStripColor;
				static SGUIColor TabButtonColor;
				static SGUIColor TabButtonActiveColor;
				static SGUIColor TabButtonFocusColor;
				static SGUIColor TabCloseButtonHoverColor;

				static SGUIColor SpliterColor;

				static SGUIColor DockHintWindowColor;

				static float getFontSizePt(EFontSize size);
			};
		}
	}
}