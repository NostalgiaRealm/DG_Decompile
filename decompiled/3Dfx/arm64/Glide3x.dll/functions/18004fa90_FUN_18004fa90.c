/*
 * FUN_18004fa90 at 18004fa90
 * undefined __cdecl FUN_18004fa90(longlong param_1, int * param_2)
 * Address ranges: 18004fa90-18004fa93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fa90(longlong param_1,int *param_2)

{
  if ((((*param_2 != *(int *)(param_1 + 0x660)) || (param_2[1] != *(int *)(param_1 + 0x664))) ||
      (param_2[2] != *(int *)(param_1 + 0x668))) || (param_2[3] != *(int *)(param_1 + 0x66c))) {
    *(int *)(param_1 + 0x660) = *param_2;
    *(int *)(param_1 + 0x664) = param_2[1];
    *(int *)(param_1 + 0x668) = param_2[2];
    *(int *)(param_1 + 0x66c) = param_2[3];
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb8))(*(longlong **)(param_1 + 0x688),param_2);
  }
  return;
}

