/*
 * FUN_18005c6a8 at 18005c6a8
 * undefined8 __cdecl FUN_18005c6a8(undefined * param_1)
 * Address ranges: 18005c6a8-18005c70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005c6a8(undefined *param_1)

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
    cVar2 = (*(code *)param_1)(plVar3 + -2);
    if (cVar2 != '\0') break;
    plVar3 = (longlong *)*plVar3;
  }
  return 1;
}

