/*
 * FUN_1800e7ff0 at 1800e7ff0
 * undefined __fastcall FUN_1800e7ff0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800e7ff0-1800e803d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e7ff0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  while( true ) {
    uVar1 = (**(code **)(*plVar2 + 0x40))();
    if (param_2 <= uVar1) break;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    plVar2 = *(longlong **)(param_1 + 0x18);
  }
  return;
}

