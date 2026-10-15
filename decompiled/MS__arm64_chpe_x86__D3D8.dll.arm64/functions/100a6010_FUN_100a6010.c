/*
 * FUN_100a6010 at 100a6010
 * undefined FUN_100a6010(void)
 * Address ranges: 100a6010-100a6193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a6010(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  char *local_50;
  
  local_70 = 0;
  local_6c = 0;
  local_78 = 0xe4;
  local_80 = 1;
  iVar1 = param_2 + 0xc;
  local_88 = 0x2d;
  local_90 = iVar1;
  uStack_8c = param_1;
  local_84 = param_5;
  local_7c = param_3;
  local_74 = param_4;
  FUN_100ef510(&local_90,0x28);
  if ((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) {
    local_6c = 0;
    uStack_68 = 0;
    local_74 = 0xe4;
    local_7c = 2;
    local_84 = 0x201;
    local_88 = 0x8000002d;
    local_90 = iVar1;
    uStack_8c = param_1;
    local_80 = param_5;
    local_78 = param_3;
    local_70 = param_4;
    FUN_100ef510(&local_90,0x2c);
  }
  local_50 = (char *)(param_2 + 6);
  if ((*local_50 != '\0') || (*(char *)(param_2 + 8) != '\0')) {
    local_6c = 0;
    uStack_68 = 0;
    local_74 = 0xe4;
    local_7c = 4;
    local_84 = 0x2001;
    local_88 = 0x8000002d;
    local_90 = iVar1;
    uStack_8c = param_1;
    local_80 = param_5;
    local_78 = param_3;
    local_70 = param_4;
    FUN_100ef510(&local_90,0x2c);
  }
  if (((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) &&
     ((*local_50 != '\0' || (*(char *)(param_2 + 8) != '\0')))) {
    local_6c = 0;
    uStack_68 = 0;
    local_74 = 0xe4;
    local_7c = 8;
    local_84 = 0x2201;
    local_88 = 0x8000002d;
    local_90 = iVar1;
    uStack_8c = param_1;
    local_80 = param_5;
    local_78 = param_3;
    local_70 = param_4;
    FUN_100ef510(&local_90,0x2c);
  }
  return;
}

