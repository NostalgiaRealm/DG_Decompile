/*
 * FUN_10047167 at 10047167
 * undefined __stdcall FUN_10047167(undefined4 param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 10047167-100471ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047167(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      piVar1 = *(int **)(param_3 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_3 + uVar2 * 4) = 0;
        piVar1 = *(int **)(param_4 + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(param_4 + uVar2 * 4) = 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

