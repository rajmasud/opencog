/*
 * @file opencog/openpsi/OpenPsiAgent.h
 * @author Amen Belayneh <amenbelayneh@gmail.com> August 2015
 *
 * Copyright (C) 2015 OpenCog Foundation
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _OPENCOG_OPENPSIAGENT_H
#define _OPENCOG_OPENPSIAGENT_H

#include <opencog/cogserver/server/Agent.h>

namespace opencog
{

/**
 * OpenCog Agent for OpenPsi
*/

// XXX FIXME OpenCog Agents are deprecated. Brand-new code should
// not be creating agents!
class OpenPsiAgent : public Agent
{
public:
    OpenPsiAgent(CogServer&);
    virtual ~OpenPsiAgent();
    virtual void run();

    virtual const ClassInfo& classinfo() const {
        return info();
    }

    static const ClassInfo& info() {
        static const ClassInfo _ci("opencog::OpenPsiAgent");
        return _ci;
    }

}; // class

} // namespace

#endif // _OPENCOG_OPENPSIAGENT_H
