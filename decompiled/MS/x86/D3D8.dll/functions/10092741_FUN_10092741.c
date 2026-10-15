/*
 * FUN_10092741 at 10092741
 * undefined __stdcall FUN_10092741(undefined4 param_1, undefined4 param_2, int param_3)
 * Address ranges: 10092741-1009276a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092741(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_3 + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_3 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x11);
  return;
}

