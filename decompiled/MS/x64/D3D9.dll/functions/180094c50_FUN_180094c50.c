/*
 * FUN_180094c50 at 180094c50
 * undefined __fastcall FUN_180094c50(longlong param_1, float * param_2, uint param_3, uint param_4, uint param_5, char param_6, char param_7, uint param_8)
 * Address ranges: 180094c50-180095533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180094c50(longlong param_1,float *param_2,uint param_3,uint param_4,uint param_5,
                  char param_6,char param_7,uint param_8)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  uint local_res20;
  longlong *plVar24;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  uint local_b0;
  longlong local_90;
  undefined1 local_88 [8];
  undefined8 local_80 [8];
  undefined4 uVar25;
  
  uVar12 = param_5;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((char)param_8 == '\0') {
    fVar17 = param_2[6];
    fVar20 = param_2[4];
    fVar18 = param_2[7];
    fVar21 = param_2[5];
    fVar22 = ((fVar17 - fVar20) / (param_2[2] - *param_2)) * 0.495;
    fVar23 = ((fVar18 - fVar21) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      cVar4 = FUN_1800a91c4(param_5);
LAB_180094d0d:
      param_8 = CONCAT31(param_8._1_3_,cVar4);
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)(param_2 + 0x16) + 0x50))
                  (*(longlong **)(param_2 + 0x16),&local_c8);
        bVar1 = SUB41(param_2[0xb],0) & 0x1f;
        uVar16 = local_b0 >> (SUB41(param_2[0xb],0) & 0x1f);
        uVar5 = 1;
        if ((uint)local_b8 >> bVar1 != 0) {
          uVar5 = (uint)local_b8 >> bVar1;
        }
        fVar17 = (float)uVar5;
        uVar5 = 1;
        if (uVar16 != 0) {
          uVar5 = uVar16;
        }
        fVar18 = (float)uVar5;
        fVar22 = fVar22 / fVar17;
        fVar23 = fVar23 / fVar18;
        if (param_7 == '\0') {
          fVar19 = 0.5;
        }
        else {
          fVar19 = 1.0;
        }
        fVar20 = (fVar19 + param_2[4]) / fVar17;
        fVar21 = (fVar19 + param_2[5]) / fVar18;
        fVar17 = (fVar19 + param_2[6]) / fVar17;
        fVar18 = (fVar19 + param_2[7]) / fVar18;
      }
    }
    else {
      if (param_5 - 4 < 2) {
        cVar4 = '\x01';
        goto LAB_180094d0d;
      }
      param_8 = param_8 & 0xffffff00;
    }
    param_2[4] = fVar20 - fVar22;
    param_2[5] = fVar21 - fVar23;
    param_2[6] = fVar17 - fVar22;
    param_2[7] = fVar18 - fVar23;
  }
  if (((int)uVar12 < 0) && (((byte)uVar12 & 0xf) == 2)) {
    FUN_1800ac578(&param_5,param_1,param_4);
    uVar12 = ~(param_5 << 8) & 0x40000000 | (param_5 & 0xfff00) << 10 | uVar12 & 0x8003ffff;
  }
  uVar13 = (ulonglong)uVar12;
  if ((int)uVar12 < 0) {
    uVar5 = *(uint *)(param_1 + 0x1d138);
    local_res8 = (longlong *)0x0;
    param_5 = uVar12;
    if (uVar5 != 0) {
      uVar10 = 0;
      uVar16 = uVar5;
      do {
        uVar6 = uVar16 + uVar10 >> 1;
        uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d130) + (ulonglong)uVar6 * 0x18);
        uVar3 = uVar6;
        if (uVar14 <= uVar13) {
          if (uVar13 <= uVar14) break;
          uVar6 = uVar6 + 1;
          uVar3 = uVar16;
          uVar10 = uVar6;
        }
        uVar16 = uVar3;
      } while (uVar16 != uVar10);
      if (uVar6 != uVar5) {
        if ((*(ulonglong *)(*(longlong *)(param_1 + 0x1d130) + (ulonglong)uVar6 * 0x18) == uVar13)
           && (plVar15 = (longlong *)
                         (*(longlong *)(param_1 + 0x1d130) + 0x10 + (ulonglong)uVar6 * 0x18),
              plVar15 != (longlong *)0x0)) {
          plVar15 = (longlong *)*plVar15;
          param_4 = local_res20;
          local_res8 = plVar15;
          goto LAB_180094fd2;
        }
      }
    }
    uVar5 = *(uint *)(param_1 + 0x1d148);
    lVar8 = *(longlong *)(param_1 + 0x1d140);
    local_b8 = 0x100;
    local_b0 = CONCAT31(local_b0._1_3_,1);
    local_c8 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
    local_c0 = local_c8;
    cVar4 = FUN_1800a9214(uVar12,(0xbfff < *(int *)((ulonglong)uVar5 * 0x1ac0 + 0x900 + lVar8)) +
                                 0x50,'\x01',(longlong *)&local_c8);
    puVar2 = local_c8;
    if (cVar4 != '\0') {
      uVar14 = (longlong)local_c0 - (longlong)local_c8;
      FUN_1800ec7d0(*(longlong *)(param_1 + 0x1d140),local_c8,uVar14);
      local_res8 = FUN_1800f08f4(uVar14,puVar2);
      uVar5 = *(uint *)(param_1 + 0x1d138);
      uVar16 = 0;
      local_res10 = local_res8;
      if (uVar5 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x1d130);
        uVar10 = 0;
        uVar6 = uVar5;
        do {
          uVar16 = uVar6 + uVar10 >> 1;
          uVar14 = *(ulonglong *)(lVar8 + (ulonglong)uVar16 * 0x18);
          uVar3 = uVar16;
          if (uVar14 <= uVar13) {
            if (uVar13 <= uVar14) break;
            uVar10 = uVar16 + 1;
            uVar16 = uVar10;
            uVar3 = uVar6;
          }
          uVar6 = uVar3;
        } while (uVar6 != uVar10);
        if ((uVar16 != uVar5) && (*(ulonglong *)(lVar8 + (ulonglong)uVar16 * 0x18) == uVar13)) {
          *(longlong **)(lVar8 + 0x10 + (ulonglong)uVar16 * 0x18) = local_res8;
          goto LAB_180094fb3;
        }
      }
      FUN_18008d9b4((longlong *)(param_1 + 0x1d128),uVar16,uVar13,&param_5,&local_res10);
      local_res8 = local_res10;
    }
LAB_180094fb3:
    plVar15 = local_res8;
    FUN_1800fbcf0(puVar2);
    param_4 = local_res20;
  }
  else {
    plVar15 = *(longlong **)(param_1 + 0x1cfd8 + uVar13 * 8);
    local_res8 = plVar15;
  }
LAB_180094fd2:
  uVar16 = 2;
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  piVar11 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
  *piVar11 = *piVar11 + 1;
  FUN_1800e2cec(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(ulonglong *)(param_1 + 0x1cf28));
  FUN_1800e3400(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(longlong *)(param_1 + 0x1cf28));
  uVar5 = local_res18;
  uVar13 = 0;
  FUN_1800aa43c(param_1,(ulonglong)local_res18,0,0);
  FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(ulonglong *)(param_1 + 0x1cf20),uVar13,(int)uVar13 + 1,0x80);
  FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(ulonglong *)(param_2 + 0x16),(ulonglong)(uint)param_2[0xd],0,0x80);
  if (*(ulonglong *)(param_2 + 0x18) != 0) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(ulonglong *)(param_2 + 0x18),(ulonglong)(uint)param_2[0xd],0,0x80);
  }
  if (*(ulonglong *)(param_2 + 0xe) != 0) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(ulonglong *)(param_2 + 0xe),(ulonglong)(uint)param_2[10],0,4);
  }
  if (*(ulonglong *)(param_2 + 0x10) != 0) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(ulonglong *)(param_2 + 0x10),(ulonglong)(uint)param_2[10],0,4);
  }
  if (*(ulonglong *)(param_2 + 0x1e) != 0) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(ulonglong *)(param_2 + 0x1e),(ulonglong)(uint)param_2[10],0,0x10);
  }
  if (uVar12 != 4) {
    if (uVar12 != 5) {
      if (uVar12 == 6) goto LAB_18009528d;
      if (uVar12 != 7) {
        if ((char)param_8 == '\0') {
          if (param_4 < 0xe) {
            lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1cf20) + 0x58))();
            uVar13 = (ulonglong)param_4;
            FUN_1800e36ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,
                          lVar8 + (longlong)((int)*(char *)(param_1 + 0x58 + uVar13 * 4) << 10) * 4)
            ;
            FUN_1800e36ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),2,
                          lVar8 + (longlong)((int)*(char *)(param_1 + 0x59 + uVar13 * 4) << 10) * 4)
            ;
            FUN_1800e36ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),3,
                          lVar8 + (longlong)((int)*(char *)(param_1 + 0x5a + uVar13 * 4) << 10) * 4)
            ;
            FUN_1800e36ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),4,
                          lVar8 + (longlong)((int)*(char *)(param_1 + 0x5b + uVar13 * 4) << 10) * 4)
            ;
            plVar15 = local_res8;
          }
          if (uVar5 == 0) {
            lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1cf20) + 0x58))();
            FUN_1800e36ac(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),5,lVar8 + 0x2000)
            ;
          }
        }
        goto LAB_1800952b8;
      }
    }
    FUN_1800e3534(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,
                  (float)(uint)param_2[0xc],1);
  }
LAB_18009528d:
  FUN_1800e3534(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,(float)(uint)param_2[0xb]
                ,0);
LAB_1800952b8:
  lVar8 = *(longlong *)(param_1 + 0x1cf18);
  plVar24 = &local_90;
  cVar4 = FUN_1800eb61c(*(longlong *)(lVar8 + 0x1950),2,
                        *(undefined8 *)(*(longlong *)(lVar8 + 0x1500) + 0x18),
                        *(undefined8 *)(*(longlong *)(lVar8 + 0x1508) + 0xb78),plVar24);
  uVar25 = (undefined4)((ulonglong)plVar24 >> 0x20);
  if (cVar4 != '\0') {
    FUN_1800e3368(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,local_80);
    local_d8 = *(undefined8 *)(param_2 + 0x1a);
    local_d0 = *(longlong *)(param_2 + 0x1c);
    local_res8 = (longlong *)0x100000001;
    param_8 = (local_d0 != 0) + 1;
    plVar24 = *(longlong **)
               ((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + 0x6d0 +
               *(longlong *)(param_1 + 0x1cf10));
    (**(code **)(*plVar24 + 0xb8))
              (plVar24,1,local_88,&param_8,CONCAT44(uVar25,param_8),&local_d8,&local_res8,0);
    FUN_1800e3664(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_90);
    local_c0 = *(undefined8 **)(param_2 + 0x14);
    local_c8 = *(undefined8 **)(param_2 + 0x12);
    local_res10 = *(longlong **)(param_2 + 0x20);
    if (local_c0 == (undefined8 *)0x0) {
      uVar16 = (uint)(local_c8 != (undefined8 *)0x0);
    }
    FUN_1800e3a7c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar16,
                  (longlong *)&local_c8,0,
                  (longlong *)
                  (-(ulonglong)(local_res10 != (longlong *)0x0) & (ulonglong)&local_res10));
    uVar9 = FUN_180098258((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1978),
                          (int *)&DAT_1801004f0);
    *(undefined8 *)(param_1 + 0x1cf60) = uVar9;
    if (param_6 == '\0') {
      piVar11 = (int *)&DAT_180100670;
      if (*(longlong *)(param_2 + 0xe) != 0) {
        piVar11 = (int *)&DAT_180100480;
      }
    }
    else {
      piVar11 = (int *)&DAT_180100638;
    }
    uVar9 = FUN_18004c500((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1960),piVar11);
    *(undefined8 *)(param_1 + 0x1cf78) = uVar9;
    uVar9 = FUN_18004bf30((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19a8),
                          (uint *)&DAT_1801004b8);
    *(undefined8 *)(param_1 + 0x1cf70) = uVar9;
    *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
    *(float *)(param_1 + 0x1cf94) = param_2[0x22];
    *(float *)(param_1 + 0x1cf98) = param_2[0x23];
    *(float *)(param_1 + 0x1cfb4) = param_2[0x24];
    if (*(longlong *)(param_2 + 0xe) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*(longlong *)(param_2 + 0x10) != 0) + 1;
    }
    *(int *)(param_1 + 0x1cf90) = iVar7;
    FUN_1800947bc(param_1,param_2,plVar15);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  piVar11 = (int *)(lVar8 + 0x684);
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (*(int *)(lVar8 + 0x680) <= *(int *)(lVar8 + 0x678))) {
    FUN_1800e2ae8(lVar8 + 8,'\0');
  }
  return;
}

