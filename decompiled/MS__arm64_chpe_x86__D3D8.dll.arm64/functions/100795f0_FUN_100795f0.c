/*
 * FUN_100795f0 at 100795f0
 * undefined FUN_100795f0(void)
 * Address ranges: 100795f0-1007967b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100795f0(undefined8 param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_3 + 0x20) & 1) != 0) {
    FUN_100efe18(*(undefined4 *)(param_3 + 0x18),param_2,0,0,0xbc0,*(uint *)(param_3 + 0x1c) & 1);
  }
  if ((*(uint *)(param_3 + 0x20) >> 2 & 1) != 0) {
    FUN_100efe18(*(undefined4 *)(param_3 + 0x18),param_2,2,0,0x8000,
                 *(uint *)(param_3 + 0x1c) >> 2 & 1);
  }
  return;
}

