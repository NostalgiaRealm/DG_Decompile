/*
 * FUN_1800ea140 at 1800ea140
 * undefined FUN_1800ea140(void)
 * Address ranges: 1800ea140-1800ea1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea140(longlong param_1,int *param_2)

{
  if ((((*param_2 != *(int *)(param_1 + 0x660)) || (param_2[1] != *(int *)(param_1 + 0x664))) ||
      (param_2[2] != *(int *)(param_1 + 0x668))) || (param_2[3] != *(int *)(param_1 + 0x66c))) {
    *(int *)(param_1 + 0x660) = *param_2;
    *(int *)(param_1 + 0x664) = param_2[1];
    *(int *)(param_1 + 0x668) = param_2[2];
    *(int *)(param_1 + 0x66c) = param_2[3];
    FUN_1800e80d8(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb8))(*(longlong **)(param_1 + 0x688),param_2);
  }
  return;
}

