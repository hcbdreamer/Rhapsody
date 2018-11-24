I-Logix-RPY-Archive version 8.13.0 C++ 9794446
{ IProject 
	- _id = GUID 794e1a6f-5226-46be-bd1d-f724fd0df35f;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "TestConductor";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 11;
							- value = 
							{ IProperty 
								- _Name = "AcknowledgeApplyChanges";
								- _Value = "True";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "AddQuotesToCharAndStringArguments";
								- _Value = "True";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "CreateTestArchitectureMode";
								- _Value = "Standard";
								- _Type = Enum;
								- _ExtraTypeInfo = "Standard,Advanced";
							}
							{ IProperty 
								- _Name = "CreateTestArchitectureTransparency";
								- _Value = "BlackBox";
								- _Type = Enum;
								- _ExtraTypeInfo = "BlackBox,GreyBox";
							}
							{ IProperty 
								- _Name = "CreateTestArchitectureUsingGlobalObjects";
								- _Value = "False";
								- _Type = Bool;
							}
							{ IProperty 
								- _Name = "MapSDToTestArchitectureMode";
								- _Value = "Strict";
								- _Type = Enum;
								- _ExtraTypeInfo = "Strict,Weak";
							}
							{ IProperty 
								- _Name = "OverwriteTestContextDiagram";
								- _Value = "Never";
								- _Type = Enum;
								- _ExtraTypeInfo = "Never,Always,AskUser";
							}
							{ IProperty 
								- _Name = "ReplacementCreationMode";
								- _Value = "Wrapper";
								- _Type = Enum;
								- _ExtraTypeInfo = "Wrapper,Stub";
							}
							{ IProperty 
								- _Name = "ReportLocation";
								- _Value = "";
								- _Type = String;
							}
							{ IProperty 
								- _Name = "TestCaseExecutionOrder";
								- _Value = "BrowserOrder";
								- _Type = Enum;
								- _ExtraTypeInfo = "BrowserOrder,DeclarationOrder";
							}
							{ IProperty 
								- _Name = "TestingMode";
								- _Value = "AssertionBased";
								- _Type = Enum;
								- _ExtraTypeInfo = "AnimationBased,AssertionBased";
							}
						}
					}
				}
			}
		}
	}
	- _name = "CashRegister";
	- _modifiedTimeWeak = 1.26.2018::5:29:0;
	- _description = { IDescription 
		- _textRTF = "{\\rtf1\\ansi\\ansicpg936\\deff0\\deflang1033\\deflangfe2052{\\fonttbl{\\f0\\fswiss\\fcharset0 Arial;}{\\f1\\fnil\\fcharset134 Arial;}}
\\viewkind4\\uc1\\pard\\lang2052\\f0\\fs20 This is a simple CashRegister system that is the case study example for Rhapsody in C++ Tool trainning.\\par
\\par
Author:Charles\\par
Date:2017.11.22\\f1\\par
}";
	}
	- _lastID = 5;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "RequirementsPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "RequirementsPkg";
		- _id = GUID e70c14d2-d8c3-40da-ae6c-ab84c158118d;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "TesterPrototype.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "TesterPrototype";
		- _id = GUID cae0374e-56e7-42d7-9470-0139f53c855e;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 35;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 7;
		- value = 
		{ ISubsystem 
			- fileName = "RequirementsPkg";
			- _id = GUID e70c14d2-d8c3-40da-ae6c-ab84c158118d;
		}
		{ ISubsystem 
			- fileName = "AnalysisPkg";
			- _id = GUID 376697f2-5aa1-4736-baf3-74fa64b5b03e;
		}
		{ ISubsystem 
			- fileName = "CashRegisterPkg";
			- _id = GUID 25d82fae-5697-44a4-9b99-ca8b27c112bf;
		}
		{ ISubsystem 
			- fileName = "HardwarePkg";
			- _id = GUID a3a2510e-a4f6-4a76-aaa2-5d8551b05ce3;
		}
		{ ISubsystem 
			- fileName = "InterfacePkg";
			- _id = GUID 2006e191-bb64-40f3-a723-2bcd09dd0012;
		}
		{ IProfile 
			- fileName = "UMLPerspectives";
			- _persistAs = "$OMROOT\\Settings\\UMLPerspectives";
			- _id = GUID d24d9192-bc4f-48a2-a4e1-fdaebbdfa6b6;
			- _partOfTheModelKind = referenceunit;
		}
		{ IProfile 
			- fileName = "TestingProfile";
			- _persistAs = "$OMROOT\\Profiles\\TestingProfile\\TestingProfile_rpy";
			- _id = GUID 74ef0591-fbb4-4279-a005-822d9597ffc8;
			- _partOfTheModelKind = referenceunit;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDiagram 
			- _id = GUID 31dc543a-0236-445d-927f-a67f617179b0;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Depends";
								- Properties = { IRPYRawContainer 
									- size = 5;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "128,128,128";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineStyle";
										- _Value = "2";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Package";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,216,151";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "109,163,217";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
				}
			}
			- _name = "Domains Overview";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "11.27.2017::13:43:15";
			- _graphicChart = { CGIClassChart 
				- _id = GUID c6ea8ba8-69e6-4dd6-aa27-7dd7017d6aa9;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IDiagram";
					- _id = GUID 31dc543a-0236-445d-927f-a67f617179b0;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 0;
				- m_bIsPreferencesInitialized = 0;
				- elementList = 8;
				{ CGIClass 
					- _id = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "RequirementsPkg.sbs";
						- _subsystem = "RequirementsPkg";
						- _class = "";
						- _name = "TopLevel";
						- _id = GUID 2df6163e-8801-4e14-9f07-ceca89a95708;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "TopLevel";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID 727689a4-a57d-4e86-9553-7fbe9de71cd3;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID f59e60a2-0634-4a3b-a55c-4501655b59b2;
							- m_name = "Operation";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIPackage 
					- _id = GUID 7b1ae17f-2a88-4339-b3c1-39a9bf0ce5a0;
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "AnalysisPkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "AnalysisPkg";
						- _id = GUID 376697f2-5aa1-4736-baf3-74fa64b5b03e;
					}
					- m_pParent = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_name = { CGIText 
						- m_str = "AnalysisPkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.177632 0 0 0.13119 84 46 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1151  1216 1151  1216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIPackage 
					- _id = GUID cb498559-09d3-485e-a7f5-ca791c34c5af;
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "RequirementsPkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "RequirementsPkg";
						- _id = GUID e70c14d2-d8c3-40da-ae6c-ab84c158118d;
					}
					- m_pParent = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_name = { CGIText 
						- m_str = "RequirementsPkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.177632 0 0 0.13119 430 46 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1151  1216 1151  1216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIPackage 
					- _id = GUID 3abb1507-7a75-4a12-9c90-9498da5b4009;
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "CashRegisterPkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "CashRegisterPkg";
						- _id = GUID 25d82fae-5697-44a4-9b99-ca8b27c112bf;
					}
					- m_pParent = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_name = { CGIText 
						- m_str = "CashRegisterPkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.177632 0 0 0.13119 84 254 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1151  1216 1151  1216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIPackage 
					- _id = GUID 10319481-ceee-488a-892f-604fe4884df4;
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "HardwarePkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "HardwarePkg";
						- _id = GUID a3a2510e-a4f6-4a76-aaa2-5d8551b05ce3;
					}
					- m_pParent = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_name = { CGIText 
						- m_str = "HardwarePkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.177632 0 0 0.13119 430 254 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1151  1216 1151  1216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIPackage 
					- _id = GUID 627e9e28-bde2-4bbb-8215-aa5c1e53a556;
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "InterfacePkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "InterfacePkg";
						- _id = GUID 2006e191-bb64-40f3-a723-2bcd09dd0012;
					}
					- m_pParent = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
					- m_name = { CGIText 
						- m_str = "InterfacePkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.177632 0 0 0.13119 269 478 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1151  1216 1151  1216 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIInheritance 
					- _id = GUID 8b9c9cb6-a587-4457-ab36-96258242c336;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 128;
					- m_pModelObject = { IHandle 
						- _m2Class = "IDependency";
						- _filename = "CashRegisterPkg.sbs";
						- _subsystem = "CashRegisterPkg";
						- _class = "";
						- _name = "InterfacePkg";
						- _id = GUID 446c93c6-4b95-4497-9f2e-7ecba5a6e50a;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "InterfacePkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4104;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 3abb1507-7a75-4a12-9c90-9498da5b4009;
					- m_sourceType = 'F';
					- m_pTarget = GUID 627e9e28-bde2-4bbb-8215-aa5c1e53a556;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 0;
					- m_SourcePort = 676 1151 ;
					- m_TargetPort = 186 0 ;
					- m_ShowName = 0;
					- m_ShowStereotype = 1;
				}
				{ CGIInheritance 
					- _id = GUID 3540d2a8-fdeb-4b0d-8241-75506a6c5f85;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 128;
					- m_pModelObject = { IHandle 
						- _m2Class = "IDependency";
						- _filename = "HardwarePkg.sbs";
						- _subsystem = "HardwarePkg";
						- _class = "";
						- _name = "InterfacePkg";
						- _id = GUID f9f00779-08eb-4d72-966b-4859fa36dbf2;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "InterfacePkg";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4104;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 10319481-ceee-488a-892f-604fe4884df4;
					- m_sourceType = 'F';
					- m_pTarget = GUID 627e9e28-bde2-4bbb-8215-aa5c1e53a556;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 0;
					- m_SourcePort = 332 1151 ;
					- m_TargetPort = 619 0 ;
					- m_ShowName = 0;
					- m_ShowStereotype = 1;
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID c7784e8d-dc73-437c-8df4-f7cd43490bf2;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "RequirementsPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "RequirementsPkg";
				- _id = GUID e70c14d2-d8c3-40da-ae6c-ab84c158118d;
			}
		}
	}
	- MSCS = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "TesterPrototype";
			- _id = GUID cae0374e-56e7-42d7-9470-0139f53c855e;
		}
	}
}

