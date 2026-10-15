/*
 * FUN_1801602e8 at 1801602e8
 * undefined FUN_1801602e8(void)
 * Address ranges: 1801602e8-18016041b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801602e8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  code *extraout_x11;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
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
  thunk_FUN_1802238b0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),0xffffffff,0);
  thunk_FUN_180223860(param_1 + 0x80);
  thunk_FUN_180223824(*(undefined8 *)(param_1 + 0xa8));
  thunk_FUN_180223824(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_180212360(lVar3);
    FUN_1802229d8(lVar3,0x38);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar3 != 0) {
    FUN_180212360(lVar3);
    FUN_1802229d8(lVar3,0x38);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

