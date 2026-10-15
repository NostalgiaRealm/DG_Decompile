/*
 * FUN_1004772b at 1004772b
 * undefined4 __thiscall FUN_1004772b(void * this, LPCSTR param_1)
 * Address ranges: 1004772b-1004778c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004772b(void *this,LPCSTR param_1)

{
  ATOM AVar1;
  undefined2 extraout_var;
  WNDCLASSEXA local_34;
  
  local_34.cbSize = 0x30;
  local_34.style = 0;
  if (this == (void *)0x0) {
    local_34.lpfnWndProc = (WNDPROC)0x0;
  }
  else {
    local_34.lpfnWndProc = (WNDPROC)((int)this + -8);
  }
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 0;
  local_34.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_34.lpszClassName = param_1;
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = (HCURSOR)0x0;
  local_34.hbrBackground = (HBRUSH)0x0;
  local_34.lpszMenuName = (LPCSTR)0x0;
  local_34.hIconSm = (HICON)0x0;
  AVar1 = RegisterClassExA(&local_34);
  *(undefined4 *)((int)this + 8) = 0;
  *(ATOM *)((int)this + 4) = AVar1;
  return CONCAT31((int3)(CONCAT22(extraout_var,AVar1) >> 8),AVar1 != 0);
}

