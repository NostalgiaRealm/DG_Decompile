/*
 * FUN_1004c1a0 at 1004c1a0
 * undefined FUN_1004c1a0(void)
 * Address ranges: 1004c1a0-1004c253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_1004c1a0(double param_1)

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
    dVar4 = DAT_100aa638;
    if (param_1 < 1.0) {
      dVar6 = -1.0;
    }
    while (dVar4 != 1.0) {
      dVar4 = (&DAT_100aa638)[iVar2 * 2];
      iVar1 = iVar2 * 0x10;
      while (dVar3 < dVar4) {
        iVar2 = iVar2 + 1;
        dVar4 = *(double *)(iVar1 + 0x100aa648);
        iVar1 = iVar1 + 0x10;
      }
      dVar3 = dVar3 / (&DAT_100aa638)[iVar2 * 2];
      dVar5 = (double)(&DAT_100aa630)[iVar2 * 2] + dVar5;
      dVar4 = (&DAT_100aa638)[iVar2 * 2];
    }
    return ((1.0 - dVar3) + dVar5) * dVar6;
  }
  return 0.0;
}

