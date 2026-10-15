/*
 * FUN_18004fa48 at 18004fa48
 * undefined __cdecl FUN_18004fa48(longlong param_1, int param_2)
 * Address ranges: 18004fa48-18004fa8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fa48(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

