/*
 * FUN_10024230 at 10024230
 * undefined FUN_10024230(void)
 * Address ranges: 10024230-10024293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024230(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100917d0(*(undefined4 *)(param_1 + 8),0,0x400);
  }
  else {
    FUN_100917a0(*(undefined4 *)(param_1 + 8),param_2,0x400);
  }
  *(undefined1 *)(param_1 + 0x12d) = 1;
  FUN_10024298(param_1,0,0);
  return;
}

