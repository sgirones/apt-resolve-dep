/* include/apti18n.h.  Generated from apti18n.h.in by configure.  */
// -*- mode: cpp; mode: fold -*-
// $Id: apti18n.h.in,v 1.6 2003/01/11 07:18:18 jgg Exp $
/* Internationalization macros for apt. This header should be included last
   in each C file. */

// Set by autoconf
#define USE_NLS 0

#ifdef USE_NLS
// apt will use the gettext implementation of the C library
#include <libintl.h>
#include <locale.h>
# ifdef APT_DOMAIN
#   define _(x) dgettext(APT_DOMAIN,x)
#   define P_(msg,plural,n) dngettext(APT_DOMAIN,msg,plural,n)
# else
#   define _(x) gettext(x)
#   define P_(msg,plural,n) ngettext(msg,plural,n)
# endif
# define N_(x) x
#else
// apt will not use any gettext
# define setlocale(a, b)
# define textdomain(a)
# define bindtextdomain(a, b)
# define _(x) x
# define P_(msg,plural,n) (n == 1 ? msg : plural)
# define N_(x) x
# define dgettext(d, m) m
#endif
