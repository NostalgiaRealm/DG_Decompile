/*
 * FUN_180184740 at 180184740
 * undefined FUN_180184740(void)
 * Address ranges: 180184740-1801847a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180184740(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((*(uint *)(param_3 + 0x28) & 1) != 0) {
    FUN_1802133a8(*(undefined4 *)(param_3 + 0x20),param_2,0,0,0xc20,*(uint *)(param_3 + 0x24) & 1);
  }
  if ((*(uint *)(param_3 + 0x28) >> 2 & 1) != 0) {
    FUN_1802133a8(*(undefined4 *)(param_3 + 0x20),param_2,2,0,0x8000,
                  *(uint *)(param_3 + 0x24) >> 2 & 1);
  }
  return;
}

