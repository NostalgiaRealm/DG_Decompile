/*
 * FUN_180050638 at 180050638
 * undefined FUN_180050638(void)
 * Address ranges: 180050638-18005076f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050638(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1508);
  uVar4 = *(uint *)(lVar3 + 0xba8);
  if (uVar4 != 0) {
    uVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0xba0) + uVar2 * 8) == param_1) {
        if ((int)uVar2 != -1) {
          while (uVar1 = (int)uVar2 + 1, uVar1 < uVar4) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0xba0) + uVar2 * 8) =
                 *(undefined8 *)(*(longlong *)(lVar3 + 0xba0) + (ulonglong)uVar1 * 8);
            uVar2 = (ulonglong)uVar1;
            uVar4 = *(uint *)(lVar3 + 0xba8);
          }
          *(int *)(lVar3 + 0xba8) = *(int *)(lVar3 + 0xba8) + -1;
        }
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < uVar4);
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  (*__imp_KERNEL32_dll_SignalObjectAndWait)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),0xffffffff,0);
  (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 0x80);
  (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0xa8));
  (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_1800f3868(lVar3);
    FUN_180102fc0(lVar3,0x38);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar3 != 0) {
    FUN_1800f3868(lVar3);
    FUN_180102fc0(lVar3,0x38);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

