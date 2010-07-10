; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#include "scripts\products.iss"

#include "scripts\products\winversion.iss"
#include "scripts\products\fileversion.iss"

//#include "scripts\products\iis.iss"

#include "scripts\products\kb835732.iss"
//#include "scripts\products\kb886903.iss"
//#include "scripts\products\kb928366.iss"

#include "scripts\products\msi20.iss"
#include "scripts\products\msi31.iss"
#include "scripts\products\ie6.iss"

//#include "scripts\products\dotnetfx11.iss"
//#include "scripts\products\dotnetfx11lp.iss"
//#include "scripts\products\dotnetfx11sp1.iss"

#include "scripts\products\dotnetfx20.iss"
#include "scripts\products\dotnetfx20lp.iss"
#include "scripts\products\dotnetfx20sp1.iss"
#include "scripts\products\dotnetfx20sp1lp.iss"
#include "scripts\products\dotnetfx20sp2.iss"
#include "scripts\products\dotnetfx20sp2lp.iss"


//#include "scripts\products\dotnetfx35.iss"
//#include "scripts\products\dotnetfx35lp.iss"
//#include "scripts\products\dotnetfx35sp1.iss"
//#include "scripts\products\dotnetfx35sp1lp.iss"

//#include "scripts\products\mdac28.iss"
//#include "scripts\products\jet4sp8.iss"
//#include "scripts\products\sql2005express.iss"

#include "scripts\products\vcredist2008.iss"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{8DBCE471-786E-4970-87A8-776B1357C7BA}
AppName=MyDLP
AppVersion=1.0
;AppVerName=MyDLP 1.0
AppPublisher=MedraTech
AppPublisherURL=http://www.medratech.com/
AppSupportURL=http://www.medratech.com/
AppUpdatesURL=http://www.medratech.com/
DefaultDirName={pf}\MyDLP
DefaultGroupName=MyDLP
DisableProgramGroupPage=yes
LicenseFile=other\license.txt
OutputDir=.
OutputBaseFilename=mydlp-setup
Compression=lzma
SolidCompression=yes
PrivilegesRequired=admin
ArchitecturesAllowed=x86

[Languages]
Name: en; MessagesFile: compiler:Default.isl
Name: de; MessagesFile: compiler:Languages\German.isl

[Tasks]
Name: desktopicon; Description: {cm:CreateDesktopIcon}; GroupDescription: {cm:AdditionalIcons}; Flags: unchecked

[Files]
Source: ..\MyDLP-Win-GUI\MyDLP-Win-GUI\bin\Release\MyDLP-Win-GUI.exe; DestDir: {app}\bin
Source: ..\mh-clamwin\contrib\msvc\Release\Win32\libclamav.dll; DestDir: {app}\bin
Source: ..\mh-clamwin\contrib\msvc\Release\Win32\libclamunrar_iface.dll; DestDir: {app}\bin; Flags: ignoreversion
Source: ..\mh-clamwin\contrib\msvc\Release\Win32\libclamunrar.dll; DestDir: {app}\bin; Flags: ignoreversion
;Source: ..\mh-clamwin\contrib\msvc\Release\Win32\libclamav_llvmd.dll; DestDir: {app}\bin
Source: ..\mh-clamwin\contrib\msvc\pcre\pcre.dll; DestDir: {app}\bin
Source: ..\MyDLP-Win-Service\MyDLP-Win-Service\bin\Release\MyDLP-Host.exe; DestDir: {app}\bin
Source: ..\MyDLP-Win-Service\MyDLP-Win-Service\bin\Release\MyDLP-Host.exe; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\mydlp-sf.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\log4net.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\NRtfTree.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\PDFBox-0.7.3.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\FontBox-0.1.0-dev.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\IFilterParser.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\IKVM.GNU.Classpath.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\Release\IKVM.Runtime.dll; DestDir: {app}\bin
Source: ..\mydlp-sf\mydlp-sf\fsmf\MyDLPScanner.inf; DestDir: {app}\bin
Source: ..\mydlp-sf\mydlp-sf\fsmf\mydlpscanner_x86.sys; DestName: mydlpscanner.sys; DestDir: {app}\bin; Check: Isx86
Source: ..\mydlp-sf\mydlp-sf\fsmf\mydlpscanner_x64.sys; DestName: mydlpscanner.sys; DestDir: {app}\bin; Check: IsAMD64
Source: ..\mydlp-sf\mydlp-sf\fsmf\mydlpscanner_ia64.sys; DestName: mydlpscanner.sys; DestDir: {app}\bin; Check: IsIArch64
Source: ..\MyDLP-Win-GUI\MyDLP-Win-GUI\bin\Release\en-US\*; DestDir: {app}\bin\en-US; Flags: recursesubdirs createallsubdirs
Source: ..\MyDLP-Win-GUI\MyDLP-Win-GUI\bin\Release\tr-TR\*; DestDir: {app}\bin\tr-TR; Flags: recursesubdirs createallsubdirs
Source: ..\MyDLP-Win-GUI\MyDLP-Win-GUI\bin\Release\images\*; DestDir: {app}\bin\images; Flags: recursesubdirs createallsubdirs
Source: other\conf\device.conf; DestDir: {app}\conf; Flags: onlyifdoesntexist
Source: other\conf\screencapture.conf; DestDir: {app}\conf; Flags: onlyifdoesntexist
Source: other\conf\sensfile.conf; DestDir: {app}\conf; Flags: onlyifdoesntexist
Source: other\conf\service.conf; DestDir: {app}\conf; Flags: onlyifdoesntexist
;Source: other\redist\vcredist_x86.exe; DestDir: {app}\temp
Source: other\redist\msjava.dll; DestDir: {sys}; Flags: onlyifdoesntexist
Source: ..\mydlp-sf\dependency\WindowsHookLib.dll; DestDir: {app}\bin
Source: ..\MyDLP-Win-GUI\dependency\ICSharpCode.SharpZipLib.dll; DestDir: {app}\bin


