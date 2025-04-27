
void FR() {
  // case52 through case102  154 to 306
  // case1 to case153
  // case1 to case102 and case205 to case306
  f = 0;

  if (w == 1) {
    IK = 10;
    double Fx_trgt = Fx_strt - ((currentwalk - 1) * x2_stp);  //wave
     x = Fx_trgt;
     z = Fz_trgt;
    IKinematic();
  } else if (tet == 1) {
    if (currentwalk >= 1 && currentwalk <= 102) {
      IK = 10;
      double Fx_trgt = Fx_strt - ((currentwalk - 1) * x3_stp);  //tetrapod
       x = Fx_trgt;
       z = Fz_trgt;
      IKinematic();
    } else {
      IK = 10;
      double Fx_trgt = Fx_strt - ((currentwalk - 205) * x3_stp);  //tetrapod
       x = Fx_trgt;
       z = Fz_trgt;
      IKinematic();
    }
  } else if (tri == 1) {
    IK = 10;
    double Fx_trgt = Fx_strt - ((currentwalk - 231) * x6_stp);  //tripod
    double x = Fx_trgt;
    double z = Fz_trgt;
    IKinematic();
  }
}
