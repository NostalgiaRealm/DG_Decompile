/*
 * FUN_180043d80 at 180043d80
 * undefined __cdecl FUN_180043d80(longlong param_1, ulonglong param_2)
 * Address ranges: 180043d80-180043dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043d80(longlong param_1,ulonglong param_2)

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

