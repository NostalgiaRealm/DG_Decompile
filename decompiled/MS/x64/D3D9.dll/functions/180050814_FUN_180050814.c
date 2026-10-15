/*
 * FUN_180050814 at 180050814
 * undefined __fastcall FUN_180050814(undefined8 * param_1)
 * Address ranges: 180050814-180050858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050814(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  plVar2 = (longlong *)*param_1;
  FUN_18005ee10(plVar2,uVar1,*(float *)((longlong)param_1 + 0xc));
  if ((uVar1 < 0x35) && ((0x10000000004080U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    *(undefined1 *)((longlong)plVar2 + 0x1018f) = 1;
  }
  return;
}

