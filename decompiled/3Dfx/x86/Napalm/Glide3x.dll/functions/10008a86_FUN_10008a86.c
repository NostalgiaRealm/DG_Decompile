/*
 * FUN_10008a86 at 10008a86
 * undefined __fastcall FUN_10008a86(int * param_1)
 * Address ranges: 10008a86-10008ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008a86(int *param_1)

{
  if ((param_1[0xac9] == 1) || (param_1[0xac9] == 2)) {
    FUN_1001164d((int *)param_1[0xd97]);
    (**(code **)(*param_1 + 0x198))();
  }
  *(undefined1 *)((int)param_1 + 0x3652) = 1;
  return;
}

