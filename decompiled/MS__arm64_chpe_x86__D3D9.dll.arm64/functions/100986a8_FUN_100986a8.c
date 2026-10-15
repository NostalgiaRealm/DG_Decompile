/*
 * FUN_100986a8 at 100986a8
 * undefined FUN_100986a8(void)
 * Address ranges: 100986a8-10098733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100986a8(undefined8 param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_3 + 0x20) & 1) != 0) {
    FUN_10123390(*(undefined4 *)(param_3 + 0x18),param_2,0,0,0xc20,*(uint *)(param_3 + 0x1c) & 1);
  }
  if ((*(uint *)(param_3 + 0x20) >> 2 & 1) != 0) {
    FUN_10123390(*(undefined4 *)(param_3 + 0x18),param_2,2,0,0x8000,
                 *(uint *)(param_3 + 0x1c) >> 2 & 1);
  }
  return;
}

