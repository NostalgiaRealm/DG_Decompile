/*
 * FUN_180033850 at 180033850
 * double __fastcall FUN_180033850(double param_1)
 * Address ranges: 180033850-180033925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_180033850(double param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = ABS(param_1);
  if (DAT_18006d320 * 4.0 < dVar3) {
    dVar3 = 0.0;
    if (0.0 < param_1) {
      dVar3 = INFINITY;
    }
    return dVar3;
  }
  iVar2 = 0;
  dVar4 = 1.0;
  dVar1 = DAT_18006d320;
  while (dVar1 != 0.0) {
    dVar1 = (&DAT_18006d320)[(longlong)iVar2 * 2];
    while (dVar3 < dVar1) {
      iVar2 = iVar2 + 1;
      dVar1 = (&DAT_18006d320)[(longlong)iVar2 * 2];
    }
    dVar1 = (&DAT_18006d320)[(longlong)iVar2 * 2];
    dVar4 = dVar4 * (double)(&DAT_18006d328)[(longlong)iVar2 * 2];
    dVar3 = dVar3 - dVar1;
  }
  dVar4 = (dVar3 + 1.0) * dVar4;
  if (param_1 < 0.0) {
    return 1.0 / dVar4;
  }
  return dVar4;
}

