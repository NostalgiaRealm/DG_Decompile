/*
 * FUN_10004e50 at 10004e50
 * undefined __stdcall FUN_10004e50(void)
 * Address ranges: 10004e50-10004f18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004e50(void)

{
  double dVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  
  dVar3 = ABS(in_XMM0_Qa);
  if (DAT_100581e0 * 4.0 < dVar3) {
    return;
  }
  iVar2 = 0;
  dVar1 = DAT_100581e0;
  while (dVar1 != 0.0) {
    dVar1 = (&DAT_100581e0)[iVar2 * 2];
    while (dVar3 < dVar1) {
      dVar1 = (double)(&DAT_100581f0)[iVar2 * 2];
      iVar2 = iVar2 + 1;
    }
    dVar1 = (&DAT_100581e0)[iVar2 * 2];
    dVar3 = dVar3 - dVar1;
  }
  if (0.0 <= in_XMM0_Qa) {
    return;
  }
  return;
}

