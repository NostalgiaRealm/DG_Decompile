/*
 * FUN_180204598 at 180204598
 * undefined FUN_180204598(void)
 * Address ranges: 180204598-18020461b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180204598(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_180205b78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*param_2 + uVar2 * 8));
      FUN_1802229d8(**(undefined8 **)(*param_2 + uVar2 * 8));
      FUN_1802229d8(*(undefined8 *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  FUN_1802229d8(*param_2);
  FUN_1802229d8(param_2,0x10);
  return;
}

