/*
 * FUN_1005ccda at 1005ccda
 * undefined __stdcall FUN_1005ccda(int * param_1, int param_2)
 * Address ranges: 1005ccda-1005cd16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ccda(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (((*(char *)(uVar1 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
        (*(char *)(uVar1 + *(int *)(param_2 + 0x10)) != -1)) &&
       (*(char *)(param_2 + 0xca + uVar1) != -1)) {
      FUN_100a1b12(param_1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

