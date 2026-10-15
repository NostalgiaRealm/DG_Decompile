/*
 * FUN_18001f268 at 18001f268
 * undefined __fastcall FUN_18001f268(longlong param_1, uint param_2, undefined4 * param_3, undefined8 param_4)
 * Address ranges: 18001f268-18001f310
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f268(longlong param_1,uint param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (undefined1)param_4;
  FUN_180035f70(*(undefined8 **)(param_1 + 0x3188),param_2,(param_2 - 2) * 3);
  FUN_18001e5e0(*(longlong *)(param_1 + 0x3188),param_3,param_2,
                (uint)CONCAT71((int7)((ulonglong)param_4 >> 8),uVar2));
  iVar4 = 1;
  if (1 < (int)(param_2 - 1)) {
    do {
      **(int **)(*(longlong *)(param_1 + 0x3188) + 0x48) =
           *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 4) =
           (*(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2) + iVar4;
      iVar3 = (*(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) - param_2) + 1 + iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 8) = iVar3;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48);
      *plVar1 = *plVar1 + 0xc;
    } while (iVar4 < (int)(param_2 - 1));
  }
  return;
}

