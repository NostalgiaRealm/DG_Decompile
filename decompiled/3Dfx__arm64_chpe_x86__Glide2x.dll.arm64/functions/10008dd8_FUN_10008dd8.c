/*
 * FUN_10008dd8 at 10008dd8
 * undefined FUN_10008dd8(void)
 * Address ranges: 10008dd8-10008e8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_10008dd8(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = ABS(param_1);
  if (DAT_1009e200 * 4.0 < dVar4) {
    dVar4 = INFINITY;
    if (param_1 <= 0.0) {
      dVar4 = 0.0;
    }
    return dVar4;
  }
  iVar2 = 0;
  dVar5 = 1.0;
  dVar3 = DAT_1009e200;
  while (dVar3 != 0.0) {
    dVar3 = (&DAT_1009e200)[iVar2 * 2];
    iVar1 = iVar2 * 0x10;
    while (dVar4 < dVar3) {
      iVar2 = iVar2 + 1;
      dVar3 = *(double *)(iVar1 + 0x1009e210);
      iVar1 = iVar1 + 0x10;
    }
    dVar3 = (&DAT_1009e200)[iVar2 * 2];
    dVar4 = dVar4 - dVar3;
    dVar5 = (double)(&DAT_1009e208)[iVar2 * 2] * dVar5;
  }
  dVar5 = (dVar4 + 1.0) * dVar5;
  if (0.0 <= param_1) {
    return dVar5;
  }
  return 1.0 / dVar5;
}

