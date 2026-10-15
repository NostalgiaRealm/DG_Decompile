/*
 * FUN_10083d20 at 10083d20
 * undefined FUN_10083d20(void)
 * Address ranges: 10083d20-10083ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10083d20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x1d200);
  puVar2 = (undefined4 *)(param_1 + 0x1d1fc);
  if (*piVar1 != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4);
    *piVar1 = 0;
    uVar4 = (*pcVar3)();
    (*extraout_w11_00)(uVar4);
    *puVar2 = 0;
  }
  local_70 = 0x100000001;
  uStack_68 = 0x10000001c;
  local_50 = 0;
  local_60 = 0x100000000;
  uStack_58 = 8;
  local_98 = 0;
  local_a0 = param_4;
  uStack_9c = param_5;
  local_78 = param_2;
  uStack_74 = param_3;
  uVar4 = (*pcVar3)();
  iVar5 = (*extraout_w11_01)(uVar4,&local_78,&local_a0,puVar2);
  if (-1 < iVar5) {
    local_80 = 0;
    local_90 = 0x40000001c;
    uStack_88 = 0xffffffff00000000;
    uVar4 = (*pcVar3)();
    iVar5 = (*extraout_w11_02)(uVar4,*puVar2,&local_90,piVar1);
    if (iVar5 < 0) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_03)(uVar4);
      *puVar2 = 0;
      return 0;
    }
  }
  return 1;
}

