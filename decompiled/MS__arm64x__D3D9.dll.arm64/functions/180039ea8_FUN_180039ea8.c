/*
 * FUN_180039ea8 at 180039ea8
 * undefined FUN_180039ea8(void)
 * Address ranges: 180039ea8-180039f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039ea8(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong unaff_x19;
  longlong lVar4;
  longlong unaff_x24;
  longlong in_stack_00000040;
  
  if ((*(char *)(unaff_x19 + 0x689) != '\0') &&
     (plVar2 = *(longlong **)(unaff_x24 + 0x7cb8), plVar2 != (longlong *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,0,0);
    if (uVar1 != 0xffffffff) {
      lVar4 = *(longlong *)(*(longlong *)(unaff_x24 + 0x76e0) + 0x1930);
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x50) + (ulonglong)(uVar1 >> 0x10) * 0x10);
      (**(code **)(*plVar2 + 0x48))(plVar2,&stack0x00000040);
      *(ulonglong *)(unaff_x24 + 0x7b18) =
           in_stack_00000040 + (ulonglong)(*(int *)(lVar4 + 0x20) * (uVar1 & 0xffff));
      uVar3 = (**(code **)(**(longlong **)(unaff_x24 + 0x7cb8) + 0xf8))();
      *(undefined8 *)(unaff_x24 + 0x7e90) = uVar3;
      FUN_180038de0();
      uVar3 = FUN_180039f44();
      return uVar3;
    }
  }
  return 0;
}

