/*
 * FUN_180005968 at 180005968
 * undefined __fastcall FUN_180005968(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180005968-180005a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar2 = FUN_180015044();
  puVar2[0x65] = 1;
  if (puVar2[100] != '\0') {
    FUN_180015e80((longlong)puVar2,param_2,param_3,param_4);
  }
  if (*(longlong **)(puVar2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(puVar2 + 0x18) + 0x18))();
    if (*(LPVOID *)(*(longlong *)(puVar2 + 0x18) + 0x2b0) != (LPVOID)0x0) {
      FUN_18005d720(*(LPVOID *)(*(longlong *)(puVar2 + 0x18) + 0x2b0));
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
  FUN_18005d720(*(LPVOID *)(puVar2 + 0xa0));
  *(undefined8 *)(puVar2 + 0xa0) = 0;
  FUN_1800041c8(*(undefined8 **)(puVar2 + 0x30));
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined2 *)(puVar2 + 0x65) = 0;
  return;
}

