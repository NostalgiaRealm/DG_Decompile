/*
 * FUN_10027060 at 10027060
 * undefined FUN_10027060(void)
 * Address ranges: 10027060-1002719b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_10027060(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int *unaff_w20;
  
  uVar1 = param_1[1];
  if (0x12 < uVar1 - 0x17) {
    return;
  }
  iVar2 = *param_1;
  puVar5 = (undefined4 *)(uVar1 - 0x17);
  switch(uVar1) {
  case 0x17:
  case 0x1e:
  case 0x21:
    if (0x21 < uVar1) {
      return;
    }
    pbVar4 = &BYTE_100271b0;
    pbVar3 = &BYTE_100271b0 + *(char *)(uVar1 + 0x10027199) * 4;
switchD_1002712c_switchD:
    switch(pbVar3) {
    case (byte *)0x100270b0:
      goto switchD_1002712c_caseD_100270b0;
    case (byte *)0x1002712c:
      goto switchD_1002712c_switchD;
    case (byte *)0x10027130:
      puVar5 = (undefined4 *)(iVar2 + 0x2bf8);
      pbVar3 = (byte *)0x2c28;
      break;
    case (byte *)0x10027140:
      puVar5 = (undefined4 *)(iVar2 + 0x2bfc);
      pbVar3 = (byte *)0x2c2c;
      break;
    case (byte *)0x10027150:
      puVar5 = (undefined4 *)(iVar2 + 0x2c00);
      pbVar3 = (byte *)0x2c30;
      break;
    case (byte *)0x10027174:
      goto switchD_1002712c_caseD_10027174;
    case (byte *)0x10027190:
      goto switchD_10027098_caseD_18;
    case (byte *)0x100271a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x100271bc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x1002732c:
      FUN_1000e830(param_1,*pbVar3);
      return;
    }
    break;
  default:
    goto switchD_10027098_caseD_18;
  case 0x1d:
    pbVar4 = (byte *)(iVar2 + 0x2c34);
    pbVar3 = *(byte **)(iVar2 + 0x2c04);
switchD_1002712c_caseD_100270b0:
    *(byte **)pbVar4 = pbVar3;
    *(undefined4 *)(iVar2 + 0x2c38) = *(undefined4 *)(iVar2 + 0x2c08);
    *(undefined8 *)(iVar2 + 0x2c40) = *(undefined8 *)(iVar2 + 0x2c10);
    *(undefined4 *)(iVar2 + 0x2c48) = *(undefined4 *)(iVar2 + 0x2c18);
    puVar5 = (undefined4 *)(iVar2 + 0x2c1c);
    pbVar3 = (byte *)0x2c4c;
    break;
  case 0x29:
    param_1 = (int *)(iVar2 + 0x3f50);
    param_3 = 0;
    param_2 = 0;
    unaff_w20 = param_1;
switchD_1002712c_caseD_10027174:
    FUN_1002e3d0(param_1,param_2,param_3);
    FUN_1000dbb8(unaff_w20);
    *(undefined1 *)(iVar2 + 0x32d0) = 1;
    goto switchD_10027098_caseD_18;
  }
  *(undefined4 *)(pbVar3 + iVar2) = *puVar5;
switchD_10027098_caseD_18:
  return;
}

