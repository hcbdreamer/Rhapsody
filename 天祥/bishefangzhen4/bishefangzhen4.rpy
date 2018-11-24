I-Logix-RPY-Archive version 8.14.0 C++ 9810313
{ IProject 
	- _id = GUID 1f864f55-b5f7-48b2-a7c9-bb9d1692897b;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "Model";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Simulink";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "MatlabExePath";
								- _Value = "C:\\Program Files\\MATLAB\\R2016b\\bin\\win64\\MATLAB.exe";
								- _Type = String;
							}
						}
					}
				}
			}
		}
	}
	- _name = "bishefangzhen4";
	- _modifiedTimeWeak = 4.16.2018::8:34:42;
	- _lastID = 1;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _name = "Default";
		- _id = GUID 7a3a1f63-8227-4fbc-830f-e566d7388b03;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _name = "DefaultComponent";
		- _id = GUID 844c3e61-3c4d-4cf5-9281-789b1bf1618b;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 7;
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
		- size = 5;
		- value = 
		{ ISubsystem 
			- fileName = "Default";
			- _id = GUID 7a3a1f63-8227-4fbc-830f-e566d7388b03;
		}
		{ ISubsystem 
			- fileName = "DefaultConfig";
			- _id = GUID 7948a8b1-0255-4ab7-8700-8dd73d06d0c7;
		}
		{ IProfile 
			- fileName = "UMLPerspectives";
			- _persistAs = "$OMROOT\\Settings\\UMLPerspectives";
			- _id = GUID d24d9192-bc4f-48a2-a4e1-fdaebbdfa6b6;
			- _partOfTheModelKind = referenceunit;
		}
		{ IProfile 
			- fileName = "Simulink";
			- _persistAs = "$OMROOT\\Profiles\\Simulink";
			- _id = GUID a46b1a55-c20e-44bd-aed6-13d936f36a48;
			- _partOfTheModelKind = referenceunit;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre821Cpp";
			- _id = GUID 00b0140e-6d06-4d19-ba99-8a8e40131db7;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDiagram 
			- _id = GUID f665c316-9756-4c43-85aa-b39197d054cb;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 3;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Class";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,34,84,148";
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
							{ IPropertyMetaclass 
								- _Name = "Link";
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
										- _Name = "Font.Underline";
										- _Value = "1";
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
								- _Name = "Object";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,34,84,148";
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
			- _name = "Model1";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "4.16.2018::8:6:8";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 136ff929-587a-49e9-b332-4979457ec008;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IDiagram";
					- _id = GUID f665c316-9756-4c43-85aa-b39197d054cb;
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
				- elementList = 12;
				{ CGIClass 
					- _id = GUID 3ae10ad8-bbdf-434f-b65a-f2d48f8abafc;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _subsystem = "Default";
						- _name = "TopLevel";
						- _id = GUID 256e44c3-54f3-47c8-8ce6-a41c30bba8eb;
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
							- _id = GUID c92975ea-0cc9-4204-98c1-c3309b84fc83;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID 0b5e6e9d-f195-4612-9d95-289d9949d651;
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
				{ CGIPortConnector 
					- _id = GUID b9cb2d79-65cf-40be-ba54-a729ea203065;
					- m_type = 201;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISysMLPort";
						- _subsystem = "Default";
						- _class = "Nodel";
						- _name = "In1";
						- _id = GUID b030c0b4-4b57-4066-946d-e1ea16dcc9cf;
					}
					- m_pParent = GUID 76273579-42f6-4cef-843d-fc5c42526491;
					- m_name = { CGIText 
						- m_str = "In1";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nVerticalSpacing = -19;
						- m_nOrientationCtrlPt = 2;
					}
					- m_drawBehavior = 0;
					- m_transform = -0 -6.09779 8.68033 0 -336.522 997.761 ;
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
						- m_nVerticalSpacing = -29;
						- m_nOrientationCtrlPt = 2;
					}
					- m_position = 4 0 0  0 73  68 73  68 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
					- m_providedInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = 67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
					- m_requiredInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = -67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
				}
				{ CGIPortConnector 
					- _id = GUID 5f5e0a8c-9589-4fa7-8f2d-15dd38fbf7f3;
					- m_type = 201;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISysMLPort";
						- _subsystem = "Default";
						- _class = "Nodel";
						- _name = "Out1";
						- _id = GUID c1ca993a-8674-4315-94bc-3cdcb5203ea4;
					}
					- m_pParent = GUID 76273579-42f6-4cef-843d-fc5c42526491;
					- m_name = { CGIText 
						- m_str = "Out1";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nVerticalSpacing = -19;
						- m_nOrientationCtrlPt = 0;
					}
					- m_drawBehavior = 0;
					- m_transform = 0 6.0978 -8.68033 0 1400.85 610.938 ;
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
						- m_nVerticalSpacing = -29;
						- m_nOrientationCtrlPt = 0;
					}
					- m_position = 4 0 0  0 73  68 73  68 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
					- m_providedInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = 67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
					- m_requiredInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = -67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
				}
				{ CGIPortConnector 
					- _id = GUID 6a872cfd-30c2-48d6-a62c-cec70dd7a9ea;
					- m_type = 201;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISysMLPort";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "p1";
						- _id = GUID 30737d3a-69d2-4efc-8a12-e40031af4dd3;
					}
					- m_pParent = GUID b8c1c06d-206e-49ae-83fa-fdbb31926b0b;
					- m_name = { CGIText 
						- m_str = "p1";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 -6 -9  42 -9  42 6  -6 6  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_transform = 1 0 0 1 326 229 ;
						- m_nHorizontalSpacing = 1;
						- m_nVerticalSpacing = -29;
						- m_nOrientationCtrlPt = 0;
					}
					- m_drawBehavior = 0;
					- m_transform = 0 6.09783 -6.30357 0 1305.77 606.108 ;
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
						- m_nVerticalSpacing = -29;
						- m_nOrientationCtrlPt = 0;
					}
					- m_position = 4 0 0  0 73  68 73  68 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
					- m_providedInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = 67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
					- m_requiredInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = -67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
				}
				{ CGIPortConnector 
					- _id = GUID e8fca10c-5b5e-4669-b9b9-8731c780d4a9;
					- m_type = 201;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISysMLPort";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "p1";
						- _id = GUID 38f1baab-2f8f-485e-a025-45981f2f21af;
					}
					- m_pParent = GUID 6f51849c-e523-4c9b-afc8-ff4bafb64baa;
					- m_name = { CGIText 
						- m_str = "p1";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 -6 27  60 27  60 42  -6 42  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_transform = 1 0 0 1 546 194 ;
						- m_nHorizontalSpacing = 1;
						- m_nVerticalSpacing = -26;
						- m_nOrientationCtrlPt = 2;
					}
					- m_drawBehavior = 0;
					- m_transform = -0 -4.7542 6.78842 0 -262.75 924.093 ;
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
						- m_nVerticalSpacing = -29;
						- m_nOrientationCtrlPt = 2;
					}
					- m_position = 4 0 0  0 73  68 73  68 0  ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_SubType = 0;
					- m_providedInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = 67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
					- m_requiredInterfaceLabel = { CGIText 
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
						- m_nHorizontalSpacing = -67;
						- m_nVerticalSpacing = -25;
						- m_nOrientationCtrlPt = 8;
					}
				}
				{ CGIClass 
					- _id = GUID fb1ef791-4aa0-4a7e-9ea5-fc4caad1d14e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
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
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Class";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 105;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _subsystem = "Default";
						- _name = "Builder";
						- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
					}
					- m_pParent = GUID 3ae10ad8-bbdf-434f-b65a-f2d48f8abafc;
					- m_name = { CGIText 
						- m_str = "Builder";
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
					- m_drawBehavior = 2056;
					- m_transform = 0.563758 0 0 0.276856 136.309 38.6332 ;
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
					- m_polygon = 4 3 265  3 1410  1195 1410  1195 265  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID e36958a5-3e2d-4976-9fbb-dfb451ac91c9;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID 6e9ed1b6-1ecd-42d1-a6b1-774042d2878f;
							- m_name = "Operation";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 1;
								- value = 
								{ IHandle 
									- _m2Class = "IPrimitiveOperation";
									- _subsystem = "Default";
									- _class = "Builder";
									- _name = "trans()";
									- _id = GUID 63a58dcc-7f24-41aa-b44d-77c9e8084556;
								}
							}
							- _itemValueOfFontPropertiesMapCount = 1;
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIObjectInstance 
					- _id = GUID b8c1c06d-206e-49ae-83fa-fdbb31926b0b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
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
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Object";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 106;
					- m_pModelObject = { IHandle 
						- _m2Class = "IPart";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsSource";
						- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
					}
					- m_pParent = GUID fb1ef791-4aa0-4a7e-9ea5-fc4caad1d14e;
					- m_name = { CGIText 
						- m_str = "itsSource:Source";
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
					- m_drawBehavior = 2824;
					- m_transform = 0.281398 0 0 0.59234 35.8872 304.899 ;
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
					- m_polygon = 4 2 329  2 1451  1061 1451  1061 329  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=AttributeListCompartment>
<frame name=OperationListCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID dc29d8c3-5c81-4071-b59d-180d260ce2cb;
							- m_name = "Attribute";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- _itemValueOfFontPropertiesMapCount = 3;
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
						}
						{ CGICompartment 
							- _id = GUID 163eb24d-2530-4279-8a55-3a8c2e2b438a;
							- m_name = "Operation";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- _itemValueOfFontPropertiesMapCount = 7;
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
					- m_multiplicity = { CGIText 
						- m_str = "1";
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
				}
				{ CGIObjectInstance 
					- _id = GUID 76273579-42f6-4cef-843d-fc5c42526491;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
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
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Object";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 106;
					- m_pModelObject = { IHandle 
						- _m2Class = "IPart";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsNodel";
						- _id = GUID f0aaa576-4a0b-452d-aa06-1d7a1ed92d48;
					}
					- m_pParent = GUID fb1ef791-4aa0-4a7e-9ea5-fc4caad1d14e;
					- m_name = { CGIText 
						- m_str = "itsNodel:Nodel";
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
					- m_drawBehavior = 2824;
					- m_transform = 0.204348 0 0 0.59234 451.332 304.899 ;
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
					- m_polygon = 4 2 329  2 1451  1061 1451  1061 329  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=AttributeListCompartment>
<frame name=OperationListCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID 18419646-2ab5-4a49-8031-72a096702c32;
							- m_name = "Attribute";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
						}
						{ CGICompartment 
							- _id = GUID 35577883-4265-4c67-9977-55f7716359d1;
							- m_name = "Operation";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
					- m_multiplicity = { CGIText 
						- m_str = "1";
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
				}
				{ CGIObjectInstance 
					- _id = GUID 6f51849c-e523-4c9b-afc8-ff4bafb64baa;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
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
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Object";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 106;
					- m_pModelObject = { IHandle 
						- _m2Class = "IPart";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsSink";
						- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
					}
					- m_pParent = GUID fb1ef791-4aa0-4a7e-9ea5-fc4caad1d14e;
					- m_name = { CGIText 
						- m_str = "itsSink:Sink";
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
					- m_drawBehavior = 2824;
					- m_transform = 0.261298 0 0 0.759741 820.204 206.659 ;
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
					- m_polygon = 4 2 329  2 1451  1061 1451  1061 329  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=AttributeListCompartment>
<frame name=OperationListCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID f9386499-c1c6-42a0-8d78-f11d72645d49;
							- m_name = "Attribute";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- _itemValueOfFontPropertiesMapCount = 6;
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
						}
						{ CGICompartment 
							- _id = GUID 2d2857bb-2221-4292-a9c1-7dc095d81f4e;
							- m_name = "Operation";
							- m_displayOption = Public;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- _itemValueOfFontPropertiesMapCount = 11;
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
							- _fontPropValues = "\Ë\Î\Ì\å 10 400 0 0 0 0";
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
					- m_multiplicity = { CGIText 
						- m_str = "1";
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
				}
				{ CGIObjectLink 
					- _id = GUID 623026d2-1c52-4b20-8678-3c4c9a486362;
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
					- m_type = 80;
					- m_pModelObject = { IHandle 
						- _m2Class = "IObjectLink";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsSource_itsSource";
						- _id = GUID 73ccec05-5f51-446d-b19a-d6d34d72cd8b;
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
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 6a872cfd-30c2-48d6-a62c-cec70dd7a9ea;
					- m_sourceType = 'F';
					- m_pTarget = GUID 6a872cfd-30c2-48d6-a62c-cec70dd7a9ea;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "itsSource_itsSource";
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
					- m_line_style = 2;
					- m_SourcePort = 32 33 ;
					- m_TargetPort = 32 33 ;
					- m_bShowSourceMultiplicity = 0;
					- m_bShowSourceRole = 0;
					- m_bShowTargetMultiplicity = 0;
					- m_bShowTargetRole = 0;
					- m_bShowLinkName = 0;
					- m_sourceRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 2;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 3;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_sourceMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 4;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 5;
						- m_bImplicitSetRectPoints = 0;
					}
				}
				{ CGIObjectLink 
					- _id = GUID 0f33d8ea-5308-4066-8487-2ecc7c0e8ae2;
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
					- m_type = 80;
					- m_pModelObject = { IHandle 
						- _m2Class = "IObjectLink";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsSource_itsNodel";
						- _id = GUID b9e43adf-1433-40d0-ac27-6a26491ee6b8;
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
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 6a872cfd-30c2-48d6-a62c-cec70dd7a9ea;
					- m_sourceType = 'F';
					- m_pTarget = GUID b9cb2d79-65cf-40be-ba54-a729ea203065;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "itsSource_itsNodel";
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
					- m_arrow = 2 359 254  359 255  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 32 33 ;
					- m_TargetPort = 32 33 ;
					- m_bShowSourceMultiplicity = 0;
					- m_bShowSourceRole = 0;
					- m_bShowTargetMultiplicity = 0;
					- m_bShowTargetRole = 0;
					- m_bShowLinkName = 0;
					- m_sourceRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 2;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 3;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_sourceMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 4;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 5;
						- m_bImplicitSetRectPoints = 0;
					}
				}
				{ CGIObjectLink 
					- _id = GUID 792f38d8-e0e9-4643-9bc3-df4b310c8f24;
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
					- m_type = 80;
					- m_pModelObject = { IHandle 
						- _m2Class = "IObjectLink";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "itsNodel_itsSink";
						- _id = GUID 34799d8e-f3d6-4dea-8376-29d64e67cf13;
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
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 5f5e0a8c-9589-4fa7-8f2d-15dd38fbf7f3;
					- m_sourceType = 'F';
					- m_pTarget = GUID e8fca10c-5b5e-4669-b9b9-8731c780d4a9;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "itsNodel_itsSink";
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
					- m_arrow = 2 556 255  556 258  ;
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 2;
					- m_SourcePort = 32 33 ;
					- m_TargetPort = 32 33 ;
					- m_bShowSourceMultiplicity = 0;
					- m_bShowSourceRole = 0;
					- m_bShowTargetMultiplicity = 0;
					- m_bShowTargetRole = 0;
					- m_bShowLinkName = 0;
					- m_sourceRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 2;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetRole = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 3;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_sourceMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 4;
						- m_bImplicitSetRectPoints = 0;
					}
					- m_targetMultiplicity = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 5;
						- m_bImplicitSetRectPoints = 0;
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
				- m_pRoot = GUID 3ae10ad8-bbdf-434f-b65a-f2d48f8abafc;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _name = "Default";
				- _id = GUID 7a3a1f63-8227-4fbc-830f-e566d7388b03;
			}
		}
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 844c3e61-3c4d-4cf5-9281-789b1bf1618b;
		}
	}
	- PanelDiagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IPanelDiagram 
			- _id = GUID dc0590cc-e887-4803-a935-d3ba352fea18;
			- _myState = 10240;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 13;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "ButtonArray";
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
								- _Name = "DigitalDisplay";
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
								- _Name = "Gauge";
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
								- _Name = "Knob";
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
								- _Name = "Meter";
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
								- _Name = "Rectangle";
								- Properties = { IRPYRawContainer 
									- size = 4;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,100,100";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
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
			- _name = "paneldiagram_0";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "4.16.2018::8:35:29";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 375516c8-1c5c-45b4-82b8-baf977af4336;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IPanelDiagram";
					- _id = GUID dc0590cc-e887-4803-a935-d3ba352fea18;
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
				- elementList = 18;
				{ CGIBox 
					- _id = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_type = 215;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _name = "Default";
						- _id = GUID 7a3a1f63-8227-4fbc-830f-e566d7388b03;
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
				}
				{ CGIFreeShape 
					- _id = GUID 9132da1d-e9fa-443a-a4e6-66cf51b3bfa8;
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
										- _Name = "Rectangle";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Fill.FillColor";
												- _Value = "192,220,192";
												- _Type = Color;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 185;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
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
					- m_drawBehavior = 4096;
					- m_transform = 1.10232 0 0 1 -70.7104 0 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 652 33  1170 33  1170 476  652 476  ;
				}
				{ CGIFreeShape 
					- _id = GUID 4481d9aa-4189-4bf3-a620-bd8f557f67f9;
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
										- _Name = "Rectangle";
										- Properties = { IRPYRawContainer 
											- size = 6;
											- value = 
											{ IProperty 
												- _Name = "Fill.BackgroundColor";
												- _Value = "0,255,255";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.BackgroundMode";
												- _Value = "2";
												- _Type = Int;
											}
											{ IProperty 
												- _Name = "Fill.FillColor";
												- _Value = "255,251,240";
												- _Type = Color;
											}
											{ IProperty 
												- _Name = "Fill.FillHatch";
												- _Value = "2";
												- _Type = Int;
											}
											{ IProperty 
												- _Name = "Fill.FillStyle";
												- _Value = "0";
												- _Type = Int;
											}
											{ IProperty 
												- _Name = "Line.LineStyle";
												- _Value = "0";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 185;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
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
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 31 1 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 5 24  526 24  526 491  5 491  ;
				}
				{ CGIMFCCtrl 
					- _id = GUID 175dd099-83c7-4d4a-8a89-061b786d7cc3;
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "evjudge()";
						- _id = GUID 510466fa-d34d-42e6-ac22-7ad42f6bc0c2;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "evjudge";
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
					- m_transform = 0.000979944 0 0 0.000500579 77.2977 70.4795 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.evjudge";
					- m_csName = "evjudge";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
					- m_csButtonCaption = "Push";
				}
				{ CGIMFCCtrl 
					- _id = GUID 6a445e9a-1bed-4add-9182-11b55673c89f;
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "evbegan()";
						- _id = GUID 7f1f108b-ae5c-4f70-86f2-434858ea3024;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "evbegan";
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
					- m_transform = 0.000979944 0 0 0.000500579 78.5744 159.937 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].evbegan";
					- m_csName = "evbegan";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
					- m_csButtonCaption = "Push";
				}
				{ CGIMFCCtrl 
					- _id = GUID 378f5775-f45e-4e26-b84c-233ac0e57d03;
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "EvStart()";
						- _id = GUID b284262f-53bd-4926-876f-40454c8c8d67;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "evStar";
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
					- m_transform = 0.000979944 0 0 0.000500579 78.6777 243.968 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.EvStart";
					- m_csName = "evStar";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
					- m_csButtonCaption = "Push";
				}
				{ CGIMFCCtrl 
					- _id = GUID b7910ac6-4377-4bf2-9630-db19b86d99d0;
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "evlegal()";
						- _id = GUID cc9dbc67-0718-4ced-bc75-92425d6fbe1c;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "evlegal";
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
					- m_transform = 0.000979944 0 0 0.000500579 76.5749 329.969 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.evlegal";
					- m_csName = "evlegal";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
					- m_csButtonCaption = "Push";
				}
				{ CGIMFCCtrl 
					- _id = GUID b8408c6c-dd5d-46b8-9293-4b8801a3d742;
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "evReset()";
						- _id = GUID 715a5bdc-de57-4092-a327-3c9896277019;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\Ö\Ø\Ð\Â\´\¥\·\¢";
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
					- m_transform = 0.000979944 0 0 0.000500579 76.6963 417.395 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.evReset";
					- m_csName = "\Ö\Ø\Ð\Â\´\¥\·\¢";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
					- m_csButtonCaption = "Push";
				}
				{ CGIActiveX 
					- _id = GUID 816d110b-e663-4da2-bc5d-3b7e0c3a702f;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Slider";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackGroundColor;4210752;DivisionLineThickness;2;DotColor;255;EndAngle;-45;Font;Arial;;8.25;0;0;0;0;400;0;GradientFactor;.7;LineColor;14737632;MaximumValue;10;MinimumValue;-10;NumberOfDivisions;20;NumberOfSubdivisions;1;RelativeBubbleRadius;.1;RelativeDotPositionRadius;.75;RelativeDotRadius;2;RelativeExternalRadius;6.25;RelativeInternalRadius;4.75;RelativeTextRadius;7.5;StartAngle;225;SubdivisionLineThickness;1;TextColor;16777215;Value;0;ValueFormatString;%.0f;";
												- _Type = String;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Slider";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Direction";
												- _Value = "InOut";
												- _Type = Enum;
												- _ExtraTypeInfo = "";
											}
										}
									}
								}
							}
						}
					}
					- m_type = 225;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "U1";
						- _id = GUID c86e4ce5-6c32-4334-94a8-5c72d690c8f0;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\·\Â\Õ\æ\Ï\µ\Í\³\Ê\ä\È\ë";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 -14 -9  78 -9  78 6  -14 6  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 1;
						- m_transform = 1.05435 0 0 1.13333 854.761 358.2 ;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00387781 0 0 0.00067913 658.15 369.851 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.U1";
					- m_csName = "\·\Â\Õ\æ\Ï\µ\Í\³\Ê\ä\È\ë";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID fa4c4827-fef7-4b14-9539-fd218b15fbb4;
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
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;-1;Blinking;-1;BlinkingTimeMillisec;3000;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "ROOT.illegal";
						- _id = GUID 6d4eae1c-6d80-41cf-a87c-61b3c973bb01;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\µ\ç\Ñ\¹\³\¬\³\ö\·\¶\Î\§\±\¨\¾\¯";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 -39 -9  79 -9  79 6  -39 6  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_transform = 1 0 0 1 596 281 ;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000109834 0 0 0.000126124 466.683 102.537 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.statechart_7.illegal";
					- m_csName = "\µ\ç\Ñ\¹\³\¬\³\ö\·\¶\Î\§\±\¨\¾\¯";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID ad3ec0e3-1f5f-4003-8c6a-100b4adce4be;
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
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "ROOT.stop";
						- _id = GUID 16238864-0a0c-4ace-964e-260b30101f5c;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\»\¡\¶\È\³\¬\³\ö\·\¶\Î\§\±\¨\¾\¯";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 4 -39 -9  79 -9  79 6  -39 6  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_transform = 1 0 0 1 596 349 ;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000109834 0 0 0.000126124 466.683 366.273 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.statechart_12.stop";
					- m_csName = "\»\¡\¶\È\³\¬\³\ö\·\¶\Î\§\±\¨\¾\¯";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID d4b1f961-c2d2-43be-a69c-50bccc00bdb3;
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
										- _Name = "Gauge";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;Caption;;CaptionColor;16777215;CaptionFont;Arial;;12;-1;-1;0;0;700;0;DivisionLineThickness;2;EnclosingCircleColor;12632256;EndAngle;-45;ExternalCircleThickness;3;ForeColor;0;GreenColor;65280;GreenStartValue;60;IndexColor;12582912;IndexLineThickness;0;InternalCircleThickness;2;MaximumValue;180;MinimumValue;-180;NumberColor;4210752;NumberFont;Arial;;8.25;0;0;0;0;400;0;NumberOfDivisions;36;NumberOfSubdivisions;2;RedColor;255;RedStartValue;90;RelativeCaptionX;.5;RelativeCaptionY;.5;RelativeCe
