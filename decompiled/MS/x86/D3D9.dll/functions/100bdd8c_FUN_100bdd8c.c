/*
 * FUN_100bdd8c at 100bdd8c
 * undefined __stdcall FUN_100bdd8c(uint param_1, int param_2)
 * Address ranges: 100bdd8c-100bddba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bdd8c(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      piVar1 = *(int **)(param_2 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_2 + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return;
}

