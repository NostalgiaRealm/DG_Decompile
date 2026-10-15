/*
 * FUN_100cd5e0 at 100cd5e0
 * undefined FUN_100cd5e0(void)
 * Address ranges: 100cd5e0-100cd6ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100cd5e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_f0 [2];
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined1 auStack_80 [88];
  undefined4 local_28;
  
  (*(code *)PTR_FUN_1016c270)(param_2);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_f0[0] = 0;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,param_3,local_f0);
  if (-1 < iVar3) {
    uVar2 = (*pcVar1)();
    iVar3 = (*extraout_w11_00)(uVar2,auStack_80);
    if (-1 < iVar3) {
      uStack_dc = 0;
      local_e4 = 0;
      uStack_cc = 0;
      uStack_d4 = 0;
      uStack_bc = 0;
      uStack_c4 = 0;
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_9c = 0;
      uStack_a4 = 0;
      uStack_8c = 0;
      uStack_94 = 0;
      uStack_84 = 0;
      local_e8 = 0x68;
      iVar3 = (*(code *)PTR_FUN_1016c1d8)(local_28,&local_e8);
      if (iVar3 != 0) {
        param_2[1] = uStack_dc;
        *param_2 = local_e4;
      }
    }
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2);
  }
  return param_2;
}

