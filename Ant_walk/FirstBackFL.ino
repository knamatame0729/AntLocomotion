void FirstBackFL() {

  // case52 through case77 for tripod  154 to 230
  // case103 to case127 for wave
  // case 205 to case 255 for tetrapod
  f = 0;

  if (w == 1) {
    IK = 2;
    double Fx_trgt = Fx_end + ((currentwalk - 103) * x1_stp);  //Wave
     x = Fx_trgt;
     z = Fz_trgt + (currentwalk - 102) * z_stp;         //wave
    IKinematic();
  } else if (tet == 1) {
    IK = 2;
    double Fx_trgt = Fx_end + ((currentwalk - 205) * x3_stp);  //Tetrapod
     x = Fx_trgt;
     z = Fz_trgt + (currentwalk - 204) * z2_stp;         //tetrapod
    IKinematic();
  } else if (tri == 1) {
    IK = 2;
    double Fx_trgt = Fx_end + ((currentwalk - 154) * x5_stp);  //Tripod
     x = Fx_trgt;
     z = Fz_trgt + (currentwalk - 154) * z3_stp;         //tripod
    IKinematic();
  }
}
