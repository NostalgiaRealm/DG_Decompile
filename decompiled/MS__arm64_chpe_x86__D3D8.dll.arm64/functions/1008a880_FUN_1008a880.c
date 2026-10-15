/*
 * FUN_1008a880 at 1008a880
 * undefined FUN_1008a880(void)
 * Address ranges: 1008a880-1008a91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a880(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  longlong extraout_x15;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x20) = unaff_w29;
  iVar2 = FUN_100013c0();
  uVar1 = (ZEXT48(&stack0x00000000) - 0x20) + extraout_x15 * -0x10;
  FUN_100ab5b0(iVar2,param_3 & 0xffffffff,uVar1 & 0xffffffff);
  puVar4 = (undefined4 *)(iVar2 + 0x1cfdc);
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,*puVar4,0,0,uVar1 & 0xffffffff,0x400,0x400);
  return;
}

