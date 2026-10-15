/*
 * FUN_1800c2b90 at 1800c2b90
 * undefined FUN_1800c2b90(void)
 * Address ranges: 1800c2b90-1800c2c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c2b90(longlong param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -0x7789f794;
  if (((param_2 & 0xfffffffc) == 0) &&
     (((param_2 & 2) == 0 || ((*(int *)(param_1 + 0x20) - 9U & 0xfffffffd) == 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar2 = -0x7789f798;
    if (*(char *)(lVar3 + 0x6819) == '\0') {
      if (((*(uint *)(lVar3 + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x1c8))
                        (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x20),param_2);
      if (bVar1) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
    if (-1 < iVar2) {
      *(bool *)(param_1 + 0x41) = (param_2 & 2) != 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  return iVar2;
}

