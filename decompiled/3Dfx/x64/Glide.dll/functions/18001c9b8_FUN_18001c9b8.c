/*
 * FUN_18001c9b8 at 18001c9b8
 * undefined __fastcall FUN_18001c9b8(longlong param_1)
 * Address ranges: 18001c9b8-18001ca2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c9b8(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    if (*(int *)(param_1 + 0x2a58) == 0x20) {
      FUN_18001c87c(param_1,'\0');
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)
                       (param_1 + ((ulonglong)*(uint *)(param_1 + 0x2a58) + 0x322) * 0x10));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)
                       (param_1 + 0x3228 + (ulonglong)*(uint *)(param_1 + 0x2a58) * 0x10));
  }
  return;
}

