I-Logix-RPY-Archive version 8.13.0 C++ 9794446
{ IProject 
	- _id = GUID aa5064a0-31dd-4ccc-9fb4-aa6d2bbf799e;
	- _myState = 8192;
	- _name = "sifu";
	- _modifiedTimeWeak = 1.25.2018::7:30:44;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "sifuPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "sifuPkg";
		- _id = GUID 4f190c07-3d11-45fd-b5ba-58c981fd07a3;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID 66870687-f22d-4f56-b7fb-79c9f93578a9;
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
		- size = 2;
		- value = 
		{ ISubsystem 
			- fileName = "sifuPkg";
			- _id = GUID 4f190c07-3d11-45fd-b5ba-58c981fd07a3;
		}
		{ IProfile 
			- fileName = "UMLPerspectives";
			- _persistAs = "$OMROOT\\Settings\\UMLPerspectives";
			- _id = GUID d24d9192-bc4f-48a2-a4e1-fdaebbdfa6b6;
			- _partOfTheModelKind = referenceunit;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 66870687-f22d-4f56-b7fb-79c9f93578a9;
		}
	}
}

