/*
 * FUN_1800436a0 at 1800436a0
 * undefined8 __cdecl FUN_1800436a0(longlong param_1, int param_2)
 * Address ranges: 1800436a0-1800437cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800436a0(longlong param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  longlong lVar3;
  tagMSG tStack_60;
  
  if ((uint)(((int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x98) -
             (int)*(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90)) +
            *(int *)(param_1 + 0x1f0)) <= param_2 + 0x18U) {
    ResetEvent(*(HANDLE *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0xa8));
    uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
    lVar3 = param_1 + (ulonglong)uVar1 * 0x28;
    DVar2 = WaitForSingleObject(*(HANDLE *)(lVar3 + 0xa8),100);
    while (DVar2 != 0) {
      PeekMessageA(&tStack_60,(HWND)0x0,0,0,0x400000);
      if (*(char *)(param_1 + 0x204) == '\0') {
        return 0;
      }
      DVar2 = WaitForSingleObject(*(HANDLE *)(lVar3 + 0xa8),100);
    }
    **(undefined8 **)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x98);
    *(uint *)(param_1 + 0x1fc) = uVar1;
  }
  return *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28 + 0x90);
}

