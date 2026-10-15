/*
 * FUN_180027564 at 180027564
 * undefined8 __fastcall FUN_180027564(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180027564-18002764f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180027564(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong local_38 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
  uVar4 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,*(undefined8 *)(param_1 + 0x2c0),0,param_2 ^ 1 | 4,0,local_38);
  lVar2 = local_38[0];
  if (-1 < (int)uVar4) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
    iVar3 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + 0x2c8),0,param_3 ^ 1 | 4,0,local_38);
    if (-1 < iVar3) {
      uVar5 = FUN_18001275c(param_1,lVar2,local_38[0],param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
    uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x2c0),0);
  }
  return uVar4 & 0xffffffffffffff00;
}

