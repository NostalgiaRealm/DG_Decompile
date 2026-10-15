/*
 * FUN_1004b3e0 at 1004b3e0
 * undefined __stdcall FUN_1004b3e0(uint param_1, int param_2)
 * Address ranges: 1004b3e0-1004b40e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b3e0(uint param_1,int param_2)

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

