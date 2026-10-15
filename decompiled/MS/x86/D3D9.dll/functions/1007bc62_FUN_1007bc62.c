/*
 * FUN_1007bc62 at 1007bc62
 * undefined __fastcall FUN_1007bc62(int param_1)
 * Address ranges: 1007bc62-1007bc91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007bc62(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_100b8c84(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_10077958((void *)(param_1 + 0x48),1,1);
  return;
}

