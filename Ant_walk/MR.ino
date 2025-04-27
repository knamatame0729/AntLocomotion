
void MR() {
  //case1 through case51 1 to 153 wave
  //case1 to case153
  //case103 to case306
  f = 0;
  if (w == 1) {
    IK = 4;
    double Mx_trgt = Mx_strt - ((currentwalk - 1) * x2_stp);  //Wave Gait
     x = Mx_trgt;
     z = Mz_trgt;
    IKinematic();
  } else if (tet == 1) {
    IK = 4;
    double Mx_trgt = Mx_strt - ((currentwalk - 103) * x4_stp);  //Tetrapod Gait
     x = Mx_trgt;
     z = Mz_trgt;
    IKinematic();
  } else if (tri == 1) {
    IK = 4;
    double Mx_trgt = Mx_strt - ((currentwalk - 1) * x6_stp);  //Tripod Gait
     x = Mx_trgt;
     z = Mz_trgt;
    IKinematic();
  }
}
