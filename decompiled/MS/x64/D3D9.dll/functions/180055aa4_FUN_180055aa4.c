/*
 * FUN_180055aa4 at 180055aa4
 * ulonglong __fastcall FUN_180055aa4(longlong param_1, char param_2, char param_3, undefined8 * param_4)
 * Address ranges: 180055aa4-180055ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180055aa4(longlong param_1,char param_2,char param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  bVar1 = FUN_180041034(param_1 + 8,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,bVar1);
  if (iVar2 == 1) {
    uVar3 = 1;
  }
  else if (iVar2 == 2) {
    uVar3 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
  return uVar3;
}

