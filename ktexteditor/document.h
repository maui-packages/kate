/* This file is part of the KDE project
   Copyright (C) 2001 Christoph Cullmann (cullmann@kde.org)

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef __ktexteditor_document_h__
#define __ktexteditor_document_h__

#include <kparts/part.h>

namespace KTextEditor
{

class View;

class Document : public KParts::ReadWritePart
{
  Q_OBJECT

  public:
    Document ( QObject *parent = 0, const char *name = 0 );
    virtual ~Document ();

    /**
    * Create a view that will display the document data. You can create as many
    * views as you like. When the user modifies data in one view then all other
    * views will be updated as well.
    */
    virtual View *createView ( QWidget *parent, const char *name = 0 ) = 0;

    /*
    * Accessor to the list of views.
    */
    virtual QPtrList<View> views () const = 0;
};

};

#endif
