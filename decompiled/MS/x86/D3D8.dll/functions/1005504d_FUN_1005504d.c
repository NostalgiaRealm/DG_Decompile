/*
 * FUN_1005504d at 1005504d
 * undefined __stdcall FUN_1005504d(int * param_1, int param_2)
 * Address ranges: 1005504d-100550a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005504d(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(char *)(uVar1 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
       (*(char *)(uVar1 + *(int *)(param_2 + 0x10)) != -1)) {
      FUN_100a1b35(param_1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (*(int *)(param_2 + 0x488) != -1) {
    FUN_100a1b35(param_1);
  }
  return;
}

