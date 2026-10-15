/*
 * FUN_18001b888 at 18001b888
 * undefined __fastcall FUN_18001b888(undefined8 * param_1)
 * Address ranges: 18001b888-18001b8a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b888(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = (longlong *)param_1[1];
  puVar2 = (undefined4 *)*param_1;
  *(undefined4 *)((longlong)plVar1 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_18000a03c(plVar1,puVar2,'\x01');
  return;
}

