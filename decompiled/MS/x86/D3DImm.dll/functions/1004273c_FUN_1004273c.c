/*
 * FUN_1004273c at 1004273c
 * undefined4 __stdcall FUN_1004273c(int * param_1, undefined4 param_2, int param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1004273c-10042806
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004273c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar4 = 0x80070057;
  if ((((param_1 != (int *)0x0) && (param_3 != 0)) &&
      (((iVar3 = (**(code **)(*param_1 + 0x38))(), (*(uint *)(iVar3 + 0x6c) & 0x20010) != 0 &&
        (param_5 == 0)) || ((param_5 & 0xffff03ff) == 0)))) &&
     (cVar1 = (**(code **)(*param_1 + 0x54))(param_2,param_3,param_4), cVar1 != '\0')) {
    uVar4 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

