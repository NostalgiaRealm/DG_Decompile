/*
 * FUN_180212e90 at 180212e90
 * undefined FUN_180212e90(void)
 * Address ranges: 180212e90-180212eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180212e90(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = 0;
  while ((lVar2 != 0 && (iVar1 = FUN_180222cb8(param_2,param_1[uVar3]), iVar1 != 0))) {
    uVar3 = (ulonglong)((int)uVar3 + 1);
    lVar2 = param_1[uVar3];
  }
  if (param_1[uVar3] == 0) {
    param_1[uVar3] = param_2;
  }
  return uVar3;
}

