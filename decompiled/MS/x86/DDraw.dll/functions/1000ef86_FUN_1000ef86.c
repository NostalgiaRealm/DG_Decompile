/*
 * FUN_1000ef86 at 1000ef86
 * undefined __fastcall FUN_1000ef86(int param_1)
 * Address ranges: 1000ef86-1000efb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ef86(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1004939f(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_1000ae4f((void *)(param_1 + 0x48),1,1);
  return;
}

