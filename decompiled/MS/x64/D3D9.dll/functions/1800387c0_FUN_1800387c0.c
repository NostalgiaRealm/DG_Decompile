/*
 * FUN_1800387c0 at 1800387c0
 * ulonglong __fastcall FUN_1800387c0(longlong param_1, byte param_2, byte param_3, int param_4)
 * Address ranges: 1800387c0-180038956
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800387c0(longlong param_1,byte param_2,byte param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_48 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
  uVar4 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,*(undefined8 *)(param_1 + 0xf718),0,param_2 ^ 1 | 4,0,local_48);
  lVar6 = local_48[0];
  if (-1 < (int)uVar4) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(param_1 + 0xf710),0,param_3 ^ 1 | 4,0,local_48);
    if (-1 < iVar2) {
      uVar4 = *(ulonglong *)(param_1 + 0x68);
      if (uVar4 != *(ulonglong *)(param_1 + 0x60)) {
        uVar3 = (int)uVar4 - *(int *)(param_1 + 0x58);
        uVar4 = (ulonglong)uVar3;
        *(uint *)(param_1 + 0x78) = uVar3;
      }
      *(longlong *)(param_1 + 0x68) = lVar6;
      *(longlong *)(param_1 + 0x58) = lVar6;
      *(longlong *)(param_1 + 0x88) = local_48[0];
      if (param_2 == 0) {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x74);
        uVar3 = *(uint *)(param_1 + 0x78);
        uVar5 = uVar3;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x80))) {
          uVar5 = *(int *)(param_1 + 0x70) * param_4;
          if (uVar5 < uVar3) {
            *(uint *)(param_1 + 0x7c) = uVar3 - uVar5;
            uVar5 = uVar3;
          }
          else {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
        }
        uVar4 = (ulonglong)uVar5;
        lVar6 = lVar6 + uVar4;
        *(longlong *)(param_1 + 0x68) = lVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x80) = param_4;
      }
      *(longlong *)(param_1 + 0x60) = lVar6;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x94) = 0;
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x94) = 0;
      local_48[0] = local_48[0] + (ulonglong)*(uint *)(param_1 + 0x90) * 4;
      *(longlong *)(param_1 + 0x88) = local_48[0];
      return CONCAT71((int7)((ulonglong)local_48[0] >> 8),1);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0xf718),0);
  }
  return uVar4 & 0xffffffffffffff00;
}

