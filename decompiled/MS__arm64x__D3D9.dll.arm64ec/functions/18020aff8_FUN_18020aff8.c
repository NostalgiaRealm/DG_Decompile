/*
 * FUN_18020aff8 at 18020aff8
 * undefined FUN_18020aff8(void)
 * Address ranges: 18020aff8-18020b0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18020aff8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180210140(param_3,*(undefined4 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                *(undefined8 *)(param_1 + 0xb78));
  FUN_180207cd0(param_1,param_2,0,1,0x400);
  FUN_180206f40(param_1);
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_5,*(undefined8 *)(param_4 + 8));
  FUN_180206fa8(param_1);
  return 1;
}

