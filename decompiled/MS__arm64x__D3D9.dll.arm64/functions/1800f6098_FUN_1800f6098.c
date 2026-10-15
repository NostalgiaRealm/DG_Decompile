/*
 * FUN_1800f6098 at 1800f6098
 * undefined FUN_1800f6098(void)
 * Address ranges: 1800f6098-1800f60ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f6098(code *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong in_x18;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(in_x18 + 0x60) + 0x18) + 0x20);
  plVar3 = (longlong *)*puVar1;
  while( true ) {
    if ((undefined8 *)*plVar3 == puVar1) {
      return 0;
    }
    cVar2 = (*param_1)(plVar3 + -2);
    if (cVar2 != '\0') break;
    plVar3 = (longlong *)*plVar3;
  }
  return 1;
}

