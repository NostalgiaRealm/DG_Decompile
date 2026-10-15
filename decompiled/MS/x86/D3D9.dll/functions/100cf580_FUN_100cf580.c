/*
 * FUN_100cf580 at 100cf580
 * undefined __stdcall FUN_100cf580(void)
 * Address ranges: 100cf580-100cf62d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cf580(void)

{
  double dVar1;
  int iVar2;
  double in_XMM0_Qa;
  
  if (0.0 < in_XMM0_Qa) {
    iVar2 = 0;
    dVar1 = DAT_100dd610;
    if (in_XMM0_Qa < 1.0) {
      in_XMM0_Qa = 1.0 / in_XMM0_Qa;
    }
    while (dVar1 != 1.0) {
      dVar1 = (&DAT_100dd610)[iVar2 * 2];
      while (in_XMM0_Qa < dVar1) {
        dVar1 = (double)(&DAT_100dd620)[iVar2 * 2];
        iVar2 = iVar2 + 1;
      }
      in_XMM0_Qa = in_XMM0_Qa / (&DAT_100dd610)[iVar2 * 2];
      dVar1 = (&DAT_100dd610)[iVar2 * 2];
    }
    return;
  }
  return;
}

