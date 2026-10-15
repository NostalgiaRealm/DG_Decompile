/*
 * FUN_101213f8 at 101213f8
 * undefined FUN_101213f8(void)
 * Address ranges: 101213f8-101214bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101213f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar4 [16];
  undefined4 local_20 [4];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    local_20[0] = 0;
    auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_2,param_3);
    iVar2 = (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,2,0,local_20);
    if (-1 < iVar2) {
      uVar3 = (*pcVar1)();
      uVar3 = (*extraout_w11_00)(uVar3);
      (*(code *)PTR_FUN_1016c0e0)(uVar3);
      uVar3 = (*pcVar1)();
      (*extraout_w11_01)(uVar3);
    }
  }
  return;
}

