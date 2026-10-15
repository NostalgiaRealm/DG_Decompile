/*
 * FUN_18002a670 at 18002a670
 * undefined FUN_18002a670(void)
 * Address ranges: 18002a670-18002a6c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002a670(longlong param_1,byte param_2,byte param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong alStack_40 [2];
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
  iVar2 = (**(code **)(*plVar3 + 0x70))
                    (plVar3,*(undefined8 *)(param_1 + 0xf718),0,param_2 ^ 1 | 4,0,alStack_40);
  lVar5 = alStack_40[0];
  if (-1 < iVar2) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar2 = (**(code **)(*plVar3 + 0x70))
                      (plVar3,*(undefined8 *)(param_1 + 0xf710),0,param_3 ^ 1 | 4,0,alStack_40);
    if (-1 < iVar2) {
      if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x60)) {
        *(int *)(param_1 + 0x78) =
             (int)*(longlong *)(param_1 + 0x68) - (int)*(undefined8 *)(param_1 + 0x58);
      }
      *(longlong *)(param_1 + 0x68) = lVar5;
      *(longlong *)(param_1 + 0x58) = lVar5;
      *(longlong *)(param_1 + 0x88) = alStack_40[0];
      if ((param_2 & 1) == 0) {
        iVar2 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
        uVar1 = *(uint *)(param_1 + 0x78);
        *(int *)(param_1 + 0x70) = iVar2;
        uVar4 = uVar1;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x80))) {
          uVar4 = iVar2 * param_4;
          if (uVar4 < uVar1) {
            *(uint *)(param_1 + 0x7c) = uVar1 - uVar4;
            uVar4 = uVar1;
          }
          else {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
        }
        lVar5 = lVar5 + (ulonglong)uVar4;
        *(longlong *)(param_1 + 0x68) = lVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x80) = param_4;
      }
      *(longlong *)(param_1 + 0x60) = lVar5;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((param_3 & 1) == 0) {
        uVar1 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = uVar1;
        *(ulonglong *)(param_1 + 0x88) = alStack_40[0] + (ulonglong)uVar1 * 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
      *(undefined4 *)(param_1 + 0x94) = 0;
      return 1;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf718),0);
  }
  return 0;
}

