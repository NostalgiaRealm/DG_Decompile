/*
 * FUN_10007710 at 10007710
 * undefined __fastcall FUN_10007710(int param_1)
 * Address ranges: 10007710-1000775f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10007710(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0xd0dc + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_10046929(*(void **)(param_1 + 0xcf00),*(int *)(param_1 + 0x14),piVar1);
      *(undefined4 *)(param_1 + 0xd0dc + uVar2 * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xcfdc + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xcfdc + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return;
}

