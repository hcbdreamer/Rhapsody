function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["NewGain7:2"] = "NewGain7.cpp:33&NewGain7.h:36";
	/* <Root>/Gain */
	this.urlHashMap["NewGain7:1"] = "NewGain7.cpp:32";
	/* <Root>/Out1 */
	this.urlHashMap["NewGain7:3"] = "NewGain7.cpp:31&NewGain7.h:41";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "NewGain7"};
	this.sidHashMap["NewGain7"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "NewGain7:2"};
	this.sidHashMap["NewGain7:2"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "NewGain7:1"};
	this.sidHashMap["NewGain7:1"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "NewGain7:3"};
	this.sidHashMap["NewGain7:3"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
