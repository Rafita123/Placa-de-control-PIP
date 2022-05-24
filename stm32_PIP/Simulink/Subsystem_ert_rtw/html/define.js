function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:35,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:72,type:"fcn"};
this.def["p_SignalC1"] = {file: "Subsystem_c.html",line:23,type:"var"};
this.def["p_SignalC2"] = {file: "Subsystem_c.html",line:24,type:"var"};
this.def["p_SignalC3"] = {file: "Subsystem_c.html",line:25,type:"var"};
this.def["p_SignalC4"] = {file: "Subsystem_c.html",line:26,type:"var"};
this.def["rtVelocidad_linealizada"] = {file: "Subsystem_c.html",line:27,type:"var"};
this.def["rtdelta_w"] = {file: "Subsystem_c.html",line:28,type:"var"};
this.def["u"] = {file: "Subsystem_c.html",line:29,type:"var"};
this.def["Subsystem.c:rtM_"] = {file: "Subsystem_c.html",line:32,type:"var"};
this.def["rtM"] = {file: "Subsystem_c.html",line:33,type:"var"};
this.def["Subsystem_step"] = {file: "Subsystem_c.html",line:36,type:"fcn"};
this.def["Subsystem_initialize"] = {file: "Subsystem_c.html",line:105,type:"fcn"};
this.def["RT_MODEL"] = {file: "Subsystem_h.html",line:37,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["int64_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["ulonglong_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:94,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Subsystem_c.html"] = "../Subsystem.c";
	this.html2Root["Subsystem_c.html"] = "Subsystem_c.html";
	this.html2SrcPath["Subsystem_h.html"] = "../Subsystem.h";
	this.html2Root["Subsystem_h.html"] = "Subsystem_h.html";
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
"ert_main_c.html","Subsystem_c.html","Subsystem_h.html","rtwtypes_h.html"];
