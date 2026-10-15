/*
 * FUN_180021460 at 180021460
 * undefined __cdecl FUN_180021460(longlong param_1, uint param_2, undefined4 * param_3, byte param_4)
 * Address ranges: 180021460-180021527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021460(longlong param_1,uint param_2,undefined4 *param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_18003a5b8(*(undefined8 **)(param_1 + 0x3188),param_2,param_2 * 3 - 6);
  FUN_180020630(*(longlong *)(param_1 + 0x3188),param_3,param_2,param_4);
  iVar2 = 1;
  if (1 < (int)(param_2 - 1)) {
    do {
      **(int **)(*(longlong *)(param_1 + 0x3188) + 0x48) =
           *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 4) =
           (*(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2) + iVar2;
      iVar1 = (*(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2) + iVar2;
      iVar2 = iVar2 + 1;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 8) = iVar1 + 1;
      *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) =
           *(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 0xc;
    } while (iVar2 < (int)(param_2 - 1));
  }
  return;
}

