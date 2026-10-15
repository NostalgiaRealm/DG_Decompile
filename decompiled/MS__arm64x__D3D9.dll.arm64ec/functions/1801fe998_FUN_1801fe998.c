/*
 * FUN_1801fe998 at 1801fe998
 * undefined FUN_1801fe998(void)
 * Address ranges: 1801fe998-1801fe9f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fe998(void)

{
  undefined *puVar1;
  longlong in_x3;
  code *extraout_x11;
  longlong lVar2;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar2 = 0;
  do {
    if (*(longlong *)(in_x3 + lVar2 * 8) != 0) {
      (*(code *)puVar1)();
      (*extraout_x11)();
      *(undefined8 *)(in_x3 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  return;
}

