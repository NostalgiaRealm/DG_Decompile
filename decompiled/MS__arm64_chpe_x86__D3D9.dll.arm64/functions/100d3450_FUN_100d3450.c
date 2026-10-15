/*
 * FUN_100d3450 at 100d3450
 * undefined FUN_100d3450(void)
 * Address ranges: 100d3450-100d34a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d3450(int param_1)

{
  ulonglong uVar1;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar1 = FUN_100d1560(param_1 + 4,local_20);
  if ((uVar1 & 1) != 0) {
    FUN_100d30b0(param_1 + -0x66b4);
    FUN_100d2850(param_1 + -0x66b4);
    FUN_10132440(*(undefined4 *)(param_1 + -0x66b8));
  }
  return local_20[0];
}

