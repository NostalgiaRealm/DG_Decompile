/*
 * FUN_100fe320 at 100fe320
 * undefined FUN_100fe320(void)
 * Address ranges: 100fe320-100fe3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_100fe320(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (0.0 < param_1) {
    iVar2 = 0;
    dVar5 = 0.0;
    dVar3 = param_1;
    if (param_1 < 1.0) {
      dVar3 = 1.0 / param_1;
    }
    dVar6 = 1.0;
    dVar4 = DAT_101375e8;
    if (param_1 < 1.0) {
      dVar6 = -1.0;
    }
    while (dVar4 != 1.0) {
      dVar4 = (&DAT_101375e8)[iVar2 * 2];
      iVar1 = iVar2 * 0x10;
      while (dVar3 < dVar4) {
        iVar2 = iVar2 + 1;
        dVar4 = *(double *)(iVar1 + 0x101375f8);
        iVar1 = iVar1 + 0x10;
      }
      dVar3 = dVar3 / (&DAT_101375e8)[iVar2 * 2];
      dVar5 = *(double *)(&DAT_101375e0 + iVar2 * 0x10) + dVar5;
      dVar4 = (&DAT_101375e8)[iVar2 * 2];
    }
    return ((1.0 - dVar3) + dVar5) * dVar6;
  }
  return 0.0;
}

