/*
 * FUN_180003a8c at 180003a8c
 * undefined8 __fastcall FUN_180003a8c(ulonglong param_1)
 * Address ranges: 180003a8c-180003cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180003a8c(ulonglong param_1)

{
  ulonglong uVar1;
  ATOM AVar2;
  BOOL BVar3;
  undefined6 extraout_var;
  HMODULE pHVar4;
  FARPROC pFVar5;
  LPVOID pvVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  HMODULE pHVar7;
  undefined8 uVar8;
  WNDCLASSEXA local_478;
  CHAR local_428 [1032];
  
  uVar1 = DAT_18006d9d8;
  local_478.cbSize = 0x50;
  local_478.style = 0;
  local_478.cbClsExtra = 0;
  local_478.cbWndExtra = 0;
  local_478.lpfnWndProc = (WNDPROC)(-(ulonglong)(param_1 != 0xffffffffffffff98) & param_1);
  local_478.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_478.hIconSm = (HICON)0x0;
  local_478.hIcon = (HICON)0x0;
  local_478.hCursor = (HCURSOR)0x0;
  local_478.lpszClassName = "DGDRIVERROOT";
  local_478.hbrBackground = (HBRUSH)0x0;
  local_478.lpszMenuName = (LPCSTR)0x0;
  AVar2 = RegisterClassExA(&local_478);
  *(ATOM *)(param_1 + 0x6c) = AVar2;
  pHVar4 = (HMODULE)CONCAT62(extraout_var,-AVar2);
  pHVar7 = (HMODULE)(-(ulonglong)(AVar2 != 0) & uVar1);
  *(HMODULE *)(param_1 + 0x70) = pHVar7;
  if (pHVar7 != (HMODULE)0x0) {
    GetModuleFileNameA(pHVar7,local_428,0x400);
    pHVar4 = LoadLibraryA(local_428);
    if (pHVar4 == (HMODULE)0x0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_180060f94((undefined1 *)(param_1 + 0x370),0,0x480);
    FUN_180003614(param_1);
    pHVar7 = LoadLibraryA("USER32.DLL");
    pHVar4 = (HMODULE)0x0;
    if (pHVar7 != (HMODULE)0x0) {
      pFVar5 = GetProcAddress(pHVar7,"CallWindowProcA");
      *(FARPROC *)(param_1 + 0xf8) = pFVar5;
      pHVar4 = (HMODULE)0x0;
      if (pFVar5 != (FARPROC)0x0) {
        pFVar5 = GetProcAddress(pHVar7,"CallWindowProcW");
        *(FARPROC *)(param_1 + 0x100) = pFVar5;
        pHVar4 = (HMODULE)0x0;
        if (pFVar5 != (FARPROC)0x0) {
          pvVar6 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
          *(LPVOID *)(param_1 + 0x108) = pvVar6;
          pHVar4 = (HMODULE)0x0;
          if (pvVar6 != (LPVOID)0x0) {
            pvVar6 = VirtualAlloc((LPVOID)0x0,0x2000,0x1000,0x40);
            *(LPVOID *)(param_1 + 0x110) = pvVar6;
            pHVar4 = (HMODULE)0x0;
            if (pvVar6 != (LPVOID)0x0) {
              uVar8 = 0x2700;
              pvVar6 = VirtualAlloc((LPVOID)0x0,0x2700,0x1000,0x40);
              *(LPVOID *)(param_1 + 0xa8) = pvVar6;
              pHVar4 = (HMODULE)0x0;
              if (pvVar6 != (LPVOID)0x0) {
                uVar8 = FUN_180033f5c(param_1,uVar8,-(ulonglong)(param_1 != 0) & param_1 + 0xd0);
                if ((char)uVar8 != '\0') {
                  *(undefined8 *)(param_1 + 0xb0) = 0;
                  *(undefined8 *)(param_1 + 0xb8) = 0;
                  *(undefined8 *)(param_1 + 0xc0) = 0;
                  *(undefined8 *)(param_1 + 200) = 0;
                  uVar8 = FUN_180060ac0(*(LPVOID *)(param_1 + 0x88));
                  *(undefined8 *)(param_1 + 0x88) = 0;
                  *(undefined8 *)(param_1 + 0x90) = 0;
                  return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                }
                BVar3 = VirtualFree(*(LPVOID *)(param_1 + 0xa8),0,0x8000);
                pHVar4 = (HMODULE)CONCAT44(extraout_var_00,BVar3);
              }
            }
          }
        }
      }
    }
    if (*(short *)(param_1 + 0x6c) != 0) {
      pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
      BVar3 = UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0x6c),pHVar4);
      pHVar4 = (HMODULE)CONCAT44(extraout_var_01,BVar3);
      if (*(HMODULE *)(param_1 + 0x70) != (HMODULE)0x0) {
        BVar3 = FreeLibrary(*(HMODULE *)(param_1 + 0x70));
        pHVar4 = (HMODULE)CONCAT44(extraout_var_02,BVar3);
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
    }
  }
  return (ulonglong)pHVar4 & 0xffffffffffffff00;
}

