/*
 * FUN_100b2690 at 100b2690
 * undefined FUN_100b2690(void)
 * Address ranges: 100b2690-100b2837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b2690(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint extraout_w15;
  undefined1 auVar3 [16];
  int local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  FUN_100ce8c8(*(undefined4 *)(param_1 + 0x10));
  if (extraout_w15 < 0xe) {
    local_70 = 0x1b;
    uStack_6c = 0x1c;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_80[0] = 0;
  local_34 = 0;
  local_50 = *(undefined4 *)(param_1 + 4);
  uStack_4c = *(undefined4 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  local_40 = local_70;
  local_3c = 0x800000000;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,&local_50,0,local_80);
  *(int *)(param_1 + 0x34) = local_80[0];
  if (local_80[0] != 0) {
    local_60 = 0;
    local_80[0] = 0;
    local_70 = uStack_6c;
    uStack_6c = 8;
    uStack_68 = 0;
    uStack_64 = 0xffffffff;
    auVar3 = (*pcVar1)();
    (*extraout_w11_00)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff,&local_70,local_80);
    *(int *)(param_1 + 0x38) = local_80[0];
    if (local_80[0] != 0) {
      return 1;
    }
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2);
    *(int *)(param_1 + 0x34) = 0;
  }
  return 0;
}

