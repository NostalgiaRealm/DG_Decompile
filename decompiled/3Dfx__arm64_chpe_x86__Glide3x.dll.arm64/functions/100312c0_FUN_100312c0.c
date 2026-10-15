/*
 * FUN_100312c0 at 100312c0
 * undefined FUN_100312c0(void)
 * Address ranges: 100312c0-100313d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

int FUN_100312c0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  code *unaff_w25;
  undefined4 unaff_w29;
  undefined1 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [4];
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined4 local_30 [2];
  byte bStack_28;
  
  uVar12 = (uint)param_2;
  uVar9 = param_1 & 0xffffffff;
  iVar4 = 0;
  if (uVar12 - 0x17 < 0x13) {
    piVar10 = (int *)(uVar12 - 0x17);
    uVar11 = ZEXT48(piVar10);
    iVar8 = (int)param_1;
    switch(uVar12) {
    case 0x17:
    case 0x1e:
    case 0x21:
      local_30[0] = unaff_w29;
      iVar2 = FUN_10013830(uVar9,1);
      if (uVar12 < 0x22) {
switchD_10031348_caseD_1003133c:
        pbVar5 = (byte *)(int)*(char *)(uVar12 + 0x100313d5);
switchD_10031348_caseD_10031344:
        pbVar5 = &BYTE_100313ec + (int)pbVar5 * 4;
        ppuVar1 = (undefined1 **)local_30;
        pcVar6 = (code *)&BYTE_100313ec;
        switch(pbVar5) {
        case (byte *)0x10031310:
          goto switchD_10031348_caseD_10031310;
        case (byte *)0x1003133c:
          goto switchD_10031348_caseD_1003133c;
        case (byte *)0x10031344:
          goto switchD_10031348_caseD_10031344;
        case (byte *)0x1003134c:
          puVar7 = (undefined4 *)(iVar8 + 0x2bf8);
          iVar2 = 0x2c28;
          break;
        case (byte *)0x1003135c:
          puVar7 = (undefined4 *)(iVar8 + 0x2bfc);
          iVar2 = 0x2c2c;
          break;
        case (byte *)0x1003136c:
          puVar7 = (undefined4 *)(iVar8 + 0x2c00);
          iVar2 = 0x2c30;
          break;
        case (byte *)0x10031384:
          goto switchD_10031348_caseD_10031384;
        case (byte *)0x100313a4:
          goto switchD_10031348_caseD_100313a4;
        default:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (byte *)0x100313f8:
          goto switchD_10031348_caseD_100313f8;
        case (byte *)0x10031568:
          goto switchD_10031348_caseD_10031568;
        }
        *(undefined4 *)(iVar8 + iVar2) = *puVar7;
      }
switchD_10031348_caseD_10031384:
      FUN_10013748(uVar9);
      break;
    case 0x1d:
      pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
switchD_10031348_caseD_10031310:
      (*pcVar6)();
      (*extraout_w11)(uVar9);
      break;
    case 0x29:
      iVar2 = iVar8 + 0x3d10;
      iVar4 = iVar2;
switchD_10031348_caseD_100313a4:
      FUN_10036600(iVar2,0);
      FUN_1000dbb8(iVar4);
      *(undefined1 *)(iVar8 + 0x32d0) = 1;
      iVar4 = 1;
    }
  }
  return iVar4;
switchD_10031348_caseD_100313f8:
  uStack_70 = 0;
  uStack_9c = 0x10031334;
  piVar10 = (int *)(iVar2 + 0x138);
  iVar4 = iVar2 + (uint)bStack_28 * 8;
  puStack_a0 = (undefined1 *)local_30;
  uStack_68 = uVar9;
  uStack_60 = uVar11;
  uStack_58 = param_2 & 0xffffffff;
  FUN_10013080(*piVar10,5,*(undefined4 *)(iVar4 + 0x8c0),*(undefined4 *)(iVar4 + 0x8b4),
               param_4 & 0xffffffff);
  uStack_90 = param_7;
  uStack_8c = param_8;
  FUN_1006b8a0(*(undefined4 *)(*piVar10 + 0x3300),*(undefined4 *)(*piVar10 + 0x3304),2,&uStack_90,
               local_30[0]);
  uStack_88 = param_5;
  uStack_84 = param_6;
  FUN_1006b498(*(undefined4 *)(*piVar10 + 0x3300),*(undefined4 *)(*piVar10 + 0x3304),0,2,&uStack_88)
  ;
  unaff_w25 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11_00)(uVar3,*(undefined4 *)(iVar2 + 0x8cc),0,4,0,auStack_80);
  ppuVar1 = &puStack_a0;
  if (-1 < iVar4) {
    FUN_1001a450(iVar2,0,param_3 & 0xffffffff,auStack_80[0],bStack_28);
    uVar3 = (*unaff_w25)();
    (*extraout_w11_01)(uVar3,*(undefined4 *)(iVar2 + 0x8cc),0);
    ppuVar1 = &puStack_a0;
  }
switchD_10031348_caseD_10031568:
  iVar4 = *piVar10;
  *(byte *)(iVar4 + 0x3edc) = *(byte *)(iVar4 + 0x32d0) | *(byte *)(iVar4 + 0x3edc);
  FUN_10012798(*piVar10);
  FUN_1006b410(*(undefined4 *)(*piVar10 + 0x3300),*(undefined4 *)(*piVar10 + 0x3304),0);
  FUN_10031110(*piVar10 + 0x3d10);
  uVar3 = (*unaff_w25)();
  (*extraout_w11_02)(uVar3,4,0);
  iVar4 = *piVar10;
  *(undefined8 *)((int)ppuVar1 + 0x18) = 0;
  iVar4 = FUN_1006b498(*(undefined4 *)(iVar4 + 0x3300),*(undefined4 *)(iVar4 + 0x3304),0,2,
                       (undefined1 *)((int)ppuVar1 + 0x18));
  return iVar4;
}

