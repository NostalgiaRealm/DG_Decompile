/*
 * FUN_1007edb0 at 1007edb0
 * undefined FUN_1007edb0(void)
 * Address ranges: 1007edb0-1007eeef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007edb0(int param_1,int param_2,uint param_3,int param_4)

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
      plVar1 = (longlong *)(param_4 + uVar5 * 0x10);
      if (((*(longlong *)(param_1 + 0x238 + iVar4 * 0x10) != *plVar1) ||
          (*(int *)(param_1 + (iVar4 + 0x24) * 0x10) != (int)plVar1[1])) ||
         (*(int *)(param_1 + iVar4 * 0x10 + 0x244) != *(int *)((int)plVar1 + 0xc))) {
        iVar2 = param_1 + iVar4 * 0x10;
        *(longlong *)(iVar2 + 0x238) = *plVar1;
        *(int *)(param_1 + (iVar4 + 0x24) * 0x10) = (int)plVar1[1];
        *(undefined4 *)(iVar2 + 0x244) = *(undefined4 *)((int)plVar1 + 0xc);
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
      FUN_1007c918(param_1);
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,iVar7,iVar6);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

