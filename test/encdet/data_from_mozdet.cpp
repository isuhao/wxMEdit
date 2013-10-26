#include "data_from_mozdet.h"
#include <boost/assign/list_of.hpp>

MozCaseVec moz811363cases = boost::assign::list_of
(
EncAndText("UTF-8", "Two-byte UTF-8 including the first and last characters in the range: "
	"\\u0080\\u0428\\u0435\\u0440\\u043b\\u043e\\u043a\\u07ff\n")
)
(
EncAndText("UTF-8", "Three byte UTF-8, first byte 0xE0, including first and last characters\nin the range: "
	"\\u0800\\u0936\\u0930\\u094d\\u0932\\u0915\\u0fff\n\n")
)
(
EncAndText("UTF-8", "Three byte UTF-8, first byte 0xE1-EC, including first and last characters\nin the range: "
	"\\u1000\\u30b7\\u30e3\\u30fc\\u30ed\\u30c3\\u30af\\ucfff\n\n")
)
(
EncAndText("UTF-8", "Three byte UTF-8, first byte 0xED, including first and last characters\nin the range: "
	"\\ud000\\ud648\\ud558\\ud648\\ud0d0\\ud7ff\n\n")
)
(
EncAndText("UTF-8", "Three byte UTF-8, first byte 0xEE-EF, including first and last characters\nin the range: "
	"\\ue000\\ufd0d\\ufedf\\ufeee\\ufed9\\uffff\n\n")
)
(
EncAndText("UTF-8", "Four byte UTF-8, first byte 0xF0, including first and last characters\nin the range: "
	"\\ud800\\udc00\\ud800\\udf32\\ud800\\udf3f\\ud800\\udf44\\ud800\\udf39\\ud800\\udf43\\ud800\\udf3a "
	"\\ud8bf\\udfff\n\n")
)
(
EncAndText("UTF-8", "Four byte UTF-8, first byte 0xF1-F3, including first and last characters\nin the range: "
	"\\ud8c0\\udc00\\ud940\\udc00 \\ud940\\udc01 \\ud940\\udc02\\udbbf\\udfff\n\n")
)
(
EncAndText("UTF-8", "Four byte UTF-8, first byte 0xF4, including first and last characters\nin the range:"
	"\\udbc0\\udc00\\udbe0\\udc00 \\udbe0\\udc01 \\udbe0\\udc02\\udbff\\udfff\n\n")
)
(
EncAndText("Windows-1252", "First bytes of 2-byte sequences (0xc0-0xdf), each followed by a space character: "
	"\\u00c0 \\u00c1 \\u00c2 \\u00c3 \\u00c4 \\u00c5 \\u00c6 \\u00c7 \\u00c8 \\u00c9 \\u00ca \\u00cb \\u00cc "
	"\\u00cd \\u00ce \\u00cf \\u00d0 \\u00d1 \\u00d2 \\u00d3 \\u00d4 \\u00d5 \\u00d6 \\u00d7 \\u00d8 \\u00d9 "
	"\\u00da \\u00db \\u00dc \\u00dd \\u00de \\u00df \n"
	"First bytes of 3-byte sequences (0xe0-0xef), each followed by a space character: "
	"\\u00e0 \\u00e1 \\u00e2 \\u00e3 \\u00e4 \\u00e5 \\u00e6 \\u00e7 \\u00e8 \\u00e9 \\u00ea \\u00eb \\u00ec "
	"\\u00ed \\u00ee \\u00ef \n"
	"First bytes of 4-byte sequences (0xf0-0xf4), each followed by a space character: "
	"\\u00f0 \\u00f1 \\u00f2 \\u00f3 \\u00f4 \n")
)
;

