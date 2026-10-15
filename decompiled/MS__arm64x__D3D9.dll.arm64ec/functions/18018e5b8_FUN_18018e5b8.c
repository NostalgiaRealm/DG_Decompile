/*
 * FUN_18018e5b8 at 18018e5b8
 * undefined FUN_18018e5b8(void)
 * Address ranges: 18018e5b8-18018e637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018e5b8(undefined8 *param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  uint uVar2;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      (*(code *)puVar1)();
      (*extraout_x11)();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0xc));
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  FUN_1802229d8(*param_1);
  return;
}

