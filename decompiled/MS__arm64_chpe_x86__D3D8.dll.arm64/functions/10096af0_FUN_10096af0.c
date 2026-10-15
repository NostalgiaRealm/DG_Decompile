/*
 * FUN_10096af0 at 10096af0
 * undefined FUN_10096af0(void)
 * Address ranges: 10096af0-10096baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10096af0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x30) = unaff_w29;
  iVar3 = FUN_100013c0();
  uVar2 = (ZEXT48(&stack0x00000000) - 0x30) + extraout_x15 * -0x10;
  FUN_100ab5b0(iVar3,param_3 & 0xffffffff,uVar2 & 0xffffffff);
  iVar1 = *(int *)(iVar3 + 0x1cf04);
  FUN_100e50c8(*(undefined4 *)(iVar1 + 0x1304),*(undefined4 *)(iVar3 + 0x1cf08),iVar1 + 0x1430,0,
               0x1000,uVar2 & 0xffffffff,0,1);
  iVar1 = *(int *)(iVar3 + 0x1cf04);
  if (*(int *)(iVar1 + 4) == 0x10de) {
    FUN_100e1588(*(undefined4 *)(iVar1 + 0x1304),*(undefined4 *)(iVar3 + 0x1cf08),0,1,0);
  }
  return;
}

