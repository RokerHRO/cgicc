/* -*-c++-*- */
/*
 *  $Id: CgiDefs.h.in,v 1.8 2003/07/13 14:20:35 sbooth Exp $
 *
 *  Copyright (C) 1996 - 2003 Stephen F. Booth
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _CGIDEFS_H_
#define _CGIDEFS_H_ 1

/*! \file CgiDefs.h
 * \brief Platform and operating system specific macro definitions.
 *
 * Platform and operating system specific macro definitions that deal
 * with namespace support and exporting of library functions.
 */

// Include information from configure
#if HAVE_CONFIG_H
#  include "config.h"
#endif

/*! \namespace cgicc
 * \brief The namespace containing the cgicc library
 *
 * The namespace containing all classes and functions of the 
 * GNU cgicc library.
 */

// Win32-specific setup
#ifdef WIN32

// export library symbols
#  ifdef CGICC_EXPORTS
#    define CGICC_API __declspec(dllexport)
#  else
#    define CGICC_API __declspec(dllimport)
#  endif

#  define HOST "Win32"
#  define VERSION "3.2.3"

#else
#  define CGICC_API
#endif /* WIN32 */

#endif /* ! _CGIDEFS_H_ */
