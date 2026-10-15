/*
 * FUN_1801efa90 at 1801efa90
 * undefined FUN_1801efa90(void)
 * Address ranges: 1801efa90-1801efcfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801efa90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 param_7,undefined4 *param_8,uint param_9,
                  undefined8 param_10,uint param_11)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  int *piVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *pcVar8;
  code *extraout_x11_03;
  code *extraout_x11_04;
  uint uVar9;
  bool bVar10;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  cVar2 = true;
  bVar10 = false;
  if (param_9 == 1) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar5 = (*extraout_x11)(param_2,extraout_x1,param_4,0);
    uVar6 = FUN_1801fa698(uVar5,param_5,param_6);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_1801ef9d8(uVar5,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) {
        cVar2 = false;
      }
    }
    else {
      iVar4 = *param_5;
      if (iVar4 == -8) {
        if (param_11 < 0x275) {
          cVar2 = false;
          bVar10 = (bool)cVar2;
          goto LAB_1801efb68;
        }
      }
      else {
        bVar10 = (bool)cVar2;
        if (iVar4 == 0 || iVar4 == -7) goto LAB_1801efb68;
      }
      cVar2 = *param_6 == iVar4 || 0x277 < param_11;
      bVar10 = (bool)cVar2;
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_1801efb68:
  uVar9 = 0;
  do {
    if (cVar2 == '\0') {
      return '\0';
    }
    (*(code *)puVar1)(0x180224000);
    uVar3 = (*extraout_x11_00)(param_2,param_3,param_4);
    if (uVar3 <= uVar9) {
      return cVar2;
    }
    (*(code *)puVar1)(0x180224000);
    uVar5 = (*extraout_x11_01)(param_2,param_3,param_4,uVar9);
    iVar4 = FUN_180222cb8(uVar5,&DAT_180236e94);
    if (iVar4 == 0) {
      if (bVar10 == false) {
        (*(code *)puVar1)(0x180224000);
        piVar7 = param_5;
        pcVar8 = extraout_x11_02;
LAB_1801efc04:
        cVar2 = (*pcVar8)(param_2,param_3,param_4,uVar9,piVar7);
      }
      else {
LAB_1801efc80:
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = FUN_180222cb8(uVar5,&DAT_180229fb0);
      if (iVar4 == 0) {
        if (bVar10 == false) {
          (*(code *)puVar1)(0x180224000);
          piVar7 = param_6;
          pcVar8 = extraout_x11_03;
          goto LAB_1801efc04;
        }
        goto LAB_1801efc80;
      }
      iVar4 = FUN_180222cb8(uVar5,s_refrate_180236eb0);
      if (iVar4 == 0) {
        (*(code *)puVar1)(0x180224000);
        cVar2 = (*extraout_x11_04)(param_2,param_3,param_4,uVar9,param_7);
        *param_8 = 1;
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

