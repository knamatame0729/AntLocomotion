
void FirstForwardFR() {

  // case1 through case25  1 to 77
  // case256 to case281
  // case103 to case153
  f = 0;

  if (w == 1) {
    IK = 11;
    double Fx_trgt = Fx_end + ((currentwalk - 256) * x1_stp);  //wave
     x = Fx_trgt;
     z = Fz_trgt + ((currentwalk - 255) * z_stp);        //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 11;
    double Fx_trgt = Fx_end + ((currentwalk - 103) * x3_stp);  //tetrapod
     x = Fx_trgt;
     z = Fz_trgt + ((currentwalk - 102) * z2_stp);       //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 11;
    double Fx_trgt = Fx_end + ((currentwalk - 1) * x6_stp);  //tripod
     x = Fx_trgt;
     z = Fz_trgt + currentwalk * z3_stp;                //tripod
    IKinematic();
  }
}