/*
    Copyright (c) 2007-2013 Contributors as noted in the AUTHORS file

    This file is part of 0MQ.

    0MQ is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    0MQ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __ZMQ_SUB_HPP_INCLUDED__
#define __ZMQ_SUB_HPP_INCLUDED__

#include "xsub.hpp"

namespace zmq
{

    class ctx_t;
    class msg_t;
    class io_thread_t;
    class socket_base_t;

    class sub_t : public xsub_t
    {
    public:

        sub_t (zmq::ctx_t *parent_, uint32_t tid_, int sid_);
        ~sub_t ();

    protected:

        int xsetsockopt (int option_, const void *optval_, size_t optvallen_);
        int xsend (zmq::msg_t *msg_);
        bool xhas_out ();

    private:

        sub_t (const sub_t&);
        const sub_t &operator = (const sub_t&);
    };

}

#endif
