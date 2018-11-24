function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:32,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:69,type:"fcn"};
this.def["NewGain7_U"] = {file: "NewGain7_cpp.html",line:19,type:"var"};
this.def["NewGain7_Y"] = {file: "NewGain7_cpp.html",line:22,type:"var"};
this.def["NewGain7_M_"] = {file: "NewGain7_cpp.html",line:25,type:"var"};
this.def["NewGain7_M"] = {file: "NewGain7_cpp.html",line:26,type:"var"};
this.def["NewGain7_step"] = {file: "NewGain7_cpp.html",line:29,type:"fcn"};
this.def["NewGain7_initialize"] = {file: "NewGain7_cpp.html",line:39,type:"fcn"};
this.def["NewGain7_terminate"] = {file: "NewGain7_cpp.html",line:54,type:"fcn"};
this.def["ExternalInputs_NewGain7_T"] = {file: "NewGain7_h.html",line:37,type:"type"};
this.def["ExternalOutputs_NewGain7_T"] = {file: "NewGain7_h.html",line:42,type:"type"};
this.def["RT_MODEL_NewGain7_T"] = {file: "NewGain7_types_h.html",line:19,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_cpp.html"] = "../ert_main.cpp";
	this.html2Root["ert_main_cpp.html"] = "ert_main_cpp.html";
	this.html2SrcPath["NewGain7_cpp.html"] = "../NewGain7.cpp";
	this.html2Root["NewGain7_cpp.html"] = "NewGain7_cpp.html";
	this.html2SrcPath["NewGain7_h.html"] = "../NewGain7.h";
	this.html2Root["NewGain7_h.html"] = "NewGain7_h.html";
	this.html2SrcPath["NewGain7_private_h.html"] = "../NewGain7_private.h";
	this.html2Root["NewGain7_private_h.html"] = "NewGain7_private_h.html";
	this.html2SrcPath["NewGain7_types_h.html"] = "../NewGain7_types.h";
	this.html2Root["NewGain7_types_h.html"] = "NewGain7_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_cpp.html","NewGain7_cpp.html","NewGain7_h.html","NewGain7_private_h.html","NewGain7_types_h.html","rtwtypes_h.html"];
