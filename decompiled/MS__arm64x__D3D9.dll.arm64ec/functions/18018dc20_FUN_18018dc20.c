/*
 * FUN_18018dc20 at 18018dc20
 * undefined FUN_18018dc20(void)
 * Address ranges: 18018dc20-18018dc87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018dc20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((*(uint *)(param_3 + 0x28) >> 3 & 1) != 0) {
    FUN_1802133a8(*(undefined4 *)(param_3 + 0x20),param_2,3,2,0x2f0,0);
  }
  if ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0) {
    FUN_1802133a8(*(undefined4 *)(param_3 + 0x20),param_2,4,2,*(undefined4 *)(param_3 + 0xd8),
                  *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x44e));
  }
  return;
}

