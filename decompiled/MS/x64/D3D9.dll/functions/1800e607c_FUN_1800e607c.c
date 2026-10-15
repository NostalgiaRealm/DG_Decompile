/*
 * FUN_1800e607c at 1800e607c
 * undefined __fastcall FUN_1800e607c(longlong param_1, ulonglong param_2)
 * Address ranges: 1800e607c-1800e60f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e607c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_1800fb1b0(lVar2 + param_1 + 0x1518);
  if ((char)uVar1 == '\0') {
    FUN_1800fb1f0(lVar2 + param_1 + 0x1518);
  }
  FUN_1800e2ae8(*(longlong *)(lVar2 + 0x1760 + param_1) + 8,'\0');
  lVar2 = *(longlong *)(lVar2 + 0x1760 + param_1);
  FUN_1800e7ff0(*(longlong *)(lVar2 + 0xb10),*(ulonglong *)(lVar2 + 0xb80));
  return;
}

