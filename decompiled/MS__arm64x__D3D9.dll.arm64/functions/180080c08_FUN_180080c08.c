/*
 * FUN_180080c08 at 180080c08
 * undefined FUN_180080c08(void)
 * Address ranges: 180080c08-180080caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180080c08(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
  puVar1 = (undefined8 *)&DAT_00000040;
  if (param_4 != 0) {
    puVar1 = (undefined8 *)(param_4 + 0x20);
  }
  (**(code **)(*plVar2 + 0x170))(plVar2,*puVar1,param_2);
  return 1;
}

