class CfgFunctions {
  class ADDON {
    class fastrope {
      file = QPATHTOF(functions\fastrope);
      class onPrepareRopes;
      class onCutRopes;
    };
    class slingload {
      file = QPATHTOF(functions\slingload);
      class initSlingloadOffset {postInit = 1;};
    };
  };
};
