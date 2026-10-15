/*
 * FUN_180042720 at 180042720
 * undefined FUN_180042720(void)
 * Address ranges: 180042720-18004275f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042720(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *unaff_x19;
  uint unaff_w20;
  longlong lVar4;
  undefined8 unaff_x21;
  int iVar5;
  ulonglong uVar6;
  longlong in_stack_00000010;
  
  do {
    thunk_FUN_180001218(param_1 + (ulonglong)param_2 * 0x158,*unaff_x19 + (ulonglong)param_2 * 0x158
                        ,0x158);
    param_2 = param_2 + 1;
  } while (param_2 < *(uint *)(unaff_x19 + 1));
  thunk_FUN_180102fc0(*unaff_x19);
  *unaff_x19 = in_stack_00000010;
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] << 1;
  uVar2 = *(uint *)((longlong)unaff_x19 + 0xc);
  if (unaff_w20 < uVar2) {
    if (3 < uVar2 - unaff_w20) {
      uVar6 = (ulonglong)uVar2;
      do {
        iVar5 = (int)uVar6;
        thunk_FUN_180001218(*unaff_x19 + uVar6 * 0x158,*unaff_x19 + (ulonglong)(iVar5 - 1U) * 0x158,
                            0x158);
        thunk_FUN_180001218(*unaff_x19 + (ulonglong)(iVar5 - 1U) * 0x158,
                            *unaff_x19 + (ulonglong)(iVar5 - 2U) * 0x158,0x158);
        thunk_FUN_180001218(*unaff_x19 + (ulonglong)(iVar5 - 2U) * 0x158,
                            *unaff_x19 + (ulonglong)(iVar5 - 3U) * 0x158,0x158);
        uVar2 = iVar5 - 4;
        uVar6 = (ulonglong)uVar2;
        thunk_FUN_180001218(*unaff_x19 + (ulonglong)(iVar5 - 3U) * 0x158,*unaff_x19 + uVar6 * 0x158,
                            0x158);
      } while (unaff_w20 + 3 < uVar2);
      if (uVar2 <= unaff_w20) goto FUN_18004285c;
    }
    do {
      uVar1 = uVar2 - 1;
      thunk_FUN_180001218(*unaff_x19 + (ulonglong)uVar2 * 0x158,
                          *unaff_x19 + (ulonglong)uVar1 * 0x158,0x158);
      uVar2 = uVar1;
    } while (unaff_w20 < uVar1);
  }
FUN_18004285c:
  lVar4 = (ulonglong)unaff_w20 * 0x158;
  *(undefined8 *)(*unaff_x19 + lVar4) = unaff_x21;
  thunk_FUN_180001218(lVar4 + *unaff_x19 + 8);
  lVar3 = FUN_180102f80(0x148);
  if (lVar3 != 0) {
    thunk_FUN_180001218();
  }
  *(longlong *)(lVar4 + *unaff_x19 + 0x150) = lVar3;
  *(int *)((longlong)unaff_x19 + 0xc) = *(int *)((longlong)unaff_x19 + 0xc) + 1;
  return;
}

