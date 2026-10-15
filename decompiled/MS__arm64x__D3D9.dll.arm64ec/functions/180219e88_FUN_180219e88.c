/*
 * FUN_180219e88 at 180219e88
 * undefined FUN_180219e88(void)
 * Address ranges: 180219e88-180219f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180219e88(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 in_x7;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined8 local_2c;
  
  local_2c = 0;
  param_2 = param_2 & 0xffffffff;
  bVar1 = *(char *)(param_1 + param_2 * 0x20 + 0x6e8) != '\0';
  local_38 = 4;
  if (!bVar1) {
    local_38 = 1;
  }
  uStack_34 = 2;
  if (!bVar1) {
    uStack_34 = 0;
  }
  local_30 = (uint)bVar1;
  local_40 = FUN_18021a1e8(param_1 + param_2 * 0x1ac0 + 0x21b8,&local_38,0,param_3);
  if (local_40 == 0) {
    local_40 = 0;
    FUN_18020d338(param_1 + 0x6d0,param_2,&local_38,0,param_3,0,0,in_x7,&local_40);
  }
  return local_40;
}

