/*
 * FUN_10076d90 at 10076d90
 * undefined FUN_10076d90(void)
 * Address ranges: 10076d90-10076ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10076d90(undefined8 param_1,undefined4 param_2,int param_3,int param_4,byte param_5,
                uint param_6,byte param_7)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  uint local_58;
  undefined4 uStack_54;
  
  iVar1 = param_3 + 0x18;
  uVar5 = (uint)param_7;
  if (param_4 == 0) {
    uVar5 = (uint)param_7;
    param_4 = FUN_100ee580(iVar1,4,1);
  }
  local_60 = 0;
  iStack_5c = 0;
  local_70 = (uint)param_5;
  puVar2 = (undefined4 *)(param_3 + 0x410);
  bVar3 = *(byte *)(local_70 + 0x1012c920);
  uStack_6c = param_6 | 0x420100;
  uStack_64 = *puVar2;
  uVar5 = uVar5 | 0x100;
  local_78 = 0x38;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  local_68 = uVar5;
  FUN_100ef510(&local_80,0x28);
  uStack_6c = param_6 | 0x424100;
  local_60 = 0x55;
  uStack_64 = *puVar2;
  uVar4 = bVar3 | 0x100;
  uStack_54 = 0;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  local_70 = (uint)param_5;
  local_68 = uVar5;
  iStack_5c = param_4;
  local_58 = uVar4;
  FUN_100ef510(&local_80,0x30);
  uStack_6c = param_6 | 0x428100;
  uStack_54 = 0;
  local_60 = 0xaa;
  uStack_64 = *puVar2;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  local_70 = (uint)param_5;
  local_68 = uVar5;
  iStack_5c = param_4;
  local_58 = uVar4;
  FUN_100ef510(&local_80,0x30);
  return param_4;
}

