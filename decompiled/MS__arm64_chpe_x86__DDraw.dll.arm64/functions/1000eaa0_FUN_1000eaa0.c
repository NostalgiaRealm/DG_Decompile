/*
 * FUN_1000eaa0 at 1000eaa0
 * undefined FUN_1000eaa0(void)
 * Address ranges: 1000eaa0-1000ebab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000eaa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar3 = FUN_100913c0(0xdc);
  if ((iVar3 != 0) &&
     (iVar3 = FUN_10011378(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           *(int *)(*(int *)(param_1 + 4) + 0x7c) != 2),
     pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, iVar3 != 0)) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar2 = (*extraout_w11)(uVar4);
    if (cVar2 != '\0') {
      return iVar3 + 0x88;
    }
    (*pcVar1)();
    (*extraout_w11_00)(iVar3 + 0x88,1);
  }
  return 0;
}

