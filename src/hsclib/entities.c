/* Entities to be defined during startup -- replaces $defent tags in hsc.prefs */

static struct HSCENTITY {
   STRPTR name;
   unsigned short numeric;
   BOOL prefnum;
} HSCInternalEntities[] = {
   /* basic entities w/o replacement chars */
   {"amp",     0, FALSE},  /* & */
   {"lt",      0, FALSE},  /* < */
   {"gt",      0, FALSE},  /* > */
   {"quot",    0, FALSE},  /* " */
   {"apos",    0, FALSE},  /* ' */

   /* ISO-8859-1 entities stay in the prefs file to allow users to utilize
    * different 8-bit charsets! */

	{"OElig",	338, FALSE},
 	{"oelig",	339, FALSE},
 	{"Scaron",	352, FALSE},
 	{"scaron",	353, FALSE},
 	{"Yuml",	376, FALSE},
 	{"circ",	710, FALSE},
 	{"tilde",	732, FALSE},
 	{"ensp",	8194, FALSE},
 	{"emsp",	8195, FALSE},
 	{"thinsp",	8201, FALSE},
 	{"zwnj",	8204, FALSE},
 	{"zwj",	8205, FALSE},
 	{"lrm",	8206, FALSE},
 	{"rlm",	8207, FALSE},
 	{"ndash",	8211, FALSE},
 	{"mdash",	8212, FALSE},
 	{"lsquo",	8216, FALSE},
 	{"rsquo",	8217, FALSE},
 	{"sbquo",	8218, FALSE},
 	{"ldquo",	8220, FALSE},
 	{"rdquo",	8221, FALSE},
 	{"bdquo",	8222, FALSE},
 	{"dagger",	8224, FALSE},
 	{"Dagger",	8225, FALSE},
 	{"permil",	8240, FALSE},
 	{"lsaquo",	8249, FALSE},
 	{"rsaquo",	8250, FALSE},
 	{"euro",	8364, FALSE},
 	{"fnof",	402, FALSE},
 	{"Alpha",	913, FALSE},
 	{"Beta",	914, FALSE},
 	{"Gamma",	915, FALSE},
 	{"Delta",	916, FALSE},
 	{"Epsilon",	917, FALSE},
 	{"Zeta",	918, FALSE},
 	{"Eta",	919, FALSE},
 	{"Theta",	920, FALSE},
 	{"Iota",	921, FALSE},
 	{"Kappa",	922, FALSE},
 	{"Lambda",	923, FALSE},
 	{"Mu",	924, FALSE},
 	{"Nu",	925, FALSE},
 	{"Xi",	926, FALSE},
 	{"Omicron",	927, FALSE},
 	{"Pi",	928, FALSE},
 	{"Rho",	929, FALSE},
 	{"Sigma",	931, FALSE},
 	{"Tau",	932, FALSE},
 	{"Upsilon",	933, FALSE},
 	{"Phi",	934, FALSE},
 	{"Chi",	935, FALSE},
 	{"Psi",	936, FALSE},
 	{"Omega",	937, FALSE},
 	{"alpha",	945, FALSE},
 	{"beta",	946, FALSE},
 	{"gamma",	947, FALSE},
 	{"delta",	948, FALSE},
 	{"epsilon",	949, FALSE},
 	{"zeta",	950, FALSE},
 	{"eta",	951, FALSE},
 	{"theta",	952, FALSE},
 	{"iota",	953, FALSE},
 	{"kappa",	954, FALSE},
 	{"lambda",	955, FALSE},
 	{"mu",	956, FALSE},
 	{"nu",	957, FALSE},
 	{"xi",	958, FALSE},
 	{"omicron",	959, FALSE},
 	{"pi",	960, FALSE},
 	{"rho",	961, FALSE},
 	{"sigmaf",	962, FALSE},
 	{"sigma",	963, FALSE},
 	{"tau",	964, FALSE},
 	{"upsilon",	965, FALSE},
 	{"phi",	966, FALSE},
 	{"chi",	967, FALSE},
 	{"psi",	968, FALSE},
 	{"omega",	969, FALSE},
 	{"thetasym",	977, FALSE},
 	{"upsih",	978, FALSE},
 	{"piv",	982, FALSE},
 	{"bull",	8226, FALSE},
 	{"hellip",	8230, FALSE},
 	{"prime",	8242, FALSE},
 	{"Prime",	8243, FALSE},
 	{"oline",	8254, FALSE},
 	{"frasl",	8260, FALSE},
 	{"weierp",	8472, FALSE},
 	{"image",	8465, FALSE},
 	{"real",	8476, FALSE},
 	{"trade",	8482, FALSE},
 	{"alefsym",	8501, FALSE},
 	{"larr",	8592, FALSE},
 	{"uarr",	8593, FALSE},
 	{"darr",	8595, FALSE},
 	{"harr",	8596, FALSE},
 	{"crarr",	8629, FALSE},
 	{"lArr",	8656, FALSE},
 	{"uArr",	8657, FALSE},
 	{"rArr",	8658, FALSE},
 	{"dArr",	8659, FALSE},
 	{"hArr",	8660, FALSE},
 	{"forall",	8704, FALSE},
 	{"part",	8706, FALSE},
 	{"exist",	8707, FALSE},
 	{"empty",	8709, FALSE},
 	{"nabla",	8711, FALSE},
 	{"isin",	8712, FALSE},
 	{"notin",	8713, FALSE},
 	{"ni",	8715, FALSE},
 	{"prod",	8719, FALSE},
 	{"sum",	8721, FALSE},
 	{"minus",	8722, FALSE},
 	{"lowast",	8727, FALSE},
 	{"radic",	8730, FALSE},
 	{"prop",	8733, FALSE},
 	{"infin",	8734, FALSE},
 	{"ang",	8736, FALSE},
 	{"and",	8743, FALSE},
 	{"or",	8744, FALSE},
 	{"cap",	8745, FALSE},
 	{"cup",	8746, FALSE},
 	{"int",	8747, FALSE},
 	{"there4",	8756, FALSE},
 	{"sim",	8764, FALSE},
 	{"cong",	8773, FALSE},
 	{"asymp",	8776, FALSE},
 	{"ne",	8800, FALSE},
 	{"equiv",	8801, FALSE},
 	{"le",	8804, FALSE},
 	{"ge",	8805, FALSE},
 	{"sub",	8834, FALSE},
 	{"sup",	8835, FALSE},
 	{"nsub",	8836, FALSE},
 	{"sube",	8838, FALSE},
 	{"supe",	8839, FALSE},
 	{"oplus",	8853, FALSE},
 	{"otimes",	8855, FALSE},
 	{"perp",	8869, FALSE},
 	{"sdot",	8901, FALSE},
 	{"lceil",	8968, FALSE},
 	{"rceil",	8969, FALSE},
 	{"lfloor",	8970, FALSE},
 	{"rfloor",	8971, FALSE},
 	{"lang",	9001, FALSE},
 	{"rang",	9002, FALSE},
 	{"loz",	9674, FALSE},
 	{"spades",	9824, FALSE},
 	{"clubs",	9827, FALSE},
 	{"hearts",	9829, FALSE},
 	{"diams",	9830, FALSE}
};

/* $Id$ */
/* vi: set ts=4: */
