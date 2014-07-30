//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___ *___FILEBASENAMEASIDENTIFIER___::_instance = nullptr;


___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___(){
    
}

___FILEBASENAMEASIDENTIFIER___ *___FILEBASENAMEASIDENTIFIER___::getInstance()
{
    if(_instance == nullptr)
        _instance = new ___FILEBASENAMEASIDENTIFIER___();
    
    return _instance;
}
