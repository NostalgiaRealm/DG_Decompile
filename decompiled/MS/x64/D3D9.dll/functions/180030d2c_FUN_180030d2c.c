/*
 * FUN_180030d2c at 180030d2c
 * undefined __fastcall FUN_180030d2c(longlong * param_1)
 * Address ranges: 180030d2c-180030d74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030d2c(longlong *param_1)

{
  char cVar1;
  undefined7 extraout_var;
  HWND hWnd;
  bool bVar2;
  
  cVar1 = FUN_1800308a8(param_1);
  bVar2 = (int)CONCAT71(extraout_var,cVar1) != 0;
  *(bool *)((longlong)param_1 + 0x43) = bVar2;
  FUN_180030a4c(param_1,'\x01',bVar2);
  hWnd = (HWND)(**(code **)(*param_1 + 0x28))(param_1);
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x20,0,0);
  }
  return;
}

