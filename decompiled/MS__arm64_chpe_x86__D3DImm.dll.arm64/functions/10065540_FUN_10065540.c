/*
 * FUN_10065540 at 10065540
 * undefined FUN_10065540(void)
 * Address ranges: 10065540-10065587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10065540(int param_1)

{
  ulonglong uVar1;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar1 = FUN_10065be0(param_1 + 4,&DAT_1009c5d0,local_20,0);
  if ((uVar1 & 1) != 0) {
    FUN_10065390(param_1);
  }
  return local_20[0];
}

