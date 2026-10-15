/*
 * FUN_18002bbb8 at 18002bbb8
 * undefined __fastcall FUN_18002bbb8(undefined8 * param_1)
 * Address ranges: 18002bbb8-18002bbd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bbb8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_180021d18((longlong *)*param_1);
  *puVar1 = uVar2;
  return;
}

