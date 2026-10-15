/*
 * FUN_180015690 at 180015690
 * undefined __fastcall FUN_180015690(longlong param_1)
 * Address ranges: 180015690-180015720
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015690(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_stack_ffffffffffffffd8;
  
  iVar5 = *(int *)(param_1 + 0x48);
  uVar3 = FUN_1800026c0(iVar5);
  uVar4 = FUN_180002844(iVar5);
  uVar7 = (uint)uVar4;
  uVar4 = FUN_1800028a0(iVar5);
  uVar6 = (uint)uVar4;
  uVar2 = FUN_180002500(iVar5);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_180031868(lVar1,*(int *)(param_1 + 0x60),*(uint *)(param_1 + 100),1,uVar2,(int)uVar3,uVar7,
                uVar6,in_stack_ffffffffffffffd8,(-(uint)(*(int *)(param_1 + 0x54) - 2U < 2) & 3) + 1
               );
  *(undefined1 *)(lVar1 + 0x27) = 0;
  return;
}

