/*
 * FUN_18002cf78 at 18002cf78
 * undefined8 __cdecl FUN_18002cf78(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18002cf78-18002d097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002cf78(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_30 [2];
  
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
  iVar2 = (**(code **)(*plVar3 + 0x70))
                    (plVar3,*(undefined8 *)(param_1 + 0x2c0),0,param_2 ^ 1 | 4,0,local_30);
  lVar1 = local_30[0];
  if (-1 < iVar2) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
    iVar2 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*(undefined8 *)(param_1 + 0x2c8),0,param_3 ^ 1 | 4,0,local_30);
    if (-1 < iVar2) {
      *(longlong *)(param_1 + 0x250) = lVar1;
      *(longlong *)(param_1 + 0x260) = lVar1;
      *(longlong *)(param_1 + 0x268) = local_30[0];
      if ((param_2 & 1) == 0) {
        *(ulonglong *)(param_1 + 0x260) =
             lVar1 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x234)) * 0x50;
      }
      else {
        *(undefined4 *)(param_1 + 0x234) = 0x4000;
        *(undefined4 *)(param_1 + 0x270) = 0;
      }
      *(longlong *)(param_1 + 0x240) = local_30[0];
      if ((param_3 & 1) == 0) {
        local_30[0] = local_30[0] + (ulonglong)(0x4000 - *(int *)(param_1 + 0x238)) * 4;
        *(longlong *)(param_1 + 0x268) = local_30[0];
      }
      else {
        *(undefined4 *)(param_1 + 0x238) = 0x4000;
      }
      *(longlong *)(param_1 + 0x248) = local_30[0];
      return 1;
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
    (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0x2c0),0);
  }
  return 0;
}

