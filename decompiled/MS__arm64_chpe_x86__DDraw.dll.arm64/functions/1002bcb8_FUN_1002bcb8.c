/*
 * FUN_1002bcb8 at 1002bcb8
 * undefined FUN_1002bcb8(void)
 * Address ranges: 1002bcb8-1002bf8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002bcb8(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                int param_6,int param_7,char param_8,byte param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  char local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  int iStack_48;
  
  iVar1 = param_2 + 0xc;
  uVar9 = param_9 ^ 1;
  uVar2 = uVar9 * 8 + 7;
  uVar11 = *(byte *)(param_2 + 0x5c) | 0x410700;
  *(undefined4 *)(param_2 + (uint)*(byte *)(param_2 + 0x5c) * 4 + 0x7c) = 5;
  local_58 = *(byte *)(param_2 + 0x5d) | 0x410700;
  *(undefined4 *)(param_2 + (uint)*(byte *)(param_2 + 0x5d) * 4 + 0x7c) = 5;
  local_60 = param_8;
  local_5c = param_3;
  local_54 = param_6;
  local_50 = uVar11;
  local_4c = param_4;
  iStack_48 = param_2;
  iVar7 = FUN_10083f38(iVar1,4,1);
  uVar8 = FUN_10083f38(iVar1,uVar9 + 3,0);
  puVar3 = (undefined4 *)(param_2 + 0x54);
  uStack_84 = 0xe4;
  local_90 = 0xe4;
  uStack_8c = 0;
  local_94 = *puVar3;
  local_80 = 0;
  uVar9 = local_5c | 0x10000000;
  local_98 = 0;
  local_a8 = 0xa7;
  local_b0 = iVar1;
  uStack_ac = param_1;
  uStack_a4 = iVar7;
  local_a0 = uVar2 & 0xff;
  uStack_9c = uVar9;
  local_88 = uVar11;
  FUN_10084ec8(&local_b0,0x34);
  local_80 = 0;
  local_98 = 1;
  if (local_60 == '\x01') {
    local_98 = 2;
  }
  local_88 = local_58;
  uStack_84 = 0xe4;
  local_90 = 0xe4;
  uStack_8c = 0;
  local_94 = *puVar3;
  local_a8 = 0xa7;
  local_b0 = iVar1;
  uStack_ac = param_1;
  uStack_a4 = uVar8;
  local_a0 = uVar2 & 0xff;
  uStack_9c = uVar9;
  FUN_10084ec8(&local_b0,0x34);
  local_90 = 0x1e4;
  uStack_8c = 0;
  local_98 = 0x1e4;
  uVar11 = uVar2 & 0xff;
  local_a8 = 0;
  local_b0 = iVar1;
  uStack_ac = param_1;
  uStack_a4 = uVar8;
  local_a0 = uVar11;
  uStack_9c = iVar7;
  local_94 = uVar8;
  FUN_10084ec8(&local_b0,0x28);
  local_80 = 0;
  local_98 = 1;
  if (local_60 != '\x01') {
    local_98 = 2;
  }
  local_88 = local_50;
  uStack_84 = 0xe4;
  local_90 = 0xe4;
  uStack_8c = 0;
  local_94 = *puVar3;
  local_a8 = 0xa7;
  local_b0 = iVar1;
  uStack_ac = param_1;
  uStack_a4 = iVar7;
  local_a0 = uVar11;
  uStack_9c = uVar9;
  FUN_10084ec8(&local_b0,0x34);
  local_80 = 0;
  local_90 = 0xe4;
  uStack_8c = 0;
  local_88 = local_58;
  uStack_84 = 0xe4;
  local_94 = *puVar3;
  local_98 = 3;
  local_a8 = 0xa7;
  uStack_a4 = local_5c;
  local_b0 = iVar1;
  uStack_ac = param_1;
  local_a0 = uVar11;
  uStack_9c = uVar9;
  FUN_10084ec8(&local_b0,0x34);
  local_90 = 0x1e4;
  uStack_8c = 0;
  local_a8 = 0;
  local_98 = 0x1e4;
  local_94 = local_5c;
  local_b0 = iVar1;
  uStack_ac = param_1;
  uStack_a4 = iVar7;
  local_a0 = uVar11;
  uStack_9c = iVar7;
  FUN_10084ec8(&local_b0,0x28);
  iVar6 = iStack_48;
  iVar4 = param_7;
  if (param_7 == 0 || local_54 != 1) {
    iVar4 = iVar7;
  }
  uVar10 = 0x55;
  if (local_60 != '\x02') {
    uVar10 = 0;
  }
  local_b0 = CONCAT31(local_b0._1_3_,uVar10);
  FUN_1002b230(param_1,iStack_48,iVar4,(char)uVar2,iVar7,uVar8,iVar7,local_4c);
  if (local_54 != 3 && iVar4 == iVar7) {
    iVar5 = param_7;
    if (param_7 == 0) {
      iVar5 = iVar7;
    }
    FUN_1002aff8(param_1,iVar6,iVar5,uVar2 & 0xff,iVar7,1,local_54);
  }
  FUN_10083ff0(iVar1,uVar8);
  if (iVar4 == param_7) {
    FUN_10083ff0(iVar1,iVar7);
    iVar7 = param_7;
  }
  return iVar7;
}

