/*
 * FUN_18001a79c at 18001a79c
 * undefined __fastcall FUN_18001a79c(longlong param_1)
 * Address ranges: 18001a79c-18001a828
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a79c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar1 = *(longlong *)(param_1 + 0x3180);
  FUN_180020bb0(lVar1);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x2978);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = FUN_18004f114((ulonglong)lpCriticalSection,lVar2);
  if ((*(char *)(lVar2 + 0xd6e) == '\0') && ((char)uVar4 == *(char *)(lVar2 + 0xd6d))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (bVar3) {
    FUN_18005e700(*(longlong *)(param_1 + 0x31c0) + 0x12c0);
    FUN_180022c28(param_1,'\x01');
  }
  return;
}

