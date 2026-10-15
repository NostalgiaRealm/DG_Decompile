/*
 * FUN_10048f58 at 10048f58
 * undefined FUN_10048f58(void)
 * Address ranges: 10048f58-1004908f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048f58(undefined8 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar1 = (undefined4 *)(param_2 + 0xb4);
  iVar2 = param_2 + 0x10;
  local_78 = 0x10;
  uVar3 = *(uint *)(*(int *)(param_2 + 0x180) + 0x24) >> (ulonglong)(param_4 + 0x18U & 0x1f) & 1;
  local_58 = 0x2e0;
  if (uVar3 == 0) {
    local_58 = 0x2b0;
  }
  uStack_54 = 0;
  local_60 = *puVar1;
  uStack_5c = 0xa4;
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_70 = 1;
  local_80 = iVar2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_1007a868(&local_80,0x30);
  local_78 = 0x10;
  local_58 = 0x2f0;
  if (uVar3 == 0) {
    local_58 = 0x2c0;
  }
  uStack_54 = 0;
  local_60 = *puVar1;
  uStack_5c = 0xa4;
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_70 = 2;
  local_80 = iVar2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_1007a868(&local_80,0x30);
  local_78 = 0x10;
  local_58 = 0x300;
  if (uVar3 == 0) {
    local_58 = 0x2d0;
  }
  uStack_54 = 0;
  local_60 = *puVar1;
  uStack_5c = 0xa4;
  local_68 = 0xa4;
  uStack_64 = 0xffffffff;
  local_70 = 4;
  local_80 = iVar2;
  uStack_7c = param_3;
  uStack_74 = param_5;
  uStack_6c = param_6;
  FUN_1007a868(&local_80,0x30);
  return;
}

