/*
 * FUN_180044bd0 at 180044bd0
 * undefined __cdecl FUN_180044bd0(longlong param_1, ulonglong param_2)
 * Address ranges: 180044bd0-180044c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044bd0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  while (uVar1 < param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  return;
}

