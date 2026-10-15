/*
 * FUN_100aa918 at 100aa918
 * undefined FUN_100aa918(void)
 * Address ranges: 100aa918-100aa9af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aa918(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  default:
    uVar2 = 0x1e0000001b;
    uVar1 = 0x1c0000001c;
    break;
  case 0x15:
    uVar2 = 0x1800000017;
    uVar1 = 0x1800000018;
    break;
  case 0x16:
    uVar2 = 0xb00000009;
    uVar1 = 0xb0000000b;
    break;
  case 0x1c:
    *(undefined8 *)(param_1 + 0x1c) = 0x1e0000001b;
    *(undefined8 *)(param_1 + 0x24) = 0x1c0000001c;
    *(undefined8 *)(param_1 + 0x2c) = 0x1800000017;
    *(undefined8 *)(param_1 + 0x34) = 0x1800000018;
    return;
  }
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return;
}

