/*
 * FUN_1800714c0 at 1800714c0
 * undefined FUN_1800714c0(void)
 * Address ranges: 1800714c0-180071523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800714c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((*(uint *)(param_3 + 0x28) & 1) != 0) {
    FUN_1800f5fb8(*(undefined4 *)(param_3 + 0x20),param_2,0,0,0xc20,*(uint *)(param_3 + 0x24) & 1);
  }
  if ((*(uint *)(param_3 + 0x28) >> 2 & 1) != 0) {
    FUN_1800f5fb8(*(undefined4 *)(param_3 + 0x20),param_2,2,0,0x8000,
                  *(uint *)(param_3 + 0x24) >> 2 & 1);
  }
  return;
}

