/*
 * FUN_180020984 at 180020984
 * undefined __fastcall FUN_180020984(undefined8 * param_1)
 * Address ranges: 180020984-1800209bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020984(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  FUN_18000a624(plVar2);
  FUN_180061330(plVar2 + 0x54d,puVar1,(ulonglong)*(uint *)(plVar2 + 0x1d));
  return;
}

