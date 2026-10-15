/*
 * FUN_10076b68 at 10076b68
 * undefined FUN_10076b68(void)
 * Address ranges: 10076b68-10076d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10076b68(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  iVar1 = param_3 + 0x18;
  uVar3 = FUN_100ee580(iVar1,3,1);
  iStack_6c = *(undefined4 *)(param_3 + 0x410);
  local_60 = 0xa6;
  iStack_5c = 0;
  local_68 = 1;
  local_70 = 7;
  local_78 = 0x38;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = uVar3;
  iStack_64 = iStack_6c;
  FUN_100ef510(&local_80,0x28);
  if (param_4 == 0) {
    param_4 = FUN_100ee580(iVar1,4,1);
  }
  local_60 = 0;
  iStack_5c = 0;
  iStack_6c = *(undefined4 *)(param_3 + 0x478);
  local_78 = 0x38;
  local_68 = 0x1a4;
  local_70 = 7;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_64 = uVar3;
  FUN_100ef510(&local_80,0x28);
  local_60 = 0x55;
  iStack_6c = *(undefined4 *)(param_3 + 0x47c);
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_64 = uVar3;
  iStack_5c = param_4;
  FUN_100ef510(&local_80,0x30);
  local_60 = 0xaa;
  iStack_6c = *(undefined4 *)(param_3 + 0x474);
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_64 = uVar3;
  iStack_5c = param_4;
  FUN_100ef510(&local_80,0x30);
  local_60 = 0x1a4;
  iStack_5c = 0;
  local_68 = 0x1a4;
  local_70 = 7;
  local_78 = 0;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_6c = param_4;
  iStack_64 = param_4;
  FUN_100ef510(&local_80,0x28);
  puVar2 = (undefined4 *)(param_3 + 0x414);
  local_60 = 0x55;
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x46c);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_100ef510(&local_80,0x30);
  local_60 = 0xaa;
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x470);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_100ef510(&local_80,0x30);
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_60 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x468);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_100ef510(&local_80,0x30);
  FUN_100ee638(iVar1,uVar3);
  return param_4;
}

