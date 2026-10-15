/*
 * FUN_180034e30 at 180034e30
 * undefined8 __fastcall FUN_180034e30(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180034e30-180034f12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180034e30(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong local_38 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  uVar4 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,*(undefined8 *)(param_1 + 0x90),0,param_2 ^ 1 | 4,0,local_38);
  lVar2 = local_38[0];
  if (-1 < (int)uVar4) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
    iVar3 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + 0x98),0,param_3 ^ 1 | 4,0,local_38);
    if (-1 < iVar3) {
      uVar5 = FUN_1800362fc(param_1,lVar2,local_38[0],param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
    uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x90),0);
  }
  return uVar4 & 0xffffffffffffff00;
}

