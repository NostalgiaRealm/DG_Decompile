/*
 * FUN_1800028ec at 1800028ec
 * undefined8 __fastcall FUN_1800028ec(longlong param_1, int param_2)
 * Address ranges: 1800028ec-180002925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800028ec(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x10);
  bVar3 = false;
  if (*(int *)(&DAT_18010e300 + uVar2 * 0x1b0) == 1) {
    uVar1 = param_2 - 1;
    bVar3 = uVar1 < 2;
    bVar4 = uVar1 == 2;
  }
  else {
    if (*(int *)(&DAT_18010e300 + uVar2 * 0x1b0) != 3) goto LAB_180002922;
    uVar1 = param_2 - 2;
    bVar3 = uVar1 == 0;
    bVar4 = uVar1 == 1;
  }
  uVar2 = (ulonglong)uVar1;
  bVar3 = bVar3 || bVar4;
LAB_180002922:
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}

