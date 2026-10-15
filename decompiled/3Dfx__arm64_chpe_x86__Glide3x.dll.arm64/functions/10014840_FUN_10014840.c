/*
 * FUN_10014840 at 10014840
 * undefined FUN_10014840(void)
 * Address ranges: 10014840-10014973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014840(int param_1)

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
  local_40 = *(undefined4 *)(param_1 + 0x330c);
  uStack_3c = *(undefined4 *)(param_1 + 0x3310);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,0,2,&local_40);
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2,0,2,&local_40);
  local_38 = *(undefined4 *)(param_1 + 0x3320);
  uStack_34 = *(undefined4 *)(param_1 + 0x3324);
  local_30 = *(undefined4 *)(param_1 + 0x3328);
  FUN_1006b498(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),8,3,&local_38);
  FUN_1006b498(*(undefined4 *)(param_1 + 0x3300),*(undefined4 *)(param_1 + 0x3304),0xc,1,
               param_1 + 0x3330);
  return;
}

