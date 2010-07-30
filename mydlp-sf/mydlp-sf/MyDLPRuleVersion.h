﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Xml.dll>
#using <System.Web.Services.dll>
#using <System.EnterpriseServices.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// This source code was auto-generated by wsdl, Version=2.0.50727.1432.
// 
using namespace System::Diagnostics;
using namespace System::Web::Services;
using namespace System::ComponentModel;
using namespace System::Web::Services::Protocols;
using namespace System;
using namespace System::Xml::Serialization;
using namespace System;

namespace mydlpsf {
	namespace soap {

ref class MyDLPRuleVersion;
ref class getRuleVersionCompletedEventArgs;


/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432")]
public delegate System::Void getRuleVersionCompletedEventHandler(System::Object^  sender, getRuleVersionCompletedEventArgs^  e);

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432"), 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Web::Services::WebServiceBindingAttribute(Name=L"MyDLPRuleVersionBinding", Namespace=L"http://schema.mydlp.org")]
public ref class MyDLPRuleVersion : public System::Web::Services::Protocols::SoapHttpClientProtocol {
    
    private: System::Threading::SendOrPostCallback^  getRuleVersionOperationCompleted;
    
    /// <remarks/>
    public: event getRuleVersionCompletedEventHandler^  getRuleVersionCompleted;
    
    /// <remarks/>
    public: MyDLPRuleVersion();
    /// <remarks/>
    public: [System::Web::Services::Protocols::SoapRpcMethodAttribute(L"http://localhost/mydlp-web-manager/service.php\?class=MyDLPRuleVersion&method=getR" 
L"uleVersion", 
        RequestNamespace=L"http://schema.mydlp.org", ResponseNamespace=L"http://schema.mydlp.org")]
    [returnvalue: System::Xml::Serialization::SoapElementAttribute(L"getRuleVersionReturn")]
    System::Int32 getRuleVersion();
    
    /// <remarks/>
    public: System::IAsyncResult^  BegingetRuleVersion(System::AsyncCallback^  callback, System::Object^  asyncState);
    
    /// <remarks/>
    public: System::Int32 EndgetRuleVersion(System::IAsyncResult^  asyncResult);
    
    /// <remarks/>
    public: System::Void getRuleVersionAsync();
    
    /// <remarks/>
    public: System::Void getRuleVersionAsync(System::Object^  userState);
    
    private: System::Void OngetRuleVersionOperationCompleted(System::Object^  arg);
    
    /// <remarks/>
    public: System::Void CancelAsync(System::Object^  userState) new;
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432"), 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class getRuleVersionCompletedEventArgs : public System::ComponentModel::AsyncCompletedEventArgs {
    
    private: cli::array< System::Object^  >^  results;
    
    internal: getRuleVersionCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, System::Boolean cancelled, 
                System::Object^  userState);
    /// <remarks/>
    public: property System::Int32 Result {
        System::Int32 get();
    }
};


inline MyDLPRuleVersion::MyDLPRuleVersion() {
    this->Url = L"http://localhost/mydlp-web-manager/service.php\?class=MyDLPRuleVersion";
}

inline System::Int32 MyDLPRuleVersion::getRuleVersion() {
    cli::array< System::Object^  >^  results = this->Invoke(L"getRuleVersion", gcnew cli::array< System::Object^  >(0));
    return (cli::safe_cast<System::Int32 >(results[0]));
}

inline System::IAsyncResult^  MyDLPRuleVersion::BegingetRuleVersion(System::AsyncCallback^  callback, System::Object^  asyncState) {
    return this->BeginInvoke(L"getRuleVersion", gcnew cli::array< System::Object^  >(0), callback, asyncState);
}

inline System::Int32 MyDLPRuleVersion::EndgetRuleVersion(System::IAsyncResult^  asyncResult) {
    cli::array< System::Object^  >^  results = this->EndInvoke(asyncResult);
    return (cli::safe_cast<System::Int32 >(results[0]));
}

inline System::Void MyDLPRuleVersion::getRuleVersionAsync() {
    this->getRuleVersionAsync(nullptr);
}

inline System::Void MyDLPRuleVersion::getRuleVersionAsync(System::Object^  userState) {
    if (this->getRuleVersionOperationCompleted == nullptr) {
        this->getRuleVersionOperationCompleted = gcnew System::Threading::SendOrPostCallback(this, &MyDLPRuleVersion::OngetRuleVersionOperationCompleted);
    }
    this->InvokeAsync(L"getRuleVersion", gcnew cli::array< System::Object^  >(0), this->getRuleVersionOperationCompleted, userState);
}

inline System::Void MyDLPRuleVersion::OngetRuleVersionOperationCompleted(System::Object^  arg) {
    {
        System::Web::Services::Protocols::InvokeCompletedEventArgs^  invokeArgs = (cli::safe_cast<System::Web::Services::Protocols::InvokeCompletedEventArgs^  >(arg));
        this->getRuleVersionCompleted(this, (gcnew getRuleVersionCompletedEventArgs(invokeArgs->Results, invokeArgs->Error, invokeArgs->Cancelled, 
                invokeArgs->UserState)));
    }
}

inline System::Void MyDLPRuleVersion::CancelAsync(System::Object^  userState) {
    __super::CancelAsync(userState);
}


inline getRuleVersionCompletedEventArgs::getRuleVersionCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, 
            System::Boolean cancelled, System::Object^  userState) : 
        System::ComponentModel::AsyncCompletedEventArgs(exception, cancelled, userState) {
    this->results = results;
}

inline System::Int32 getRuleVersionCompletedEventArgs::Result::get() {
    this->RaiseExceptionIfNecessary();
    return (cli::safe_cast<System::Int32 >(this->results[0]));
}
}
}