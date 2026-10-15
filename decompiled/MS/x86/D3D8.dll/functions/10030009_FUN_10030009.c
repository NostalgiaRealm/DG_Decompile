/*
 * FUN_10030009 at 10030009
 * undefined __cdecl FUN_10030009(int * param_1)
 * Address ranges: 10030009-10030033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10030009(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1009ea70(*(void **)(*param_1 + 0x172c0),(uint)puVar1,(undefined *)0x0,'\0');
    (**(code **)*puVar1)(1);
  }
  return;
}

