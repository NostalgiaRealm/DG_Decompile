/*
 * FUN_10036ce2 at 10036ce2
 * undefined __fastcall FUN_10036ce2(int param_1)
 * Address ranges: 10036ce2-10036d15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036ce2(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_100b4c3b(*(void **)(param_1 + 4),*(int *)(param_1 + 0x14),*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

