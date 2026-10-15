/*
 * FUN_100418d0 at 100418d0
 * undefined FUN_100418d0(void)
 * Address ranges: 100418d0-10041a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100418d0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_38 = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 0x1510 + 0x510;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_48 = *(undefined4 *)(param_1 + 0x18);
  bVar2 = *(int *)(param_1 + 0x1c) != 1;
  uStack_44 = 2;
  if (bVar2) {
    uStack_44 = 0;
  }
  uStack_3c = 0x10000;
  if (bVar2) {
    uStack_3c = 0;
  }
  local_40 = 1;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,&local_48,0,(undefined4 *)(param_1 + 0xc));
  if (iVar4 < 0) {
LAB_100419fc:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 1) {
      local_50 = 0;
      uVar3 = (*pcVar1)(**(undefined4 **)(param_1 + 8),extraout_x1,param_1 + 0x10);
      iVar4 = (*extraout_w11_00)(uVar3,&local_50);
      if (iVar4 < 0) {
        uVar3 = (*pcVar1)();
        (*extraout_w11_01)(uVar3);
        *(undefined4 *)(param_1 + 0xc) = 0;
        goto LAB_100419fc;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

