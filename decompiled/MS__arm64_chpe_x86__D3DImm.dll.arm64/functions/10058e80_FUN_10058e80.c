/*
 * FUN_10058e80 at 10058e80
 * undefined FUN_10058e80(void)
 * Address ranges: 10058e80-10058f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10058e80(undefined8 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 uVar5;
  undefined1 auStack_50 [16];
  
  iVar4 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar4 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_50);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar1 = 0x80070057;
  uVar5 = uVar1;
  if ((param_2 != 0) && (param_4 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(param_2);
    if ((((*(uint *)(iVar4 + 0x6c) & 0x20010) != 0) && (param_6 == 0)) ||
       ((param_6 & 0xffff03ff) == 0)) {
      (*pcVar2)();
      cVar3 = (*extraout_w11_00)(param_2,param_3,param_4,param_5);
      uVar5 = 0;
      if (cVar3 == '\0') {
        uVar5 = uVar1;
      }
    }
  }
  FUN_10096790(auStack_50);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar5;
}

