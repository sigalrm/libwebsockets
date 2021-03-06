/*
 * libwebsockets - small server side websockets and web server implementation
 *
 * Copyright (C) 2010 - 2018 Andy Green <andy@warmcat.com>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation:
 *  version 2.1 of the License.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 *
 *  This is included from private-libwebsockets.h if LWS_WITH_LIBEV
 */

#include <ev.h>

struct lws_pt_eventlibs_libev {
	struct ev_loop *io_loop;
	struct ev_timer hrtimer;
};

struct lws_io_watcher_libev {
	ev_io watcher;
};

struct lws_signal_watcher_libev {
	ev_signal watcher;
};

struct lws_context_eventlibs_libev {
	int placeholder;
};

extern struct lws_event_loop_ops event_loop_ops_ev;
