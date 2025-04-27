void SecondForwardML() {
  //case26 through case51 78 to 153
  //case78 to case102
  //case154 to case204
  f = 0;

  if (w == 1) {
    IK = 15;
    double Mx_trgt = Mx_end + ((currentwalk - 52) * x1_stp);  //wave
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 77) * z_stp;  //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 15;
    double Mx_trgt = Mx_end + ((currentwalk - 103) * x3_stp);  //tetrapd
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 153) * z2_stp;  //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 15;
    double Mx_trgt = Mx_end + ((currentwalk - 1) * x5_stp);
     x = Mx_trgt;
     z = (Mz_trgt + up) - (currentwalk - 77) * z3_stp;
    IKinematic();
  }
}