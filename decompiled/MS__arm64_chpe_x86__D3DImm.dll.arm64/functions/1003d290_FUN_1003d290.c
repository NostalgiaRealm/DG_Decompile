/*
 * FUN_1003d290 at 1003d290
 * undefined FUN_1003d290(void)
 * Address ranges: 1003d290-1003d4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d290(undefined8 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined8 param_6,undefined4 param_7,ulonglong param_8,char param_9,
                 undefined4 param_10,char param_11)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int iStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_50;
  
  local_50 = (undefined4)param_1;
  uVar2 = (param_8 & 0xffffff) >> ((ulonglong)(uint)(param_3 * 3) & 0x3f);
  iVar3 = 0;
  uVar1 = (uint)uVar2 & 7;
  iVar4 = iVar3;
  if ((uVar2 & 7) != 0) {
    if ((param_8 >> 0x3d & 1) == 0) {
      iVar4 = param_4;
      if (param_9 != '\0') {
        local_84 = *(int *)(param_2 + 0x94);
        local_64 = 0;
        uStack_68 = 0xe4;
        local_74 = 0;
        uStack_70 = 0;
        local_7c = 0x3f800000;
        iStack_78 = 0x3f800000;
        local_80 = 0xe4;
        local_88 = 0x54;
        local_8c = *(undefined4 *)(param_2 + 0x200);
        local_90 = 0xf;
        local_98 = 0x32;
        local_a0 = param_2;
        uStack_9c = param_7;
        uStack_94 = param_5;
        local_6c = param_4;
        param_1 = FUN_1007a868(&local_a0,0x40);
        iVar4 = iVar3;
      }
    }
    else {
      local_90 = 0xf;
      local_80 = 0xff;
      local_7c = 0;
      local_98 = 0xe;
      local_88 = 0xe4;
      local_a0 = param_2;
      uStack_9c = param_7;
      uStack_94 = param_5;
      local_8c = param_4;
      local_84 = param_4;
      FUN_1007a868(&local_a0,0x28);
      local_74 = 0xe4;
      uStack_70 = 0;
      local_7c = 0xe4;
      local_84 = param_3 * 0x30 + 0xec;
      local_8c = *(undefined4 *)(param_2 + 0x5c);
      local_88 = 0xff;
      local_90 = 0xf;
      local_98 = 0x37;
      local_a0 = param_2;
      uStack_9c = param_7;
      uStack_94 = param_5;
      local_80 = param_5;
      iStack_78 = param_4;
      param_1 = FUN_1007a868(&local_a0,0x34);
      if (param_9 != '\0') {
        local_98 = 0;
        local_84 = *(int *)(param_2 + 0x200);
        local_80 = 0x54;
        local_7c = 0;
        local_88 = 0x54;
        local_90 = 3;
        local_a0 = param_2;
        uStack_9c = param_7;
        uStack_94 = param_5;
        local_8c = param_5;
        param_1 = FUN_1007a868(&local_a0,0x28);
      }
    }
  }
  if ((param_3 == 0) && (((uint)param_8 >> 0x19 & 1) != 0)) {
    local_a0 = CONCAT31(local_a0._1_3_,0xe4);
    FUN_10044738(local_50,param_2,uVar1,0,param_5,param_7,param_8,iVar4);
  }
  else {
    local_a0 = iVar4;
    FUN_1003c068(param_1,param_2,uVar1,param_3,param_5);
  }
  if (((uVar2 & 7) != 0) && (param_11 != '\0')) {
    local_80 = 0xaa;
    local_7c = 0;
    local_84 = *(undefined4 *)(param_2 + 0x200);
    local_88 = 0xa4;
    local_90 = 7;
    local_98 = 0x38;
    local_a0 = param_2;
    uStack_9c = param_7;
    uStack_94 = param_5;
    local_8c = param_5;
    FUN_1007a868(&local_a0,0x28);
  }
  return;
}

