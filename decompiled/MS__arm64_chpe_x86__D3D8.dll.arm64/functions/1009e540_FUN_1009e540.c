/*
 * FUN_1009e540 at 1009e540
 * undefined FUN_1009e540(void)
 * Address ranges: 1009e540-1009e5a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009e540(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100ff690(*(undefined4 *)(param_1 + 8),0,0x400);
  }
  else {
    FUN_100ff660(*(undefined4 *)(param_1 + 8),param_2,0x400);
  }
  *(undefined1 *)(param_1 + 0x12d) = 1;
  FUN_1009e5a8(param_1,0,0);
  return;
}

