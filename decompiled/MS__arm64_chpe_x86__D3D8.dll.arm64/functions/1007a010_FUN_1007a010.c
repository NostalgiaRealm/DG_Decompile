/*
 * FUN_1007a010 at 1007a010
 * undefined FUN_1007a010(void)
 * Address ranges: 1007a010-1007a1df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a010(undefined8 param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  piVar1 = (int *)(param_3 + 0x18);
  uVar2 = FUN_100ee580(piVar1,1,0);
  if (param_6 == 0) {
    param_6 = param_4;
  }
  local_80 = piVar1;
  uStack_7c = param_2;
  iStack_74 = uVar2;
  if (param_7 == 0) {
    local_58 = 0xffffffff;
    uStack_54 = 0;
    local_78 = 0x10;
    local_5c = 0xe4;
    local_68 = 0xe4;
    local_64 = 0xffffffff;
    local_70 = 1;
    local_6c = param_4;
    local_60 = param_4;
    FUN_100ef510(&local_80,0x30);
    local_78 = 0x44;
    local_68 = 0;
    local_64 = 0;
    local_70 = 1;
    local_80 = piVar1;
    uStack_7c = param_2;
    iStack_74 = uVar2;
    local_6c = uVar2;
    FUN_100ef510(&local_80,0x20);
  }
  else if (*piVar1 == 0x10040) {
    local_58 = 0xffffffff;
    uStack_54 = 0;
    local_6c = *(undefined4 *)(param_3 + 0xa8);
    local_5c = 0;
    local_68 = 0xe4;
    local_64 = 0x3f800000;
    local_70 = 1;
    local_78 = 0xe;
    local_60 = param_7;
    FUN_100ef510(&local_80,0x30);
  }
  else {
    local_60 = 0;
    local_78 = 0x81;
    local_68 = 0;
    local_64 = 0xffffffff;
    local_70 = 1;
    local_6c = param_7;
    FUN_100ef510(&local_80,0x24);
  }
  local_5c = 0;
  local_58 = 0;
  local_64 = 0xffffffff;
  local_68 = 0x1e4;
  local_78 = 0x38;
  local_70 = 7;
  local_80 = piVar1;
  uStack_7c = param_2;
  iStack_74 = param_6;
  local_6c = param_4;
  local_60 = uVar2;
  FUN_100ef510(&local_80,0x2c);
  local_58 = 0;
  local_60 = 0xe4;
  local_5c = 0x7f800000;
  local_64 = *(undefined4 *)(param_3 + 0xa8);
  local_70 = 1;
  local_68 = 0;
  local_78 = 0x27;
  local_80 = piVar1;
  uStack_7c = param_2;
  iStack_74 = uVar2;
  local_6c = uVar2;
  FUN_100ef510(&local_80,0x2c);
  local_68 = 0x1e4;
  local_60 = 0;
  local_5c = 0;
  local_70 = 7;
  local_78 = 1;
  local_80 = piVar1;
  uStack_7c = param_2;
  iStack_74 = param_6;
  local_6c = param_6;
  local_64 = uVar2;
  FUN_100ef510(&local_80,0x28);
  FUN_100ee638(piVar1,uVar2);
  return;
}

