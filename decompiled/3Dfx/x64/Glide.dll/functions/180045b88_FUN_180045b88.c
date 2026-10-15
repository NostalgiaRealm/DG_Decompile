/*
 * FUN_180045b88 at 180045b88
 * undefined __fastcall FUN_180045b88(longlong param_1, ulonglong param_2)
 * Address ranges: 180045b88-180045bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045b88(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_18005eb60(lVar2 + param_1 + 0x1518);
  if ((char)uVar1 == '\0') {
    FUN_18005eba0(lVar2 + param_1 + 0x1518);
  }
  FUN_180047cd4(*(longlong *)(lVar2 + 0x1760 + param_1) + 8,'\0');
  lVar2 = *(longlong *)(lVar2 + 0x1760 + param_1);
  FUN_180040e04(*(longlong *)(lVar2 + 0xb10),*(ulonglong *)(lVar2 + 0xb80));
  return;
}

