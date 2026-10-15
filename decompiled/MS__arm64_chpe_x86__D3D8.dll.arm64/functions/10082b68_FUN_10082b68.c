/*
 * FUN_10082b68 at 10082b68
 * undefined FUN_10082b68(void)
 * Address ranges: 10082b68-10082bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082b68(undefined8 param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_3 + 0x20) >> 3 & 1) != 0) {
    FUN_100efe18(*(undefined4 *)(param_3 + 0x18),param_2,3,2,0xa0,0);
  }
  if ((*(uint *)(param_3 + 0x20) >> 4 & 1) != 0) {
    FUN_100efe18(*(undefined4 *)(param_3 + 0x18),param_2,4,2,*(undefined4 *)(param_3 + 0xc4),
                 *(undefined1 *)(*(int *)(param_3 + 0x10) + 0x44e));
  }
  return;
}

