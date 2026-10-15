/*
 * FUN_10039e1a at 10039e1a
 * undefined __cdecl FUN_10039e1a(int * param_1)
 * Address ranges: 10039e1a-10039e44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10039e1a(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c1038(*(void **)(*param_1 + 0x172c0),(uint)puVar1,(undefined *)0x0,'\0');
    (**(code **)*puVar1)(1);
  }
  return;
}

