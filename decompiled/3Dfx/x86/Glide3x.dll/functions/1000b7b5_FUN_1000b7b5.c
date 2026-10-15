/*
 * FUN_1000b7b5 at 1000b7b5
 * undefined __fastcall FUN_1000b7b5(int param_1)
 * Address ranges: 1000b7b5-1000b896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b7b5(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x2c6b) != '\0') {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x3338 + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = *(int **)(param_1 + 0x333c + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    (**(code **)(**(int **)(param_1 + 0x3334) + 8))(*(int **)(param_1 + 0x3334));
  }
  FUN_10043f2c(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),*(int **)(param_1 + 0x3324));
  FUN_10043f2c(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),*(int **)(param_1 + 0x3320));
  (**(code **)(**(int **)(param_1 + 0x3318) + 8))(*(int **)(param_1 + 0x3318));
  (**(code **)(**(int **)(param_1 + 0x3314) + 8))(*(int **)(param_1 + 0x3314));
  FUN_10043f2c(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),*(int **)(param_1 + 0x3328));
  (**(code **)(**(int **)(param_1 + 0x331c) + 8))(*(int **)(param_1 + 0x331c));
  FUN_10043f2c(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),*(int **)(param_1 + 0x3330));
  (**(code **)(**(int **)(param_1 + 0x332c) + 8))(*(int **)(param_1 + 0x332c));
  (**(code **)(**(int **)(param_1 + 0x3310) + 8))(*(int **)(param_1 + 0x3310));
  (**(code **)(**(int **)(param_1 + 0x330c) + 8))(*(int **)(param_1 + 0x330c));
  return;
}

