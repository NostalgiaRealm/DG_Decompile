/*
 * FUN_1800a2da8 at 1800a2da8
 * undefined __fastcall FUN_1800a2da8(longlong param_1)
 * Address ranges: 1800a2da8-1800a2e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2da8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar1 = *(longlong *)(param_1 + -0xb0);
  lVar2 = *(longlong *)(param_1 + 0x38);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = FUN_1800df678((ulonglong)lpCriticalSection,lVar2);
  if ((*(char *)(lVar2 + 0xd6e) == '\0') && ((char)uVar4 == *(char *)(lVar2 + 0xd6d))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (bVar3) {
    FUN_1800fb1f0(*(longlong *)(param_1 + -0xb0) + 0x1bc0 +
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0);
    FUN_1800e0d7c(*(longlong **)(param_1 + -0xb0),*(undefined8 **)(param_1 + 0x38),'\x01');
  }
  return;
}

