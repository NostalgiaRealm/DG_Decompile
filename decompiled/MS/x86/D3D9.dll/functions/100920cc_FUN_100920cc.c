/*
 * FUN_100920cc at 100920cc
 * undefined __fastcall FUN_100920cc(int * param_1)
 * Address ranges: 100920cc-1009210a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100920cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[0x19ab] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x19aa] + uVar1 * 4) + 4))
                (-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x19a9));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[0x19ab]);
  }
  FUN_10004333(param_1);
  return;
}

