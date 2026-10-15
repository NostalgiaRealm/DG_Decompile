/*
 * FUN_18000d618 at 18000d618
 * undefined __fastcall FUN_18000d618(longlong param_1)
 * Address ranges: 18000d618-18000d6a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d618(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar1 = *(longlong *)(param_1 + 0x3300);
  FUN_180014054(lVar1);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x29f0);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = FUN_180051720((ulonglong)lpCriticalSection,lVar2);
  if ((*(char *)(lVar2 + 0xd6e) == '\0') && ((char)uVar4 == *(char *)(lVar2 + 0xd6d))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (bVar3) {
    FUN_1800602b0(*(longlong *)(param_1 + 0x3340) + 0x12c0);
    FUN_180011758(param_1,'\x01');
  }
  return;
}

