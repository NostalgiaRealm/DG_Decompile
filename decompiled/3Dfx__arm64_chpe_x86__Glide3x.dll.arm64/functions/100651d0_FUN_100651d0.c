/*
 * FUN_100651d0 at 100651d0
 * undefined FUN_100651d0(void)
 * Address ranges: 100651d0-10065323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100651d0(int param_1,int param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *extraout_w11;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  if (param_3 != 0) {
    iVar7 = param_2;
    iVar4 = param_2;
    do {
      plVar1 = (longlong *)(param_4 + uVar5 * 0x18);
      if (((*(longlong *)(param_1 + 0x448 + iVar4 * 0x18) != *plVar1) ||
          (*(longlong *)(param_1 + (iVar4 + 0x2e) * 0x18) != plVar1[1])) ||
         (*(longlong *)(param_1 + iVar4 * 0x18 + 0x458) != plVar1[2])) {
        iVar2 = param_1 + iVar4 * 0x18;
        *(longlong *)(iVar2 + 0x448) = *plVar1;
        *(longlong *)(param_1 + (iVar4 + 0x2e) * 0x18) = plVar1[1];
        *(longlong *)(iVar2 + 0x458) = plVar1[2];
        if (iVar6 == 0) {
          iVar6 = 1;
          iVar7 = iVar4;
        }
        else {
          iVar6 = (uVar5 - iVar7) + param_2 + 1;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (uVar5 < param_3);
    if (iVar6 != 0) {
      FUN_10063268(param_1);
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,iVar7,iVar6);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

