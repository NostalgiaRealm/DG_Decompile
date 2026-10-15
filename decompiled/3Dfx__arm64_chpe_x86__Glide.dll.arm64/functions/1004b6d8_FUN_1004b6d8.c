/*
 * FUN_1004b6d8 at 1004b6d8
 * undefined FUN_1004b6d8(void)
 * Address ranges: 1004b6d8-1004b87f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b6d8(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  
  FUN_1004b5a0(param_1,param_2,param_3);
  iStack_74 = FUN_1006ec30(param_2,1,1);
  piVar2 = param_2 + param_1 + 0x1e;
  *piVar2 = iStack_74;
  piVar1 = param_2 + 0x10;
  param_1 = param_1 * 0x180;
  if (*param_2 == 0x40) {
    iStack_6c = *piVar1;
    local_58 = param_1 + 0x150;
    iStack_64 = param_1 + 0x14c;
    local_78 = 0x38;
    uStack_54 = 0;
    local_68 = 0xe4;
    iStack_5c = 0xe4;
    local_70 = 1;
    local_80 = param_2;
    uStack_7c = param_3;
    local_60 = iStack_6c;
    FUN_1006fda0(&local_80,0x30);
  }
  local_58 = 0;
  local_60 = param_2[0x19] | 0x80000000;
  iStack_64 = param_1 + 0x14c;
  iStack_5c = 0;
  local_68 = 0xe4;
  iStack_6c = *piVar1;
  local_70 = 1;
  iStack_74 = *piVar2;
  local_78 = 0;
  local_80 = param_2;
  uStack_7c = param_3;
  FUN_1006fda0(&local_80,0x2c);
  iStack_5c = param_1 + 0x150;
  local_60 = 0xe4;
  iStack_74 = *piVar2;
  iStack_64 = *piVar1;
  local_58 = 0;
  local_70 = 1;
  local_68 = 0;
  local_78 = 0x38;
  local_80 = param_2;
  uStack_7c = param_3;
  iStack_6c = iStack_74;
  FUN_1006fda0(&local_80,0x2c);
  iStack_64 = param_2[0x14];
  local_58 = 0;
  iStack_74 = *piVar2;
  local_60 = 0;
  iStack_5c = 0;
  local_68 = 0xe4;
  local_78 = 0x34;
  local_70 = 1;
  local_80 = param_2;
  uStack_7c = param_3;
  iStack_6c = iStack_74;
  FUN_1006fda0(&local_80,0x2c);
  iStack_74 = *piVar2;
  local_58 = 0;
  iStack_5c = param_1 + 0x154;
  local_60 = 0xe4;
  iStack_64 = *piVar1;
  local_70 = 1;
  local_68 = 0xe4;
  local_78 = 0x33;
  local_80 = param_2;
  uStack_7c = param_3;
  iStack_6c = iStack_74;
  FUN_1006fda0(&local_80,0x2c);
  return;
}

