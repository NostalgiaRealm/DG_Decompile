/*
 * FUN_1001aaad at 1001aaad
 * undefined __fastcall FUN_1001aaad(int * param_1)
 * Address ranges: 1001aaad-1001aad8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001aaad(int *param_1)

{
  if (param_1[0xa5b] == 2) {
    FUN_1001c16f((int *)param_1[0xc57]);
    (**(code **)(*param_1 + 0x150))();
  }
  *(undefined1 *)((int)param_1 + 0x3152) = 1;
  return;
}

