/*
 * FUN_1002ef80 at 1002ef80
 * undefined __stdcall FUN_1002ef80(void)
 * Address ranges: 1002ef80-1002f02d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ef80(void)

{
  double dVar1;
  int iVar2;
  double in_XMM0_Qa;
  
  if (0.0 < in_XMM0_Qa) {
    iVar2 = 0;
    dVar1 = DAT_1005f400;
    if (in_XMM0_Qa < 1.0) {
      in_XMM0_Qa = 1.0 / in_XMM0_Qa;
    }
    while (dVar1 != 1.0) {
      dVar1 = (&DAT_1005f400)[iVar2 * 2];
      while (in_XMM0_Qa < dVar1) {
        dVar1 = (double)(&DAT_1005f410)[iVar2 * 2];
        iVar2 = iVar2 + 1;
      }
      in_XMM0_Qa = in_XMM0_Qa / (&DAT_1005f400)[iVar2 * 2];
      dVar1 = (&DAT_1005f400)[iVar2 * 2];
    }
    return;
  }
  return;
}

