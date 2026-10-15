/*
 * FUN_1800be658 at 1800be658
 * undefined __fastcall FUN_1800be658(undefined8 param_1, longlong param_2)
 * Address ranges: 1800be658-1800be6bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800be658(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1800fbcf0(*(LPVOID *)(param_2 + 0x868));
  FUN_1800fbcf0(*(LPVOID *)(param_2 + 0x870));
  FUN_1800fbcf0(*(LPVOID *)(param_2 + 0x10));
  if (*(LPVOID *)(param_2 + 0x878) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_2 + 0x878),0,0x8000);
  }
  return;
}

