/*
 * FUN_180024a58 at 180024a58
 * undefined8 __cdecl FUN_180024a58(longlong param_1, longlong param_2, int * param_3)
 * Address ranges: 180024a58-180024adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180024a58(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((((*(int *)(param_1 + 0xb0) != *param_3) || (*(int *)(param_1 + 0xb4) != param_3[1])) ||
      (*(int *)(param_1 + 0xc4) != param_3[4])) ||
     (((*(int *)(param_1 + 200) != param_3[5] ||
       (lVar2 = *(longlong *)(param_1 + 8), *(int *)(lVar2 + 0x1c) != *(int *)(param_2 + 0x1c))) ||
      ((*(int *)(lVar2 + 0x18) != *(int *)(param_2 + 0x18) ||
       (uVar1 = 0, (*(uint *)(lVar2 + 0xc2) & 4) != (*(uint *)(param_2 + 0xc2) & 4))))))) {
    uVar1 = 1;
  }
  return uVar1;
}

