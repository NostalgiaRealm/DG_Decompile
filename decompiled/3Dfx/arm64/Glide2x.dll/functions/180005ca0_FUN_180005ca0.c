/*
 * FUN_180005ca0 at 180005ca0
 * undefined8 __cdecl FUN_180005ca0(undefined8 param_1, int param_2)
 * Address ranges: 180005ca0-180005d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180005ca0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    lVar1 = FUN_180016878();
    *(undefined1 *)(lVar1 + 0x65) = 1;
    if (*(char *)(lVar1 + 100) != '\0') {
      FUN_1800175b8(lVar1);
    }
    if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x18))();
      pvVar2 = *(LPVOID *)(*(longlong *)(lVar1 + 0x18) + 0x2b0);
      if (pvVar2 != (LPVOID)0x0) {
        FUN_18005fbc8(pvVar2);
      }
      (**(code **)**(undefined8 **)(lVar1 + 0x18))();
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x60))();
      puVar3 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    FUN_18005fbc8(*(LPVOID *)(lVar1 + 0xa0));
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    FUN_180006738(*(undefined8 **)(lVar1 + 0x30));
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined2 *)(lVar1 + 0x65) = 0;
  }
  else if (param_2 == 1) {
    DAT_18006b860 = param_1;
    DAT_18006b868 = param_1;
  }
  return 1;
}

