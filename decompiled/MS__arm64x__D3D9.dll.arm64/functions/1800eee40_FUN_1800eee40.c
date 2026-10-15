/*
 * FUN_1800eee40 at 1800eee40
 * undefined FUN_1800eee40(void)
 * Address ranges: 1800eee40-1800eeebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eee40(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  while (uVar1 < param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(param_1 + 0x20),0xffffffff);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  return;
}

