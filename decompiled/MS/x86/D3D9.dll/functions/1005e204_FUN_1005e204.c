/*
 * FUN_1005e204 at 1005e204
 * undefined __stdcall FUN_1005e204(int param_1, int * param_2)
 * Address ranges: 1005e204-1005e323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e204(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_100c43de(param_2);
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_100c43b1(param_2);
  }
  param_2 = (int *)0x0;
  do {
    if (*(char *)((int)param_2 + *(int *)(param_1 + 0xf4)) != '\0') {
      FUN_100c43b1(piVar1);
    }
    param_2 = (int *)((int)param_2 + 1);
  } while (param_2 < (int *)0x2);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_100c43b1(piVar1);
  }
  uVar2 = 0;
  do {
    if (*(char *)(uVar2 + 0x2a + *(int *)(param_1 + 0xf4)) != '\0') {
      FUN_100c43b1(piVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  FUN_100c440d(piVar1);
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x330) != '\0') {
    FUN_100c3d50(piVar1,2);
  }
  return;
}

