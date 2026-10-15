/*
 * FUN_180047cec at 180047cec
 * undefined __fastcall FUN_180047cec(longlong param_1, ulonglong param_2)
 * Address ranges: 180047cec-180047d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047cec(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_180060270(lVar2 + param_1 + 0x1518);
  if ((char)uVar1 == '\0') {
    FUN_1800602b0(lVar2 + param_1 + 0x1518);
  }
  FUN_180049e38(*(longlong *)(lVar2 + 0x1760 + param_1) + 8,'\0');
  lVar2 = *(longlong *)(lVar2 + 0x1760 + param_1);
  FUN_180042f68(*(longlong *)(lVar2 + 0xb10),*(ulonglong *)(lVar2 + 0xb80));
  return;
}

