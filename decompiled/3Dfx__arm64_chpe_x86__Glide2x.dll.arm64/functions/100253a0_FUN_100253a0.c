/*
 * FUN_100253a0 at 100253a0
 * undefined FUN_100253a0(void)
 * Address ranges: 100253a0-100254d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100253a0(int param_1)

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
  local_40 = *(undefined4 *)(param_1 + 0x318c);
  uStack_3c = *(undefined4 *)(param_1 + 0x3190);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,0,2,&local_40);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,0,2,&local_40);
  local_38 = *(undefined4 *)(param_1 + 0x31a0);
  uStack_34 = *(undefined4 *)(param_1 + 0x31a4);
  local_30 = *(undefined4 *)(param_1 + 0x31a8);
  FUN_100677f8(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),8,3,&local_38);
  FUN_100677f8(*(undefined4 *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184),0xc,1,
               param_1 + 0x31b0);
  return;
}

