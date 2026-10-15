/*
 * FUN_1002aa90 at 1002aa90
 * undefined FUN_1002aa90(void)
 * Address ranges: 1002aa90-1002abcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1002aa90(int *param_1,undefined8 param_2,undefined8 param_3)

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
    pbVar4 = &BYTE_1002abe0;
    pbVar3 = &BYTE_1002abe0 + *(char *)(uVar1 + 0x1002abc9) * 4;
switchD_1002ab5c_switchD:
    switch(pbVar3) {
    case (byte *)0x1002aae0:
      goto switchD_1002ab5c_caseD_1002aae0;
    case (byte *)0x1002ab5c:
      goto switchD_1002ab5c_switchD;
    case (byte *)0x1002ab60:
      puVar5 = (undefined4 *)(iVar2 + 0x2d40);
      pbVar3 = (byte *)0x2d70;
      break;
    case (byte *)0x1002ab70:
      puVar5 = (undefined4 *)(iVar2 + 0x2d44);
      pbVar3 = (byte *)0x2d74;
      break;
    case (byte *)0x1002ab80:
      puVar5 = (undefined4 *)(iVar2 + 0x2d48);
      pbVar3 = (byte *)0x2d78;
      break;
    case (byte *)0x1002aba4:
      goto switchD_1002ab5c_caseD_1002aba4;
    case (byte *)0x1002abc0:
      goto switchD_1002aac8_caseD_18;
    case (byte *)0x1002abd4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x1002abec:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x1002ad5c:
      FUN_100106d0(param_1,*pbVar3);
      return;
    }
    break;
  default:
    goto switchD_1002aac8_caseD_18;
  case 0x1d:
    pbVar4 = (byte *)(iVar2 + 0x2d7c);
    pbVar3 = *(byte **)(iVar2 + 0x2d4c);
switchD_1002ab5c_caseD_1002aae0:
    *(byte **)pbVar4 = pbVar3;
    *(undefined4 *)(iVar2 + 0x2d80) = *(undefined4 *)(iVar2 + 0x2d50);
    *(undefined8 *)(iVar2 + 0x2d88) = *(undefined8 *)(iVar2 + 0x2d58);
    *(undefined4 *)(iVar2 + 0x2d90) = *(undefined4 *)(iVar2 + 0x2d60);
    puVar5 = (undefined4 *)(iVar2 + 0x2d64);
    pbVar3 = (byte *)0x2d94;
    break;
  case 0x29:
    param_1 = (int *)(iVar2 + 0x42e8);
    param_3 = 0;
    param_2 = 0;
    unaff_w20 = param_1;
switchD_1002ab5c_caseD_1002aba4:
    FUN_10031150(param_1,param_2,param_3);
    FUN_1000fa58(unaff_w20);
    *(undefined1 *)(iVar2 + 0x3650) = 1;
    goto switchD_1002aac8_caseD_18;
  }
  *(undefined4 *)(pbVar3 + iVar2) = *puVar5;
switchD_1002aac8_caseD_18:
  return;
}

