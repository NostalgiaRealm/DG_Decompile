/*
 * FUN_10079f0d at 10079f0d
 * undefined __fastcall FUN_10079f0d(int param_1)
 * Address ranges: 10079f0d-10079f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10079f0d(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 100) + uVar1 * 4) + 4))
                (-(uint)(param_1 != 0) & param_1 + 0x60U);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x68));
  }
  FUN_1000347b(param_1);
  return;
}

