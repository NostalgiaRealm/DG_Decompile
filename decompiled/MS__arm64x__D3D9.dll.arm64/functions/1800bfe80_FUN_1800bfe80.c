/*
 * FUN_1800bfe80 at 1800bfe80
 * undefined FUN_1800bfe80(void)
 * Address ranges: 1800bfe80-1800bfebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bfe80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + -0x178) != 0) {
    lVar1 = *(longlong *)(param_1 + -0x178) + 0x78;
  }
  *param_2 = lVar1;
  if (*(longlong *)(param_1 + -0x178) != 0) {
    FUN_1800c1200(*(longlong *)(param_1 + -0x178) + 0x78);
  }
  return 0;
}

