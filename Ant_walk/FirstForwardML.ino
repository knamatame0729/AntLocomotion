
void FirstForwardML() {
  // case1 through case26 1 to 77
  // case52 to case77
  // case103 to case153
  f = 0;
  
  if (w == 1) {
    IK = 14;
    double Mx_trgt = Mx_end + ((currentwalk - 52) * x1_stp);  //wave
     x = Mx_trgt;
     z = Mz_trgt + ((currentwalk - 51) * z_stp);       //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 14;
    double Mx_trgt = Mx_end + ((currentwalk - 103) * x3_stp);  //tetrapd
     x = Mx_trgt;
     z = Mz_trgt + ((currentwalk - 102) * z2_stp);       //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 14;
    double Mx_trgt = Mx_end + ((currentwalk - 1) * x5_stp);
     x = Mx_trgt;
     z = Mz_trgt + currentwalk * z3_stp;
    IKinematic();
  }
}