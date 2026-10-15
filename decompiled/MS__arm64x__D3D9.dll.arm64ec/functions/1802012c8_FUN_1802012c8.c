/*
 * FUN_1802012c8 at 1802012c8
 * undefined FUN_1802012c8(void)
 * Address ranges: 1802012c8-1802014bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802012c8(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar4;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + 0x310) != '\0') {
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
    lVar4 = 0;
    do {
      if (*(longlong *)(param_1 + 0x18 + lVar4 * 0x28) != 0) {
        (*(code *)puVar2)();
        (*extraout_x11_00)();
        lVar1 = param_1 + lVar4 * 0x28;
        *(undefined8 *)(param_1 + 0x18 + lVar4 * 0x28) = 0;
        *(undefined4 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined1 *)(lVar1 + 0x2c) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    if (*(longlong *)(param_1 + 0x688) != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)();
      *(undefined8 *)(param_1 + 0x688) = 0;
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x690));
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar3 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(param_1 + 0xc),uVar3);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    if (*(char *)(param_1 + 0x314) != '\0') {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_02)(1);
    }
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      thunk_FUN_1802236bc();
      *(undefined8 *)(param_1 + 0x2f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar4 = 0;
      do {
        lVar1 = param_1 + lVar4 * 0x60;
        if (*(longlong *)(lVar1 + 0x318) != 0) {
          thunk_FUN_1802238c4(*(longlong *)(lVar1 + 0x318),1);
          *(undefined1 *)(param_1 + 0x371 + lVar4 * 0x60) = 1;
          thunk_FUN_1802238b0(*(undefined8 *)(lVar1 + 0x330),*(undefined8 *)(lVar1 + 0x318),
                              0xffffffff,0);
          thunk_FUN_180223824(*(undefined8 *)(lVar1 + 0x330));
          *(undefined8 *)(lVar1 + 0x330) = 0;
          thunk_FUN_180223860(param_1 + 0x338 + lVar4 * 0x60);
          thunk_FUN_180223824(*(undefined8 *)(lVar1 + 0x318));
          *(undefined8 *)(lVar1 + 0x318) = 0;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
      thunk_FUN_1802236bc(*(undefined8 *)(param_1 + 0x2b0));
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      thunk_FUN_1802236bc();
      *(undefined8 *)(param_1 + 0x2d8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2a0) != 0) {
      thunk_FUN_1802236bc();
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    thunk_FUN_180223860(param_1 + 0x620);
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  return;
}

