/*
 * FUN_18004285c at 18004285c
 * undefined FUN_18004285c(void)
 * Address ranges: 18004285c-1800428c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004285c(void)

{
  longlong lVar1;
  longlong *unaff_x19;
  ulonglong unaff_x20;
  longlong lVar2;
  undefined8 unaff_x21;
  
  lVar2 = (unaff_x20 & 0xffffffff) * 0x158;
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

