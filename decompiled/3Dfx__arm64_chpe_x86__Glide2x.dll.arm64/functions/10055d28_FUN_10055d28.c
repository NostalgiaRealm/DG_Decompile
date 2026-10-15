/*
 * FUN_10055d28 at 10055d28
 * undefined FUN_10055d28(void)
 * Address ranges: 10055d28-10055db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_10055d28(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  iVar1 = *param_1;
  uVar3 = 5;
  if (iVar1 != 3) {
    uVar3 = 0;
  }
  switch(iVar1) {
  case 1:
    puVar4 = (undefined *)0x10097050;
    break;
  case 2:
  case 3:
    puVar4 = (undefined *)0x1009704c;
    break;
  case 4:
    puVar4 = &DAT_10097054;
    break;
  default:
    puVar4 = &DAT_10097040;
    uVar5 = 3;
    goto LAB_10055d94;
  }
  uVar5 = 1;
LAB_10055d94:
  local_4 = CONCAT31(local_4._1_3_,iVar1 == 0);
  auVar2._4_4_ = uVar5;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = puVar4;
  auVar2._12_4_ = local_4;
  return auVar2;
}

