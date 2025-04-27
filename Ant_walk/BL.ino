
void BL() {
  // Back Left leg stance movement
  f = 0;

  if (w == 1) {
    IK = 7;
    double Bx_trgt = Bx_strt - ((currentwalk - 154) * x2_stp);  // Wave Gait
    x = Bx_trgt;
    z = Bz_trgt;
    IKinematic();
  } else if (tet == 1) {
    IK = 7;
    double Bx_trgt = Bx_strt - ((currentwalk - 103) * x4_stp);  // Tetrapod Gait
     x = Bx_trgt;
     z = Bz_trgt;
    IKinematic();
  } else if (tri == 1) {
    IK = 7;
    double Bx_trgt = Bx_strt - ((currentwalk - 1) * x5_stp);  // Tripod Gait
     x = Bx_trgt;
     z = Bz_trgt;
    IKinematic();
  }
}
