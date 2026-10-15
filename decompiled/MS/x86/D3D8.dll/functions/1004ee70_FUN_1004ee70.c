/*
 * FUN_1004ee70 at 1004ee70
 * undefined __stdcall FUN_1004ee70(int param_1, int * param_2)
 * Address ranges: 1004ee70-1004ef5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ee70(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_100a1b89(param_2);
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_100a1b5c(param_2);
  }
  uVar1 = 0;
  do {
    if (*(char *)(uVar1 + *(int *)(param_1 + 0xe4)) != '\0') {
      FUN_100a1b5c(param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_100a1b5c(param_2);
  }
  uVar1 = 0;
  do {
    if (*(char *)(uVar1 + 0x2a + *(int *)(param_1 + 0xe4)) != '\0') {
      FUN_100a1b5c(param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  FUN_100a1bb8(param_2);
  if (*(char *)(*(int *)(param_1 + 0xe4) + 0x40) != '\0') {
    FUN_100a14fb(param_2,2);
  }
  return;
}

