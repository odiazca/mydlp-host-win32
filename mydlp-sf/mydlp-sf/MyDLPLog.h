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
ref class MyDLPLog;
ref class MyDLPLogIncedent;
ref class logIncedentCompletedEventArgs;


/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432")]
public delegate System::Void logIncedentCompletedEventHandler(System::Object^  sender, logIncedentCompletedEventArgs^  e);

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432"), 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Web::Services::WebServiceBindingAttribute(Name=L"MyDLPLogBinding", Namespace=L"http://schema.mydlp.org")]
public ref class MyDLPLog : public System::Web::Services::Protocols::SoapHttpClientProtocol {
    
    private: System::Threading::SendOrPostCallback^  logIncedentOperationCompleted;
    
    /// <remarks/>
    public: event logIncedentCompletedEventHandler^  logIncedentCompleted;
    
    /// <remarks/>
    public: MyDLPLog();
    /// <remarks/>
    public: [System::Web::Services::Protocols::SoapRpcMethodAttribute(L"http://localhost/mydlp-web-manager/service.php\?class=MyDLPLog&method=logIncedent", 
        RequestNamespace=L"http://schema.mydlp.org", ResponseNamespace=L"http://schema.mydlp.org")]
    [returnvalue: System::Xml::Serialization::SoapElementAttribute(L"logIncedentReturn")]
    System::Int32 logIncedent(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass);
    
    /// <remarks/>
    public: System::IAsyncResult^  BeginlogIncedent(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass, 
                System::AsyncCallback^  callback, System::Object^  asyncState);
    
    /// <remarks/>
    public: System::Int32 EndlogIncedent(System::IAsyncResult^  asyncResult);
    
    /// <remarks/>
    public: System::Void logIncedentAsync(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass);
    
    /// <remarks/>
    public: System::Void logIncedentAsync(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass, System::Object^  userState);
    
    private: System::Void OnlogIncedentOperationCompleted(System::Object^  arg);
    
    /// <remarks/>
    public: System::Void CancelAsync(System::Object^  userState) new;
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::SoapTypeAttribute(Namespace=L"http://schema.mydlp.org")]
public ref class MyDLPLogIncedent {
    
    private: System::String^  actionField;
    
    private: System::String^  destinationField;
    
    private: System::String^  filenameField;
    
    private: System::String^  matcherField;
    
    private: System::String^  miscField;
    
    private: System::String^  protocolField;
    
    private: System::String^  rule_idField;
    
    private: System::String^  src_userField;
    
    /// <remarks/>
    public: property System::String^  action {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  destination {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  filename {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  matcher {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  misc {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  protocol {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  rule_id {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  src_user {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"wsdl", L"2.0.50727.1432"), 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class logIncedentCompletedEventArgs : public System::ComponentModel::AsyncCompletedEventArgs {
    
    private: cli::array< System::Object^  >^  results;
    
    internal: logIncedentCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, System::Boolean cancelled, 
                System::Object^  userState);
    /// <remarks/>
    public: property System::Int32 Result {
        System::Int32 get();
    }
};


inline MyDLPLog::MyDLPLog() {
    this->Url = L"http://localhost/mydlp-web-manager/service.php\?class=MyDLPLog";
}

inline System::Int32 MyDLPLog::logIncedent(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass) {
    cli::array< System::Object^  >^  results = this->Invoke(L"logIncedent", gcnew cli::array< System::Object^  >(3) {log, 
            user, pass});
    return (cli::safe_cast<System::Int32 >(results[0]));
}

inline System::IAsyncResult^  MyDLPLog::BeginlogIncedent(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass, 
            System::AsyncCallback^  callback, System::Object^  asyncState) {
    return this->BeginInvoke(L"logIncedent", gcnew cli::array< System::Object^  >(3) {log, user, pass}, callback, asyncState);
}

inline System::Int32 MyDLPLog::EndlogIncedent(System::IAsyncResult^  asyncResult) {
    cli::array< System::Object^  >^  results = this->EndInvoke(asyncResult);
    return (cli::safe_cast<System::Int32 >(results[0]));
}

inline System::Void MyDLPLog::logIncedentAsync(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass) {
    this->logIncedentAsync(log, user, pass, nullptr);
}

inline System::Void MyDLPLog::logIncedentAsync(MyDLPLogIncedent^  log, System::String^  user, System::String^  pass, System::Object^  userState) {
    if (this->logIncedentOperationCompleted == nullptr) {
        this->logIncedentOperationCompleted = gcnew System::Threading::SendOrPostCallback(this, &MyDLPLog::OnlogIncedentOperationCompleted);
    }
    this->InvokeAsync(L"logIncedent", gcnew cli::array< System::Object^  >(3) {log, user, pass}, this->logIncedentOperationCompleted, 
        userState);
}

inline System::Void MyDLPLog::OnlogIncedentOperationCompleted(System::Object^  arg) {
    {
        System::Web::Services::Protocols::InvokeCompletedEventArgs^  invokeArgs = (cli::safe_cast<System::Web::Services::Protocols::InvokeCompletedEventArgs^  >(arg));
        this->logIncedentCompleted(this, (gcnew logIncedentCompletedEventArgs(invokeArgs->Results, invokeArgs->Error, invokeArgs->Cancelled, 
                invokeArgs->UserState)));
    }
}

inline System::Void MyDLPLog::CancelAsync(System::Object^  userState) {
    __super::CancelAsync(userState);
}


inline System::String^  MyDLPLogIncedent::action::get() {
    return this->actionField;
}
inline System::Void MyDLPLogIncedent::action::set(System::String^  value) {
    this->actionField = value;
}

inline System::String^  MyDLPLogIncedent::destination::get() {
    return this->destinationField;
}
inline System::Void MyDLPLogIncedent::destination::set(System::String^  value) {
    this->destinationField = value;
}

inline System::String^  MyDLPLogIncedent::filename::get() {
    return this->filenameField;
}
inline System::Void MyDLPLogIncedent::filename::set(System::String^  value) {
    this->filenameField = value;
}

inline System::String^  MyDLPLogIncedent::matcher::get() {
    return this->matcherField;
}
inline System::Void MyDLPLogIncedent::matcher::set(System::String^  value) {
    this->matcherField = value;
}

inline System::String^  MyDLPLogIncedent::misc::get() {
    return this->miscField;
}
inline System::Void MyDLPLogIncedent::misc::set(System::String^  value) {
    this->miscField = value;
}

inline System::String^  MyDLPLogIncedent::protocol::get() {
    return this->protocolField;
}
inline System::Void MyDLPLogIncedent::protocol::set(System::String^  value) {
    this->protocolField = value;
}

inline System::String^  MyDLPLogIncedent::rule_id::get() {
    return this->rule_idField;
}
inline System::Void MyDLPLogIncedent::rule_id::set(System::String^  value) {
    this->rule_idField = value;
}

inline System::String^  MyDLPLogIncedent::src_user::get() {
    return this->src_userField;
}
inline System::Void MyDLPLogIncedent::src_user::set(System::String^  value) {
    this->src_userField = value;
}


inline logIncedentCompletedEventArgs::logIncedentCompletedEventArgs(cli::array< System::Object^  >^  results, System::Exception^  exception, 
            System::Boolean cancelled, System::Object^  userState) : 
        System::ComponentModel::AsyncCompletedEventArgs(exception, cancelled, userState) {
    this->results = results;
}

inline System::Int32 logIncedentCompletedEventArgs::Result::get() {
    this->RaiseExceptionIfNecessary();
    return (cli::safe_cast<System::Int32 >(this->results[0]));
}
}
}