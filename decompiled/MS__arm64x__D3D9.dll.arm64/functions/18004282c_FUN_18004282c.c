/*
 * FUN_18004282c at 18004282c
 * undefined FUN_18004282c(void)
 * Address ranges: 18004282c-18004285b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004282c(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *unaff_x19;
  uint unaff_w20;
  longlong lVar3;
  undefined8 unaff_x21;
  
  do {
    uVar1 = param_1 - 1;
    thunk_FUN_180001218(*unaff_x19 + (ulonglong)param_1 * 0x158,
                        *unaff_x19 + (ulonglong)uVar1 * 0x158,0x158);
    param_1 = uVar1;
  } while (unaff_w20 < uVar1);
  lVar3 = (ulonglong)unaff_w20 * 0x158;
  *(undefined8 *)(*unaff_x19 + lVar3) = unaff_x21;
  thunk_FUN_180001218(lVar3 + *unaff_x19 + 8);
  lVar2 = FUN_180102f80(0x148);
  if (lVar2 != 0) {
    thunk_FUN_180001218();
  }
  *(longlong *)(lVar3 + *unaff_x19 + 0x150) = lVar2;
  *(int *)((longlong)unaff_x19 + 0xc) = *(int *)((longlong)unaff_x19 + 0xc) + 1;
  return;
}

