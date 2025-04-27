
void BR() {
  // case52 through case102 154 to 306
  // case1 to case153 for wave
  // case1 to case204 for tetrapod
  f = 0;

  if (w == 1) {
    IK = 16;
    double Bx_trgt = Bx_strt - ((currentwalk - 1) * x2_stp);  //wave
     x = Bx_trgt;
     z = Bz_trgt;
    IKinematic();
  } else if (tet == 1) {
    IK = 16;
    double Bx_trgt = Bx_strt - ((currentwalk - 1) * x4_stp);  //tetrapod
     x = Bx_trgt;
     z = Bz_trgt;
    IKinematic();
  } else if (tri == 1) {
    IK = 16;
    double Bx_trgt = Bx_strt - ((currentwalk - 154) * x6_stp);  //tripod
     x = Bx_trgt;
     z = Bz_trgt;
    IKinematic();
  }
}