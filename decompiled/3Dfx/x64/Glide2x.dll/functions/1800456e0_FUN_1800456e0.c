/*
 * FUN_1800456e0 at 1800456e0
 * undefined __fastcall FUN_1800456e0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800456e0-180045757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800456e0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = FUN_18005e6c0(lVar2 + param_1 + 0x1518);
  if ((char)uVar1 == '\0') {
    FUN_18005e700(lVar2 + param_1 + 0x1518);
  }
  FUN_18004782c(*(longlong *)(lVar2 + 0x1760 + param_1) + 8,'\0');
  lVar2 = *(longlong *)(lVar2 + 0x1760 + param_1);
  FUN_18004095c(*(longlong *)(lVar2 + 0xb10),*(ulonglong *)(lVar2 + 0xb80));
  return;
}

