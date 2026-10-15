/*
 * FUN_18004bf00 at 18004bf00
 * undefined __cdecl FUN_18004bf00(longlong param_1, int * param_2)
 * Address ranges: 18004bf00-18004bf03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bf00(longlong param_1,int *param_2)

{
  if ((((*param_2 != *(int *)(param_1 + 0x660)) || (param_2[1] != *(int *)(param_1 + 0x664))) ||
      (param_2[2] != *(int *)(param_1 + 0x668))) || (param_2[3] != *(int *)(param_1 + 0x66c))) {
    *(int *)(param_1 + 0x660) = *param_2;
    *(int *)(param_1 + 0x664) = param_2[1];
    *(int *)(param_1 + 0x668) = param_2[2];
    *(int *)(param_1 + 0x66c) = param_2[3];
    FUN_18004a830(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb8))(*(longlong **)(param_1 + 0x688),param_2);
  }
  return;
}

