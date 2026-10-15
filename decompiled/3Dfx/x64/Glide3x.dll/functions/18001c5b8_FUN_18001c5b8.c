/*
 * FUN_18001c5b8 at 18001c5b8
 * undefined __fastcall FUN_18001c5b8(longlong * param_1)
 * Address ranges: 18001c5b8-18001c5ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c5b8(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 3);
  plVar4 = (longlong *)param_1[1];
  lVar5 = *param_1;
  uVar2 = *(uint *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)plVar4 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_18000a43c(plVar4,uVar2,uVar3,lVar5,uVar1,'\x01');
  return;
}