[Icons]
Name: {group}\MyDLP; Filename: {app}\bin\MyDLP-Win-GUI.exe
Name: {group}\{cm:UninstallProgram,MyDLP}; Filename: {uninstallexe}
Name: {commonstartup}\MyDLP; Filename: {app}\bin\MyDLP-Win-GUI.exe
Name: {commondesktop}\MyDLP; Filename: {app}\bin\MyDLP-Win-GUI.exe; Tasks: desktopicon

[Run]
;Filename: {app}\temp\vcredist_x86.exe
Filename: {sys}\rundll32.exe; Parameters: syssetup,SetupInfObjectInstallAction DefaultInstall 128 .\MyDLPScanner.inf; WorkingDir: {app}\bin; Flags: 32bit
Filename: net.exe; Parameters: start mydlp-scanner
Filename: {app}\bin\MyDLP-Host.exe; Parameters: --install
Filename: {app}\bin\MyDLP-Host.exe; Parameters: --start
Filename: {app}\bin\MyDLP-Win-GUI.exe; Description: {cm:LaunchProgram,MyDLP}; Flags: nowait postinstall skipifsilent
;Filename: rundll32.exe {app}\MyDLPScanner.inf; Description: Install drivers automatically; StatusMsg: Installing drivers...; Flags: runascurrentuser postinstall
;Filename: {sys}\rundll32.exe; Parameters: "setupapi,InstallHinfSection DefaultInstall 132 MyDLPScanner.inf"; WorkingDir: {app}; Flags: 32bit; Check: IsX86;

[UninstallRun]
Filename: {app}\bin\MyDLP-Host.exe; Parameters: --uninstall
Filename: net.exe; Parameters: stop mydlp-scanner

[Registry]
Root: HKLM; Subkey: SOFTWARE\MyDLP; ValueType: string; ValueName: Install_Dir; ValueData: {app}; Tasks: ; Languages: ; Flags: uninsdeletekey createvalueifdoesntexist
Root: HKLM; Subkey: SOFTWARE\MyDLP; ValueType: string; ValueName: Bin_Dir; ValueData: {app}\bin; Tasks: ; Languages: ; Flags: uninsdeletekey createvalueifdoesntexist
Root: HKLM; Subkey: SOFTWARE\MyDLP; ValueType: string; ValueName: Config_Dir; ValueData: {app}\conf; Tasks: ; Languages: ; Flags: uninsdeletekey createvalueifdoesntexist
Root: HKLM; Subkey: SOFTWARE\MyDLP; ValueType: string; ValueName: Log_Dir; ValueData: {app}\log; Tasks: ; Languages: ; Flags: uninsdeletekey createvalueifdoesntexist

[Dirs]
Name: {app}\log; Flags: uninsneveruninstall
Name: {app}\conf; Flags: uninsneveruninstall
Name: {app}\bin
Name: {app}\temp; Flags: deleteafterinstall
[Code]
function InitializeSetup(): Boolean;
begin
	//init windows version
	initwinversion();
	//check if dotnetfx20 can be installed on this OS
	if not minwinspversion(5, 0, 3) then begin
		MsgBox(FmtMessage(CustomMessage('depinstall_missing'), [CustomMessage('win2000sp3_title')]), mbError, MB_OK);
		exit;
	end;
	if not minwinspversion(5, 1, 2) then begin
		MsgBox(FmtMessage(CustomMessage('depinstall_missing'), [CustomMessage('winxpsp2_title')]), mbError, MB_OK);
		exit;
	end;

	//install .netfx 2.0 sp2 if possible; if not sp1 if possible; if not .netfx 2.0

	if minwinversion(5, 1) then begin
		msi31('3.1');
		dotnetfx20sp2();
		dotnetfx20sp2lp();
		vcredist2008();
	end else begin
		if minwinversion(5, 0) and minwinspversion(5, 0, 4) then begin
			kb835732();
			msi31('3.0');
			dotnetfx20sp1();
			dotnetfx20sp1lp();
			vcredist2008();
		end else begin
			dotnetfx20();
			dotnetfx20lp();
			vcredist2008();
		end;
	end;

	Result := true;
end;

function IsAMD64: Boolean;
begin
	Result := IsWin64 and (ProcessorArchitecture = paX64);
end;

function IsIArch64: Boolean;
begin
	Result := IsWin64 and (ProcessorArchitecture = paIA64);
end;

function Isx86: Boolean;
begin
	Result := not IsWin64;
end;
