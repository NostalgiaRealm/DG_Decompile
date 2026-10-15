/*
 * FUN_1800ed6e8 at 1800ed6e8
 * undefined FUN_1800ed6e8(void)
 * Address ranges: 1800ed6e8-1800ed797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed6e8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    iVar1 = *(int *)(param_2 + 0x1c + lVar2 * 0x24);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
      FUN_1800e70e0(lVar3,iVar1,1);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
      FUN_1800eeaf8(*(undefined8 *)(param_1 + 0x18),param_2 + 0x1c + lVar2 * 0x24);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_180102fc0(param_2,0x2d0);
  return;
}

