/*
 * _grDisableAllEffects@0 at 180003110
 * undefined __cdecl _grDisableAllEffects@0(void)
 * Address ranges: 180003110-1800032a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisableAllEffects_0(void)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x3110  26  _grDisableAllEffects@0
                       0x3110  126  grDisableAllEffects */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    if (*(char *)(lVar1 + 100) != '\0') {
      FUN_1800643e0((uint *)(lVar1 + 0x60));
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if ((((*(char *)((longlong)plVar2 + 0xf2) != '\x04') ||
           (*(char *)((longlong)plVar2 + 0xf3) != '\0')) ||
          (*(char *)((longlong)plVar2 + 0xf4) != '\x04')) ||
         (*(char *)((longlong)plVar2 + 0xf5) != '\0')) {
        (**(code **)(*plVar2 + 0x150))(plVar2,4,0,4,0);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0xf2) = 4;
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0xf3) = 0;
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0xf4) = 4;
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0xf5) = 0;
      }
      FUN_1800643d0((uint *)(lVar1 + 0x60));
    }
    if (*(char *)(lVar1 + 100) != '\0') {
      FUN_1800643e0((uint *)(lVar1 + 0x60));
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if (*(char *)((longlong)plVar2 + 0x114) != '\a') {
        (**(code **)(*plVar2 + 0x158))(plVar2,7);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x114) = 7;
      }
      FUN_1800643d0((uint *)(lVar1 + 0x60));
    }
    if (*(char *)(lVar1 + 100) != '\0') {
      FUN_1800643e0((uint *)(lVar1 + 0x60));
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if (*(int *)((longlong)plVar2 + 0x10e) != 0) {
        (**(code **)(*plVar2 + 0x170))(plVar2,0);
        *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x10e) = 0;
      }
      FUN_1800643d0((uint *)(lVar1 + 0x60));
    }
    FUN_18000ae00(lVar1,0);
    if (*(char *)(lVar1 + 100) != '\0') {
      FUN_1800643e0((uint *)(lVar1 + 0x60));
      plVar2 = *(longlong **)(lVar1 + 0x18);
      if (*(short *)((longlong)plVar2 + 0x141) != 0) {
        (**(code **)(*plVar2 + 0x1c8))(plVar2,0);
        *(undefined2 *)(*(longlong *)(lVar1 + 0x18) + 0x141) = 0;
      }
      FUN_1800643d0((uint *)(lVar1 + 0x60));
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

