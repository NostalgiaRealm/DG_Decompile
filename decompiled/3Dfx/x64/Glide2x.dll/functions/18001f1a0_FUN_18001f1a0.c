/*
 * FUN_18001f1a0 at 18001f1a0
 * undefined __fastcall FUN_18001f1a0(longlong param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined1 param_5)
 * Address ranges: 18001f1a0-18001f267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f1a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = SUB84(param_4,0);
  FUN_180035f70(*(undefined8 **)(param_1 + 0x3188),3,3);
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),param_5);
  FUN_18001e5e0(*(longlong *)(param_1 + 0x3188),param_2,1,uVar3);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),param_5);
  FUN_18001e5e0(*(longlong *)(param_1 + 0x3188),param_3,1,uVar3);
  FUN_18001e5e0(*(longlong *)(param_1 + 0x3188),param_4,1,CONCAT31((int3)(uVar3 >> 8),param_5));
  **(int **)(*(longlong *)(param_1 + 0x3188) + 0x48) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -3;
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 4) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -2;
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48) + 8) =
       *(int *)(*(longlong *)(param_1 + 0x3188) + 0x50) + -1;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x3188) + 0x48);
  *plVar1 = *plVar1 + 0xc;
  return;
}

