/*
 * FUN_100cb0e8 at 100cb0e8
 * undefined FUN_100cb0e8(void)
 * Address ranges: 100cb0e8-100cb183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cb0e8(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x16) {
    if (param_2 == 0x15) {
      uVar2 = 0x1800000017;
      uVar1 = 0x1800000018;
      goto LAB_100cb160;
    }
  }
  else {
    if (param_2 < 0x17) {
      uVar2 = 0xb00000009;
      uVar1 = 0xb0000000b;
      goto LAB_100cb160;
    }
    if (param_2 == 0x2a) {
      *(undefined8 *)(param_1 + 0x1c) = 0x1e0000001b;
      *(undefined8 *)(param_1 + 0x24) = 0x1c0000001c;
      *(undefined8 *)(param_1 + 0x2c) = 0x1800000017;
      *(undefined8 *)(param_1 + 0x34) = 0x1800000018;
      return;
    }
  }
  uVar2 = 0x1e0000001b;
  uVar1 = 0x1c0000001c;
LAB_100cb160:
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return;
}

