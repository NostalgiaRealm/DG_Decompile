/*
 * FUN_180042824 at 180042824
 * undefined FUN_180042824(void)
 * Address ranges: 180042824-18004282b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042824(uint param_1)

{
  longlong lVar1;
  longlong *unaff_x19;
  uint unaff_w20;
  longlong lVar2;
  undefined8 unaff_x21;
  
  while (unaff_w20 < param_1) {
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)param_1 * 0x158,
                        *unaff_x19 + (ulonglong)(param_1 - 1) * 0x158,0x158);
    param_1 = param_1 - 1;
  }
  lVar2 = (ulonglong)unaff_w20 * 0x158;
  *(undefined8 *)(*unaff_x19 + lVar2) = unaff_x21;
  thunk_FUN_180001218(lVar2 + *unaff_x19 + 8);
  lVar1 = FUN_180102f80(0x148);
  if (lVar1 != 0) {
    thunk_FUN_180001218();
  }
  *(longlong *)(lVar2 + *unaff_x19 + 0x150) = lVar1;
  *(int *)((longlong)unaff_x19 + 0xc) = *(int *)((longlong)unaff_x19 + 0xc) + 1;
  return;
}

