/*
 * Copyright 2013-2016 Emmanuel Engelhart <kelson@kiwix.org>
 * Copyright 2016 Matthieu Gautier <mgautier@kymeria.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU  General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef OPENZIM_ZIMWRITERFS_TOOLS_H
#define OPENZIM_ZIMWRITERFS_TOOLS_H

#include <gumbo.h>
#include <map>
#include <string>

std::string extractRedirectUrlFromHtml(const GumboVector* head_children);
void getLinks(GumboNode* node, std::map<std::string, bool>& links);

std::string generateDate();
std::string parseAndAdaptHtml(std::string& data, std::string& title, char ns, const std::string& url, bool detectRedirects);
void adaptCss(std::string& data, char ns, const std::string& url);


#endif  // OPENZIM_ZIMWRITERFS_TOOLS_H
