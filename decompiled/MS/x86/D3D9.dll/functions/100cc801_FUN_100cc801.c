/*
 * FUN_100cc801 at 100cc801
 * undefined1 __fastcall FUN_100cc801(void * param_1)
 * Address ranges: 100cc801-100cc85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100cc801(void *param_1)

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
    uVar1 = FUN_100cc794(param_1,'\x01');
  }
  return uVar1;
}

