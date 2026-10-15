/*
 * FUN_1008b448 at 1008b448
 * undefined FUN_1008b448(void)
 * Address ranges: 1008b448-1008b4bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1008b448(undefined8 param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                      ulonglong param_5,ulonglong param_6,ulonglong param_7,uint param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *pcVar13;
  ulonglong unaff_x19;
  code *unaff_w20;
  int unaff_w21;
  ulonglong uVar14;
  uint unaff_w22;
  uint unaff_w23;
  int *unaff_w24;
  ulonglong uVar15;
  int *unaff_w25;
  int *unaff_w27;
  ulonglong in_stack_00000010;
  int *in_stack_00000020;
  undefined4 in_stack_00000040;
  int in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined1 in_stack_00000078;
  byte in_stack_00000080;
  undefined1 auStack_a0 [32];
  int *piStack_80;
  int *piStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  ulonglong uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [24];
  
  pcVar13 = (code *)unaff_x19;
  uVar4 = 5;
  if ((param_6 & 0x40) != 0) {
    uVar4 = (param_8 & 0xff) + 5;
  }
  if ((param_7 & 0xff) != 0) {
    uVar4 = 9;
  }
  piVar8 = (int *)param_2;
  *piVar8 = (int)param_5;
  bVar6 = uVar4 == 9;
  piVar8[1] = uVar4;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[2] = 0;
  piVar8[3] = 0;
  if (9 < uVar4) goto switchD_1008b4a0_caseD_6;
  pbVar12 = &BYTE_1008b4c0 + *(char *)(uVar4 + 0x1008b4bc) * 4;
  uVar15 = param_6;
  puVar5 = (undefined1 *)register0x00000008;
  switch(uVar4) {
  case 0:
    do {
      pbVar12 = pbVar12 + unaff_w21 * 4;
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      do {
        uVar4 = (int)unaff_x19 + 1;
        unaff_x19 = (ulonglong)uVar4;
        if (unaff_w22 <= uVar4) {
          do {
            unaff_w23 = unaff_w23 + 1;
            if (in_stack_00000010._4_4_ <= unaff_w23) {
              unaff_x19 = in_stack_00000010 & 0xff;
              if (*in_stack_00000020 == 0) goto LAB_1008b41c;
              uVar10 = (*unaff_w20)();
              (*extraout_w11_00)(uVar10);
              unaff_w25 = in_stack_00000020;
              goto switchD_1008b4a0_caseD_3;
            }
          } while (unaff_w22 == 0);
          unaff_x19 = 0;
        }
        iVar9 = (int)unaff_x19 + unaff_w23 * unaff_w22;
        unaff_w21 = iVar9 * 7;
      } while (*(int *)(*unaff_w24 + iVar9 * 0x1c) == 0);
      uVar10 = (*unaff_w20)();
      (*extraout_w11)(uVar10);
      pbVar12 = (byte *)*unaff_w25;
    } while( true );
  case 1:
    puVar5 = auStack_a0;
    uStack_74 = (undefined4)param_3;
    uVar15 = param_5 & 0xffffffff;
    uStack_64 = param_6 & 0xffffffff;
    uStack_5c = in_stack_00000050;
    uStack_58 = in_stack_00000058;
    uStack_54 = in_stack_00000060;
    uStack_50 = in_stack_00000068;
    piStack_78 = piVar8;
    uStack_70 = param_4;
    iStack_6c = (int)param_5;
    uStack_68 = (int)param_7;
    FUN_1008b448(param_2 & 0xffffffff,auStack_18,param_3,param_5 & 0xffffffff,param_8,
                 in_stack_00000058,in_stack_00000078,(int)param_6 != 1 && in_stack_00000080 != 0);
    pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar14 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    unaff_w20 = (code *)(piVar8 + 4);
    uStack_44 = 5;
    if (extraout_w11_01 != 1) {
      uStack_44 = 6;
    }
    uStack_48 = in_stack_00000040;
    uStack_2c = 5;
    if (extraout_w11_01 == 1) {
      uStack_2c = 3;
    }
    iStack_30 = in_stack_00000048;
    uVar10 = *(undefined4 *)piVar8[2];
    if (extraout_w11_01 != 1) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar9 = (*extraout_w11_02)(uVar10,&piStack_78,0,unaff_w20);
      if (iVar9 < 0) goto LAB_1008b6d0;
    }
    uStack_64 = 1;
    piStack_80 = piVar8 + 3;
    uVar11 = ZEXT48(piStack_80);
    (*pcVar13)();
    iVar9 = (*extraout_w11_03)(uVar10,&piStack_78,in_stack_00000070,uVar11 & 0xffffffff);
    if (-1 < iVar9) {
      param_7 = (ulonglong)in_stack_00000080;
      param_5 = (ulonglong)param_4;
      bVar6 = in_stack_00000048 == 0;
      unaff_w23 = param_8;
      unaff_w27 = piVar8;
      goto switchD_1008b4a0_caseD_2;
    }
    break;
  case 2:
switchD_1008b4a0_caseD_2:
    piVar8 = unaff_w27;
    puVar1 = puVar5 + 0x70;
    if (bVar6) {
      puVar1 = (undefined1 *)0x0;
    }
    puVar2 = puVar5 + 0x58;
    if (*(int *)(puVar5 + 0xe0) == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    puVar3 = puVar5 + 0x88;
    if (unaff_w23 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    bVar7 = FUN_1008b0e8(param_2 & 0xffffffff,puVar3,puVar2,puVar1,param_5,uVar15,param_7);
    uVar14 = (ulonglong)bVar7;
    if (bVar7 != 0) goto LAB_1008b6d0;
    uVar10 = (*pcVar13)();
    (*extraout_w11_04)(uVar10);
    **(undefined4 **)(puVar5 + 0x20) = 0;
    break;
  case 3:
switchD_1008b4a0_caseD_3:
    *unaff_w25 = 0;
LAB_1008b41c:
    return unaff_x19 & 0xffffffff;
  case 5:
    piVar8[5] = param_4;
  case 4:
  case 9:
    piVar8[3] = -1;
switchD_1008b4a0_caseD_6:
    return param_2 & 0xffffffff;
  default:
    goto switchD_1008b4a0_caseD_6;
  }
  if (*(int *)unaff_w20 != 0) {
    uVar10 = (*pcVar13)();
    (*extraout_w11_05)(uVar10);
    *(int *)unaff_w20 = 0;
  }
LAB_1008b6d0:
  if (*(int *)unaff_w20 == 0) {
    iVar9 = piVar8[3];
    if (iVar9 != 0) {
      piVar8[3] = *(int *)(*piVar8 + piVar8[1] * 0x28 + 0x30) + iVar9;
    }
  }
  else {
    *(int *)unaff_w20 = *(int *)(*piVar8 + piVar8[1] * 0x28 + 0x30) + *(int *)unaff_w20;
  }
  return uVar14;
}

