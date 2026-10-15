/*
 * FUN_180021390 at 180021390
 * undefined __cdecl FUN_180021390(longlong param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, byte param_5)
 * Address ranges: 180021390-18002145b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021390(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  byte param_5)

{
  FUN_18003a5b8(*(undefined8 **)(param_1 + 0x3188),3,3);
  FUN_180020630(*(longlong *)(param_1 + 0x3188),param_2,1,param_5);
  FUN_180020630(*(longlong *)(param_1 + 0x3188),param_3,1,param_5);
  FUN_180020630(*(longlong *)(param_1 + 0x3188),param_4,1,param_5);
  **(int **)(*(longlong *)(param_1 + 0x3188) + 0x48) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -3;
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 4) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -2;
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 8) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -1;
  *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) =
       *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 0xc;
  return;
}

