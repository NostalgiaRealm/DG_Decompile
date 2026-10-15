/*
 * FUN_1001ae38 at 1001ae38
 * undefined __fastcall FUN_1001ae38(int * param_1)
 * Address ranges: 1001ae38-1001ae63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001ae38(int *param_1)

{
  if (param_1[0xa5b] == 2) {
    FUN_1001c4fb((int *)param_1[0xc57]);
    (**(code **)(*param_1 + 0x150))();
  }
  *(undefined1 *)((int)param_1 + 0x3152) = 1;
  return;
}

