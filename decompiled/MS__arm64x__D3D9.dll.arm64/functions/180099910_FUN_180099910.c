/*
 * FUN_180099910 at 180099910
 * undefined FUN_180099910(void)
 * Address ranges: 180099910-180099a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099910(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + -0xb0);
  lVar5 = *(longlong *)(param_1 + 0x38);
  uVar4 = (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar7 + 0x620);
  cVar2 = FUN_1800e5040(uVar4,lVar5);
  if ((*(char *)(lVar5 + 0xd6e) != '\0') || (bVar1 = false, *(char *)(lVar5 + 0xd6d) != cVar2)) {
    bVar1 = true;
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar7 + 0x620);
  if (bVar1) {
    FUN_180101df0(*(longlong *)(param_1 + -0xb0) +
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x10) * 0x1ac0 + 0x1bc0);
    plVar6 = *(longlong **)(param_1 + -0xb0);
    lVar5 = *(longlong *)(param_1 + 0x38);
    uVar4 = (*__imp_KERNEL32_dll_EnterCriticalSection)(plVar6 + 0xc4);
    bVar3 = FUN_1800e5040(uVar4,lVar5);
    if ((*(char *)(lVar5 + 0xd6e) != '\0') || (bVar3 != *(byte *)(lVar5 + 0xd6d))) {
      if ((bVar3 & 1) == 0) {
        *(undefined4 *)(lVar5 + 0x3c) = 0;
      }
      FUN_1800e50b0(plVar6,lVar5,0,1);
      *(byte *)(lVar5 + 0xd6d) = bVar3;
      *(undefined1 *)(lVar5 + 0xd6e) = 0;
      (**(code **)(*plVar6 + 0x70))(plVar6,lVar5);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar6 + 0xc4);
  }
  return;
}

