/*
 * FUN_180006700 at 180006700
 * double __fastcall FUN_180006700(double param_1)
 * Address ranges: 180006700-1800067d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_180006700(double param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = ABS(param_1);
  if (DAT_18006b1f0 * 4.0 < dVar3) {
    dVar3 = 0.0;
    if (0.0 < param_1) {
      dVar3 = INFINITY;
    }
    return dVar3;
  }
  iVar2 = 0;
  dVar4 = 1.0;
  dVar1 = DAT_18006b1f0;
  while (dVar1 != 0.0) {
    dVar1 = (&DAT_18006b1f0)[(longlong)iVar2 * 2];
    while (dVar3 < dVar1) {
      iVar2 = iVar2 + 1;
      dVar1 = (&DAT_18006b1f0)[(longlong)iVar2 * 2];
    }
    dVar1 = (&DAT_18006b1f0)[(longlong)iVar2 * 2];
    dVar4 = dVar4 * (double)(&DAT_18006b1f8)[(longlong)iVar2 * 2];
    dVar3 = dVar3 - dVar1;
  }
  dVar4 = (dVar3 + 1.0) * dVar4;
  if (param_1 < 0.0) {
    return 1.0 / dVar4;
  }
  return dVar4;
}

