/*
 * FUN_18001c0b8 at 18001c0b8
 * undefined __fastcall FUN_18001c0b8(undefined8 * param_1)
 * Address ranges: 18001c0b8-18001c0e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c0b8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)plVar3 + 0x43fc) = *(undefined4 *)(param_1 + 3);
  FUN_18000a3b8(plVar3,uVar1,uVar2,plVar4,'\x01');
  return;
}

