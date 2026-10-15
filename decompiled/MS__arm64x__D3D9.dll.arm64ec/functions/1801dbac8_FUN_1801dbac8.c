/*
 * FUN_1801dbac8 at 1801dbac8
 * undefined FUN_1801dbac8(void)
 * Address ranges: 1801dbac8-1801dbb43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801dbac8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,1);
  }
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x868));
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x870),0);
  FUN_1802229d8(*(undefined8 *)(param_2 + 0x10),0x4a70);
  if (*(longlong *)(param_2 + 0x878) != 0) {
    thunk_FUN_180223748(*(longlong *)(param_2 + 0x878),0,0x8000);
  }
  return;
}

