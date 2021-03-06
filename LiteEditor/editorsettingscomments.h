//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah                            
// file name            : editorsettingscomments.h              
//                                                                          
// -------------------------------------------------------------------------
// A                                                                        
//              _____           _      _     _ _                            
//             /  __ \         | |    | |   (_) |                           
//             | /  \/ ___   __| | ___| |    _| |_ ___                      
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )                     
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/                     
//              \____/\___/ \__,_|\___\_____/_|\__\___|                     
//                                                                          
//                                                  F i l e                 
//                                                                          
//    This program is free software; you can redistribute it and/or modify  
//    it under the terms of the GNU General Public License as published by  
//    the Free Software Foundation; either version 2 of the License, or     
//    (at your option) any later version.                                   
//                                                                          
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __editorsettingscomments__
#define __editorsettingscomments__

/**
@file
Subclass of EditorSettingsCommentsBase, which is generated by wxFormBuilder.
*/

#include "editorsettingscommentsbase.h"
#include "treebooknodebase.h"

/** Implementing EditorSettingsCommentsBase */
class EditorSettingsComments
: public EditorSettingsCommentsBase
, public TreeBookNode<EditorSettingsComments>
{
public:
	/** Constructor */
	EditorSettingsComments( wxWindow* parent );

	void Save(OptionsConfigPtr options);
};

#endif // __editorsettingscomments__
