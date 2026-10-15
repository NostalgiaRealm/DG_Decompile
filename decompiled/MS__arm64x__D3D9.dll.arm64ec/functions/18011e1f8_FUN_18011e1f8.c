/*
 * FUN_18011e1f8 at 18011e1f8
 * undefined FUN_18011e1f8(void)
 * Address ranges: 18011e1f8-18011e24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18011e1f8(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 * param_3;
  if (*(uint *)(param_1 + 0xdf0) < uVar1) {
    FUN_1802229d8(*(undefined8 *)(param_1 + 0xde8));
    *(undefined8 *)(param_1 + 0xde8) = 0;
    *(uint *)(param_1 + 0xdf0) = uVar1;
    uVar2 = FUN_1802229a8(uVar1);
    *(undefined8 *)(param_1 + 0xde8) = uVar2;
  }
  return *(longlong *)(param_1 + 0xde8) != 0;
}

