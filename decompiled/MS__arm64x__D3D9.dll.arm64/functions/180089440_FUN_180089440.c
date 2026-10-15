/*
 * FUN_180089440 at 180089440
 * undefined FUN_180089440(void)
 * Address ranges: 180089440-1800894df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089440(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + -0x90);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = (*__imp_KERNEL32_dll_EnterCriticalSection)(plVar3 + 0xc4);
  bVar1 = FUN_1800e5040(uVar2,lVar4);
  if ((*(char *)(lVar4 + 0xd6e) != '\0') || (bVar1 != *(byte *)(lVar4 + 0xd6d))) {
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x3c) = 0;
    }
    FUN_1800e50b0(plVar3,lVar4,0,0);
    *(byte *)(lVar4 + 0xd6d) = bVar1;
    *(undefined1 *)(lVar4 + 0xd6e) = 0;
    (**(code **)(*plVar3 + 0x70))(plVar3,lVar4);
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar3 + 0xc4);
  return;
}

