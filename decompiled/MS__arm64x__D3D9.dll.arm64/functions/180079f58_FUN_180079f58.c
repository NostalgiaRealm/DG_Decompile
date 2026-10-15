/*
 * FUN_180079f58 at 180079f58
 * undefined FUN_180079f58(void)
 * Address ranges: 180079f58-180079fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180079f58(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      (**(code **)(**(longlong **)(*param_1 + uVar2 * 0x18 + 0x10) + 0x10))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  thunk_FUN_180102fc0(*param_1);
  return;
}

