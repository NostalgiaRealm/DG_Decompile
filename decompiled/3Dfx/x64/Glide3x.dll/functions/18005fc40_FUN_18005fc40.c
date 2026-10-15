/*
 * FUN_18005fc40 at 18005fc40
 * undefined8 __fastcall FUN_18005fc40(longlong param_1, int param_2)
 * Address ranges: 18005fc40-18005fd65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005fc40(longlong param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  tagMSG local_38;
  ulonglong uVar3;
  
  if ((uint)((*(int *)(param_1 + 0x98 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28) -
             *(int *)(param_1 + 0x90 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28)) +
            *(int *)(param_1 + 0x1f0)) <= param_2 + 0x18U) {
    ResetEvent(*(HANDLE *)(param_1 + 0xa8 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28));
    uVar1 = *(int *)(param_1 + 0x1fc) + 1U & 7;
    uVar3 = (ulonglong)uVar1;
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8 + uVar3 * 0x28),100);
    while (DVar2 != 0) {
      PeekMessageA(&local_38,(HWND)0x0,0,0,0x400000);
      if (*(char *)(param_1 + 0x204) == '\0') {
        return 0;
      }
      DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8 + uVar3 * 0x28),100);
    }
    **(undefined8 **)(param_1 + 0x98 + uVar3 * 0x28) = 0;
    *(undefined8 *)(param_1 + 0x90 + uVar3 * 0x28) = *(undefined8 *)(param_1 + 0x98 + uVar3 * 0x28);
    *(uint *)(param_1 + 0x1fc) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x90 + (ulonglong)*(uint *)(param_1 + 0x1fc) * 0x28);
}

