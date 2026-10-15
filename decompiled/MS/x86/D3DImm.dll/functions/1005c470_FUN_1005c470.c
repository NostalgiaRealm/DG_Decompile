/*
 * FUN_1005c470 at 1005c470
 * undefined __stdcall FUN_1005c470(void)
 * Address ranges: 1005c470-1005c51d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c470(void)

{
  double dVar1;
  int iVar2;
  double in_XMM0_Qa;
  
  if (0.0 < in_XMM0_Qa) {
    iVar2 = 0;
    dVar1 = DAT_10061d18;
    if (in_XMM0_Qa < 1.0) {
      in_XMM0_Qa = 1.0 / in_XMM0_Qa;
    }
    while (dVar1 != 1.0) {
      dVar1 = (&DAT_10061d18)[iVar2 * 2];
      while (in_XMM0_Qa < dVar1) {
        dVar1 = (double)(&DAT_10061d28)[iVar2 * 2];
        iVar2 = iVar2 + 1;
      }
      in_XMM0_Qa = in_XMM0_Qa / (&DAT_10061d18)[iVar2 * 2];
      dVar1 = (&DAT_10061d18)[iVar2 * 2];
    }
    return;
  }
  return;
}

