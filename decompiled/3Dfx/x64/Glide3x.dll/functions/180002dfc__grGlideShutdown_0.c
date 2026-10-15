/*
 * _grGlideShutdown@0 at 180002dfc
 * undefined __fastcall _grGlideShutdown@0(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180002dfc-180002e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_180032ea0
 */

void _grGlideShutdown_0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  HMODULE pHVar3;
  
                    /* 0x2dfc  49  _grGlideShutdown@0
                       0x2dfc  149  grGlideShutdown */
  pHVar3 = (HMODULE)FUN_1800069ac();
  cVar2 = FUN_1800057b0(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)((longlong)&pHVar3[0x19].unused + 1) = 1;
    if ((char)pHVar3[0x19].unused != '\0') {
      FUN_180007784(pHVar3,0,param_3,param_4);
    }
    if (*(longlong **)(pHVar3 + 6) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pHVar3 + 6) + 0x20))();
      if (*(LPVOID *)(*(longlong *)(pHVar3 + 6) + 0x328) != (LPVOID)0x0) {
        FUN_180060ac0(*(LPVOID *)(*(longlong *)(pHVar3 + 6) + 0x328));
      }
      (**(code **)(**(longlong **)(pHVar3 + 6) + 8))();
      *(undefined8 *)(pHVar3 + 6) = 0;
    }
    if (*(longlong **)(pHVar3 + 10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pHVar3 + 10) + 0x60))();
      puVar1 = *(undefined8 **)(pHVar3 + 10);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(pHVar3 + 10) = 0;
    }
    FUN_180004010(*(undefined8 **)(pHVar3 + 0xc));
    *(undefined8 *)(pHVar3 + 0xc) = 0;
    *(undefined2 *)((longlong)&pHVar3[0x19].unused + 1) = 0;
  }
  return;
}

