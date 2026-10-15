/*
 * FUN_10002edc at 10002edc
 * bool __fastcall FUN_10002edc(int param_1)
 * Address ranges: 10002edc-10002f7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10002edc(int param_1)

{
  ATOM AVar1;
  HMODULE pHVar2;
  HMODULE hModule;
  CHAR local_434 [1024];
  WNDCLASSEXA local_34;
  
  pHVar2 = DAT_1005fa08;
  local_34.cbSize = 0x30;
  local_34.style = 0;
  if (param_1 == 0) {
    local_34.lpfnWndProc = (WNDPROC)0x0;
  }
  else {
    local_34.lpfnWndProc = (WNDPROC)(param_1 + -0x48);
  }
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 0;
  local_34.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_34.lpszClassName = "DGDRIVERROOT";
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = (HCURSOR)0x0;
  local_34.hbrBackground = (HBRUSH)0x0;
  local_34.lpszMenuName = (LPCSTR)0x0;
  local_34.hIconSm = (HICON)0x0;
  AVar1 = RegisterClassExA(&local_34);
  *(ATOM *)(param_1 + 4) = AVar1;
  hModule = (HMODULE)0x0;
  if (AVar1 != 0) {
    hModule = pHVar2;
  }
  *(HMODULE *)(param_1 + 8) = hModule;
  if (hModule != (HMODULE)0x0) {
    GetModuleFileNameA(hModule,local_434,0x400);
    pHVar2 = LoadLibraryA(local_434);
    if (pHVar2 == (HMODULE)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return *(short *)(param_1 + 4) != 0;
}

