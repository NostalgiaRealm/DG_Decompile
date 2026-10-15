/*
 * FUN_10059ab8 at 10059ab8
 * undefined FUN_10059ab8(void)
 * Address ranges: 10059ab8-10059b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_10059ab8(int *param_1)

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
    puVar4 = (undefined *)0x1009b128;
    break;
  case 2:
  case 3:
    puVar4 = (undefined *)0x1009b124;
    break;
  case 4:
    puVar4 = &DAT_1009b12c;
    break;
  default:
    puVar4 = &DAT_1009b118;
    uVar5 = 3;
    goto LAB_10059b24;
  }
  uVar5 = 1;
LAB_10059b24:
  local_4 = CONCAT31(local_4._1_3_,iVar1 == 0);
  auVar2._4_4_ = uVar5;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = puVar4;
  auVar2._12_4_ = local_4;
  return auVar2;
}

