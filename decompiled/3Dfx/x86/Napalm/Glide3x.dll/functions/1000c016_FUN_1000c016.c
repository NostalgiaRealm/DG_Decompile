/*
 * FUN_1000c016 at 1000c016
 * undefined __fastcall FUN_1000c016(int param_1)
 * Address ranges: 1000c016-1000c0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c016(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x2db3) != '\0') {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x36b8 + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = *(int **)(param_1 + 0x36bc + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    (**(code **)(**(int **)(param_1 + 0x36b4) + 8))(*(int **)(param_1 + 0x36b4));
  }
  FUN_10047335(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),*(int **)(param_1 + 0x36a4));
  FUN_10047335(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),*(int **)(param_1 + 0x36a0));
  (**(code **)(**(int **)(param_1 + 0x3698) + 8))(*(int **)(param_1 + 0x3698));
  (**(code **)(**(int **)(param_1 + 0x3694) + 8))(*(int **)(param_1 + 0x3694));
  FUN_10047335(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),*(int **)(param_1 + 0x36a8));
  (**(code **)(**(int **)(param_1 + 0x369c) + 8))(*(int **)(param_1 + 0x369c));
  FUN_10047335(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),*(int **)(param_1 + 14000));
  (**(code **)(**(int **)(param_1 + 0x36ac) + 8))(*(int **)(param_1 + 0x36ac));
  (**(code **)(**(int **)(param_1 + 0x3690) + 8))(*(int **)(param_1 + 0x3690));
  (**(code **)(**(int **)(param_1 + 0x368c) + 8))(*(int **)(param_1 + 0x368c));
  return;
}

