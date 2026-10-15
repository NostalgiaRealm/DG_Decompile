/*
 * FUN_10075338 at 10075338
 * undefined FUN_10075338(void)
 * Address ranges: 10075338-100755c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075338(undefined8 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  iVar1 = param_3 + 0x18;
  uVar4 = 1;
  local_50 = param_8;
  uStack_4c = param_7;
  uVar2 = FUN_100ee580(iVar1,3,1);
  auVar6 = FUN_100ee580(iVar1,1,uVar4 & 0xffffffff);
  uVar3 = FUN_100ee580(iVar1,auVar6._8_8_ & 0xffffffff,1);
  if (*(char *)(param_3 + 0x49e) == '\0') {
    uStack_84 = param_6 | 0x80000000;
    local_98 = 0;
    local_88 = 0x1a4;
    local_90 = 7;
    local_80 = 0x1a4;
    local_7c = 0;
    local_a0 = iVar1;
    uStack_9c = param_2;
    uStack_94 = param_4;
    uStack_8c = param_5;
    FUN_100ef510(&local_a0,0x28);
  }
  local_98 = 0;
  local_80 = 0x1a4;
  local_7c = 0;
  local_88 = 0x1a4;
  uStack_84 = local_50;
  local_90 = 7;
  uStack_8c = uStack_4c;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar2;
  FUN_100ef510(&local_a0,0x28);
  local_80 = 0xa4;
  local_7c = 0;
  local_88 = 0xa4;
  local_90 = 1;
  uVar5 = auVar6._0_4_;
  local_98 = 0x10;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar5;
  uStack_8c = param_4;
  uStack_84 = uVar2;
  FUN_100ef510(&local_a0,0x28);
  local_80 = 0xa4;
  local_7c = 0;
  local_88 = 0xa4;
  local_90 = 1;
  local_98 = 0x10;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar3;
  uStack_8c = param_4;
  uStack_84 = param_4;
  FUN_100ef510(&local_a0,0x28);
  local_80 = 0;
  local_7c = 0;
  local_90 = 7;
  local_98 = 0x38;
  local_88 = 0x1a4;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = param_4;
  uStack_8c = param_4;
  uStack_84 = uVar5;
  FUN_100ef510(&local_a0,0x28);
  local_90 = 7;
  local_98 = 0xe;
  local_80 = 0;
  local_7c = 0;
  local_88 = 0x1a4;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = param_4;
  uStack_8c = param_4;
  uStack_84 = uVar3;
  FUN_100ef510(&local_a0,0x28);
  local_6c = param_4 | 0x80000000;
  local_64 = 0;
  uStack_68 = 0x1a4;
  local_80 = 0xe4;
  uStack_84 = *(undefined4 *)(param_3 + 0x3fc);
  local_74 = 0x3f000000;
  uStack_70 = 0x3f000000;
  local_7c = 0x3f000000;
  uStack_78 = 0x3f000000;
  local_88 = 0x1a4;
  local_90 = 7;
  local_98 = 0x32;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar2;
  uStack_8c = uVar2;
  FUN_100ef510(&local_a0,0x40);
  local_80 = 0xa4;
  local_7c = 0;
  local_88 = 0xa4;
  local_90 = 1;
  local_98 = 0x10;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar5;
  uStack_8c = uVar2;
  uStack_84 = uVar2;
  FUN_100ef510(&local_a0,0x28);
  local_88 = 0;
  uStack_84 = 0;
  local_90 = 1;
  local_98 = 0x44;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = uVar5;
  uStack_8c = uVar5;
  FUN_100ef510(&local_a0,0x20);
  local_80 = 0;
  local_7c = 0;
  local_90 = 7;
  local_98 = 0x38;
  local_88 = 0x1a4;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_94 = param_4;
  uStack_8c = uVar2;
  uStack_84 = uVar5;
  FUN_100ef510(&local_a0,0x28);
  FUN_100ee638(iVar1,uVar2);
  FUN_100ee638(iVar1,auVar6._0_8_ & 0xffffffff);
  FUN_100ee638(iVar1,uVar3);
  return;
}

