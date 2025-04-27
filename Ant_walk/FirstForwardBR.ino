
void FirstForwardBR() {
  // case1 through case25 1 to 77
  // case154 to case179
  // case205 to case255
  f = 0;

  if (w == 1) {
    IK = 17;
    double Bx_trgt = Bx_end + ((currentwalk - 154) * x1_stp);  //wave
     x = Bx_trgt;
     z = Bz_trgt + ((currentwalk - 153) * z_stp);        //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 17;
    double Bx_trgt = Bx_end + ((currentwalk - 205) * x3_stp);  //tetrapod
     x = Bx_trgt;
     z = Bz_trgt + ((currentwalk - 204) * z2_stp);       //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 17;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x6_stp);  //tripod
     x = Bx_trgt;
     z = Bz_trgt + currentwalk * z3_stp;
    IKinematic();
  }
}