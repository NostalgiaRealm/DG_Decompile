/*
 * FUN_100a24c0 at 100a24c0
 * undefined FUN_100a24c0(void)
 * Address ranges: 100a24c0-100a2553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a24c0(undefined8 param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_3 + 0x20) >> 3 & 1) != 0) {
    FUN_10123390(*(undefined4 *)(param_3 + 0x18),param_2,3,2,0x2f0,0);
  }
  if ((*(uint *)(param_3 + 0x20) >> 4 & 1) != 0) {
    FUN_10123390(*(undefined4 *)(param_3 + 0x18),param_2,4,2,*(undefined4 *)(param_3 + 0xc4),
                 *(undefined1 *)(*(int *)(param_3 + 0x10) + 0x44e));
  }
  return;
}

