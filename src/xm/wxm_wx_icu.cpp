///////////////////////////////////////////////////////////////////////////////
// vim:         ts=4 sw=4
// Name:        xm/wxm_wx_icu.cpp
// Description: wxWidgets/ICU type adapter
// Author:      wxmedit@gmail.com
// Licence:     GPL
///////////////////////////////////////////////////////////////////////////////

#include "wxm_wx_icu.h"
#include <boost/scoped_array.hpp>
#include <limits>

namespace wxm
{

UnicodeString WxStrToICU(const wxString& wxs)
{
#ifdef __WXMSW__
	return UnicodeString(wxs.c_str(), wxs.Length());
#else
	return UnicodeString::fromUTF32((const UChar32*)wxs.c_str(), wxs.Length());
#endif
}

wxString ICUStrToWx(const UnicodeString& us)
{
	size_t cap = us.length() + 1;
	boost::scoped_array<wchar_t> wbuff(new wchar_t[cap]);
	UErrorCode errcode = U_ZERO_ERROR;

#ifdef __WXMSW__
	int32_t len = us.extract(wbuff.get(), cap, errcode);
#else
	int32_t len = us.toUTF32((UChar32 *)wbuff.get(), cap, errcode);
#endif

	if(errcode == U_ZERO_ERROR)
		return wxString((wxChar*)wbuff.get(), len);

	return wxString();
}

} // namespace wxm