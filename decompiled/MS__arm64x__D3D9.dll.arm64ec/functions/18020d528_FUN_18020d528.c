/*
 * FUN_18020d528 at 18020d528
 * undefined FUN_18020d528(void)
 * Address ranges: 18020d528-18020d59b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020d528(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 in_x7;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined8 local_c;
  
  local_c = 0;
  local_20 = 0;
  bVar1 = *(char *)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x18) != '\0';
  local_18 = 4;
  if (!bVar1) {
    local_18 = 1;
  }
  uStack_14 = 2;
  if (!bVar1) {
    uStack_14 = 0;
  }
  local_10 = (uint)bVar1;
  FUN_18020d338(param_1,param_2,&local_18,0,param_3,0,0,in_x7,&local_20);
  return local_20;
}

