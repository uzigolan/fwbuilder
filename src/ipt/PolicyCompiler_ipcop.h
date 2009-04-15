/* 

                          Firewall Builder

                 Copyright (C) 2009 NetCitadel, LLC

  Author:  Vadim Kurland     vadim@vk.crocodile.org

  $Id: PolicyCompiler_ipt.h 752 2009-01-30 04:54:03Z vadim $

  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef __POLICYCOMPILER_IPCOP_HH__
#define __POLICYCOMPILER_IPCOP_HH__

#include <fwbuilder/libfwbuilder-config.h>

#include "PolicyCompiler_ipt.h"

#include <map>
#include <string>


namespace fwcompiler {


    class PolicyCompiler_ipcop : public PolicyCompiler_ipt {

protected:
        
	virtual std::string myPlatformName() { return "ipcop"; }

public:

	PolicyCompiler_ipcop(libfwbuilder::FWObjectDatabase *_db,
                             const std::string &fwname,
                             bool ipv6_policy,
                             fwcompiler::OSConfigurator *_oscnf,
                             std::map<const std::string, bool> *m_n_commands_map
        ) :
        PolicyCompiler_ipt(_db, fwname, ipv6_policy, _oscnf, m_n_commands_map) {}

    };

}

#endif
