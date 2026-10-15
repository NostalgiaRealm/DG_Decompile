/*
 * FUN_18001c590 at 18001c590
 * undefined __fastcall FUN_18001c590(longlong param_1, char param_2)
 * Address ranges: 18001c590-18001c615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c590(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)
                       (param_1 + ((ulonglong)*(uint *)(param_1 + 0x2a58) + 0x322) * 0x10));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)
                       (param_1 + 0x3228 + (ulonglong)*(uint *)(param_1 + 0x2a58) * 0x10));
    *(int *)(param_1 + 0x2a58) = *(int *)(param_1 + 0x2a58) + 1;
    if (param_2 != '\0') {
      FUN_18001c3dc(param_1,'\x01');
    }
  }
  return;
}

