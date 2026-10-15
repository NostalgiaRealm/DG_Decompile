/*
 * FUN_1800ed328 at 1800ed328
 * undefined FUN_1800ed328(void)
 * Address ranges: 1800ed328-1800ed3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed328(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_1800ee848(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*param_2 + uVar2 * 8));
      thunk_FUN_180102fc0(**(undefined8 **)(*param_2 + uVar2 * 8));
      thunk_FUN_180102fc0(*(undefined8 *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  thunk_FUN_180102fc0(*param_2);
  FUN_180102fc0(param_2,0x10);
  return;
}

