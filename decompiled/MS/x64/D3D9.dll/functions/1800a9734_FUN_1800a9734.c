/*
 * FUN_1800a9734 at 1800a9734
 * undefined __fastcall FUN_1800a9734(longlong param_1, int param_2)
 * Address ranges: 1800a9734-1800a97cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a9734(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 6) {
LAB_1800a97a2:
    uVar1 = 0x1c;
    *(undefined4 *)(param_1 + 0x48) = 0x1b;
    *(undefined4 *)(param_1 + 0x40) = 0x1c;
    *(undefined4 *)(param_1 + 0x44) = 0x1c;
    *(undefined4 *)(param_1 + 0x4c) = 0x1e;
  }
  else {
    if (param_2 == 0x15) {
      uVar1 = 0x18;
      *(undefined4 *)(param_1 + 0x38) = 0x17;
      *(undefined4 *)(param_1 + 0x3c) = 0x18;
      *(undefined4 *)(param_1 + 0x40) = 0x18;
      *(undefined4 *)(param_1 + 0x44) = 0x18;
      *(undefined4 *)(param_1 + 0x4c) = 0x18;
      *(undefined4 *)(param_1 + 0x48) = 0x17;
      goto LAB_1800a97c9;
    }
    if (param_2 == 0x16) {
      *(undefined4 *)(param_1 + 0x38) = 9;
      *(undefined4 *)(param_1 + 0x48) = 9;
      *(undefined4 *)(param_1 + 0x3c) = 0xb;
      *(undefined4 *)(param_1 + 0x40) = 0xb;
      *(undefined4 *)(param_1 + 0x44) = 0xb;
      *(undefined4 *)(param_1 + 0x4c) = 0xb;
      *(undefined4 *)(param_1 + 0x50) = 0xb;
      *(undefined4 *)(param_1 + 0x54) = 0xb;
      return;
    }
    if (param_2 != 0x2a) goto LAB_1800a97a2;
    *(undefined4 *)(param_1 + 0x48) = 0x17;
    *(undefined4 *)(param_1 + 0x40) = 0x1c;
    *(undefined4 *)(param_1 + 0x44) = 0x1c;
    uVar1 = 0x18;
    *(undefined4 *)(param_1 + 0x4c) = 0x18;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x1e;
  *(undefined4 *)(param_1 + 0x38) = 0x1b;
LAB_1800a97c9:
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}

