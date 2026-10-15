/*
 * FUN_180043258 at 180043258
 * bool __cdecl FUN_180043258(longlong param_1, longlong param_2, undefined8 param_3)
 * Address ranges: 180043258-18004333b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180043258(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *lpszClass;
  bool bVar4;
  BOOL BVar5;
  HMODULE hInstance;
  undefined8 uVar6;
  tagWNDCLASSEXA tStack_80;
  
  lpszClass = PTR_s_DGD3D12ROOT_18006b378;
  uVar6 = *(undefined8 *)(param_1 + 8);
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(hInstance,lpszClass,&tStack_80);
  if (((BVar5 != 0) && (tStack_80.lpfnWndProc != (WNDPROC)0x0)) ||
     (tStack_80.lpfnWndProc = (WNDPROC)(*(code *)PTR_FUN_18006b380)(uVar6,param_3),
     tStack_80.lpfnWndProc != (WNDPROC)0x0)) {
    FUN_1800608b0((uint *)(tStack_80.lpfnWndProc + 8));
  }
  *(WNDPROC *)(param_1 + 0x480) = tStack_80.lpfnWndProc;
  if (tStack_80.lpfnWndProc == (WNDPROC)0x0) {
    bVar4 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    uVar2 = *(undefined4 *)(param_2 + 0x92);
    uVar3 = *(undefined4 *)(param_2 + 0x96);
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x668) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x66c) = uVar1;
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x670) = uVar2;
    *(undefined4 *)(tStack_80.lpfnWndProc + 0x674) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x480);
    *(undefined4 *)(*(longlong *)(param_1 + 0x480) + 0x678) = *(undefined4 *)(param_1 + 0x474);
    bVar4 = *(longlong *)(param_1 + 0x10) != 0;
  }
  return bVar4;
}

