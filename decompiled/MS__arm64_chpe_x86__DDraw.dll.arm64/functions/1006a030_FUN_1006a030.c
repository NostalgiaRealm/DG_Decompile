/*
 * FUN_1006a030 at 1006a030
 * undefined FUN_1006a030(void)
 * Address ranges: 1006a030-1006a28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a030(undefined8 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  FUN_100697e8(param_1,param_2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    local_50 = 0;
    local_a8 = 0;
    puVar1 = (undefined4 *)(param_2 + 0xd88);
    local_70 = 0x100000001;
    uStack_68 = 0x10000001b;
    local_60 = 0x100000000;
    uStack_58 = 8;
    uStack_ac = param_9;
    local_b0 = param_8;
    local_78 = param_3;
    iStack_74 = param_4;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(uVar4,&local_78,&local_b0,puVar1);
    if (-1 < iVar5) {
      local_80 = 0;
      local_90 = 0x40000001c;
      uStack_88 = 0xffffffff00000000;
      uVar4 = (*pcVar3)();
      iVar5 = (*extraout_w11_00)(uVar4,*puVar1,&local_90,(undefined4 *)(param_2 + 0xd8c));
      if (-1 < iVar5) {
        *(undefined4 *)(param_2 + 0xc40) = param_5;
        *(undefined4 *)(param_2 + 0xc44) = param_6;
        *(undefined4 *)(param_2 + 0xc48) = param_7;
        if (param_11 == 0) {
          return;
        }
        local_98 = 0;
        puVar2 = (undefined4 *)(param_2 + 0xd90);
        local_a0 = param_11;
        uStack_9c = param_13;
        uVar4 = (*pcVar3)();
        iVar5 = (*extraout_w11_01)(uVar4,&local_78,&local_a0,puVar2);
        if (-1 < iVar5) {
          uVar4 = (*pcVar3)();
          iVar5 = (*extraout_w11_02)(uVar4,*puVar2,&local_90);
          if (-1 < iVar5) {
            return;
          }
          uVar4 = (*pcVar3)();
          (*extraout_w11_03)(uVar4);
          *puVar2 = 0;
        }
        uVar4 = (*pcVar3)();
        (*extraout_w11_04)(uVar4);
        *(undefined4 *)(param_2 + 0xd8c) = 0;
      }
      uVar4 = (*pcVar3)();
      (*extraout_w11_05)(uVar4);
      *puVar1 = 0;
    }
  }
  return;
}

