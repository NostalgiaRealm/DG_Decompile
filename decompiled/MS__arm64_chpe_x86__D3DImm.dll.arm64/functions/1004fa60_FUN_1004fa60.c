/*
 * FUN_1004fa60 at 1004fa60
 * undefined FUN_1004fa60(void)
 * Address ranges: 1004fa60-1004fba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004fa60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_w1;
  ulonglong uVar2;
  
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
  *(undefined8 *)(param_2 + 0x2b) = 0;
  *(undefined8 *)(param_2 + 0x29) = 0;
  *(undefined8 *)(param_2 + 0x2f) = 0;
  *(undefined8 *)(param_2 + 0x2d) = 0;
  *(undefined8 *)(param_2 + 0x31) = 0;
  *param_2 = 0xcc;
  iVar1 = FUN_1004f8a0(param_1,param_2);
  uVar2 = *(ulonglong *)(extraout_w1 + 0x4c);
  *(undefined4 *)(extraout_w1 + 0xac) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(extraout_w1 + 0xb0) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(extraout_w1 + 0xb4) = *(undefined4 *)(iVar1 + 0xdc);
  *(undefined4 *)(extraout_w1 + 0xb8) = *(undefined4 *)(iVar1 + 0xe0);
  *(undefined4 *)(extraout_w1 + 0xbc) = *(undefined4 *)(iVar1 + 0xe4);
  *(undefined4 *)(extraout_w1 + 0xc0) = *(undefined4 *)(iVar1 + 0xe8);
  *(undefined4 *)(extraout_w1 + 0xc4) = *(undefined4 *)(iVar1 + 0xec);
  *(undefined4 *)(extraout_w1 + 200) = *(undefined4 *)(iVar1 + 0xf0);
  *(uint *)(extraout_w1 + 0xc) = *(uint *)(extraout_w1 + 0xc) & 0x1fff;
  *(uint *)(extraout_w1 + 0x34) = *(uint *)(extraout_w1 + 0x34) & 0x3ffff;
  *(uint *)(extraout_w1 + 0x6c) = *(uint *)(extraout_w1 + 0x6c) & 0x3ffff;
  *(uint *)(extraout_w1 + 0xa0) = *(uint *)(extraout_w1 + 0xa0) & 0xfffffeff;
  *(ulonglong *)(extraout_w1 + 0x54) =
       (ulonglong)
       (CONCAT14((char)((ulonglong)*(undefined8 *)(extraout_w1 + 0x54) >> 0x20),
                 (uint)(byte)*(undefined8 *)(extraout_w1 + 0x54)) & 0x1fffffffff);
  *(ulonglong *)(extraout_w1 + 0x4c) =
       (ulonglong)(CONCAT14((char)(uVar2 >> 0x20),(uint)((byte)uVar2 & 0x3f)) & 0x3fffffffff);
  uVar2 = *(ulonglong *)(extraout_w1 + 0x84);
  *(ulonglong *)(extraout_w1 + 0x8c) =
       (ulonglong)
       (CONCAT14((char)((ulonglong)*(undefined8 *)(extraout_w1 + 0x8c) >> 0x20),
                 (uint)(byte)*(undefined8 *)(extraout_w1 + 0x8c)) & 0x1fffffffff);
  *(ulonglong *)(extraout_w1 + 0x84) =
       (ulonglong)(CONCAT14((char)(uVar2 >> 0x20),(uint)((byte)uVar2 & 0x3f)) & 0x3fffffffff);
  return;
}

