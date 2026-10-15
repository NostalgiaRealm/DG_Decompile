/*
 * FUN_1000ab59 at 1000ab59
 * undefined __fastcall FUN_1000ab59(int param_1)
 * Address ranges: 1000ab59-1000abf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ab59(int param_1)

{
  int iVar1;
  int local_10 [3];
  
  iVar1 = 0;
  local_10[0] = param_1 + 0x42d0;
  local_10[1] = param_1 + 0x72f4;
  local_10[2] = param_1 + 0xa318;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_1001a3cc(local_10[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_1001a56c(param_1 + 0x3f50);
  FUN_1000fe12((int *)(param_1 + 0x35c0));
  FUN_100098e4(param_1);
  FUN_1003e1a2(*(void **)(param_1 + 0x3300),*(uint *)(param_1 + 0x333c));
  (**(code **)(**(int **)(param_1 + 0x333c) + 8))(*(int **)(param_1 + 0x333c));
  *(undefined4 *)(param_1 + 0x333c) = 0;
  FUN_1003d882(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304));
  return;
}

