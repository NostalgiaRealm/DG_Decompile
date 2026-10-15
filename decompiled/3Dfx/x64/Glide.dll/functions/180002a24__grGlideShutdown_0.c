/*
 * _grGlideShutdown@0 at 180002a24
 * undefined __fastcall _grGlideShutdown@0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180002a24-180002a28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180005b88
 */

void _grGlideShutdown_0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
                    /* 0x2a24  50  _grGlideShutdown@0
                       0x2a24  211  grGlideShutdown */
  puVar2 = FUN_180015384();
  puVar2[0x65] = 1;
  if (puVar2[100] != '\0') {
    FUN_180016168((longlong)puVar2,param_2,param_3,param_4);
  }
  if (*(longlong **)(puVar2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar2 + 0x18) + 0x18))();
    if (*(LPVOID *)(*(longlong *)(puVar2 + 0x18) + 0x2b0) != (LPVOID)0x0) {
      FUN_18005dbc0(*(LPVOID *)(*(longlong *)(puVar2 + 0x18) + 0x2b0));
    }
    (**(code **)**(undefined8 **)(puVar2 + 0x18))();
    *(undefined8 *)(puVar2 + 0x18) = 0;
  }
  if (*(longlong **)(puVar2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar2 + 0x28) + 0x60))();
    puVar1 = *(undefined8 **)(puVar2 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(puVar2 + 0x28) = 0;
  }
  FUN_18005dbc0(*(LPVOID *)(puVar2 + 0xa0));
  *(undefined8 *)(puVar2 + 0xa0) = 0;
  FUN_1800043e8(*(undefined8 **)(puVar2 + 0x30));
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined2 *)(puVar2 + 0x65) = 0;
  return;
}

