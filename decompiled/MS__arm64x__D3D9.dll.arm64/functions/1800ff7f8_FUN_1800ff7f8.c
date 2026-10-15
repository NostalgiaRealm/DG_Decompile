/*
 * FUN_1800ff7f8 at 1800ff7f8
 * undefined FUN_1800ff7f8(void)
 * Address ranges: 1800ff7f8-1800ff91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ff7f8(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + uVar5 * 0x18 + 0x10))();
      (*__imp_KERNEL32_dll_FreeLibrary)(*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar5 * 0x18));
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    do {
      lVar1 = uVar5 * 0x18;
      iVar4 = (int)uVar5;
      uVar2 = iVar4 + 1;
      uVar5 = (ulonglong)uVar2;
      *(undefined8 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)(uint)(iVar4 * 0x2c) + 0x1c) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x140) + lVar1 + 8);
    } while (uVar2 < *(uint *)(param_1 + 0x148));
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    uVar3 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
    (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)(param_1 + 0x6c),uVar3);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  (*__imp_KERNEL32_dll_VirtualFree)(*(undefined8 *)(param_1 + 0xa8),0,0x8000);
  return;
}

