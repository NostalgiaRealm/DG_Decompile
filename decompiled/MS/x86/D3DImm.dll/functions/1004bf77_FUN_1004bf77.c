/*
 * FUN_1004bf77 at 1004bf77
 * undefined __fastcall FUN_1004bf77(int param_1)
 * Address ranges: 1004bf77-1004bf9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004bf77(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x90));
  }
  return;
}

