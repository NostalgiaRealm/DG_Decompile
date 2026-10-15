/*
 * FUN_1800f1fa0 at 1800f1fa0
 * undefined FUN_1800f1fa0(void)
 * Address ranges: 1800f1fa0-1800f202b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800f1fa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined4 uVar2;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  local_20[0] = 0;
  local_18 = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  uVar2 = 0;
  lVar1 = FUN_1800f2540(param_1,&local_18);
  if (lVar1 != 0) {
    lVar1 = FUN_1800f2718(lVar1 + 8,local_20);
    if (lVar1 == 0) {
      local_20[0] = 0xffffffff;
      lVar1 = FUN_1800f2718(extraout_x15 + 8,local_20);
      if (lVar1 == 0) goto LAB_1800f200c;
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x14);
  }
LAB_1800f200c:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return uVar2;
}

