/*
 * FUN_1800bfa28 at 1800bfa28
 * undefined FUN_1800bfa28(void)
 * Address ranges: 1800bfa28-1800bfb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bfa28(longlong param_1,uint param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar2 == 0) {
      FUN_180003398();
    }
  }
  *param_3 = 0;
  lVar3 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x5500);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x20);
    if (iVar2 == 3) {
      *param_3 = lVar3 + 0x98;
      FUN_1800a89e0();
    }
    else if (iVar2 == 4) {
      *param_3 = lVar3 + 0x118;
      FUN_1800ca868();
    }
    else if (iVar2 == 5) {
      *param_3 = lVar3 + 0x98;
      FUN_1800a89e0();
    }
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

