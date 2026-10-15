/*
 * FUN_10066b80 at 10066b80
 * undefined FUN_10066b80(void)
 * Address ranges: 10066b80-10066bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066b80(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined8 local_c;
  
  local_c = 0;
  local_20[0] = 0;
  bVar1 = *(char *)(param_1 + param_2 * 0x18 + 0x10) != '\0';
  local_18 = 4;
  if (!bVar1) {
    local_18 = 1;
  }
  uStack_14 = 2;
  if (!bVar1) {
    uStack_14 = 0;
  }
  local_10 = (uint)bVar1;
  FUN_10066958(param_1,param_2,&local_18,0,param_3,0,in_x6,in_x7,local_20);
  return local_20[0];
}

