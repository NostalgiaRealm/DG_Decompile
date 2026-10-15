/*
 * FUN_100084dc at 100084dc
 * undefined __fastcall FUN_100084dc(int * param_1)
 * Address ranges: 100084dc-1000850e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100084dc(int *param_1)

{
  if ((param_1[0xa7a] == 1) || (param_1[0xa7a] == 2)) {
    FUN_100102f1((int *)param_1[0xcb7]);
    (**(code **)(*param_1 + 0x170))();
  }
  *(undefined1 *)((int)param_1 + 0x32d2) = 1;
  return;
}

