// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/v8exception_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefV8Context> CefV8Context::GetCurrentContext()
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_t* _retval = cef_v8context_get_current_context();

  // Return type: refptr_same
  return CefV8ContextCToCpp::Wrap(_retval);
}


CefRefPtr<CefV8Context> CefV8Context::GetEnteredContext()
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_t* _retval = cef_v8context_get_entered_context();

  // Return type: refptr_same
  return CefV8ContextCToCpp::Wrap(_retval);
}


bool CefV8Context::InContext()
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_v8context_in_context();

  // Return type: bool
  return _retval?true:false;
}



// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefBrowser> CefV8ContextCToCpp::GetBrowser()
{
  if (CEF_MEMBER_MISSING(struct_, get_browser))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = struct_->get_browser(struct_);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}


CefRefPtr<CefFrame> CefV8ContextCToCpp::GetFrame()
{
  if (CEF_MEMBER_MISSING(struct_, get_frame))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = struct_->get_frame(struct_);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}


CefRefPtr<CefV8Value> CefV8ContextCToCpp::GetGlobal()
{
  if (CEF_MEMBER_MISSING(struct_, get_global))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = struct_->get_global(struct_);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}


bool CefV8ContextCToCpp::Enter()
{
  if (CEF_MEMBER_MISSING(struct_, enter))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->enter(struct_);

  // Return type: bool
  return _retval?true:false;
}


bool CefV8ContextCToCpp::Exit()
{
  if (CEF_MEMBER_MISSING(struct_, exit))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->exit(struct_);

  // Return type: bool
  return _retval?true:false;
}


bool CefV8ContextCToCpp::IsSame(CefRefPtr<CefV8Context> that)
{
  if (CEF_MEMBER_MISSING(struct_, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = struct_->is_same(struct_,
      CefV8ContextCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}


bool CefV8ContextCToCpp::Eval(const CefString& code,
    CefRefPtr<CefV8Value>& retval, CefRefPtr<CefV8Exception>& exception)
{
  if (CEF_MEMBER_MISSING(struct_, eval))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: code; type: string_byref_const
  DCHECK(!code.empty());
  if (code.empty())
    return false;

  // Translate param: retval; type: refptr_same_byref
  cef_v8value_t* retvalStruct = NULL;
  if(retval.get())
    retvalStruct = CefV8ValueCToCpp::Unwrap(retval);
  cef_v8value_t* retvalOrig = retvalStruct;
  // Translate param: exception; type: refptr_same_byref
  cef_v8exception_t* exceptionStruct = NULL;
  if(exception.get())
    exceptionStruct = CefV8ExceptionCToCpp::Unwrap(exception);
  cef_v8exception_t* exceptionOrig = exceptionStruct;

  // Execute
  int _retval = struct_->eval(struct_,
      code.GetStruct(),
      &retvalStruct,
      &exceptionStruct);

  // Restore param:retval; type: refptr_same_byref
  if (retvalStruct) {
    if (retvalStruct != retvalOrig) {
      retval = CefV8ValueCToCpp::Wrap(retvalStruct);
    }
  } else {
    retval = NULL;
  }
  // Restore param:exception; type: refptr_same_byref
  if (exceptionStruct) {
    if (exceptionStruct != exceptionOrig) {
      exception = CefV8ExceptionCToCpp::Wrap(exceptionStruct);
    }
  } else {
    exception = NULL;
  }

  // Return type: bool
  return _retval?true:false;
}



#ifndef NDEBUG
template<> long CefCToCpp<CefV8ContextCToCpp, CefV8Context,
    cef_v8context_t>::DebugObjCt = 0;
#endif

