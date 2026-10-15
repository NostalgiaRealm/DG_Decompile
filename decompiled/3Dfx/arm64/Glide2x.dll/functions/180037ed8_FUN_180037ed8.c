/*
 * FUN_180037ed8 at 180037ed8
 * undefined8 __cdecl FUN_180037ed8(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180037ed8-180037ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037ed8(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_30 [2];
  
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  iVar2 = (**(code **)(*plVar3 + 0x70))
                    (plVar3,*(undefined8 *)(param_1 + 0x90),0,param_2 ^ 1 | 4,0,local_30);
  lVar1 = local_30[0];
  if (-1 < iVar2) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
    iVar2 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*(undefined8 *)(param_1 + 0x98),0,param_3 ^ 1 | 4,0,local_30);
    if (-1 < iVar2) {
      *(longlong *)(param_1 + 0x30) = lVar1;
      *(longlong *)(param_1 + 0x40) = lVar1;
      *(longlong *)(param_1 + 0x48) = local_30[0];
      if ((param_2 & 1) == 0) {
        *(ulonglong *)(param_1 + 0x40) =
             lVar1 + (ulonglong)(0x4000 - *(int *)(param_1 + 0x14)) * 0x3c;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0x4000;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(longlong *)(param_1 + 0x20) = local_30[0];
      if ((param_3 & 1) == 0) {
        local_30[0] = local_30[0] + (ulonglong)(0x4000 - *(int *)(param_1 + 0x18)) * 4;
        *(longlong *)(param_1 + 0x48) = local_30[0];
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0x4000;
      }
      *(longlong *)(param_1 + 0x28) = local_30[0];
      return 1;
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
    (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0x90),0);
  }
  return 0;
}

