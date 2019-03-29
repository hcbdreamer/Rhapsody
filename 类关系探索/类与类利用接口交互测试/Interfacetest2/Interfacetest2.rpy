I-Logix-RPY-Archive version 8.13.0 C++ 9794446
{ IProject 
	- _id = GUID 66878eea-8a42-4478-ac75-e8abfcd20a92;
	- _myState = 8192;
	- _name = "Interfacetest2";
	- _modifiedTimeWeak = 1.23.2018::12:32:46;
	- _lastID = 4;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "mainPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "mainPkg";
		- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID d799724c-01e6-41a2-b015-7446aab63c4b;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
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
		- size = 4;
		- value = 
		{ ISubsystem 
			- fileName = "mainPkg";
			- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
		}
		{ ISubsystem 
			- fileName = "HardwarePkg";
			- _id = GUID a1f9a14f-115d-4548-86d7-e6332194da50;
		}
		{ ISubsystem 
			- fileName = "InterfacePkg";
			- _id = GUID 1b282770-18de-4bca-b5c9-7296eacd6fc6;
		}
		{ IProfile 
			- fileName = "UMLPerspectives";
			- _persistAs = "$OMROOT\\Settings\\UMLPerspectives";
			- _id = GUID d24d9192-bc4f-48a2-a4e1-fdaebbdfa6b6;
			- _partOfTheModelKind = referenceunit;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDiagram 
			- _id = GUID c6c4b7d7-e231-4562-a015-258dc58717d5;
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
			- _name = "PkgRelation";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "1.20.2018::8:43:52";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 892c997f-f904-4134-98f0-f99d2aebe9cf;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IDiagram";
					- _id = GUID c6c4b7d7-e231-4562-a015-258dc58717d5;
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
				- elementList = 6;
				{ CGIClass 
					- _id = GUID cc5fdf7a-ea2b-4f21-8d05-b93a81605421;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "mainPkg.sbs";
						- _subsystem = "mainPkg";
						- _class = "";
						- _name = "TopLevel";
						- _id = GUID da747033-bddc-4e77-9f11-cc1dfd86efc1;
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
							- _id = GUID b6f7be5d-e715-4f8c-b8ae-41d1832cc1af;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID aa501fa3-318b-4350-b812-b3fd6cf6071f;
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
					- _id = GUID ccc2a024-15a1-4d18-89cb-fee5d769a4d1;
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
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "mainPkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "mainPkg";
						- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
					}
					- m_pParent = GUID cc5fdf7a-ea2b-4f21-8d05-b93a81605421;
					- m_name = { CGIText 
						- m_str = "mainPkg";
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
					- m_transform = 0.129112 0 0 0.0834057 107 38.2848 ;
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
					- _id = GUID f278f8f9-3496-447f-9ea4-3e65e877eb54;
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
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "HardwarePkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "HardwarePkg";
						- _id = GUID a1f9a14f-115d-4548-86d7-e6332194da50;
					}
					- m_pParent = GUID cc5fdf7a-ea2b-4f21-8d05-b93a81605421;
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
					- m_transform = 0.143092 0 0 0.0834057 373 38.2848 ;
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
					- _id = GUID d7a1cf21-d7eb-4785-ad6b-915b92d346ad;
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
												- _Name = "FitBoxToItsTextuals";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 127;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "InterfacePkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "InterfacePkg";
						- _id = GUID 1b282770-18de-4bca-b5c9-7296eacd6fc6;
					}
					- m_pParent = GUID cc5fdf7a-ea2b-4f21-8d05-b93a81605421;
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
					- m_transform = 0.155428 0 0 0.0938314 248 248.695 ;
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
					- _id = GUID 6c7a2b3e-6148-4d89-b08f-c6147af31870;
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
						- _filename = "mainPkg.sbs";
						- _subsystem = "mainPkg";
						- _class = "";
						- _name = "InterfacePkg";
						- _id = GUID aef43715-ce31-4bf6-adf1-a49ad50a0dd3;
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
					- m_pSource = GUID ccc2a024-15a1-4d18-89cb-fee5d769a4d1;
					- m_sourceType = 'F';
					- m_pTarget = GUID d7a1cf21-d7eb-4785-ad6b-915b92d346ad;
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
					- m_SourcePort = 782 1148 ;
					- m_TargetPort = 174 3 ;
					- m_ShowName = 0;
					- m_ShowStereotype = 1;
				}
				{ CGIInheritance 
					- _id = GUID 50f7c654-7053-412f-9fa1-6a88dc994fb2;
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
						- _id = GUID 2ac07f2d-3e2b-40c3-8c75-5cbc712e780f;
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
					- m_pSource = GUID f278f8f9-3496-447f-9ea4-3e65e877eb54;
					- m_sourceType = 'F';
					- m_pTarget = GUID d7a1cf21-d7eb-4785-ad6b-915b92d346ad;
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
					- m_SourcePort = 622 1148 ;
					- m_TargetPort = 592 3 ;
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
				- m_pRoot = GUID cc5fdf7a-ea2b-4f21-8d05-b93a81605421;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "mainPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "mainPkg";
				- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
			}
		}
	}
	- MSCS = { IRPYRawContainer 
		- size = 3;
		- value = 
		{ IMSC 
			- _id = GUID a66175d9-03db-41a5-8cb2-26a8ec4d708a;
			- _myState = 10240;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 2;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 4;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Condition_Mark";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,67,39";
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
							{ IPropertyMetaclass 
								- _Name = "EnvironmentLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
							{ IPropertyMetaclass 
								- _Name = "InstanceLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Message";
								- Properties = { IRPYRawContainer 
									- size = 4;
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
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
					{ IPropertySubject 
						- _Name = "SequenceDiagram";
						- Metaclasses = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "General";
								- Properties = { IRPYRawContainer 
									- size = 3;
									- value = 
									{ IProperty 
										- _Name = "ClassCentricMode";
										- _Value = "True";
										- _Type = Bool;
									}
									{ IProperty 
										- _Name = "CleanupRealized";
										- _Value = "True";
										- _Type = Bool;
									}
									{ IProperty 
										- _Name = "RealizeMessages";
										- _Value = "True";
										- _Type = Bool;
									}
								}
							}
						}
					}
				}
			}
			- _name = "sequencediagram_3";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "1.23.2018::12:35:4";
			- _graphicChart = { CGIMscChart 
				- vLadderMargin = 20;
				- m_usingActivationBar = 0;
				- _id = GUID dce24bda-b337-4cd9-81f2-c3d36ad596d0;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IMSC";
					- _id = GUID a66175d9-03db-41a5-8cb2-26a8ec4d708a;
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
				- elementList = 20;
				{ CGIBox 
					- _id = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_type = 108;
					- m_pModelObject = { IHandle 
						- _m2Class = "ICollaboration";
						- _id = GUID 61d3d876-66fd-4b8f-8213-9b9beabffc29;
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
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscColumnCR 
					- _id = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
					}
					- m_pParent = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_name = { CGIText 
						- m_str = ":main";
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
					- m_transform = 1 0 0 0.0207878 654 50 ;
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
					- m_position = 4 0 0  0 49885  96 49885  96 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 60744a70-6f16-4151-a05f-0f28881f9075;
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID adac25d5-347b-4054-bd82-20d3670fa078;
					}
					- m_pParent = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_name = { CGIText 
						- m_str = ":Iinput";
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
					- m_transform = 0.875 0 0 0.0207878 515 50 ;
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
					- m_position = 4 0 0  0 49885  96 49885  96 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID e4cfc025-65a6-4cd0-9b42-45a120206f8c;
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 88c40de0-d701-4a6d-b36e-c51545251ff4;
					}
					- m_pParent = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_name = { CGIText 
						- m_str = ":Idisplay";
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
					- m_transform = 0.875 0 0 0.0207878 386 50 ;
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
					- m_position = 4 0 0  0 49885  96 49885  96 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
					}
					- m_pParent = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_name = { CGIText 
						- m_str = ":test";
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
					- m_transform = 1 0 0 0.0207878 200 50 ;
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
					- m_position = 4 0 0  0 49885  96 49885  96 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID c596b91a-f658-4860-be41-5e6b67e5c07d;
					- m_type = 118;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 4ebafb9e-38ad-49ac-bdca-91db3fa20cc0;
					}
					- m_pParent = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
					- m_name = { CGIText 
						- m_str = "ENV";
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
					- m_transform = 1 0 0 0.02074 0 50 ;
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
					- m_position = 4 0 0  0 50000  96 50000  96 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID eac4aac6-ba2a-4b02-927f-6e34bc441177;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID fbaf3173-9388-4b1c-914c-679498f6d8a4;
					}
					- m_pParent = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_name = { CGIText 
						- m_str = "idle1";
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
					- m_drawBehavior = 4096;
					- m_transform = 0.797619 0 0 36.7862 15 26505.9 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscConditionMark 
					- _id = GUID 56f3be0d-fb75-4c4a-90b4-8d0970a8165e;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID c442b1c8-ec08-41cf-a507-039e5bcebd49;
					}
					- m_pParent = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 0.797619 0 0 36.7862 15 3655.98 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscConditionMark 
					- _id = GUID ddf67895-a14a-4ffb-aee3-c8af7c543e03;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID c7169a26-e309-4633-953f-7008a33fce8c;
					}
					- m_pParent = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
					- m_name = { CGIText 
						- m_str = "idle1";
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
					- m_drawBehavior = 4096;
					- m_transform = 0.797619 0 0 36.7862 15 26505.9 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID e71bc6e6-e00a-4b00-bd22-38ad517343fd;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 29d60a8d-7533-4905-b477-0b0714c4a2ce;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "in()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 60744a70-6f16-4151-a05f-0f28881f9075;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
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
					- m_SourcePort = 48 16500 ;
					- m_TargetPort = 48 16500 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 8023ce6e-bc40-4c2a-9417-522d235b3b67;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 619c2cbd-7ec4-4bda-a784-5a1b33f8feb9;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID c596b91a-f658-4860-be41-5e6b67e5c07d;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
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
					- m_SourcePort = 48 29846 ;
					- m_TargetPort = 48 35309 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 5ede078d-55e1-48a6-bfc4-bdb2409b6a30;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID ad10e1e3-c44f-43cc-83c2-00283cc45493;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "show()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 4;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
					- m_sourceType = 'F';
					- m_pTarget = GUID e4cfc025-65a6-4cd0-9b42-45a120206f8c;
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
					- m_SourcePort = 48 41322 ;
					- m_TargetPort = 48 41322 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 36cb7b8d-4d23-4493-be6d-3ffdc98e86a5;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID bc59ec06-4f1d-4873-b8f2-26806c9f1bd6;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "show()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 4;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e4cfc025-65a6-4cd0-9b42-45a120206f8c;
					- m_sourceType = 'F';
					- m_pTarget = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
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
					- m_SourcePort = 48 42765 ;
					- m_TargetPort = 48 42765 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 8ced726d-a1e2-4d2e-929a-e8c537c86be3;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID a6bf37a0-f528-4680-9767-7ec6249cd11f;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
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
					- m_arrow = 2 732 804  732 871  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 36271 ;
					- m_TargetPort = 48 39494 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID edfc7266-889a-44e6-8bcd-c64ade42cf0d;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 12d805c2-8209-4f19-b22f-943970bcd209;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 9 -8  57 -8  57 7  9 7  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_transform = 1 0 0 1 239 415 ;
						- m_nVerticalSpacing = -9;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_sourceType = 'F';
					- m_pTarget = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
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
					- m_arrow = 2 264 535  264 577  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 23331 ;
					- m_TargetPort = 48 25351 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 5d902ca9-b6e4-4755-a7fe-ca117a788298;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 344a2fcb-a1d1-44b8-866a-be2164d286cc;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart1()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID c596b91a-f658-4860-be41-5e6b67e5c07d;
					- m_sourceType = 'F';
					- m_pTarget = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
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
					- m_SourcePort = 48 6365 ;
					- m_TargetPort = 48 10054 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 95149084-f56b-4da5-a002-554c0a11f930;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 494c015c-011a-40e6-98ae-71ef18b5969c;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start1()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_sourceType = 'F';
					- m_pTarget = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
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
					- m_arrow = 2 278 279  278 337  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 11016 ;
					- m_TargetPort = 48 13806 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 21c4e759-1798-4619-88f3-94844af9f502;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 65b83240-b6b0-47c0-ae9d-519a2c6f6d1a;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "in()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_sourceType = 'F';
					- m_pTarget = GUID 60744a70-6f16-4151-a05f-0f28881f9075;
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
					- m_SourcePort = 48 15538 ;
					- m_TargetPort = 48 15538 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID e54c1ffe-1072-4b8c-bd35-0ef330192d99;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 5ab4b96a-bd7f-4a03-8d36-18cb11634e45;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6961e22b-65f1-4837-8ca6-6d08c52138a6;
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
					- m_arrow = 2 732 959  732 997  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 43727 ;
					- m_TargetPort = 48 45555 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 8d1ff1eb-c00c-4b12-af17-be92252c5a7a;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 92149e6e-82b9-45ee-b3ae-79d959d39d28;
					}
					- m_pParent = GUID fffb8ff5-c3b5-46a1-af12-653bedfd67c0;
					- m_name = { CGIText 
						- m_str = "input";
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
					- m_drawBehavior = 4096;
					- m_transform = 0.797619 0 0 36.7862 15 18279.9 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 7e65eaa1-453b-4414-a731-64d8d67645b6;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "mainPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "mainPkg";
				- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
			}
			- m_pICollaboration = { ICollaboration 
				- _id = GUID 61d3d876-66fd-4b8f-8213-9b9beabffc29;
				- _modifiedTimeWeak = 1.2.1990::0:0:0;
				- ClassifierRoles = { IRPYRawContainer 
					- size = 5;
					- value = 
					{ IClassifierRole 
						- _id = GUID 4ebafb9e-38ad-49ac-bdca-91db3fa20cc0;
						- _name = "ENV";
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = SYSTEM_BORDER;
						- m_pBase = { IHandle 
							- _m2Class = "";
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "test";
							- _id = GUID ea3f8ed4-8f79-4228-81bd-3f6083b7d0fb;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "main";
							- _id = GUID 6ffdcda9-6838-413d-a423-02fa7218d792;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 88c40de0-d701-4a6d-b36e-c51545251ff4;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Idisplay";
							- _id = GUID e87d1831-e74d-41ac-9ecd-127e3c1ca8d9;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID adac25d5-347b-4054-bd82-20d3670fa078;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Iinput";
							- _id = GUID 7efad1ed-fa15-4946-898f-c889f9718340;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
				}
				- Messages = { IRPYRawContainer 
					- size = 14;
					- value = 
					{ IMessage 
						- _id = GUID 344a2fcb-a1d1-44b8-866a-be2164d286cc;
						- _name = "evstart1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "1.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 4ebafb9e-38ad-49ac-bdca-91db3fa20cc0;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "evstart1()";
							- _id = GUID 1819b35b-626e-4799-8b72-8e037fbb785f;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 494c015c-011a-40e6-98ae-71ef18b5969c;
						- _name = "start1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "2.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "start1()";
							- _id = GUID 7043b8fa-6763-4b6e-be18-155666483b6b;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 65b83240-b6b0-47c0-ae9d-519a2c6f6d1a;
						- _myState = 8192;
						- _name = "in";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "3.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID adac25d5-347b-4054-bd82-20d3670fa078;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "Iinput";
							- _name = "in(int)";
							- _id = GUID 3e863e4d-658b-4014-a1b9-d84875c6c773;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 29d60a8d-7533-4905-b477-0b0714c4a2ce;
						- _myState = 8192;
						- _name = "in";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "4.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID adac25d5-347b-4054-bd82-20d3670fa078;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "in(int)";
							- _id = GUID d9815425-07ae-4482-aa50-df65541d5374;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 619c2cbd-7ec4-4bda-a784-5a1b33f8feb9;
						- _name = "evstart";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "6.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 4ebafb9e-38ad-49ac-bdca-91db3fa20cc0;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "evstart()";
							- _id = GUID 71d87cab-2147-4b74-bde4-7d61c12ba5da;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID ad10e1e3-c44f-43cc-83c2-00283cc45493;
						- _myState = 8192;
						- _name = "show";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "8.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 88c40de0-d701-4a6d-b36e-c51545251ff4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "Idisplay";
							- _name = "show(int)";
							- _id = GUID 5701d283-c5b6-40a2-9ede-1d14c456be66;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID bc59ec06-4f1d-4873-b8f2-26806c9f1bd6;
						- _myState = 8192;
						- _name = "show";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "9.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 88c40de0-d701-4a6d-b36e-c51545251ff4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "show(int)";
							- _id = GUID 98e7aa8e-ac32-4058-a51c-27148e4bd3aa;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID a6bf37a0-f528-4680-9767-7ec6249cd11f;
						- _name = "start";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "7.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "start()";
							- _id = GUID 3823565b-77cf-4ff3-98fb-5151bcf23b23;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 12d805c2-8209-4f19-b22f-943970bcd209;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "5.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID fbaf3173-9388-4b1c-914c-679498f6d8a4;
						- _myState = 2048;
						- _name = "conditionmark_0";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle1";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID c442b1c8-ec08-41cf-a507-039e5bcebd49;
						- _myState = 2048;
						- _name = "conditionmark_1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID c7169a26-e309-4633-953f-7008a33fce8c;
						- _myState = 2048;
						- _name = "conditionmark_2";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle1";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 5ab4b96a-bd7f-4a03-8d36-18cb11634e45;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "10.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 18ee9855-c2f0-497a-b564-8181d4836681;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 92149e6e-82b9-45ee-b3ae-79d959d39d28;
						- _myState = 2048;
						- _name = "conditionmark_3";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "input";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9edc2620-ad44-498b-96ae-4b6586a5bd1b;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
				}
			}
		}
		{ IMSC 
			- _id = GUID 6040451c-1232-4158-a289-0b4809b8d95a;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 6;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Condition_Mark";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,67,39";
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
							{ IPropertyMetaclass 
								- _Name = "CreateMessage";
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
										- _Value = "1";
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
								- _Name = "EnvironmentLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
							{ IPropertyMetaclass 
								- _Name = "InstanceLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Message";
								- Properties = { IRPYRawContainer 
									- size = 4;
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
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "TimeoutMessage";
								- Properties = { IRPYRawContainer 
									- size = 4;
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
			- _name = "Animated sequencediagram_3";
			- _displayName = "{\\rtf1\\fbidis\\ansi\\ansicpg936\\deff0\\deflang1033\\deflangfe2052{\\fonttbl{\\f0\\fnil\\fcharset134 Arial;}}
\\viewkind4\\uc1\\pard\\ltrpar\\lang2052\\f0\\fs20\\'b6\\'af\\'bb\\'ad\\'b3\\'ca\\'cf\\'d6\\'b5\\'c4 sequencediagram_3\\par
}
";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "1.22.2018::14:9:22";
			- _graphicChart = { CGIMscChart 
				- vLadderMargin = 20;
				- m_usingActivationBar = 0;
				- _id = GUID bfd6f6c7-64a6-43fe-b41c-d2cd966526cf;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IMSC";
					- _id = GUID 6040451c-1232-4158-a289-0b4809b8d95a;
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
				- elementList = 24;
				{ CGIBox 
					- _id = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_type = 108;
					- m_pModelObject = { IHandle 
						- _m2Class = "ICollaboration";
						- _id = GUID 5612ee6b-4f80-40b2-8eb9-4eb4f6e2502e;
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
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscColumnCR 
					- _id = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 9;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
												- _Type = String;
											}
											{ IProperty 
												- _Name = "Fill.FillColor";
												- _Value = "255,255,255";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.FillColor@Child.SDLifelineBody";
												- _Value = "109,163,217";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.Transparent_Fill@Child.SDLifelineBody";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 118;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
					}
					- m_pParent = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_name = { CGIText 
						- m_str = "ENV";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nVerticalSpacing = -50;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_transform = 1 0 0 0.01948 0 50 ;
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
					- m_position = 4 -48 0  -48 437  48 437  48 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
					}
					- m_pParent = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_name = { CGIText 
						- m_str = ":test";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nHorizontalSpacing = -200;
						- m_nVerticalSpacing = -50;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_transform = 1 0 0 0.0195249 200 50 ;
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
					- m_position = 4 -48 0  -48 437  48 437  48 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
					}
					- m_pParent = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_name = { CGIText 
						- m_str = ":main";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nHorizontalSpacing = -654;
						- m_nVerticalSpacing = -50;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_transform = 1 0 0 0.0195249 654 50 ;
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
					- m_position = 4 -48 0  -48 437  48 437  48 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 2f6288ee-d81e-4f77-b7e3-b0cc340a10d9;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 96a02eec-730a-4a79-af8e-4a8d873f7e65;
					}
					- m_pParent = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_name = { CGIText 
						- m_str = ":Idisplay";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nHorizontalSpacing = -381;
						- m_nVerticalSpacing = -50;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_transform = 0.875 0 0 0.0195249 387 50 ;
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
					- m_position = 4 -48 0  -48 437  48 437  48 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 6423024a-0f09-4e16-85c9-8f38507be09f;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 856ce75c-fa42-4af8-83d5-c75ff3260cb9;
					}
					- m_pParent = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
					- m_name = { CGIText 
						- m_str = ":Iinput";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nHorizontalSpacing = -509;
						- m_nVerticalSpacing = -50;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_transform = 0.875 0 0 0.0195249 515 50 ;
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
					- m_position = 4 -48 0  -48 437  48 437  48 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscMessage 
					- _id = GUID c8788b54-1289-40ef-b61b-fbbc6500a603;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID c7098fc5-5f98-43ce-9c59-47405fad08ab;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6423024a-0f09-4e16-85c9-8f38507be09f;
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
					- m_SourcePort = 48 3593 ;
					- m_TargetPort = 48 3585 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID a9e6508d-fdd3-4d21-a8e4-99c22d8ca57a;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 313fc4ec-72b9-4725-99b0-b27d52e5be3e;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 2f6288ee-d81e-4f77-b7e3-b0cc340a10d9;
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
					- m_SourcePort = 48 4620 ;
					- m_TargetPort = 48 4609 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 5a9bb9f5-b192-46be-a076-855430789514;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 9a312f97-3187-4fa0-8cfc-06f033e67897;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
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
					- m_SourcePort = 48 5647 ;
					- m_TargetPort = 48 5634 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 83378187-8155-48cd-8efb-fb5c1dc5c674;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 123c8094-abc3-4154-9bc6-abf630aefa67;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
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
					- m_SourcePort = 48 6674 ;
					- m_TargetPort = 48 6658 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 4ccec841-e05b-4de3-a9e6-e19639659fed;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 53d6bd9a-d279-4df9-8572-7e8ef1a9ef2b;
					}
					- m_pParent = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 7375.2 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscConditionMark 
					- _id = GUID 74e56704-1e7e-4c6e-b8e2-2da19d2035bd;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 52845590-7c86-43a8-90eb-ca222cefe7c3;
					}
					- m_pParent = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 11011.6 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID 9a098863-6806-44ef-8b64-8dbbd9a96e26;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Message";
										- Properties = { IRPYRawContainer 
											- size = 2;
											- value = 
											{ IProperty 
												- _Name = "Line.LineStyle";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 64a01b60-532e-45c2-ad77-a8b8c9c84688;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
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
					- m_SourcePort = 48 14990 ;
					- m_TargetPort = 48 15980 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 096d0430-9f70-4c4d-8d18-43131778ffd0;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 3c85d49b-9a6b-49d9-a09d-ce1702b34796;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start1()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_sourceType = 'F';
					- m_pTarget = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
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
					- m_arrow = 2 278 382  278 402  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 17004 ;
					- m_TargetPort = 48 18028 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 26056e9b-6d2e-4749-b39a-d317ae7ed584;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID a42a0654-8802-4cbd-a352-67d28b01a7b7;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "in(a = 23)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_sourceType = 'F';
					- m_pTarget = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
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
					- m_SourcePort = 48 19053 ;
					- m_TargetPort = 48 19053 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID c67ea9d0-3a4b-4e73-924f-c12110204370;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 8fd57704-5737-41fc-bbbe-957da2968fdd;
					}
					- m_pParent = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_name = { CGIText 
						- m_str = "Input";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 19769.6 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID 267b3ed3-8f30-4489-b091-3f1fbe07886d;
					- m_type = 115;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 59495214-a0a0-4d63-81f7-584c5ac68dc9;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_sourceType = 'F';
					- m_pTarget = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
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
					- m_arrow = 2 278 513  278 533  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 23713 ;
					- m_TargetPort = 48 24738 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID fb12592b-3bd6-45fb-b40c-c0c4634b6177;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID c1a3031e-b9e4-4ee3-bd8e-6b495d419c7c;
					}
					- m_pParent = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 25454.7 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID 5ed091e2-f765-4c38-a237-6d7fb54cacff;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Message";
										- Properties = { IRPYRawContainer 
											- size = 2;
											- value = 
											{ IProperty 
												- _Name = "Line.LineStyle";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 15daf84a-98eb-48f4-bbd2-47f98c5544fa;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID e791ade0-2fa3-47a4-a55f-a27abd593c2a;
					- m_sourceType = 'F';
					- m_pTarget = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
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
					- m_SourcePort = 48 29466 ;
					- m_TargetPort = 48 30423 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID a8b4d164-c832-4a0f-b34a-1a81112241a3;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 8f8e63d1-4d9a-4bd7-8c4e-50c453765298;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_sourceType = 'F';
					- m_pTarget = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
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
					- m_arrow = 2 732 664  732 684  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 31447 ;
					- m_TargetPort = 48 32471 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 594c3e62-3f78-4056-a4ed-bcf55ba1926b;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID ef3a2135-64e5-48b9-b960-fcd903d239aa;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "show(aMsg = 23)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 4;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_sourceType = 'F';
					- m_pTarget = GUID 8f02a792-a352-4a90-b141-30fdf0e0a599;
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
					- m_SourcePort = 48 33496 ;
					- m_TargetPort = 48 33496 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 256825c2-0bfe-4b02-ba02-2f64dcd375da;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID a19ef720-3ad5-44ef-a6ec-110b7cb46081;
					}
					- m_pParent = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_name = { CGIText 
						- m_str = "Display";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 34212.7 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID a3d37cd9-fa7c-4fa5-93b9-792977a938bc;
					- m_type = 115;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 29af3296-b66f-462c-9817-16ed3a882ed7;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_sourceType = 'F';
					- m_pTarget = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
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
					- m_arrow = 2 732 795  732 815  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 38156 ;
					- m_TargetPort = 48 39181 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID a5e8a879-8692-46d1-8e87-e1c3c5e7a5e9;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "SequenceDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Condition_Mark";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "AlignConditionMarksLeft";
												- _Value = "True";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 7ff58fc4-ac5d-4a0c-a7be-fb95ca24cace;
					}
					- m_pParent = GUID 35ce4ac8-8101-482d-9e9a-e70438305fc5;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 51.2166 0 39897.8 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 1f56cc22-03f2-4a56-ac68-d69a4d638ba2;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "mainPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "mainPkg";
				- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
			}
			- m_pICollaboration = { ICollaboration 
				- _id = GUID 5612ee6b-4f80-40b2-8eb9-4eb4f6e2502e;
				- _modifiedTimeWeak = 1.2.1990::0:0:0;
				- ClassifierRoles = { IRPYRawContainer 
					- size = 5;
					- value = 
					{ IClassifierRole 
						- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						- _name = "ENV";
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.22.2018::14:5:45;
						- m_eRoleType = SYSTEM_BORDER;
						- m_pBase = { IHandle 
							- _m2Class = "";
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.22.2018::14:5:45;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "test";
							- _id = GUID ea3f8ed4-8f79-4228-81bd-3f6083b7d0fb;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.22.2018::14:5:45;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "main";
							- _id = GUID 6ffdcda9-6838-413d-a423-02fa7218d792;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 96a02eec-730a-4a79-af8e-4a8d873f7e65;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.22.2018::14:5:45;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Idisplay";
							- _id = GUID e87d1831-e74d-41ac-9ecd-127e3c1ca8d9;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 856ce75c-fa42-4af8-83d5-c75ff3260cb9;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.22.2018::14:5:45;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Iinput";
							- _id = GUID 7efad1ed-fa15-4946-898f-c889f9718340;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
				}
				- Messages = { IRPYRawContainer 
					- size = 18;
					- value = 
					{ IMessage 
						- _id = GUID c7098fc5-5f98-43ce-9c59-47405fad08ab;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "1.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 856ce75c-fa42-4af8-83d5-c75ff3260cb9;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 313fc4ec-72b9-4725-99b0-b27d52e5be3e;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "2.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 96a02eec-730a-4a79-af8e-4a8d873f7e65;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 9a312f97-3187-4fa0-8cfc-06f033e67897;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "3.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 123c8094-abc3-4154-9bc6-abf630aefa67;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "4.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 53d6bd9a-d279-4df9-8572-7e8ef1a9ef2b;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_0";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 52845590-7c86-43a8-90eb-ca222cefe7c3;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 64a01b60-532e-45c2-ad77-a8b8c9c84688;
						- _name = "evstart";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "5.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "evstart()";
							- _id = GUID 71d87cab-2147-4b74-bde4-7d61c12ba5da;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 3c85d49b-9a6b-49d9-a09d-ce1702b34796;
						- _name = "start1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "6.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "start1()";
							- _id = GUID 7043b8fa-6763-4b6e-be18-155666483b6b;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID a42a0654-8802-4cbd-a352-67d28b01a7b7;
						- _myState = 8192;
						- _name = "in";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "7.";
						- m_szActualArgs = "a = 23";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "in(int)";
							- _id = GUID d9815425-07ae-4482-aa50-df65541d5374;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 8fd57704-5737-41fc-bbbe-957da2968fdd;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_2";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "Input";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 59495214-a0a0-4d63-81f7-584c5ac68dc9;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "8.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = TIMEOUT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID c1a3031e-b9e4-4ee3-bd8e-6b495d419c7c;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_3";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 15daf84a-98eb-48f4-bbd2-47f98c5544fa;
						- _name = "evstart";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "9.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID f6a25792-9b7d-4fea-b48b-448d70934a7e;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "evstart()";
							- _id = GUID 71d87cab-2147-4b74-bde4-7d61c12ba5da;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 8f8e63d1-4d9a-4bd7-8c4e-50c453765298;
						- _name = "start";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "10.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "start()";
							- _id = GUID 3823565b-77cf-4ff3-98fb-5151bcf23b23;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID ef3a2135-64e5-48b9-b960-fcd903d239aa;
						- _myState = 8192;
						- _name = "show";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "11.";
						- m_szActualArgs = "aMsg = 23";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID c72cbfba-e574-46b3-8ecb-9a378636eb1c;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "show(int)";
							- _id = GUID 98e7aa8e-ac32-4058-a51c-27148e4bd3aa;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID a19ef720-3ad5-44ef-a6ec-110b7cb46081;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_4";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "Display";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 29af3296-b66f-462c-9817-16ed3a882ed7;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "12.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = TIMEOUT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 7ff58fc4-ac5d-4a0c-a7be-fb95ca24cace;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_5";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 80e778dc-c8b4-40d3-b46b-9090c791a6e4;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
				}
			}
		}
		{ IMSC 
			- _id = GUID 5a31ecd6-7f83-44f1-bca2-d54050e7a084;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 6;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Condition_Mark";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,67,39";
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
							{ IPropertyMetaclass 
								- _Name = "CreateMessage";
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
										- _Value = "1";
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
								- _Name = "EnvironmentLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
							{ IPropertyMetaclass 
								- _Name = "InstanceLine";
								- Properties = { IRPYRawContainer 
									- size = 7;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,437";
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
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Message";
								- Properties = { IRPYRawContainer 
									- size = 4;
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
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "TimeoutMessage";
								- Properties = { IRPYRawContainer 
									- size = 4;
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
			- _name = "Animated sequencediagram_3_0";
			- _displayName = "{\\rtf1\\fbidis\\ansi\\ansicpg936\\deff0\\deflang1033\\deflangfe2052{\\fonttbl{\\f0\\fnil\\fcharset134 Arial;}}
\\viewkind4\\uc1\\pard\\ltrpar\\lang2052\\f0\\fs20\\'b6\\'af\\'bb\\'ad\\'b3\\'ca\\'cf\\'d6\\'b5\\'c4 sequencediagram_3_1\\par
}
";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "1.23.2018::12:29:39";
			- _graphicChart = { CGIMscChart 
				- vLadderMargin = 20;
				- m_usingActivationBar = 0;
				- _id = GUID 5e6afd10-4a84-4b7e-9a54-b76ba8401d30;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IMSC";
					- _id = GUID 5a31ecd6-7f83-44f1-bca2-d54050e7a084;
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
				- elementList = 26;
				{ CGIBox 
					- _id = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_type = 108;
					- m_pModelObject = { IHandle 
						- _m2Class = "ICollaboration";
						- _id = GUID a1daa159-afc4-427e-892f-0e3b5cc9236d;
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
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscColumnCR 
					- _id = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
					}
					- m_pParent = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_name = { CGIText 
						- m_str = ":main";
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
					- m_transform = 1 0 0 0.0217501 654 50 ;
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
					- m_position = 1 0 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID ea30ed35-1d20-4c0e-bee7-06b1974dd120;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 9a377094-de7e-443e-be41-c19b59deb9e2;
					}
					- m_pParent = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_name = { CGIText 
						- m_str = ":Iinput";
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
					- m_transform = 0.875 0 0 0.0217501 515 50 ;
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
					- m_position = 1 0 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID e820747c-33c9-4713-877a-2d91c7e0256f;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID 0edc561d-5689-4a7e-9904-a06eb5062c6f;
					}
					- m_pParent = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_name = { CGIText 
						- m_str = ":Idisplay";
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
					- m_transform = 0.875 0 0 0.0217501 387 50 ;
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
					- m_position = 1 0 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 7;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
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
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 109;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
					}
					- m_pParent = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_name = { CGIText 
						- m_str = ":test";
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
					- m_transform = 1 0 0 0.0217501 200 50 ;
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
					- m_position = 1 0 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscColumnCR 
					- _id = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Lifeline";
										- Properties = { IRPYRawContainer 
											- size = 9;
											- value = 
											{ IProperty 
												- _Name = "DefaultSize";
												- _Value = "0,0,96,437";
												- _Type = String;
											}
											{ IProperty 
												- _Name = "Fill.FillColor";
												- _Value = "255,255,255";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.FillColor@Child.SDLifelineBody";
												- _Value = "109,163,217";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.Transparent_Fill@Child.SDLifelineBody";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 118;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClassifierRole";
						- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
					}
					- m_pParent = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
					- m_name = { CGIText 
						- m_str = "ENV";
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
					- m_transform = 1 0 0 0.0217 0 50 ;
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
					- m_position = 1 0 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
				}
				{ CGIMscMessage 
					- _id = GUID d0f80360-2d15-4690-91a8-a9dedefe4f75;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID ffe264e7-1ccd-4835-bb7d-3b269d848853;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- m_sourceType = 'F';
					- m_pTarget = GUID ea30ed35-1d20-4c0e-bee7-06b1974dd120;
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
					- m_SourcePort = 48 3226 ;
					- m_TargetPort = 48 3218 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID f6647213-faba-4070-99be-0957ad1e276e;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 9dd47140-babb-4d16-87d3-865920a80146;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- m_sourceType = 'F';
					- m_pTarget = GUID e820747c-33c9-4713-877a-2d91c7e0256f;
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
					- m_SourcePort = 48 4101 ;
					- m_TargetPort = 48 4138 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 71129155-af85-406f-aa13-b2dbcf0a91bb;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 4981a186-cbce-4fcf-b416-ab0e93044a86;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- m_sourceType = 'F';
					- m_pTarget = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
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
					- m_SourcePort = 48 5115 ;
					- m_TargetPort = 48 5103 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID d8faf7d9-07c4-4d94-a26d-df8fc3a7e6ce;
					- m_type = 112;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 76c47a1e-3130-4b0b-9b01-4bfec9555b66;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "Create()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_SourcePort = 48 6083 ;
					- m_TargetPort = 48 6069 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID abfbcbdc-ac16-4aec-b759-a18a53c2e59e;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 933a37ae-76e8-4e95-a63d-ee63a1ab6b83;
					}
					- m_pParent = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_name = { CGIText 
						- m_str = "idle1";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 6620.67 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscConditionMark 
					- _id = GUID 0a6383dc-e8fa-4640-8b86-ed540f713182;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 7cd3be99-4a5b-45fa-acc7-9e8ca622d442;
					}
					- m_pParent = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 9885.03 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID 54acd766-3e41-4c35-854f-0d293ff03d38;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Message";
										- Properties = { IRPYRawContainer 
											- size = 2;
											- value = 
											{ IProperty 
												- _Name = "Line.LineStyle";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID fa918da5-5299-428c-97a1-fe7b3e331c27;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart1()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5ba0c43f-fbb4-48a0-96bb-7966cf3081d6;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_SourcePort = 48 13502 ;
					- m_TargetPort = 48 14299 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID aa408327-610d-4408-bed8-6aab608f18e8;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID c41e55d6-f386-43ec-83a0-6d9069cabcab;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start1()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_arrow = 2 278 382  278 402  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 15264 ;
					- m_TargetPort = 48 16184 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 2b756d45-69bb-4350-afe2-bffc798a2920;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID c98c4e4d-99bb-4ffa-8834-6a0057f19dbc;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "in(a = 2121)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_sourceType = 'F';
					- m_pTarget = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
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
					- m_SourcePort = 48 17057 ;
					- m_TargetPort = 48 17057 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 279ac536-130a-42ae-a99b-2543c479996b;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 9198f26b-6942-4922-b056-94e5cbbb62a9;
					}
					- m_pParent = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_name = { CGIText 
						- m_str = "Input";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 17747.1 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID c4ac18d0-927c-4f5c-a2c3-c1c763f6c223;
					- m_type = 115;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID d2b70055-1a5e-484c-a9bc-f46778781efb;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_arrow = 2 278 513  278 532  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 21287 ;
					- m_TargetPort = 48 22161 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 2e46d318-cd02-4c9f-b06d-48733a180700;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Message";
										- Properties = { IRPYRawContainer 
											- size = 2;
											- value = 
											{ IProperty 
												- _Name = "Line.LineStyle";
												- _Value = "0";
												- _Type = Int;
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
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID bfc491ff-f65e-4251-8eb6-b0f364c2e608;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "evstart()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_sourceType = 'F';
					- m_pTarget = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
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
					- m_SourcePort = 48 23126 ;
					- m_TargetPort = 48 27356 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 539281cc-4f94-4130-a4ac-11025180e237;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 1772a31b-41fa-44b9-abd7-1538fd7b7648;
					}
					- m_pParent = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_name = { CGIText 
						- m_str = "idle1";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 23770.1 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID eadff7dc-3132-4593-8034-b9f73ba30fde;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 27ee795e-1ab7-42ce-8f1a-cfdd6385cec6;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "start()";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_sourceType = 'F';
					- m_pTarget = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
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
					- m_arrow = 2 732 664  732 684  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 28230 ;
					- m_TargetPort = 48 29149 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 055a7c0f-07da-4004-9933-fcdc9e74bb92;
					- m_type = 110;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 11e4f5fd-5764-4f45-b50f-a362d5fa0035;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "show(aMsg = 2121)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 4;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_SourcePort = 48 30023 ;
					- m_TargetPort = 48 30023 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID 98d5b655-d748-45cf-b384-2e1f301e1c60;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 3ea38c0c-2223-48b2-bff4-ccef9e3dcfc5;
					}
					- m_pParent = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_name = { CGIText 
						- m_str = "Display";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 30712.6 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscMessage 
					- _id = GUID 095041b9-4aae-4191-905b-4c930adb1057;
					- m_type = 115;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 7b3feba3-dc0d-4897-bec1-939702c94bee;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_sourceType = 'F';
					- m_pTarget = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
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
					- m_arrow = 2 278 795  278 816  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 34253 ;
					- m_TargetPort = 48 35218 ;
					- m_bLeft = 0;
				}
				{ CGIMscMessage 
					- _id = GUID 4d071aef-3b97-4a0d-9577-db3267567aba;
					- m_type = 115;
					- m_pModelObject = { IHandle 
						- _m2Class = "IMessage";
						- _id = GUID 22483e82-a300-470a-8c1a-40447c4deec8;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "tm(10)";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 6;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_sourceType = 'F';
					- m_pTarget = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
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
					- m_arrow = 2 732 835  732 855  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 48 36092 ;
					- m_TargetPort = 48 37011 ;
					- m_bLeft = 0;
				}
				{ CGIMscConditionMark 
					- _id = GUID f5753496-b3e9-4249-859d-779517fc29c9;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID fe35d6c6-ec58-4733-9974-f8e4fe8b5ab7;
					}
					- m_pParent = GUID cdb1e2cf-c615-4f07-9a27-93126ca80cad;
					- m_name = { CGIText 
						- m_str = "idle";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 37655.1 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIMscConditionMark 
					- _id = GUID b00c03cf-6ffa-4277-a9fb-c4cb5ef98868;
					- m_type = 114;
					- m_pModelObject = { IHandle 
						- _m2Class = "IConditionMark";
						- _id = GUID 13a5144b-15c3-4847-aa5b-45ddceaf041c;
					}
					- m_pParent = GUID cc85692d-dffe-4547-8784-fbe7c1ba859a;
					- m_name = { CGIText 
						- m_str = "idle1";
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
					- m_drawBehavior = 4096;
					- m_transform = 1.14286 0 0 45.9769 0 40919.4 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 0  0 51  84 51  84 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 36f9528b-2cec-4f11-951b-09c2e0ced519;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "mainPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "mainPkg";
				- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
			}
			- m_pICollaboration = { ICollaboration 
				- _id = GUID a1daa159-afc4-427e-892f-0e3b5cc9236d;
				- _modifiedTimeWeak = 1.2.1990::0:0:0;
				- ClassifierRoles = { IRPYRawContainer 
					- size = 5;
					- value = 
					{ IClassifierRole 
						- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "main";
							- _id = GUID 6ffdcda9-6838-413d-a423-02fa7218d792;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 9a377094-de7e-443e-be41-c19b59deb9e2;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Iinput";
							- _id = GUID 7efad1ed-fa15-4946-898f-c889f9718340;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID 0edc561d-5689-4a7e-9904-a06eb5062c6f;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "InterfacePkg.sbs";
							- _subsystem = "InterfacePkg";
							- _class = "";
							- _name = "Idisplay";
							- _id = GUID e87d1831-e74d-41ac-9ecd-127e3c1ca8d9;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						- _myState = 2048;
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = CLASS;
						- m_pBase = { IHandle 
							- _m2Class = "IClass";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "test";
							- _id = GUID ea3f8ed4-8f79-4228-81bd-3f6083b7d0fb;
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
					{ IClassifierRole 
						- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						- _name = "ENV";
						- Stereotypes = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IHandle 
								- _m2Class = "IStereotype";
								- _filename = "PredefinedTypes.sbs";
								- _subsystem = "PredefinedTypes";
								- _class = "";
								- _name = "Lifeline";
								- _id = GUID 752f4249-6420-4c48-9754-8bf7b94585ed;
							}
						}
						- _modifiedTimeWeak = 1.23.2018::12:27:3;
						- m_eRoleType = SYSTEM_BORDER;
						- m_pBase = { IHandle 
							- _m2Class = "";
						}
						- m_instance = { IHandle 
							- _m2Class = "";
						}
					}
				}
				- Messages = { IRPYRawContainer 
					- size = 20;
					- value = 
					{ IMessage 
						- _id = GUID ffe264e7-1ccd-4835-bb7d-3b269d848853;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "1.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 9a377094-de7e-443e-be41-c19b59deb9e2;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 9dd47140-babb-4d16-87d3-865920a80146;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "2.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 0edc561d-5689-4a7e-9904-a06eb5062c6f;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 4981a186-cbce-4fcf-b416-ab0e93044a86;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "3.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 76c47a1e-3130-4b0b-9b01-4bfec9555b66;
						- _name = "Create";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "4.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CREATE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 933a37ae-76e8-4e95-a63d-ee63a1ab6b83;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_0";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle1";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 7cd3be99-4a5b-45fa-acc7-9e8ca622d442;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID fa918da5-5299-428c-97a1-fe7b3e331c27;
						- _name = "evstart1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "5.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID fcefa039-85b4-4f87-a989-4e7f2ce407ec;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "evstart1()";
							- _id = GUID 1819b35b-626e-4799-8b72-8e037fbb785f;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID c41e55d6-f386-43ec-83a0-6d9069cabcab;
						- _name = "start1";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "6.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "start1()";
							- _id = GUID 7043b8fa-6763-4b6e-be18-155666483b6b;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID c98c4e4d-99bb-4ffa-8834-6a0057f19dbc;
						- _myState = 8192;
						- _name = "in";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "7.";
						- m_szActualArgs = "a = 2121";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "in(int)";
							- _id = GUID d9815425-07ae-4482-aa50-df65541d5374;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 9198f26b-6942-4922-b056-94e5cbbb62a9;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_2";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "Input";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID d2b70055-1a5e-484c-a9bc-f46778781efb;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "8.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = TIMEOUT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID bfc491ff-f65e-4251-8eb6-b0f364c2e608;
						- _name = "evstart";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "9.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IEvent";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "";
							- _name = "evstart()";
							- _id = GUID 71d87cab-2147-4b74-bde4-7d61c12ba5da;
						}
						- m_eType = EVENT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 1772a31b-41fa-44b9-abd7-1538fd7b7648;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_3";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle1";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 27ee795e-1ab7-42ce-8f1a-cfdd6385cec6;
						- _name = "start";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "10.";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "mainPkg.sbs";
							- _subsystem = "mainPkg";
							- _class = "main";
							- _name = "start()";
							- _id = GUID 3823565b-77cf-4ff3-98fb-5151bcf23b23;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 11e4f5fd-5764-4f45-b50f-a362d5fa0035;
						- _myState = 8192;
						- _name = "show";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "11.";
						- m_szActualArgs = "aMsg = 2121";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "IPrimitiveOperation";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "test";
							- _name = "show(int)";
							- _id = GUID 98e7aa8e-ac32-4058-a51c-27148e4bd3aa;
						}
						- m_eType = PRIMITIVE;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 3ea38c0c-2223-48b2-bff4-ccef9e3dcfc5;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_4";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "Display";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 7b3feba3-dc0d-4897-bec1-939702c94bee;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "12.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = TIMEOUT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IMessage 
						- _id = GUID 22483e82-a300-470a-8c1a-40447c4deec8;
						- _myState = 8192;
						- _name = "tm";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "13.";
						- m_szActualArgs = "10";
						- m_szReturnVal = "";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = TIMEOUT;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID fe35d6c6-ec58-4733-9974-f8e4fe8b5ab7;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_5";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID ba12feae-2238-4190-92c8-367afa964f0d;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
					{ IConditionMark 
						- _id = GUID 13a5144b-15c3-4847-aa5b-45ddceaf041c;
						- _myState = 2048;
						- _properties = { IPropertyContainer 
							- Subjects = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IPropertySubject 
									- _Name = "SequenceDiagram";
									- Metaclasses = { IRPYRawContainer 
										- size = 1;
										- value = 
										{ IPropertyMetaclass 
											- _Name = "Condition_Mark";
											- Properties = { IRPYRawContainer 
												- size = 1;
												- value = 
												{ IProperty 
													- _Name = "IsStateCondition";
													- _Value = "True";
													- _Type = Bool;
												}
											}
										}
									}
								}
							}
						}
						- _name = "conditionmark_6";
						- _modifiedTimeWeak = 1.2.1990::0:0:0;
						- m_szSequence = "";
						- m_szActualArgs = "";
						- m_szReturnVal = "";
						- m_freeText = "idle1";
						- m_pCommunicationConnection = { IHandle 
							- _m2Class = "";
						}
						- m_pReceiver = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pSender = { IHandle 
							- _m2Class = "IClassifierRole";
							- _id = GUID 647ef8ac-4339-4c46-8f93-01563cee7faa;
						}
						- m_pFormalMessage = { IHandle 
							- _m2Class = "";
						}
						- m_eType = CONDITION;
						- m_targetExec = { IHandle 
							- _m2Class = "";
						}
						- m_srcExec = { IHandle 
							- _m2Class = "";
						}
					}
				}
			}
		}
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID d799724c-01e6-41a2-b015-7446aab63c4b;
		}
	}
	- PanelDiagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IPanelDiagram 
			- _id = GUID 06c430d6-a400-43bc-80c6-99d3bed490ac;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 7;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Led";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "LevelIndicator";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "MatrixDisplay";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "OnOffSwitch";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "PushButton";
								- Properties = { IRPYRawContainer 
									- size = 6;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,100,50";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.Transparent_Fill";
										- _Value = "1";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.Transparent";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Slider";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "TextBox";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "\Ë\Î\Ì\å";
										- _Type = String;
									}
								}
							}
						}
					}
				}
			}
			- _name = "panel";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "1.23.2018::12:1:15";
			- _graphicChart = { CGIClassChart 
				- _id = GUID c9414acd-3dd9-4e54-912b-9a594c0b66a7;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IPanelDiagram";
					- _id = GUID 06c430d6-a400-43bc-80c6-99d3bed490ac;
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
				- elementList = 3;
				{ CGIBox 
					- _id = GUID a57d1d4a-7ab8-4448-b8ca-9b1532127e72;
					- m_type = 215;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "mainPkg.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "mainPkg";
						- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
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
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIActiveX 
					- _id = GUID 70fe7e8f-4ad3-4180-a143-9f80a07fc76e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "MatrixDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 220;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _filename = "mainPkg.sbs";
						- _subsystem = "mainPkg";
						- _class = "main";
						- _name = "number";
						- _id = GUID 556ca8c1-2f3d-4d01-8468-ee0c12092508;
					}
					- m_pParent = GUID a57d1d4a-7ab8-4448-b8ca-9b1532127e72;
					- m_name = { CGIText 
						- m_str = "matrixdisplay_0";
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
					- m_drawBehavior = 4096;
					- m_transform = 0.00141775 0 0 0.000575204 184 65.6408 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "HardwarePkg.Builder[0].itsMain.number";
					- m_csName = "matrixdisplay_0";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "Builder";
							- _name = "itsMain";
							- _id = GUID 22967e9f-af3d-4955-99f9-e1db561f4d65;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "Builder";
							- _id = GUID 63397d35-3b3b-4f4f-a3d6-cccac1a7e5f9;
						}
					}
				}
				{ CGIMFCCtrl 
					- _id = GUID aa3dc3ac-c859-494f-bbde-9f2dd09c96dc;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Arial 10 NoBold NoItalic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "HardwarePkg.sbs";
						- _subsystem = "HardwarePkg";
						- _class = "test";
						- _name = "evstart()";
						- _id = GUID 3a8b6228-e93e-4290-80b1-a63518481431;
					}
					- m_pParent = GUID a57d1d4a-7ab8-4448-b8ca-9b1532127e72;
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
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000912799 0 0 0.000400899 210 218.447 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "HardwarePkg.Builder[0].itsTest.evstart";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "Builder";
							- _name = "itsTest";
							- _id = GUID eb0e747b-3836-4c5d-9aeb-e195f37be9d3;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "HardwarePkg.sbs";
							- _subsystem = "HardwarePkg";
							- _class = "";
							- _name = "Builder";
							- _id = GUID 63397d35-3b3b-4f4f-a3d6-cccac1a7e5f9;
						}
					}
					- m_csButtonCaption = "Input";
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID a57d1d4a-7ab8-4448-b8ca-9b1532127e72;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "mainPkg.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "mainPkg";
				- _id = GUID b92d0407-794a-46e9-bd3c-b3d8eb0a0991;
			}
		}
	}
}

