/*
 * FUN_1800426c0 at 1800426c0
 * undefined FUN_1800426c0(void)
 * Address ranges: 1800426c0-18004271f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800426c0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar4 = CONCAT44(0,(int)param_1[1] << 1);
    lVar5 = uVar4 * 0x158;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    if (SUB168(auVar2 * ZEXT816(0x158),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = thunk_FUN_180102f80(lVar5);
    if (lVar5 != 0) {
      if ((int)param_1[1] != 0) {
        uVar4 = 0;
        do {
          thunk_FUN_180001218(lVar5 + uVar4 * 0x158,*param_1 + uVar4 * 0x158,0x158);
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar5;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (param_2 < uVar3) {
    if (3 < uVar3 - param_2) {
      uVar4 = (ulonglong)uVar3;
      do {
        iVar7 = (int)uVar4;
        thunk_FUN_180001218(*param_1 + uVar4 * 0x158,*param_1 + (ulonglong)(iVar7 - 1U) * 0x158,
                            0x158);
        thunk_FUN_180001218(*param_1 + (ulonglong)(iVar7 - 1U) * 0x158,
                            *param_1 + (ulonglong)(iVar7 - 2U) * 0x158,0x158);
        thunk_FUN_180001218(*param_1 + (ulonglong)(iVar7 - 2U) * 0x158,
                            *param_1 + (ulonglong)(iVar7 - 3U) * 0x158,0x158);
        uVar3 = iVar7 - 4;
        uVar4 = (ulonglong)uVar3;
        thunk_FUN_180001218(*param_1 + (ulonglong)(iVar7 - 3U) * 0x158,*param_1 + uVar4 * 0x158,
                            0x158);
      } while (param_2 + 3 < uVar3);
      if (uVar3 <= param_2) goto FUN_18004285c;
    }
    do {
      uVar1 = uVar3 - 1;
      thunk_FUN_180001218(*param_1 + (ulonglong)uVar3 * 0x158,*param_1 + (ulonglong)uVar1 * 0x158,
                          0x158);
      uVar3 = uVar1;
    } while (param_2 < uVar1);
  }
FUN_18004285c:
  lVar6 = (ulonglong)param_2 * 0x158;
  *(undefined8 *)(*param_1 + lVar6) = param_3;
  thunk_FUN_180001218(lVar6 + *param_1 + 8,param_4,0x148);
  lVar5 = FUN_180102f80(0x148);
  if (lVar5 != 0) {
    thunk_FUN_180001218(lVar5,param_4,0x148);
  }
  *(longlong *)(lVar6 + *param_1 + 0x150) = lVar5;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

