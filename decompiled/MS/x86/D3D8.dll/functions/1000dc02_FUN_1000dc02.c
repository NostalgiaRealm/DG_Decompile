/*
 * FUN_1000dc02 at 1000dc02
 * undefined __fastcall FUN_1000dc02(int param_1)
 * Address ranges: 1000dc02-1000dc35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000dc02(int param_1)

{
  if (((*(uint *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int **)(param_1 + 0x40) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
              (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
               *(uint *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