MozCaseVec moz426271cases = boost::assign::list_of
(
EncAndText("EUC-JP", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n"
	"<html lang=\"ja\">\n"
	"<head>\n"
	"<title>\\u65e5\\u672c\\u8a9e\\u30a8\\u30f3\\u30b3\\u30fc\\u30c9\\u30c6\\u30b9\\u30c8</title>\n"
	"</head>\n"
	"<body>\n"
	"\\u3053\\u308c\\u306fEUC-JP\\u3067\\u3059\\u6614\\u3005\\u3001\\u3042\\u308b\\u6240\\u306b\\u5b50"
	"\\u4f9b\\u306e\\u3044\\u306a\\u3044\\u8001\\u592b\\u5a66\\u304c\\u4f4f\\u3093\\u3067\\u3044\\u305f"
	"\\u3002\\u3042\\u308b\\u65e5\\u3001\\u304a\\u5a46\\u3055\\u3093\\u304c\\u5ddd\\u3067\\u6d17\\u6fef"
	"\\u3092\\u3057\\u3066\\u3044\\u308b\\u3068\\u3001\\u5927\\u304d\\u306a\\u6843\\u304c\\u6d41\\u308c"
	"\\u3066\\u6765\\u305f\\u306e\\u3067\\u3001\\u304a\\u723a\\u3055\\u3093\\u3068\\u98df\\u3079\\u3088"
	"\\u3046\\u3068\\u6301\\u3061\\u5e30\\u3063\\u305f\\u3002\\u4e8c\\u4eba\\u3067\\u6843\\u3092\\u5272"
	"\\u308b\\u3068\\u4e2d\\u304b\\u3089\\u7537\\u306e\\u5b50\\u304c\\u751f\\u307e\\u308c\\u305f\\u306e"
	"\\u3067\\u3001\\u300c\\u6843\\u592a\\u90ce\\u300d\\u3068\\u540d\\u4ed8\\u3051\\u3066\\u5927\\u4e8b"
	"\\u306b\\u80b2\\u3066\\u305f\\u3002\n\n"
	"\\u6210\\u9577\\u3057\\u305f\\u6843\\u592a\\u90ce\\u306f\\u3001\\u9b3c\\u30f6\\u5cf6\\u306e\\u9b3c"
	"\\u304c\\u4eba\\u3005\\u3092\\u82e6\\u3057\\u3081\\u3066\\u3044\\u308b\\u3053\\u3068\\u3092\\u77e5"
	"\\u308a\\u3001\\u9b3c\\u9000\\u6cbb\\u3092\\u6c7a\\u610f\\u3059\\u308b\\u3002\\u4e21\\u89aa\\u304b"
	"\\u3089\\u9ecd\\u56e3\\u5b50\\u3092\\u991e\\u5225\\u306b\\u8cb0\\u3044\\u3001\\u9053\\u4e2d\\u306b"
	"\\u305d\\u308c\\u3092\\u5206\\u3051\\u4e0e\\u3048\\u3066\\u30a4\\u30cc\\u3001\\u30b5\\u30eb\\u3001"
	"\\u30ad\\u30b8\\u3092\\u5bb6\\u6765\\u306b\\u5f93\\u3048\\u308b\\u3002\\u9b3c\\u30f6\\u5cf6\\u3067"
	"\\u9b3c\\u3068\\u6226\\u3044\\u3001\\u898b\\u4e8b\\u306b\\u52dd\\u5229\\u3092\\u53ce\\u3081\\u3001"
	"\\u9b3c\\u304c\\u65b9\\u3005\\u304b\\u3089\\u596a\\u3063\\u3066\\u3044\\u3063\\u305f\\u8ca1\\u5b9d"
	"\\u3092\\u6301\\u3061\\u5e30\\u308a\\u3001\\u304a\\u723a\\u3055\\u3093\\u30fb\\u304a\\u5a46\\u3055"
	"\\u3093\\u306e\\u5143\\u306b\\u8fd4\\u308a\\u3001\\u5e78\\u305b\\u306b\\u66ae\\u3089\\u3057\\u305f"
	"\\u3068\\u3044\\u3046\\u3002\\u51fa\\u5178: \\u30d5\\u30ea\\u30fc\\u767e\\u79d1\\u4e8b\\u5178\\u300e"
	"\\u30a6\\u30a3\\u30ad\\u30da\\u30c7\\u30a3\\u30a2\\uff08Wikipedia\\uff09\\u300f\n"
	"</body>\n"
	"</html>\n")
)
(
EncAndText("UTF-8", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n"
	"<html lang=\"ja\">\n"
	"<head>\n"
	"<title>\\u65e5\\u672c\\u8a9e\\u30a8\\u30f3\\u30b3\\u30fc\\u30c9\\u30c6\\u30b9\\u30c8</title>\n"
	"</head>\n"
	"<body>\n"
	"\\u3053\\u308c\\u306fUTF-8\\u3067\\u3059\\u6614\\u3005\\u3001\\u3042\\u308b\\u6240\\u306b\\u5b50"
	"\\u4f9b\\u306e\\u3044\\u306a\\u3044\\u8001\\u592b\\u5a66\\u304c\\u4f4f\\u3093\\u3067\\u3044\\u305f"
	"\\u3002\\u3042\\u308b\\u65e5\\u3001\\u304a\\u5a46\\u3055\\u3093\\u304c\\u5ddd\\u3067\\u6d17\\u6fef"
	"\\u3092\\u3057\\u3066\\u3044\\u308b\\u3068\\u3001\\u5927\\u304d\\u306a\\u6843\\u304c\\u6d41\\u308c"
	"\\u3066\\u6765\\u305f\\u306e\\u3067\\u3001\\u304a\\u723a\\u3055\\u3093\\u3068\\u98df\\u3079\\u3088"
	"\\u3046\\u3068\\u6301\\u3061\\u5e30\\u3063\\u305f\\u3002\\u4e8c\\u4eba\\u3067\\u6843\\u3092\\u5272"
	"\\u308b\\u3068\\u4e2d\\u304b\\u3089\\u7537\\u306e\\u5b50\\u304c\\u751f\\u307e\\u308c\\u305f\\u306e"
	"\\u3067\\u3001\\u300c\\u6843\\u592a\\u90ce\\u300d\\u3068\\u540d\\u4ed8\\u3051\\u3066\\u5927\\u4e8b"
	"\\u306b\\u80b2\\u3066\\u305f\\u3002\n\n"
	"\\u6210\\u9577\\u3057\\u305f\\u6843\\u592a\\u90ce\\u306f\\u3001\\u9b3c\\u30f6\\u5cf6\\u306e\\u9b3c"
	"\\u304c\\u4eba\\u3005\\u3092\\u82e6\\u3057\\u3081\\u3066\\u3044\\u308b\\u3053\\u3068\\u3092\\u77e5"
	"\\u308a\\u3001\\u9b3c\\u9000\\u6cbb\\u3092\\u6c7a\\u610f\\u3059\\u308b\\u3002\\u4e21\\u89aa\\u304b"
	"\\u3089\\u9ecd\\u56e3\\u5b50\\u3092\\u991e\\u5225\\u306b\\u8cb0\\u3044\\u3001\\u9053\\u4e2d\\u306b"
	"\\u305d\\u308c\\u3092\\u5206\\u3051\\u4e0e\\u3048\\u3066\\u30a4\\u30cc\\u3001\\u30b5\\u30eb\\u3001"
	"\\u30ad\\u30b8\\u3092\\u5bb6\\u6765\\u306b\\u5f93\\u3048\\u308b\\u3002\\u9b3c\\u30f6\\u5cf6\\u3067"
	"\\u9b3c\\u3068\\u6226\\u3044\\u3001\\u898b\\u4e8b\\u306b\\u52dd\\u5229\\u3092\\u53ce\\u3081\\u3001"
	"\\u9b3c\\u304c\\u65b9\\u3005\\u304b\\u3089\\u596a\\u3063\\u3066\\u3044\\u3063\\u305f\\u8ca1\\u5b9d"
	"\\u3092\\u6301\\u3061\\u5e30\\u308a\\u3001\\u304a\\u723a\\u3055\\u3093\\u30fb\\u304a\\u5a46\\u3055"
	"\\u3093\\u306e\\u5143\\u306b\\u8fd4\\u308a\\u3001\\u5e78\\u305b\\u306b\\u66ae\\u3089\\u3057\\u305f"
	"\\u3068\\u3044\\u3046\\u3002\\u51fa\\u5178: \\u30d5\\u30ea\\u30fc\\u767e\\u79d1\\u4e8b\\u5178\\u300e"
	"\\u30a6\\u30a3\\u30ad\\u30da\\u30c7\\u30a3\\u30a2\\uff08Wikipedia\\uff09\\u300f\n"
	"</body>\n"
	"</html>\n")
)
;

