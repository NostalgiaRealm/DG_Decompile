/*
 * FUN_100d8708 at 100d8708
 * undefined FUN_100d8708(void)
 * Address ranges: 100d8708-100d882f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d8708(int param_1,int param_2,undefined8 param_3,uint param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  
  param_1 = param_1 + param_2 * 0x1510;
  uVar5 = 0;
  uVar4 = 0;
  iVar1 = param_1 + 0x510;
  uVar6 = 0;
  if (param_4 != 0) {
    iVar7 = 0;
    do {
      iVar3 = *(int *)(param_5 + uVar6 * 4);
      if (((*(int *)(param_1 + 0x704 + iVar7) != iVar3) ||
          (iVar2 = iVar7 + iVar1, *(int *)(iVar2 + 0x234) != *(int *)(param_6 + uVar6 * 4))) ||
         (*(int *)(iVar2 + 0x274) != *(int *)(param_7 + uVar6 * 4))) {
        iVar2 = iVar7 + iVar1;
        *(int *)(iVar2 + 500) = iVar3;
        *(undefined4 *)(iVar2 + 0x234) = *(undefined4 *)(param_6 + uVar6 * 4);
        *(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)(param_7 + uVar6 * 4);
        if ((int)uVar5 == 0) {
          uVar5 = 1;
          uVar4 = uVar6;
        }
        else {
          uVar5 = (ulonglong)((uVar6 - uVar4) + 1);
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar6 < param_4);
    if ((int)uVar5 != 0) {
      auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff,uVar5 & 0xffffffff);
    }
  }
  return;
}

