
void ML() {
  // case52 through case102 154 to 306
  // case154 to case306
  // case1 to case102 and case205 to case306
  f = 0;

  if (w == 1) {
    IK = 13;
    double Mx_trgt = Mx_strt - ((currentwalk - 154) * x2_stp);  //wave
     x = Mx_trgt;
     z = Mz_trgt;
    IKinematic();
  } else if (tet == 1) {
    if (currentwalk >= 1 && currentwalk <= 102) {
      IK = 13;
      double Mx_trgt = Mx_strt - ((currentwalk - 1) * x3_stp);  //tetrapod
       x = Mx_trgt;
       z = Mz_trgt;
      IKinematic();
    } else {
      IK = 13;
      double Mx_trgt = Mx_strt - ((currentwalk - 205) * x3_stp);  //tetrapod
       x = Mx_trgt;
       z = Mz_trgt;
      IKinematic();
    }
  } else if (tri == 1) {
    IK = 13;
    double Mx_trgt = Mx_strt - ((currentwalk - 154) * x5_stp);  //Tripod
    double x = Mx_trgt;
    double z = Mz_trgt;
    IKinematic();
  }
}
