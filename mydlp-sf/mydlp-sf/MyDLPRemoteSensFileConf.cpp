/* 
 *  Copyright (C) 2010 Medra Teknoloji
 *
 *  Authors: Burak OGUZ <burak@medra.com.tr>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */
#include "StdAfx.h"
#include "MyDLPRemoteSensFileConf.h"

using namespace System;
using namespace System::Xml;
using namespace System::Xml::Schema;
using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace Microsoft::Win32;

namespace mydlpsf {

	MyDLPRemoteSensFileConf::MyDLPRemoteSensFileConf(void)
	{
		regexVal = gcnew System::Collections::Generic::List<MyDLPClamRegex ^>();
		md5Val = gcnew System::Collections::Generic::List<MyDLPMD5File ^>();;
		blockEncrypted = true;
		blockEncrypted_ruleid = "0";
		blockBroken = true;
		blockBroken_ruleid = "0";
		fileGroups = gcnew System::Collections::Generic::List<String ^>();
		fileGroups_ruleid = "0";
		enableCC = true;
		maxCCCount = 1;
		enableCC_ruleid = "0";
		enableRegex = true;
		maxRegexCount = 1;
		enableTRId = true;
		maxTRIdCount = 1;
		enableTRId_ruleid = "0";
		enableIBAN = true;
		maxIBANCount = 1;
		enableIBAN_ruleid = "0";
		enableSSN = true;
		maxSSNCount = 1;	
		enableSSN_ruleid = "0";
		
	}

	MyDLPRemoteSensFileConf ^MyDLPRemoteSensFileConf::GetInstance()
	{
		if(sensFileConf == nullptr)
		{
			sensFileConf = gcnew MyDLPRemoteSensFileConf();
		}

		return sensFileConf;
	}

	void MyDLPRemoteSensFileConf::SetInstance(MyDLPRemoteSensFileConf ^sensFileConf)
	{
		mydlpsf::MyDLPRemoteSensFileConf::sensFileConf = sensFileConf;
	}

	void MyDLPRemoteSensFileConf::Serialize()
	{
		try
		{
			RegistryKey ^key = Registry::LocalMachine->OpenSubKey( "Software\\MyDLP" );
			String ^filename = key->GetValue("Config_Dir") + "\\" + confFileName;
			XmlSerializer ^serializer = gcnew XmlSerializer(MyDLPRemoteSensFileConf::GetInstance()->GetType());
			TextWriter ^writer = gcnew StreamWriter(filename);
			serializer->Serialize(writer, MyDLPRemoteSensFileConf::GetInstance());
			writer->Close();
		} 
		catch(Exception ^ex)
		{
			throw gcnew Exception("MyDLPRemoteSensFileConf::Serialize", ex);
		}
	}

	void MyDLPRemoteSensFileConf::Deserialize()
	{
		try
		{
			RegistryKey ^key = Registry::LocalMachine->OpenSubKey( "Software\\MyDLP" );
			String ^filename = key->GetValue("Config_Dir") + "\\" + confFileName;
			XmlSerializer ^serializer = gcnew XmlSerializer(MyDLPRemoteSensFileConf::GetInstance()->GetType());
			FileStream ^fs = gcnew FileStream(filename, FileMode::Open, FileAccess::ReadWrite);
			XmlReader ^reader = gcnew XmlTextReader(fs);
			MyDLPRemoteSensFileConf::SetInstance(dynamic_cast<MyDLPRemoteSensFileConf ^> (serializer->Deserialize(reader)));
			fs->Close();
		} 
		catch(Exception ^ex)
		{
			throw gcnew Exception("MyDLPRemoteSensFileConf::Deserialize", ex);
		}
	}
}