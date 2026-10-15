/*
 * FUN_180215108 at 180215108
 * undefined FUN_180215108(void)
 * Address ranges: 180215108-180215197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180215108(void)

{
  longlong *plVar1;
  undefined *puVar2;
  char cVar3;
  longlong *plVar4;
  code *extraout_x11;
  longlong in_x18;
  undefined8 *puVar5;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  plVar1 = (longlong *)(*(longlong *)(*(longlong *)(in_x18 + 0x60) + 0x18) + 0x20);
  puVar5 = (undefined8 *)*plVar1;
  plVar4 = (longlong *)*puVar5;
  while( true ) {
    if (plVar4 == plVar1) {
      return 0;
    }
    (*(code *)puVar2)();
    cVar3 = (*extraout_x11)(puVar5 + -2);
    if (cVar3 != '\0') break;
    puVar5 = (undefined8 *)*puVar5;
    plVar4 = (longlong *)*puVar5;
  }
  return 1;
}

