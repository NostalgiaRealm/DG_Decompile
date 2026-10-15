/*
 * FUN_180208b78 at 180208b78
 * undefined FUN_180208b78(void)
 * Address ranges: 180208b78-180208bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208b78(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_2 != *(longlong *)(param_1 + 0x28)) {
    FUN_180206ff8();
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
    *(longlong *)(param_1 + 0x28) = param_2;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
  }
  return;
}

