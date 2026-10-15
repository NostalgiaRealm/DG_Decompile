/*
 * FUN_18000f41c at 18000f41c
 * undefined __fastcall FUN_18000f41c(longlong param_1, char param_2)
 * Address ranges: 18000f41c-18000f4a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f41c(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)
                       (param_1 + ((ulonglong)*(uint *)(param_1 + 0x2af0) + 0x33a) * 0x10));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)
                       (param_1 + 0x33a8 + (ulonglong)*(uint *)(param_1 + 0x2af0) * 0x10));
    *(int *)(param_1 + 0x2af0) = *(int *)(param_1 + 0x2af0) + 1;
    if (param_2 != '\0') {
      FUN_18000f268(param_1,'\x01');
    }
  }
  return;
}

