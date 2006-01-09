/*
 * Copyright (c) 2005, 2006 by KoanLogic s.r.l. <http://www.koanlogic.com>
 * All rights reserved.
 *
 * This file is part of KLone, and as such it is subject to the license stated
 * in the LICENSE file which you have received as part of this distribution.
 *
 * $Id: broker.h,v 1.6 2006/01/09 12:38:37 tat Exp $
 */

#ifndef _KLONE_BROKER_H_
#define _KLONE_BROKER_H_

#include <klone/request.h>
#include <klone/response.h>
#include <klone/page.h>

#ifdef __cplusplus
extern "C" {
#endif 

struct broker_s;
typedef struct broker_s broker_t;

int broker_create(broker_t **pb);
int broker_free(broker_t* b);
int broker_is_valid_uri(broker_t *b, const char *buf, size_t len);
int broker_serve(broker_t *b, request_t *rq, response_t *rs);

#ifdef __cplusplus
}
#endif 

#endif
