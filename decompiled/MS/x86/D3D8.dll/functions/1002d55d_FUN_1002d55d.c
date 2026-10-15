/*
 * FUN_1002d55d at 1002d55d
 * undefined __fastcall FUN_1002d55d(int param_1)
 * Address ranges: 1002d55d-1002d590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d55d(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_10092a37(*(void **)(param_1 + 4),*(int *)(param_1 + 0x14),*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

