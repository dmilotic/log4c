/* $Id$
 *
 * rc.h
 *
 * Copyright 2001-2003, Meiosys (www.meiosys.com). All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */

#ifndef __log4c_rc_h
#define __log4c_rc_h

/**
 * @file rc.h
 *
 * @brief log4c resource configuration
 *
 **/

#include <log4c/defs.h>

__LOG4C_BEGIN_DECLS

/**
 * @brief resource configuration object
 *
 * Attributes description:
 * 
 * @li @c nocleanup don't perform memory cleanup in log4c library 
 *        destructor or in log4c_fini()
 * @li @c bufsize maximum logging buffer size. 0 for no limits
 * @li @c debug activate log4c debugging
 **/
typedef struct 
{
    struct 
    {
	int nocleanup;
	int bufsize;
	int debug;
    } config;

} log4c_rc_t;

/**
 * default log4c resource configuration object
 **/
extern log4c_rc_t * const	log4c_rc;

/**
 * load log4c resource configuration file
 *
 * @param a_filename name of file to load
 **/
extern int		log4c_load(const char* a_filename);

/**
 * @internal
 **/
extern int		log4c_rc_load(log4c_rc_t* a_rc, const char* a_filename);

__LOG4C_END_DECLS

#endif
