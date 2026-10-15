/*
 * FUN_10075060 at 10075060
 * undefined FUN_10075060(void)
 * Address ranges: 10075060-1007532f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075060(undefined8 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
                 ,undefined4 param_11)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  uint local_50;
  undefined4 uStack_4c;
  
  iVar1 = param_3 + 0x18;
  uVar4 = 1;
  local_50 = param_7;
  uStack_4c = param_8;
  auVar5 = FUN_100ee580(iVar1,1,1);
  uVar3 = FUN_100ee580(iVar1,auVar5._8_8_ & 0xffffffff,uVar4 & 0xffffffff);
  puVar2 = (undefined4 *)(param_3 + 0x3fc);
  local_80 = 0xe4;
  local_84 = *puVar2;
  local_64 = 0;
  if (param_4 == 0) {
    param_4 = param_6;
  }
  local_6c = uStack_4c;
  uStack_68 = 0x1a4;
  local_74 = 0x40000000;
  uStack_70 = 0x40000000;
  local_88 = 0x1a4;
  local_7c = 0x40000000;
  local_78 = 0x40000000;
  local_90 = 7;
  local_8c = local_50;
  local_98 = 0x32;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_5;
  FUN_100ef510(&local_a0,0x40);
  local_98 = 0;
  local_80 = 0x1a4;
  local_7c = 0;
  local_84 = local_50 | 0x80000000;
  local_88 = 0x1a4;
  local_90 = 7;
  local_8c = uStack_4c;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_4;
  FUN_100ef510(&local_a0,0x28);
  local_90 = 1;
  local_80 = 0xa4;
  local_7c = 0;
  local_98 = 0x10;
  local_88 = 0xa4;
  local_84 = param_9;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = auVar5._0_4_;
  local_8c = param_4;
  FUN_100ef510(&local_a0,0x28);
  local_8c = param_4 | 0x80000000;
  local_7c = 0;
  local_88 = 0xa4;
  local_90 = 1;
  local_98 = 0x10;
  local_84 = param_11;
  local_80 = 0xa4;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = uVar3;
  FUN_100ef510(&local_a0,0x28);
  local_64 = 0;
  local_6c = local_50;
  uStack_68 = 0x1a4;
  local_74 = 0x40000000;
  uStack_70 = 0x40000000;
  local_80 = 0xe4;
  local_84 = *puVar2;
  local_7c = 0x40000000;
  local_78 = 0x40000000;
  local_88 = 0x1a4;
  local_90 = 7;
  local_8c = uStack_4c;
  local_98 = 0x32;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_6;
  FUN_100ef510(&local_a0,0x40);
  local_8c = auVar5._0_4_ | 0x80000000;
  local_78 = 0x1a4;
  local_74 = 0;
  local_88 = 0;
  local_80 = 0x1a4;
  local_90 = 7;
  local_98 = 0x32;
  local_84 = param_9;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_5;
  local_7c = param_5;
  FUN_100ef510(&local_a0,0x30);
  local_80 = 0xe4;
  local_84 = *puVar2;
  local_88 = 0x1a4;
  local_6c = 0;
  local_90 = 7;
  local_98 = 0x38;
  local_74 = 0x3eaaaaab;
  uStack_70 = 0x3eaaaaab;
  local_7c = 0x3eaaaaab;
  local_78 = 0x3eaaaaab;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_5;
  local_8c = param_5;
  FUN_100ef510(&local_a0,0x38);
  local_8c = uVar3 | 0x80000000;
  local_88 = 0;
  local_90 = 7;
  local_74 = 0;
  local_98 = 0x32;
  local_78 = 0x1a4;
  local_84 = param_11;
  local_80 = 0x1a4;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_6;
  local_7c = param_6;
  FUN_100ef510(&local_a0,0x30);
  local_80 = 0xe4;
  local_84 = *puVar2;
  local_6c = 0;
  local_98 = 0x38;
  local_88 = 0x1a4;
  local_90 = 7;
  local_74 = 0x3eaaaaab;
  uStack_70 = 0x3eaaaaab;
  local_7c = 0x3eaaaaab;
  local_78 = 0x3eaaaaab;
  local_a0 = iVar1;
  uStack_9c = param_2;
  local_94 = param_6;
  local_8c = param_6;
  FUN_100ef510(&local_a0,0x38);
  FUN_100ee638(iVar1,auVar5._0_8_ & 0xffffffff);
  FUN_100ee638(iVar1,uVar3);
  return;
}

