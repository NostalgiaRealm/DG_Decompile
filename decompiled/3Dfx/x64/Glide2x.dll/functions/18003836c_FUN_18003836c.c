/*
 * FUN_18003836c at 18003836c
 * undefined __fastcall FUN_18003836c(ulonglong param_1, uint * param_2, longlong * param_3)
 * Address ranges: 18003836c-18003854a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003836c(ulonglong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_180038260(param_1,param_2,param_3);
  uVar1 = FUN_180054248((longlong)param_2,1,'\x01');
  param_2[(param_1 & 0xffffffff) + 0x20] = uVar1;
  uVar2 = param_1 & 0xffffffff;
  if (*param_2 == 0x40) {
    FUN_18005522c(param_2,param_3,0x38,(ulonglong)uVar1);
  }
  FUN_18005522c(param_2,param_3,0,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_18005522c(param_2,param_3,0x38,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_18005522c(param_2,param_3,0x34,(ulonglong)param_2[uVar2 + 0x20]);
  FUN_18005522c(param_2,param_3,0x33,(ulonglong)param_2[uVar2 + 0x20]);
  return;
}

