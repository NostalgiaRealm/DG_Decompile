/*
 * FUN_100097b0 at 100097b0
 * undefined FUN_100097b0(void)
 * Address ranges: 100097b0-1000995b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100097b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xd200) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    *(undefined4 *)(param_1 + 0xd200) = 0;
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
    *(undefined4 *)(param_1 + 0xd1fc) = 0;
  }
  local_50 = 0;
  local_70 = 0x100000001;
  uStack_68 = 0x10000001c;
  local_60 = 0x100000000;
  uStack_58 = 8;
  local_98 = 0;
  local_a0 = param_4;
  uStack_9c = param_5;
  local_78 = param_2;
  uStack_74 = param_3;
  uVar2 = (*pcVar1)();
  iVar3 = (*extraout_w11_01)(uVar2,&local_78,&local_a0,param_1 + 0xd1fc);
  if (-1 < iVar3) {
    local_80 = 0;
    local_90 = 0x40000001c;
    uStack_88 = 0xffffffff00000000;
    uVar2 = (*pcVar1)();
    iVar3 = (*extraout_w11_02)(uVar2,*(undefined4 *)(param_1 + 0xd1fc),&local_90,param_1 + 0xd200);
    if (iVar3 < 0) {
      uVar2 = (*pcVar1)();
      (*extraout_w11_03)(uVar2);
      *(undefined4 *)(param_1 + 0xd1fc) = 0;
      return 0;
    }
  }
  return 1;
}

