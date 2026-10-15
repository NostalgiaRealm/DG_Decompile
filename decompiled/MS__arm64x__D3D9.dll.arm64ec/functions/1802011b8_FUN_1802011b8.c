/*
 * FUN_1802011b8 at 1802011b8
 * undefined FUN_1802011b8(void)
 * Address ranges: 1802011b8-1802012c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802011b8(longlong param_1)

{
  longlong lVar1;
  code *extraout_x11;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x314) != '\0') {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(1);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    thunk_FUN_1802236bc();
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_1 + lVar2 * 0x60;
      if (*(longlong *)(lVar1 + 0x318) != 0) {
        thunk_FUN_1802238c4(*(longlong *)(lVar1 + 0x318),1);
        *(undefined1 *)(param_1 + 0x371 + lVar2 * 0x60) = 1;
        thunk_FUN_1802238b0(*(undefined8 *)(lVar1 + 0x330),*(undefined8 *)(lVar1 + 0x318),0xffffffff
                            ,0);
        thunk_FUN_180223824(*(undefined8 *)(lVar1 + 0x330));
        *(undefined8 *)(lVar1 + 0x330) = 0;
        thunk_FUN_180223860(param_1 + 0x338 + lVar2 * 0x60);
        thunk_FUN_180223824(*(undefined8 *)(lVar1 + 0x318));
        *(undefined8 *)(lVar1 + 0x318) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 8);
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
  return;
}

