/*
 * FUN_1800763b8 at 1800763b8
 * undefined FUN_1800763b8(void)
 * Address ranges: 1800763b8-1800764ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800763b8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,ulonglong param_6)

{
  FUN_1800f5730(param_2 + 0x20,param_3,0x10,param_5,1,param_6,0xa4,0xffffffff,
                *(undefined4 *)(param_2 + 0xd4),0xa4,0x2b0,0);
  FUN_1800f5730(param_2 + 0x20,param_3,0x10,param_5,2,param_6 & 0xffffffff,0xa4,0xffffffff,
                *(undefined4 *)(param_2 + 0xd4),0xa4,0x2c0,0);
  FUN_1800f5730(param_2 + 0x20,param_3,0x10,param_5,4,param_6 & 0xffffffff,0xa4,0xffffffff,
                *(undefined4 *)(param_2 + 0xd4),0xa4,0x2d0,0);
  return;
}

