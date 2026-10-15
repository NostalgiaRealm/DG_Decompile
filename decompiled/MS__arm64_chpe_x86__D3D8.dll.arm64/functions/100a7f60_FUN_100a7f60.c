/*
 * FUN_100a7f60 at 100a7f60
 * undefined FUN_100a7f60(void)
 * Address ranges: 100a7f60-100a8153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a7f60(undefined4 param_1,uint *param_2,int param_3,int param_4,int param_5,byte param_6)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int iStack_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  byte local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  
  puVar1 = param_2 + 3;
  local_44 = param_4;
  iVar3 = FUN_100ee580(puVar1,4,1);
  bVar2 = *(byte *)((int)param_2 + 0x61);
  uVar4 = 5;
  if ((*param_2 & 0xf) != 5) {
    uVar4 = 1;
  }
  param_2[bVar2 + 0x1f] = uVar4;
  local_48 = bVar2 | 0x410700;
  if (param_4 == 0 || param_5 != param_3) {
    param_4 = iVar3;
  }
  local_4c = *(ushort *)((int)param_2 + 2) & 1 | 0x20010600;
  local_50 = (param_6 ^ 1) * '\b' + 7;
  *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] | 3;
  local_88 = 4;
  local_84 = 0;
  local_8c = 0x210101;
  local_90 = 3;
  local_98 = 0x36;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_94 = iVar3;
  FUN_100ef510(&local_a0,0x20);
  local_84 = 0xb4;
  local_80 = 0;
  local_8c = param_2[0x14];
  local_88 = 0;
  local_90 = 4;
  local_98 = 0x36;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_94 = iVar3;
  FUN_100ef510(&local_a0,0x24);
  local_74 = param_2[0x14] | 0x10000000;
  uStack_70 = 0;
  local_6c = 0xb0;
  uStack_68 = 0;
  local_7c = local_4c;
  uStack_78 = 0;
  local_80 = 0xe4;
  local_84 = local_48;
  local_88 = 0xa4;
  local_98 = 0x48;
  local_90 = (uint)local_50;
  local_a0 = puVar1;
  uStack_9c = param_1;
  iStack_94 = param_4;
  local_8c = iVar3;
  FUN_100ef510(&local_a0,0x3c);
  if (param_5 != param_3) {
    param_4 = local_44;
    if (local_44 == 0) {
      param_4 = iVar3;
    }
    FUN_100a5778(param_1,param_2,param_4,local_50,iVar3,param_3,param_5);
  }
  if (param_4 != iVar3) {
    FUN_100ee638(puVar1,iVar3);
  }
  return param_4;
}

