/*
 * FUN_1008f7f0 at 1008f7f0
 * undefined FUN_1008f7f0(void)
 * Address ranges: 1008f7f0-1008f903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f7f0(undefined8 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 uStack_40;
  
  if (1 < *(uint *)(param_3 + 0x528)) {
    uStack_4c = 2;
    local_44 = 0x25001;
    local_48 = 0x200005f;
    local_50 = param_2;
    FUN_10122cd8(&local_50,0x10);
  }
  uVar1 = *(uint *)(param_3 + 0x528);
  if (1 < uVar1) {
    local_48 = 0x20000ce;
    uStack_4c = 2;
    local_50 = param_2;
    local_44 = uVar1;
    FUN_10122cd8(&local_50,0x10);
  }
  local_48 = 0x100185d;
  uStack_4c = 1;
  local_50 = param_2;
  FUN_10122cd8(&local_50,0xc);
  local_44 = 0x110000;
  uStack_40 = 0;
  local_48 = 0x300008f;
  uStack_4c = 3;
  local_50 = param_2;
  FUN_10122cd8(&local_50,0x14);
  uStack_4c = 1;
  local_48 = 0x100285c;
  local_50 = param_2;
  uVar2 = FUN_10122cd8(&local_50,0xc);
  FUN_10095ab0(uVar2,param_2,param_3);
  uStack_4c = 2;
  local_44 = *(undefined4 *)(param_3 + 0x524);
  local_48 = 0x200005e;
  local_50 = param_2;
  FUN_10122cd8(&local_50,0x10);
  return;
}