MozMultiCasesTicketsMap moz_muticases_map = boost::assign::map_list_of
(811363, moz811363cases)
(426271, moz426271cases)
;

MozOtherTicketsMap moz_others_map = boost::assign::map_list_of
(
9357, EncAndText("EUC-KR", "<!DOCTYPE html>\n"
	"<html>\n"
	"<head>\n"
	" <title>EUC-KR test</title>\n"
	"</head>\n"
	"<body>\n"
	" <p>\\uc694\\uccad\\ud558\\uc2e0 \\uc6f9 \\ud398\\uc774\\uc9c0\\ub97c \\ucc3e\\uc744 \\uc218 \\uc5c6\\uc2b5\\ub2c8\\ub2e4.<br>\\ucc3e\\uc73c\\uc2dc\\ub294 \\uc6f9 \\ud398\\uc774\\uc9c0\\uac00 \\ud604\\uc7ac \\uc0ac\\uc6a9\\ud560 \\uc218 \\uc5c6\\uac70\\ub098<br>\\uc6f9 \\ud398\\uc774\\uc9c0\\uc758 \\uc774\\ub984\\uc774 \\ubcc0\\uacbd \\ub610\\ub294 \\uc0ad\\uc81c \\ub418\\uc5c8\\uc2b5\\ub2c8\\ub2e4.<br>\\uc774\\ubca4\\ud2b8 \\uad00\\ub828 \\ubb38\\uc758\\ub294 \\uace0\\uac1d\\ubb38\\uc758\\ub97c \\uc774\\uc6a9\\ud558\\uc2dc\\uae30 \\ubc14\\ub78d\\ub2c8\\ub2e4 </p>\n"
	"</body>\n"
	"</html>\n\n\n\n\n\n\n")
)
(
171813 , EncAndText("GB18030", "<body leftmargin=\"0\" topmargin=\"0\" bgcolor=\"#fffeeb\">\n"
	"<table border=0 cellpadding=0 cellspacing=0 height=22 width=160>\n"
	"  <tbody> \n"
	"  <tr bgcolor=C40001> \n"
	"    <td align=middle class=cn \n"
	"        height=22 > \n"
	"      <div align=\"center\"><a href=\"http://www.sol.sohu.com\" class=\"white\" target=\"_blank\"><font color=\"#ffffff\"><b>\\u641c\\u72d0\\u5728\\u7ebf</b></font></a></div>\n"
	"    </td>\n"
	"  </tr>\n"
	"  </tbody> \n"
	"</table>\n"
	"<table border=0 cellpadding=0 cellspacing=2 width=160>\n"
	"  <tr> \n"
	"    <td class=sca valign=top> \n"
	"      <div align=\"center\">\n"
	"      </div>\n"
	"    </td>\n"
	"  </tr>\n"
	"  <tr> \n"
	"    <td class=sca valign=top> \n"
	"      <div align=\"center\"><a href=\"http://www.sol.sohu.com/promote/nd.htm\" target=\"_blank\">\\u641c\\u72d0\\u5728\\u7ebf\\u56fd\\u5e86\\u514d\\u8d39\\u5927\\u916c\\u5bbe</a></div>\n"
	"    </td>\n"
	"  </tr>\n"
	"  <tr> \n"
	"    <td class=sca valign=top> \n"
	"      <p align=\"center\"><a href=\"http://www.sol.sohu.com/game/crossgate/\"><font color=\"red\">\\u62e895933\\u4e0a\\u7f51\\u9b54\\u529b\\u5b9d\\u8d1d\\u514d\\u8d39\\u73a9</font></a></p>\n"
	"    </td>\n"
	"  </tr>\n"
	"  <tr> \n"
	"    <td class=sca valign=top> \n"
	"      <div align=\"center\"><a href=\"http://www.sol.sohu.com/promote/95933/\" target=\"_blank\">95933\\u7f51\\u8d39\\u5929\\u5929\\u6700\\u4f4e6\\u6bdb/\\u5c0f\\u65f6</a></div>\n"
	"    </td>\n"
	"  </tr>\n"
	"  <tbody> </tbody> \n"
	"</table>\n"
	"\n")
)
(
 306272, EncAndText("UTF-8", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n"
	"<html><head>\n"
	"\n"
	"  <title>306272</title>\n"
	"\n"
	"  \n"
	"</head><body>\n"
	"<a href=\"mailto:Antti.Nayha@somewhere.fi\">Antti N\\u00e4yh\\u00e4 &lt;Antti.Nayha@somewhere.fi&gt;</a>\n"
	"</body></html>")
)
(
620106, EncAndText("EUC-JP", "<!DOCTYPE html>\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
	"\\u30c6\\u30b9\\u30c8\\u306e\\u30a8\\u30f3\\u30b3\\u30fc\\u30c7\\u30a3\\u30f3\\u30b0\\u3092"
	"\\u691c\\u51fa\\u3002\\u3082\\u3046\\u4e00\\u5ea6\\u30c6\\u30b9\\u30c8\\u3002\\u307e\\u3060"
	"\\u30a8\\u30f3\\u30b3\\u30fc\\u30c9\\u306e\\u691c\\u51fa\\u3092\\u30c6\\u30b9\\u30c8\\u3057"
	"\\u307e\\u3059\\u3002\\u3053\\u308c\\u304c\\u6b63\\u3057\\u304f\\u691c\\u51fa\\u3055\\u308c"
	"\\u3066\\u3044\\u307e\\u3059\\u304b\\uff1f\n\n")
)
/*
(
, EncAndText("", )
)
*/
;