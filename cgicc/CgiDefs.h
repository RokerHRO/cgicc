/* -*-c++-*- */
/*
 *  $Id: CgiDefs.h.in,v 1.5 1999/10/05 16:16:07 sbooth Exp $
 *
 *  Copyright (C) 1996, 1997, 1998, 1999 Stephen F. Booth
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _CGIDEFS_H_
#define _CGIDEFS_H_ 1

// Include information from configure
#if HAVE_CONFIG_H
#  include "config.h"
#endif

// Win32-specific setup
#ifdef WIN32

// always use namespaces
#  define CGICC_USE_NAMESPACES 1

// export library symbols
#  ifdef CGICC_EXPORTS
#    define CGICC_API __declspec(dllexport)
#  else
#    define CGICC_API __declspec(dllimport)
#  endif

#  define HOST "Win32"
#  define VERSION "3.1.5"

#else
#  define CGICC_USE_NAMESPACES 1
#  define CGICC_API
#endif /* WIN32 */

// Handle namespaces
#if CGICC_USE_NAMESPACES
#  define CGICC_BEGIN_NAMESPACE namespace cgicc {
#  define CGICC_END_NAMESPACE }
#  define CGICCNS cgicc::
#  define STDNS std::
#else
#  define CGICC_BEGIN_NAMESPACE 
#  define CGICC_END_NAMESPACE 
#  define CGICCNS 
#  define STDNS 
#endif /* CGICC_USE_NAMESPACES */

#endif /* ! _CGIDEFS_H_ */
