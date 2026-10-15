/*
 * FUN_1800795d0 at 1800795d0
 * undefined FUN_1800795d0(void)
 * Address ranges: 1800795d0-180079637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800795d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((*(uint *)(param_3 + 0x28) >> 3 & 1) != 0) {
    FUN_1800f5fb8(*(undefined4 *)(param_3 + 0x20),param_2,3,2,0x2f0,0);
  }
  if ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0) {
    FUN_1800f5fb8(*(undefined4 *)(param_3 + 0x20),param_2,4,2,*(undefined4 *)(param_3 + 0xd8),
                  *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x44e));
  }
  return;
}