nterX;.5;RelativeCenterY;.55;RelativeEnclosingCircleRadius;.98;RelativeExternalRadius;1.1;RelativeIndexBackLength;.3;RelativeIndexLength;1.2;RelativeInternalRadius;.35;RelativeTextRadius;1.1;ScaleCircleColor;16777215;StartAngle;225;StepValue;1;SubdivisionLineThickness;1;TailAngle;165;Value;0;ValueFormatString;%.0f;YellowColor;65535;YellowStartValue;75;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 217;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "Y";
						- _id = GUID 28fb4081-488b-4bf9-824e-5a958056e4c8;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\¹\¤\×\÷\Ì\¨\Ð\ý\×\ª\½\Ç\¶\È";
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
					- m_transform = 0.00318509 0 0 0.00237054 674 72.6406 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Sink[0].Y";
					- m_csName = "\¹\¤\×\÷\Ì\¨\Ð\ý\×\ª\½\Ç\¶\È";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Sink";
							- _id = GUID a0515d29-8578-49a4-903c-6fa999319e90;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 5d5b5915-816f-4c51-957a-39a2e5f4946a;
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
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;2;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Builder";
						- _name = "x";
						- _id = GUID 82e1f705-dd91-49d9-a894-4ecca37e4d7b;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\µ\¼\È\ësimulink\Ê\ä\È\ë\¶\Ë\¿\Ú\Ö\µ";
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
					- m_transform = 0.00136185 0 0 0.000365743 219.177 173.512 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].x";
					- m_csName = "\µ\¼\È\ësimulink\Ê\ä\È\ë\¶\Ë\¿\Ú\Ö\µ";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID c0125630-79df-4d49-9db4-8c7c0480442f;
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
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;2;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "p1";
						- _id = GUID 854fb1ff-dffa-415f-b1a0-ac1fb3cf0408;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\¿\Ø\Ö\Æ\µ\ç\Ñ\¹\Ê\ä\È\ë\Ö\µ";
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
					- m_transform = 0.00136185 0 0 0.000365743 219.178 87.5122 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.p1";
					- m_csName = "\¿\Ø\Ö\Æ\µ\ç\Ñ\¹\Ê\ä\È\ë\Ö\µ";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID d6eb19c1-a4fd-494c-89ab-14fd6aaffeff;
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
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;2;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "Y";
						- _id = GUID 28fb4081-488b-4bf9-824e-5a958056e4c8;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\Ë\Å\·\þ\Ï\µ\Í\³\Ê\ä\³\ö\½\Ç\¶\È\Ö\µ";
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
					- m_transform = 0.00136185 0 0 0.000365743 219.177 352.512 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.Y";
					- m_csName = "\Ë\Å\·\þ\Ï\µ\Í\³\Ê\ä\³\ö\½\Ç\¶\È\Ö\µ";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 1964a77f-d8b9-43a0-a1a2-24a651cd2f41;
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
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;2;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "W";
						- _id = GUID 71e7a637-1364-4bf0-a5a2-f06658275148;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\µ\¼\³\ösimulink\Ê\ä\³\ö\¶\Ë\¿\Ú\Ö\µ";
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
					- m_transform = 0.00136185 0 0 0.000365743 219.178 258.512 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.W";
					- m_csName = "\µ\¼\³\ösimulink\Ê\ä\³\ö\¶\Ë\¿\Ú\Ö\µ";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID ba18bd6e-e005-4fb5-94dc-68398b4e6403;
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
												- _Value = "BackColor;16777215;Caption;;Style;0;";
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
						- _subsystem = "Default";
						- _class = "Sink";
						- _name = "Y";
						- _id = GUID 28fb4081-488b-4bf9-824e-5a958056e4c8;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\¹\¤\×\÷\Ì\¨\Ð\ý\×\ª\½\Ç\¶\È\¾\«\È\·\Ö\µ";
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
					- m_transform = 0.00181589 0 0 0.00128985 1004 118.436 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSink.Y";
					- m_csName = "\¹\¤\×\÷\Ì\¨\Ð\ý\×\ª\½\Ç\¶\È\¾\«\È\·\Ö\µ";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSink";
							- _id = GUID 7af606b2-55f1-437b-8143-2d2ac68e6ce6;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 07fb994f-cc9e-41e2-9ba6-efed9df8e38e;
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
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;4;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _subsystem = "Default";
						- _class = "Source";
						- _name = "U1";
						- _id = GUID c86e4ce5-6c32-4334-94a8-5c72d690c8f0;
					}
					- m_pParent = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
					- m_name = { CGIText 
						- m_str = "\·\Â\Õ\æ\Ï\µ\Í\³\Ê\ä\È\ë\Ï\Ô\Ê\¾\Æ\÷";
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
					- m_transform = 0.00162167 0 0 0.000531628 1055 375.592 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- m_csModelObjPath = "Default.Builder[0].itsSource.U1";
					- m_csName = "\·\Â\Õ\æ\Ï\µ\Í\³\Ê\ä\È\ë\Ï\Ô\Ê\¾\Æ\÷";
					- m_PartsArray = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ IHandle 
							- _m2Class = "IPart";
							- _subsystem = "Default";
							- _class = "Builder";
							- _name = "itsSource";
							- _id = GUID 87b1d036-bbd0-47b1-b841-dcf8aad7bc7e;
						}
						{ IHandle 
							- _m2Class = "IClass";
							- _subsystem = "Default";
							- _name = "Builder";
							- _id = GUID a5b2438a-8869-43e3-872d-261f8843bdb8;
						}
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
				- m_pRoot = GUID 84d964f4-acf4-4835-9a68-08eb1bfb5fc0;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_bFreezeCompartmentContent = 0;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _name = "Default";
				- _id = GUID 7a3a1f63-8227-4fbc-830f-e566d7388b03;
			}
		}
	}
}

