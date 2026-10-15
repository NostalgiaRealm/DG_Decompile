/*
 * FUN_18003c9e4 at 18003c9e4
 * undefined8 __fastcall FUN_18003c9e4(longlong param_1, byte param_2, byte param_3, undefined8 * param_4)
 * Address ranges: 18003c9e4-18003ca5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003c9e4(longlong param_1,byte param_2,byte param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18 [2];
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + 0x20),0,param_2 ^ 1 | 4,
                       (uint)param_3 << 0x14,local_18);
    if (iVar2 == -0x7789fde4) {
      uVar3 = 2;
    }
    else if (-1 < iVar2) {
      uVar3 = 0;
      *param_4 = local_18[0];
    }
  }
  return uVar3;
}

