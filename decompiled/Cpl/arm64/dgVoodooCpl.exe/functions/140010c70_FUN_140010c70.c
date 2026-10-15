/*
 * FUN_140010c70 at 140010c70
 * undefined8 * __cdecl FUN_140010c70(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 140010c70-140010d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140010c70(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  HDC hdc;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[2] = param_2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = thunk_FUN_1400247f0(0x1000);
  param_1[0xc] = uVar2;
  param_1[0xd] = 0x80;
  *(undefined4 *)(param_1 + 0xe) = 0x60;
  uVar2 = thunk_FUN_1400247f0(0x1000);
  param_1[0xf] = uVar2;
  param_1[0x10] = 0x80;
  *(undefined4 *)(param_1 + 0x11) = 0x60;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 3) = iVar1;
  *(int *)((longlong)param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x12) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  SetRectEmpty((LPRECT)(param_1 + 4));
  return param_1;
}

