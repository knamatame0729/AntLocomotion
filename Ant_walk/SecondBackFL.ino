void SecondBackFL() {
  //case78 through case102 for tripod 231 to 306
  //case128 to case153 for wave
  //case256 to case306 for tetrapod

  f = 0;

  if (w == 1) {
    IK = 3;
    double Fx_trgt = Fx_end + ((currentwalk - 103) * x1_stp);  //wave
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 127) * z_stp;  //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 3;
    double Fx_trgt = Fx_end + ((currentwalk - 205) * x3_stp);  //Tetrapod
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 255) * z2_stp;  //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 3;
    double Fx_trgt = Fx_end + ((currentwalk - 154) * x5_stp);  //tripod
     x = Fx_trgt;
     z = (Fz_trgt + up) - (currentwalk - 230) * z3_stp;  //tripod
    IKinematic();
  }
}
