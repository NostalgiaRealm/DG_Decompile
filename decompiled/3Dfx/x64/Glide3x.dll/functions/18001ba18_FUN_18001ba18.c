/*
 * FUN_18001ba18 at 18001ba18
 * undefined __fastcall FUN_18001ba18(undefined8 * param_1)
 * Address ranges: 18001ba18-18001ba3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ba18(undefined8 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined4 *)*param_1;
  uVar1 = *(uint *)(param_1 + 2);
  plVar3 = (longlong *)param_1[1];
  *(undefined4 *)((longlong)plVar3 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_18000a114(plVar3,puVar2,puVar2 + uVar1,'\x01');
  return;
}

