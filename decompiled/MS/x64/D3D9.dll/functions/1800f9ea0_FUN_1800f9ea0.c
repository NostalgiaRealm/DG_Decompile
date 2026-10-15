/*
 * FUN_1800f9ea0 at 1800f9ea0
 * double __fastcall FUN_1800f9ea0(double param_1)
 * Address ranges: 1800f9ea0-1800f9f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

double FUN_1800f9ea0(double param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 0.0;
  if (param_1 <= 0.0) {
    return 0.0;
  }
  iVar2 = 0;
  dVar1 = DAT_1801107f8;
  if (1.0 <= param_1) {
    dVar4 = 1.0;
  }
  else {
    dVar4 = -1.0;
    param_1 = 1.0 / param_1;
  }
  while (dVar1 != 1.0) {
    dVar1 = (&DAT_1801107f8)[(longlong)iVar2 * 2];
    while (param_1 < dVar1) {
      iVar2 = iVar2 + 1;
      dVar1 = (&DAT_1801107f8)[(longlong)iVar2 * 2];
    }
    dVar3 = dVar3 + *(double *)(&DAT_1801107f0 + (longlong)iVar2 * 0x10);
    param_1 = param_1 / (&DAT_1801107f8)[(longlong)iVar2 * 2];
    dVar1 = (&DAT_1801107f8)[(longlong)iVar2 * 2];
  }
  return ((1.0 - param_1) + dVar3) * dVar4;
}

