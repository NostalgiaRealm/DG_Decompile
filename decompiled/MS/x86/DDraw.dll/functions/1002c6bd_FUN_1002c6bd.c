/*
 * FUN_1002c6bd at 1002c6bd
 * undefined __stdcall FUN_1002c6bd(int param_1, int param_2)
 * Address ranges: 1002c6bd-1002c722
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c6bd(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 local_404 [256];
  
  FUN_100337af(param_2);
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x108) == 0) && (*(void **)(param_2 + 0x108) != (void *)0x0)) {
      FUN_1002965b(*(void **)(param_2 + 0x108),local_404);
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x50) + 0x40))(local_404);
      puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
      *puVar1 = *puVar1 | 4;
    }
    else {
      FUN_100337af(param_1);
    }
  }
  return;
}

