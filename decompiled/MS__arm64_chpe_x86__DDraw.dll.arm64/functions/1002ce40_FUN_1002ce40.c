/*
 * FUN_1002ce40 at 1002ce40
 * undefined FUN_1002ce40(void)
 * Address ranges: 1002ce40-1002cf1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ce40(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  puVar1 = param_2 + 3;
  bVar2 = (*param_2 & 0x1000) == 0;
  uVar3 = 0x3c;
  if (bVar2) {
    uVar3 = 1;
  }
  local_68 = 0x27;
  if (bVar2) {
    local_68 = 0x20;
  }
  local_50 = 0xe4;
  uStack_4c = 0;
  local_58 = 0xe4;
  local_60 = 0xf;
  local_70 = puVar1;
  uStack_6c = param_1;
  uStack_64 = param_4;
  uStack_5c = param_4;
  uStack_54 = param_3;
  FUN_10084ec8(&local_70,0x28);
  local_50 = 0xfe;
  uStack_4c = 0;
  local_58 = 0x54;
  local_60 = 3;
  local_70 = puVar1;
  uStack_6c = param_1;
  local_68 = uVar3;
  uStack_64 = param_4;
  uStack_5c = param_4;
  uStack_54 = param_4;
  FUN_10084ec8(&local_70,0x28);
  local_58 = 0;
  local_60 = param_6 & 0xff;
  local_50 = 0x55;
  uStack_4c = 0;
  local_70 = puVar1;
  uStack_6c = param_1;
  local_68 = uVar3;
  uStack_64 = param_5;
  uStack_5c = param_4;
  uStack_54 = param_4;
  FUN_10084ec8(&local_70,0x28);
  return;
}

