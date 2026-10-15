/*
 * FUN_180012408 at 180012408
 * undefined FUN_180012408(void)
 * Address ranges: 180012408-18001245b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180012408(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 * param_3;
  if (*(uint *)(param_1 + 0xdf0) < uVar1) {
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xde8));
    *(undefined8 *)(param_1 + 0xde8) = 0;
    *(uint *)(param_1 + 0xdf0) = uVar1;
    uVar2 = thunk_FUN_180102f80(uVar1);
    *(undefined8 *)(param_1 + 0xde8) = uVar2;
  }
  return *(longlong *)(param_1 + 0xde8) != 0;
}

