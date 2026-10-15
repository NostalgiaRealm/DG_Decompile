/*
 * FUN_1009fa28 at 1009fa28
 * undefined FUN_1009fa28(void)
 * Address ranges: 1009fa28-1009fadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009fa28(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 *extraout_w11;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 *local_50;
  int local_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = *(uint *)(param_2 + 0x474);
  if (uVar1 != 0xffffffff) {
    local_30 = *(undefined4 *)(param_2 + 0x2b0);
    local_44 = 0;
    uStack_18 = 0xffffffffffffffff;
    local_20 = 0xffffffffffffffff;
    local_2c = (undefined1)(uVar1 >> 0x10);
    bVar2 = (uVar1 & 0xf000000) == 0xd000000;
    local_4c = 0x3a0;
    iStack_48 = 0x370;
    if (bVar2) {
      iStack_48 = local_4c;
    }
    iStack_48 = iStack_48 + param_2;
    if (bVar2) {
      local_4c = 0x370;
    }
    local_4c = local_4c + param_2;
    local_50 = &local_30;
    iStack_54 = param_2 + 0x340;
    local_58 = 0x37;
    local_60 = param_2 + 0x18;
    uStack_5c = param_3;
    FUN_10122c20(&local_60,0x20);
    FUN_10121648(param_2 + 0x18,*(undefined4 *)(param_2 + 0x310));
    *extraout_w11 = 0;
  }
  return;
}

