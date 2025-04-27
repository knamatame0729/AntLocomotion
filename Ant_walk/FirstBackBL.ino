
void FirstBackBL() {
  //case52 through case77 for tripod gait    154 to 230

  // case1 through case25 for wave gait

  // case1 through case51 for tetrapod gait
  f = 0;

  if (w == 1) {
    IK = 8;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x1_stp);  //wave gait
     x = Bx_trgt;
     z = Bz_trgt + (currentwalk - 1) * z_stp;         // Wave Gait
    IKinematic();
  } else if (tet == 1) {
    IK = 8;
    double Bx_trgt = Bx_end + ((currentwalk - 1) * x3_stp);  //tetrapod gait
     x = Bx_trgt;
     z = Bz_trgt + (currentwalk - 1) * z2_stp;         // Tetrapod Gait
    IKinematic();
  } else if (tri == 1) {
    IK = 8;
    double Bx_trgt = Bx_end + ((currentwalk - 154) * x5_stp);  //tripod gait
     x = Bx_trgt;
     z = Bz_trgt + (currentwalk - 154) * z3_stp;         //Tripod Gait
    IKinematic();
  }
}
