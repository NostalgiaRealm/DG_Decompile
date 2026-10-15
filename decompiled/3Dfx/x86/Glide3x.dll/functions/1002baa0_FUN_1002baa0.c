/*
 * FUN_1002baa0 at 1002baa0
 * undefined __stdcall FUN_1002baa0(void)
 * Address ranges: 1002baa0-1002bb68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002baa0(void)

{
  double dVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  
  dVar3 = ABS(in_XMM0_Qa);
  if (DAT_1005b220 * 4.0 < dVar3) {
    return;
  }
  iVar2 = 0;
  dVar1 = DAT_1005b220;
  while (dVar1 != 0.0) {
    dVar1 = (&DAT_1005b220)[iVar2 * 2];
    while (dVar3 < dVar1) {
      dVar1 = (double)(&DAT_1005b230)[iVar2 * 2];
      iVar2 = iVar2 + 1;
    }
    dVar1 = (&DAT_1005b220)[iVar2 * 2];
    dVar3 = dVar3 - dVar1;
  }
  if (0.0 <= in_XMM0_Qa) {
    return;
  }
  return;
}

