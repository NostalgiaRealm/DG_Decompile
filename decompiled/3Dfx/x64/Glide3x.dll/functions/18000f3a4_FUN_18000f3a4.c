/*
 * FUN_18000f3a4 at 18000f3a4
 * undefined __fastcall FUN_18000f3a4(longlong param_1)
 * Address ranges: 18000f3a4-18000f418
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f3a4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    if (*(int *)(param_1 + 0x2af0) == 0x20) {
      FUN_18000f268(param_1,'\0');
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)
                       (param_1 + ((ulonglong)*(uint *)(param_1 + 0x2af0) + 0x33a) * 0x10));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)
                       (param_1 + 0x33a8 + (ulonglong)*(uint *)(param_1 + 0x2af0) * 0x10));
  }
  return;
}

