/*
 * FUN_180015d44 at 180015d44
 * ulonglong __fastcall FUN_180015d44(longlong param_1, undefined8 param_2, HDC param_3, int * param_4)
 * Address ranges: 180015d44-180015d92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180015d44(longlong param_1,undefined8 param_2,HDC param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined7 extraout_var;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  bVar2 = FUN_18002efb0((ulonglong)uVar1,param_2,param_3,param_4);
  if (*param_4 == 1) {
    FUN_18002fce8(*(longlong *)(&DAT_180112ad0 + (ulonglong)uVar1 * 600));
  }
  return CONCAT71(extraout_var,bVar2) & 0xffffffff;
}

