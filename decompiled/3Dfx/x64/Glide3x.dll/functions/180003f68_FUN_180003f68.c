/*
 * FUN_180003f68 at 180003f68
 * WNDPROC __fastcall FUN_180003f68(void)
 * Address ranges: 180003f68-18000400f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_180003f68(void)

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
    puVar3 = (undefined8 *)FUN_180060a9c(0xa10);
    if (puVar3 != (undefined8 *)0x0) {
      pWVar4 = (WNDPROC)FUN_180003db0(puVar3);
      if (pWVar4 == (WNDPROC)0x0) {
        return (WNDPROC)0x0;
      }
      uVar5 = FUN_180003a8c((ulonglong)pWVar4);
      if ((char)uVar5 != '\0') goto LAB_180003fe4;
      FUN_180003f0c((undefined8 *)pWVar4);
      FUN_180060ac0(pWVar4);
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
LAB_180003fe4:
    LOCK();
    *(int *)(pWVar4 + 0x68) = *(int *)(pWVar4 + 0x68) + 1;
    UNLOCK();
  }
  return pWVar4;
}

