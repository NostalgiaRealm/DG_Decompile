/*
 * FUN_10047178 at 10047178
 * undefined FUN_10047178(void)
 * Address ranges: 10047178-100472c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047178(undefined8 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  char in_stack_00000010;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int local_50;
  
  iVar1 = param_3 + 0x10;
  local_88 = 0;
  uStack_84 = 0;
  local_90 = 1;
  local_98 = 0x2f;
  uStack_94 = param_9;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_8c = param_4;
  local_50 = param_3;
  FUN_1007a868(&local_a0,0x20);
  local_70 = 0;
  local_98 = 0x38;
  uStack_94 = param_9;
  local_80 = 0;
  local_88 = 0;
  local_90 = 1;
  uStack_8c = param_9;
  local_a0 = iVar1;
  uStack_9c = param_2;
  uStack_84 = param_5;
  uStack_7c = param_6;
  local_78 = param_7;
  uStack_74 = param_8;
  FUN_1007a868(&local_a0,0x34);
  if (in_stack_00000010 != '\0') {
    uVar2 = FUN_10079948(iVar1,1,0);
    local_80 = 0;
    uStack_7c = 0;
    local_88 = 0;
    uStack_84 = param_9;
    local_98 = 0x39;
    local_90 = 1;
    uStack_8c = param_9;
    local_a0 = iVar1;
    uStack_9c = param_2;
    uStack_94 = uVar2;
    FUN_1007a868(&local_a0,0x28);
    local_70 = 0;
    local_80 = 0xe4;
    uStack_7c = 0;
    local_78 = param_9;
    uStack_74 = 0;
    local_90 = 1;
    uStack_84 = *(undefined4 *)(local_50 + 0xa0);
    local_88 = 0;
    local_98 = 0x37;
    uStack_94 = param_9;
    local_a0 = iVar1;
    uStack_9c = param_2;
    uStack_8c = uVar2;
    FUN_1007a868(&local_a0,0x34);
  }
  local_88 = 0;
  uStack_84 = 0;
  local_90 = 1;
  uStack_8c = param_9;
  local_98 = 0x19;
  uStack_94 = param_9;
  local_a0 = iVar1;
  uStack_9c = param_2;
  FUN_1007a868(&local_a0,0x20);
  return;
}

