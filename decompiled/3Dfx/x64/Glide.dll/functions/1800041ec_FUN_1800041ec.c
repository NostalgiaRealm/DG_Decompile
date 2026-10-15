/*
 * FUN_1800041ec at 1800041ec
 * WNDPROC __fastcall FUN_1800041ec(void)
 * Address ranges: 1800041ec-1800043e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_1800041ec(void)

{
  BOOL BVar1;
  int iVar2;
  HMODULE hInstance;
  WNDPROC pWVar3;
  undefined8 uVar4;
  tagWNDCLASSEXA local_58;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar1 = GetClassInfoExA(hInstance,"DGDRIVERROOT",&local_58);
  if ((BVar1 == 0) || (local_58.lpfnWndProc == (WNDPROC)0x0)) {
    pWVar3 = (WNDPROC)FUN_18005db9c(0xa10);
    if (pWVar3 == (WNDPROC)0x0) {
      return (WNDPROC)0x0;
    }
    *(undefined4 *)(pWVar3 + 0x68) = 0;
    *(undefined2 *)(pWVar3 + 0x6c) = 0;
    *(undefined8 *)(pWVar3 + 0x70) = 0;
    *(undefined8 *)(pWVar3 + 0x78) = 0;
    *(undefined8 *)(pWVar3 + 0x80) = 0;
    *(undefined8 *)(pWVar3 + 0x88) = 0;
    *(undefined8 *)(pWVar3 + 0x90) = 0;
    *(undefined8 *)(pWVar3 + 0x98) = 0;
    *(undefined8 *)(pWVar3 + 0xa0) = 0;
    *(undefined8 *)(pWVar3 + 0xd0) = 0;
    *(undefined4 *)(pWVar3 + 0xd8) = 1;
    *(undefined **)(pWVar3 + 0xe0) = &DAT_180060645;
    *(undefined4 *)(pWVar3 + 0xe8) = 0;
    *(undefined8 *)(pWVar3 + 0xf0) = 0;
    *(undefined8 *)(pWVar3 + 8) = 0;
    *(undefined8 *)(pWVar3 + 0x10) = 0;
    *(undefined8 *)(pWVar3 + 0x28) = 0;
    *(undefined8 *)(pWVar3 + 0x30) = 0;
    *(undefined8 *)(pWVar3 + 0x38) = 0;
    *(undefined8 *)(pWVar3 + 0x40) = 0;
    *(undefined8 *)(pWVar3 + 0x48) = 0;
    *(undefined8 *)(pWVar3 + 0x50) = 0;
    *(undefined8 *)(pWVar3 + 0x58) = 0;
    *(undefined8 *)(pWVar3 + 0x60) = 0;
    *(undefined8 *)(pWVar3 + 0x130) = 0;
    *(undefined8 *)(pWVar3 + 0x138) = 0;
    *(undefined8 *)(pWVar3 + 0x140) = 0;
    *(undefined8 *)(pWVar3 + 0x148) = 0;
    *(undefined ***)pWVar3 = &PTR_LAB_1800606d8;
    *(undefined8 *)(pWVar3 + 0x18) = 0;
    *(undefined4 *)(pWVar3 + 0x20) = 0;
    *(undefined8 *)(pWVar3 + 0xf8) = 0;
    *(undefined8 *)(pWVar3 + 0x100) = 0;
    *(undefined8 *)(pWVar3 + 0x108) = 0;
    *(undefined8 *)(pWVar3 + 0x110) = 0;
    *(undefined4 *)(pWVar3 + 0x118) = 0x287;
    *(undefined8 *)(pWVar3 + 0x120) = 0;
    *(undefined4 *)(pWVar3 + 0x128) = 0;
    *(undefined8 *)(pWVar3 + 0x150) = 0;
    *(undefined8 *)(pWVar3 + 0x158) = 0;
    *(undefined4 *)(pWVar3 + 0x160) = 0;
    FUN_180003834((undefined8 *)(pWVar3 + 0x3d0));
    FUN_180003834((undefined8 *)(pWVar3 + 0x5dc));
    FUN_180003834((undefined8 *)(pWVar3 + 0x800));
    *(undefined2 *)(pWVar3 + 0xa0c) = 0x101;
    FUN_18005f814(pWVar3 + 0x164,0,0x20c);
    *(undefined8 *)(pWVar3 + 0x7f0) = 0;
    *(undefined8 *)(pWVar3 + 0x7f8) = 0;
    uVar4 = FUN_180003e6c((ulonglong)pWVar3);
    if ((char)uVar4 == '\0') {
      FUN_180004190((undefined8 *)pWVar3);
      FUN_18005dbc0(pWVar3);
      return (WNDPROC)0x0;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)local_58.lpfnWndProc)(local_58.lpfnWndProc);
    pWVar3 = (WNDPROC)0x0;
    if (iVar2 == 0x287) {
      pWVar3 = local_58.lpfnWndProc;
    }
    if (pWVar3 == (WNDPROC)0x0) {
      return (WNDPROC)0x0;
    }
  }
  LOCK();
  *(int *)(pWVar3 + 0x68) = *(int *)(pWVar3 + 0x68) + 1;
  UNLOCK();
  return pWVar3;
}

