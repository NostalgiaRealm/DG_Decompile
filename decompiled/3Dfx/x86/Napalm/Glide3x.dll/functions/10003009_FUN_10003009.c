/*
 * FUN_10003009 at 10003009
 * undefined1 __fastcall FUN_10003009(void * param_1)
 * Address ranges: 10003009-10003067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10003009(void *param_1)

{
  undefined1 uVar1;
  BOOL BVar2;
  bool bVar3;
  void *local_8;
  
  local_8 = param_1;
  BVar2 = IsWindow(*(HWND *)((int)param_1 + 0x330));
  bVar3 = false;
  if (BVar2 == 1) {
    local_8 = (void *)0x0;
    GetWindowThreadProcessId(*(HWND *)((int)param_1 + 0x330),(LPDWORD)&local_8);
    bVar3 = local_8 == *(void **)((int)param_1 + 0x334);
  }
  if ((*(int *)((int)param_1 + 0x330) == 0) || (bVar3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002f9c(param_1,'\x01');
  }
  return uVar1;
}

