/*
 * FUN_1000b3bd at 1000b3bd
 * undefined __fastcall FUN_1000b3bd(int param_1)
 * Address ranges: 1000b3bd-1000b457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b3bd(int param_1)

{
  int iVar1;
  int local_10 [3];
  
  iVar1 = 0;
  local_10[0] = param_1 + 0x4668;
  local_10[1] = param_1 + 0x768c;
  local_10[2] = param_1 + 0xa6b0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_1001c575(local_10[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_1001c715(param_1 + 0x42e8);
  FUN_10011162((int *)(param_1 + 0x3940));
  FUN_1000a155(param_1);
  FUN_100415ab(*(void **)(param_1 + 0x3680),*(uint *)(param_1 + 0x36bc));
  (**(code **)(**(int **)(param_1 + 0x36bc) + 8))(*(int **)(param_1 + 0x36bc));
  *(undefined4 *)(param_1 + 0x36bc) = 0;
  FUN_10040c8b(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684));
  return;
}

