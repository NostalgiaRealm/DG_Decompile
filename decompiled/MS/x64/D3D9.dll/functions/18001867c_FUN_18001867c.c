/*
 * FUN_18001867c at 18001867c
 * undefined __fastcall FUN_18001867c(longlong param_1)
 * Address ranges: 18001867c-1800186ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001867c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_stack_ffffffffffffffd8;
  
  iVar3 = *(int *)(param_1 + 0x98);
  iVar4 = iVar3;
  uVar2 = FUN_1800028a0(iVar3);
  uVar6 = (uint)uVar2;
  uVar2 = FUN_180002844(iVar3);
  uVar5 = (uint)uVar2;
  uVar2 = FUN_1800026c0(iVar3);
  iVar3 = (int)uVar2;
  uVar1 = FUN_180002500(iVar4);
  FUN_180031868(param_1,*(int *)(param_1 + 0xa8),*(uint *)(param_1 + 0xac),
                (short)*(undefined4 *)(param_1 + 0xb0),uVar1,iVar3,uVar5,uVar6,
                in_stack_ffffffffffffffd8,1);
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}

