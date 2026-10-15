/*
 * FUN_180021924 at 180021924
 * undefined __fastcall FUN_180021924(longlong * param_1, uint param_2)
 * Address ranges: 180021924-180021e34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021924(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  DWORD DVar28;
  byte bVar29;
  ulonglong uVar30;
  LARGE_INTEGER local_res8 [4];
  longlong local_1b8 [4];
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  
  uVar26 = 0;
  if (*(char *)(param_1[1] + 0x52) == '\0') {
    uVar30 = (ulonglong)param_2;
  }
  else {
    uVar30 = 1;
    if (param_2 != 0) {
      uVar30 = (ulonglong)param_2;
    }
  }
  (**(code **)(*param_1 + 0x2c8))();
  FUN_180020bb0(param_1[0x630]);
  if (*(char *)((longlong)param_1 + 0x2be9) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2be9) = 0;
    FUN_180020948(param_1[0x630]);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1);
  lVar22 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],0);
  local_1b8[0] = lVar22;
  lVar23 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],1);
  local_1b8[1] = lVar23;
  lVar24 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],2);
  local_1b8[2] = lVar24;
  uVar1 = *(undefined8 *)(lVar22 + 0x50);
  uVar2 = *(undefined8 *)(lVar22 + 0x58);
  bVar29 = 0;
  uVar3 = *(undefined8 *)(lVar22 + 0x60);
  uVar4 = *(undefined8 *)(lVar22 + 0x68);
  uVar5 = *(undefined8 *)(lVar22 + 0x70);
  uVar6 = *(undefined8 *)(lVar22 + 0x78);
  uVar7 = *(undefined8 *)(lVar22 + 0x80);
  uVar8 = *(undefined8 *)(lVar22 + 0x88);
  uVar9 = *(undefined8 *)(lVar22 + 0x90);
  uVar10 = *(undefined8 *)(lVar22 + 0x98);
  uVar11 = *(undefined8 *)(lVar22 + 0xa0);
  uVar12 = *(undefined8 *)(lVar22 + 0xa8);
  uVar13 = *(undefined8 *)(lVar22 + 0xb0);
  uVar14 = *(undefined8 *)(lVar22 + 0xb8);
  uVar15 = *(undefined8 *)(lVar23 + 0x50);
  uVar16 = *(undefined8 *)(lVar23 + 0x58);
  uVar17 = *(undefined8 *)(lVar23 + 0x60);
  uVar18 = *(undefined8 *)(lVar23 + 0x68);
  uVar19 = *(undefined8 *)(lVar23 + 0x70);
  uVar20 = *(undefined8 *)(lVar23 + 0x78);
  local_1b8[3] = *(undefined8 *)(lVar23 + 0x80);
  uStack_198 = *(undefined8 *)(lVar23 + 0x88);
  local_190 = *(undefined8 *)(lVar23 + 0x90);
  uStack_188 = *(undefined8 *)(lVar23 + 0x98);
  local_180 = *(undefined8 *)(lVar23 + 0xa0);
  uStack_178 = *(undefined8 *)(lVar23 + 0xa8);
  local_170 = *(undefined8 *)(lVar23 + 0xb0);
  uStack_168 = *(undefined8 *)(lVar23 + 0xb8);
  local_160 = *(undefined8 *)(lVar24 + 0x50);
  uStack_158 = *(undefined8 *)(lVar24 + 0x58);
  local_150 = *(undefined8 *)(lVar24 + 0x60);
  uStack_148 = *(undefined8 *)(lVar24 + 0x68);
  local_140 = *(undefined8 *)(lVar24 + 0x70);
  uStack_138 = *(undefined8 *)(lVar24 + 0x78);
  local_130 = *(undefined8 *)(lVar24 + 0x80);
  uStack_128 = *(undefined8 *)(lVar24 + 0x88);
  local_120 = *(undefined8 *)(lVar24 + 0x90);
  uStack_118 = *(undefined8 *)(lVar24 + 0x98);
  local_110 = *(undefined8 *)(lVar24 + 0xa0);
  uStack_108 = *(undefined8 *)(lVar24 + 0xa8);
  local_100 = *(undefined8 *)(lVar24 + 0xb0);
  uStack_f8 = *(undefined8 *)(lVar24 + 0xb8);
  do {
    if ((*(int *)(local_1b8[uVar26] + 0x74) == 0) && (*(int *)(local_1b8[uVar26] + 0x78) == 0)) {
      bVar21 = 0;
    }
    else {
      bVar21 = 1;
    }
    bVar29 = bVar29 | bVar21;
    *(byte *)((longlong)local_res8 + uVar26) = bVar21;
    if (bVar21 != 0) {
      FUN_180021240((longlong *)param_1[0x630],(int)uVar26,1,0,0,(LONG)param_1[0x15],
                    *(LONG *)((longlong)param_1 + 0xac),0);
    }
    (**(code **)(*(longlong *)param_1[0x630] + 0x40))((longlong *)param_1[0x630],uVar26,1);
    uVar27 = (int)uVar26 + 1;
    uVar26 = (ulonglong)uVar27;
  } while (uVar27 < 3);
  (**(code **)(*param_1 + 0x2d0))(param_1);
  if ((*(char *)((longlong)param_1 + 0xed) != '\0') || (bVar29 != 0)) {
    *(undefined8 *)(lVar22 + 0x50) = uVar1;
    *(undefined8 *)(lVar22 + 0x58) = uVar2;
    *(undefined8 *)(lVar22 + 0x60) = uVar3;
    *(undefined8 *)(lVar22 + 0x68) = uVar4;
    *(undefined8 *)(lVar22 + 0x70) = uVar5;
    *(undefined8 *)(lVar22 + 0x78) = uVar6;
    *(undefined8 *)(lVar22 + 0x80) = uVar7;
    *(undefined8 *)(lVar22 + 0x88) = uVar8;
    *(undefined8 *)(lVar22 + 0x90) = uVar9;
    *(undefined8 *)(lVar22 + 0x98) = uVar10;
    *(undefined8 *)(lVar22 + 0xa0) = uVar11;
    *(undefined8 *)(lVar22 + 0xa8) = uVar12;
    *(undefined8 *)(lVar22 + 0xb0) = uVar13;
    *(undefined8 *)(lVar22 + 0xb8) = uVar14;
    *(undefined8 *)(lVar23 + 0x50) = uVar15;
    *(undefined8 *)(lVar23 + 0x58) = uVar16;
    *(undefined8 *)(lVar23 + 0x60) = uVar17;
    *(undefined8 *)(lVar23 + 0x68) = uVar18;
    *(undefined8 *)(lVar23 + 0x70) = uVar19;
    *(undefined8 *)(lVar23 + 0x78) = uVar20;
    *(longlong *)(lVar23 + 0x80) = local_1b8[3];
    *(undefined8 *)(lVar23 + 0x88) = uStack_198;
    *(undefined8 *)(lVar23 + 0x90) = local_190;
    *(undefined8 *)(lVar23 + 0x98) = uStack_188;
    *(undefined8 *)(lVar23 + 0xa0) = local_180;
    *(undefined8 *)(lVar23 + 0xa8) = uStack_178;
    *(undefined8 *)(lVar23 + 0xb0) = local_170;
    *(undefined8 *)(lVar23 + 0xb8) = uStack_168;
    *(undefined8 *)(lVar24 + 0x50) = local_160;
    *(undefined8 *)(lVar24 + 0x58) = uStack_158;
    *(undefined8 *)(lVar24 + 0x60) = local_150;
    *(undefined8 *)(lVar24 + 0x68) = uStack_148;
    *(undefined8 *)(lVar24 + 0x70) = local_140;
    *(undefined8 *)(lVar24 + 0x78) = uStack_138;
    *(undefined8 *)(lVar24 + 0x80) = local_130;
    *(undefined8 *)(lVar24 + 0x88) = uStack_128;
    *(undefined8 *)(lVar24 + 0x90) = local_120;
    *(undefined8 *)(lVar24 + 0x98) = uStack_118;
    *(undefined8 *)(lVar24 + 0xa0) = local_110;
    *(undefined8 *)(lVar24 + 0xa8) = uStack_108;
    *(undefined8 *)(lVar24 + 0xb0) = local_100;
    *(undefined8 *)(lVar24 + 0xb8) = uStack_f8;
    FUN_180027c18(lVar22);
    FUN_180027c18(lVar23);
    FUN_180027c18(lVar24);
  }
  uVar26 = 0;
  do {
    iVar25 = (int)uVar26;
    if (*(char *)((longlong)local_res8 + uVar26) != '\0') {
      lVar22 = local_1b8[uVar26];
      DVar28 = *(DWORD *)(lVar22 + 0x6c);
      FUN_18002108c((longlong *)param_1[0x630],iVar25,DVar28,*(int *)(lVar22 + 0x70),
                    *(char *)(lVar22 + 0x95),*(char *)(lVar22 + 0x99),'\0','\0',
                    *(undefined1 *)(lVar22 + 0x97),*(undefined4 *)(lVar22 + 0x8c),
                    *(undefined4 *)(lVar22 + 0x90));
      if (*(int *)((longlong)param_1 + 0x2984) == iVar25) {
        FUN_180027974(lVar22,*(int *)((longlong)param_1 + 0xac),DVar28);
      }
    }
    uVar26 = (ulonglong)(iVar25 + 1U);
  } while (iVar25 + 1U < 3);
  lVar22 = param_1[0x630];
  *(uint *)(lVar22 + 0x40) = (*(int *)(lVar22 + 0x40) + 1U) % 7;
  QueryPerformanceCounter(local_res8);
  uVar27 = *(uint *)(lVar22 + 0x40);
  uVar26 = (ulonglong)uVar27;
  if (local_res8[0].QuadPart <= *(longlong *)(lVar22 + 0x48 + uVar26 * 0x10)) {
    do {
      QueryPerformanceCounter(local_res8);
      uVar27 = *(uint *)(lVar22 + 0x40);
    } while (local_res8[0].QuadPart <= *(longlong *)(lVar22 + 0x48 + (ulonglong)uVar27 * 0x10));
    uVar26 = (ulonglong)uVar27;
  }
  if (*(longlong *)(lVar22 + 0x38) < local_res8[0].QuadPart) {
    iVar25 = (int)((local_res8[0].QuadPart - *(longlong *)(lVar22 + 0x20)) /
                  *(longlong *)(lVar22 + 0x18));
    lVar23 = (ulonglong)(uint)(iVar25 + (int)uVar30) * *(longlong *)(lVar22 + 0x18) +
             *(longlong *)(lVar22 + 0x20);
    uVar26 = (ulonglong)uVar27;
    *(longlong *)(lVar22 + 0x38) = lVar23;
  }
  else {
    lVar23 = uVar30 * *(longlong *)(lVar22 + 0x18) + *(longlong *)(lVar22 + 0x38);
    *(longlong *)(lVar22 + 0x38) = lVar23;
    iVar25 = *(int *)(lVar22 + ((ulonglong)(((int)uVar26 + 6U) % 7) + 5) * 0x10);
  }
  *(longlong *)(lVar22 + 0x48 + uVar26 * 0x10) = lVar23;
  *(int *)(lVar22 + ((ulonglong)*(uint *)(lVar22 + 0x40) + 5) * 0x10) = (int)uVar30 + iVar25;
  FUN_18001ff48(lVar22,&local_res8[0].QuadPart);
  *(int *)((longlong)param_1 + 0x2a5c) = *(int *)((longlong)param_1 + 0x2a5c) + 1;
                    /* WARNING: Could not recover jumptable at 0x000180021e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1,uVar30);
  return;
}

