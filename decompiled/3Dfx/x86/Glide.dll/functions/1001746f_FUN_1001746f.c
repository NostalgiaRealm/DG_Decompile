/*
 * FUN_1001746f at 1001746f
 * undefined __fastcall FUN_1001746f(int param_1)
 * Address ranges: 1001746f-10017509
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001746f(int param_1)

{
  int iVar1;
  int local_10 [3];
  
  iVar1 = 0;
  local_10[0] = param_1 + 0x39e0;
  local_10[1] = param_1 + 0x6a04;
  local_10[2] = param_1 + 0x9a28;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_100270da(local_10[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_10027255(param_1 + 0x3950);
  FUN_1001c01c((int *)(param_1 + 0x3440));
  FUN_10016108(param_1);
  FUN_1003ba4d(*(void **)(param_1 + 0x3180),*(uint *)(param_1 + 0x31bc));
  (**(code **)(**(int **)(param_1 + 0x31bc) + 8))(*(int **)(param_1 + 0x31bc));
  *(undefined4 *)(param_1 + 0x31bc) = 0;
  FUN_1003b12d(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184));
  return;
}

