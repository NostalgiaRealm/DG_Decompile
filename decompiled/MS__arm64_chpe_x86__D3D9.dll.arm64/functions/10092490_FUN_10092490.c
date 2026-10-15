/*
 * FUN_10092490 at 10092490
 * undefined FUN_10092490(void)
 * Address ranges: 10092490-100926b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10092490(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar3 = FUN_10121590(iVar1,3,1);
  iStack_6c = *(undefined4 *)(param_3 + 0x4a0);
  local_60 = 0xa6;
  iStack_5c = 0;
  local_68 = 1;
  local_70 = 7;
  local_78 = 0x38;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = uVar3;
  iStack_64 = iStack_6c;
  FUN_10122a88(&local_80,0x28);
  if (param_4 == 0) {
    param_4 = FUN_10121590(iVar1,4,1);
  }
  local_60 = 0;
  iStack_5c = 0;
  iStack_6c = *(undefined4 *)(param_3 + 0x508);
  local_78 = 0x38;
  local_68 = 0x1a4;
  local_70 = 7;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_64 = uVar3;
  FUN_10122a88(&local_80,0x28);
  local_60 = 0x55;
  iStack_6c = *(undefined4 *)(param_3 + 0x50c);
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
  FUN_10122a88(&local_80,0x30);
  local_60 = 0xaa;
  iStack_6c = *(undefined4 *)(param_3 + 0x504);
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
  FUN_10122a88(&local_80,0x30);
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
  FUN_10122a88(&local_80,0x28);
  puVar2 = (undefined4 *)(param_3 + 0x4a4);
  local_60 = 0x55;
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x4fc);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_10122a88(&local_80,0x30);
  local_60 = 0xaa;
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x500);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_10122a88(&local_80,0x30);
  iStack_64 = *puVar2;
  local_58 = 0x1a4;
  uStack_54 = 0;
  local_60 = 0;
  local_68 = 0x1a4;
  iStack_6c = *(undefined4 *)(param_3 + 0x4f8);
  local_70 = 7;
  local_78 = 0x32;
  local_80 = iVar1;
  uStack_7c = param_2;
  iStack_74 = param_4;
  iStack_5c = param_4;
  FUN_10122a88(&local_80,0x30);
  FUN_10121648(iVar1,uVar3);
  return param_4;
}

