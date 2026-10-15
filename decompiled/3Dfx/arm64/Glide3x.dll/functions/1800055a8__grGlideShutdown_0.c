/*
 * _grGlideShutdown@0 at 1800055a8
 * undefined __cdecl _grGlideShutdown@0(void)
 * Address ranges: 1800055a8-180005667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideShutdown_0(void)

{
  byte bVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
                    /* 0x55a8  49  _grGlideShutdown@0
                       0x55a8  149  grGlideShutdown */
  lVar2 = FUN_180008ce0();
  bVar1 = FUN_180008208();
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x65) = 1;
    if (*(char *)(lVar2 + 100) != '\0') {
      FUN_18000a178(lVar2,0);
    }
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x20))();
      pvVar3 = *(LPVOID *)(*(longlong *)(lVar2 + 0x18) + 0x328);
      if (pvVar3 != (LPVOID)0x0) {
        FUN_180063700(pvVar3);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 8))();
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x60))();
      puVar4 = *(undefined8 **)(lVar2 + 0x28);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(undefined8 *)(lVar2 + 0x28) = 0;
    }
    FUN_180006938(*(undefined8 **)(lVar2 + 0x30));
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined2 *)(lVar2 + 0x65) = 0;
  }
  return;
}

