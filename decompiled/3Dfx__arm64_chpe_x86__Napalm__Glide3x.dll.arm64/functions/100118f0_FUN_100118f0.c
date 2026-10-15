/*
 * FUN_100118f0 at 100118f0
 * undefined FUN_100118f0(void)
 * Address ranges: 100118f0-1001195f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100118f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x36e8) = param_3;
  *(undefined4 *)(param_1 + 0x36c0) = param_4;
  *(undefined4 *)(param_1 + 0x36c4) = param_5;
  *(undefined4 *)(param_1 + 0x36f0) = *(undefined4 *)(&DAT_1009ff48 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x3736) = 1;
  FUN_10069f20(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),param_2);
  return;
}

