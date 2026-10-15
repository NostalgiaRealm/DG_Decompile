/*
 * FUN_1001c0d0 at 1001c0d0
 * undefined FUN_1001c0d0(void)
 * Address ranges: 1001c0d0-1001c177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c0d0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  iVar2 = FUN_10001280();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_100312b0(iVar2,param_3 & 0xffffffff,uVar1 & 0xffffffff);
  FUN_100811f8(*(undefined4 *)(*(int *)(iVar2 + 0xcf04) + 0x1304),*(undefined4 *)(iVar2 + 53000),
               *(int *)(iVar2 + 0xcf04) + 0x1430,0,0x1000,uVar1 & 0xffffffff,0,1);
  if (*(int *)(*(int *)(iVar2 + 0xcf04) + 4) == 0x10de) {
    FUN_1007d820(*(undefined4 *)(*(int *)(iVar2 + 0xcf04) + 0x1304),*(undefined4 *)(iVar2 + 53000),0
                 ,1,0);
  }
  return;
}

