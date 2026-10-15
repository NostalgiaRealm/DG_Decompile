/*
 * FUN_180222770 at 180222770
 * undefined FUN_180222770(void)
 * Address ranges: 180222770-1802227c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180222770(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  char *local_10;
  undefined4 *local_8;
  
  local_10 = (char *)0x0;
  local_8 = param_2;
  uVar1 = FUN_180222d90(param_1,&local_10,0);
  if ((*local_10 == '\0') && ((1 - ((uint)(uVar1 >> 0x1f) & 1) & 0xfffffffe) == 0)) {
    *local_8 = (int)uVar1;
    return 1;
  }
  return 0;
}

