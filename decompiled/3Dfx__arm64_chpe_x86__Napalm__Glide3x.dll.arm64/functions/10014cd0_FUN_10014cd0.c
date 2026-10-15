/*
 * FUN_10014cd0 at 10014cd0
 * undefined FUN_10014cd0(void)
 * Address ranges: 10014cd0-10014e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014cd0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_40 = *(undefined4 *)(param_1 + 0x368c);
  uStack_3c = *(undefined4 *)(param_1 + 0x3690);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,0,2,&local_40);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,0,2,&local_40);
  local_38 = *(undefined4 *)(param_1 + 0x36a0);
  uStack_34 = *(undefined4 *)(param_1 + 0x36a4);
  local_30 = *(undefined4 *)(param_1 + 0x36a8);
  FUN_10070b38(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),8,3,&local_38);
  FUN_10070b38(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),0xc,1,
               param_1 + 14000);
  return;
}

