/*
 * FUN_1801fdfc0 at 1801fdfc0
 * undefined FUN_1801fdfc0(void)
 * Address ranges: 1801fdfc0-1801fe0e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fdfc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 0xd98 + uVar5 * 8);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(param_2 + 0x10);
        thunk_FUN_1802236f8(param_1 + 0x620);
        lVar1 = param_1 + (ulonglong)uVar2 * 0x18c0 + 0xbc0;
        lVar4 = 0;
        do {
          if (lVar6 == *(longlong *)(lVar1 + lVar4 * 8)) {
            *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11)(lVar6);
        thunk_FUN_18022370c(param_1 + 0x620);
        *(undefined8 *)(param_2 + 0xd98 + uVar5 * 8) = 0;
      }
      if (*(longlong *)(param_2 + 0xda8 + uVar5 * 8) != 0) {
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_00)();
        *(undefined8 *)(param_2 + 0xda8 + uVar5 * 8) = 0;
      }
      if (*(longlong *)(param_2 + 0xd88 + uVar5 * 8) != 0) {
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_01)();
        *(undefined8 *)(param_2 + 0xd88 + uVar5 * 8) = 0;
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

