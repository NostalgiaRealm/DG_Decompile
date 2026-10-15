/*
 * FUN_180042794 at 180042794
 * undefined FUN_180042794(void)
 * Address ranges: 180042794-180042823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042794(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *unaff_x19;
  uint unaff_w20;
  longlong lVar4;
  undefined8 unaff_x21;
  
  do {
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)param_1 * 0x158,
                        *unaff_x19 + (ulonglong)(param_1 - 1) * 0x158,0x158);
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)(param_1 - 1) * 0x158,
                        *unaff_x19 + (ulonglong)(param_1 - 2) * 0x158,0x158);
    uVar1 = param_1 - 3;
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)(param_1 - 2) * 0x158,
                        *unaff_x19 + (ulonglong)uVar1 * 0x158,0x158);
    param_1 = param_1 - 4;
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)uVar1 * 0x158,
                        *unaff_x19 + (ulonglong)param_1 * 0x158,0x158);
  } while (unaff_w20 + 3 < param_1);
  while (unaff_w20 < param_1) {
    uVar2 = (ulonglong)param_1;
    param_1 = param_1 - 1;
    thunk_FUN_180001218(*unaff_x19 + uVar2 * 0x158,*unaff_x19 + (ulonglong)param_1 * 0x158,0x158);
  }
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

