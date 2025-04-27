
void FL() {
  // case1 through case51  1 to 153 for tripod
  // case154 to case306
  // case1 to case204
  f = 0;

  if (w == 1) {
    IK = 1;
    double Fx_trgt = Fx_strt - ((currentwalk - 154) * x2_stp);  //wave gait
     x = Fx_trgt;
     z = Fz_trgt;
    IKinematic();
  } 
  else if (tet == 1) {
    IK = 1;
    double Fx_trgt = Fx_strt - ((currentwalk - 1) * x4_stp);  //tetrapod gait
     x = Fx_trgt;
     z = Fz_trgt;
    IKinematic();
  } else if (tri == 1) {
    IK = 1;
    double Fx_trgt = Fx_strt - ((currentwalk - 1) * x5_stp);  // Tripod Gait 1 to 153
     x = Fx_trgt;
     z = Fz_trgt;
    IKinematic();
  }
}
