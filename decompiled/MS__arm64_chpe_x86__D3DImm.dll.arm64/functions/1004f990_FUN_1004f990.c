/*
 * FUN_1004f990 at 1004f990
 * undefined FUN_1004f990(void)
 * Address ranges: 1004f990-1004fa53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f990(undefined4 param_1,undefined4 *param_2)

{
  int extraout_w1;
  ulonglong uVar1;
  
  *(undefined8 *)(param_2 + 3) = 0;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 7) = 0;
  *(undefined8 *)(param_2 + 5) = 0;
  *(undefined8 *)(param_2 + 0xb) = 0;
  *(undefined8 *)(param_2 + 9) = 0;
  *(undefined8 *)(param_2 + 0xf) = 0;
  *(undefined8 *)(param_2 + 0xd) = 0;
  *(undefined8 *)(param_2 + 0x13) = 0;
  *(undefined8 *)(param_2 + 0x11) = 0;
  *(undefined8 *)(param_2 + 0x17) = 0;
  *(undefined8 *)(param_2 + 0x15) = 0;
  *(undefined8 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)(param_2 + 0x19) = 0;
  *(undefined8 *)(param_2 + 0x1f) = 0;
  *(undefined8 *)(param_2 + 0x1d) = 0;
  *(undefined8 *)(param_2 + 0x23) = 0;
  *(undefined8 *)(param_2 + 0x21) = 0;
  *(undefined8 *)(param_2 + 0x27) = 0;
  *(undefined8 *)(param_2 + 0x25) = 0;
  *(undefined8 *)(param_2 + 0x29) = 0;
  *param_2 = 0xac;
  FUN_1004f8a0(param_1,param_2);
  uVar1 = *(ulonglong *)(extraout_w1 + 0x4c);
  *(uint *)(extraout_w1 + 0xc) = *(uint *)(extraout_w1 + 0xc) & 0x3ff;
  *(uint *)(extraout_w1 + 0x34) = *(uint *)(extraout_w1 + 0x34) & 0x3ff;
  *(uint *)(extraout_w1 + 0x6c) = *(uint *)(extraout_w1 + 0x6c) & 0x3ff;
  *(uint *)(extraout_w1 + 0xa0) = *(uint *)(extraout_w1 + 0xa0) & 0xfffffeff;
  *(ulonglong *)(extraout_w1 + 0x54) =
       (ulonglong)
       (CONCAT14((char)((ulonglong)*(undefined8 *)(extraout_w1 + 0x54) >> 0x20),
                 (uint)((byte)*(undefined8 *)(extraout_w1 + 0x54) & 0x7f)) & 0x7ffffffff);
  *(ulonglong *)(extraout_w1 + 0x4c) =
       (ulonglong)(CONCAT14((char)(uVar1 >> 0x20),(uint)((byte)uVar1 & 0x3f)) & 0x3fffffffff);
  uVar1 = *(ulonglong *)(extraout_w1 + 0x84);
  *(ulonglong *)(extraout_w1 + 0x8c) =
       (ulonglong)
       (CONCAT14((char)((ulonglong)*(undefined8 *)(extraout_w1 + 0x8c) >> 0x20),
                 (uint)((byte)*(undefined8 *)(extraout_w1 + 0x8c) & 0x7f)) & 0x7ffffffff);
  *(ulonglong *)(extraout_w1 + 0x84) =
       (ulonglong)(CONCAT14((char)(uVar1 >> 0x20),(uint)((byte)uVar1 & 0x3f)) & 0x3fffffffff);
  return;
}

