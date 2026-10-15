/*
 * FUN_180034a18 at 180034a18
 * undefined FUN_180034a18(void)
 * Address ranges: 180034a18-180034aa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034a18(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_1800ed018(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x168 + lVar2 * 8));
    *(undefined8 *)(param_1 + 0x168 + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 != -1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar2 + 0x28);
    FUN_1800e70e0(lVar2,iVar1,3);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar2 + 0x28);
  }
  return;
}

