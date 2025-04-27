void Tripod() {
  ////////////////////Tripod///////////////////
  tri = 1;
  tet = 0;
  w = 0;
  if (currentwalk <= 77) { //25
    FirstForwardFR();
    FirstForwardML();
    FirstForwardBR();
    FL();
    MR();
    BL();
  }

  else if (currentwalk <= 153) { //51 
    SecondForwardFR();
    SecondForwardML();
    SecondForwardBR();
    FL();
    MR();
    BL();
  }

  else if (currentwalk <= 230) { //77
    FirstBackFL();
    FirstBackMR();
    FirstBackBL();
    FR();
    ML();
    BR()
  }

  else {
    SecondBackFL();
    SecondBackMR();
    SecondBackBL();
    FR();
    ML();
    BR();
  }
}