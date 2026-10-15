/*
 * FUN_1004b8b2 at 1004b8b2
 * undefined __fastcall FUN_1004b8b2(int param_1)
 * Address ranges: 1004b8b2-1004b912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b8b2(int param_1)

{
  int *piVar1;
  
  if ((*(uint *)(param_1 + 0x70) & 0x10800) != 0x10000) goto LAB_1004b90a;
  piVar1 = *(int **)(param_1 + 300);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x60) + 0x10))
                              (*(undefined4 *)(param_1 + 0x10),0);
    *(int **)(param_1 + 300) = piVar1;
    if (piVar1 != (int *)0x0) goto LAB_1004b8e9;
  }
  else {
LAB_1004b8e9:
    (**(code **)(*piVar1 + 0xc))
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
               *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x130) == -1) {
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
LAB_1004b90a:
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

