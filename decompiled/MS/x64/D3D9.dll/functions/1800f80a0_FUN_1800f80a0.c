/*
 * FUN_1800f80a0 at 1800f80a0
 * WNDPROC __fastcall FUN_1800f80a0(void)
 * Address ranges: 1800f80a0-1800f8147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_1800f80a0(void)

{
  BOOL BVar1;
  int iVar2;
  HMODULE hInstance;
  undefined8 *puVar3;
  WNDPROC pWVar4;
  undefined8 uVar5;
  tagWNDCLASSEXA local_58;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar1 = GetClassInfoExA(hInstance,"DGDRIVERROOT",&local_58);
  if ((BVar1 == 0) || (local_58.lpfnWndProc == (WNDPROC)0x0)) {
    puVar3 = (undefined8 *)FUN_1800fbccc(0xa10);
    if (puVar3 != (undefined8 *)0x0) {
      pWVar4 = (WNDPROC)FUN_1800f7ee8(puVar3);
      if (pWVar4 == (WNDPROC)0x0) {
        return (WNDPROC)0x0;
      }
      uVar5 = FUN_1800f7bc4((ulonglong)pWVar4);
      if ((char)uVar5 != '\0') goto LAB_1800f811c;
      FUN_1800f8044((undefined8 *)pWVar4);
      FUN_1800fbcf0(pWVar4);
    }
    pWVar4 = (WNDPROC)0x0;
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)local_58.lpfnWndProc)(local_58.lpfnWndProc);
    pWVar4 = (WNDPROC)0x0;
    if (iVar2 == 0x287) {
      pWVar4 = local_58.lpfnWndProc;
    }
    if (pWVar4 == (WNDPROC)0x0) {
      return (WNDPROC)0x0;
    }
LAB_1800f811c:
    LOCK();
    *(int *)(pWVar4 + 0x68) = *(int *)(pWVar4 + 0x68) + 1;
    UNLOCK();
  }
  return pWVar4;
}

