/*
 * FUN_18006c808 at 18006c808
 * undefined __fastcall FUN_18006c808(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, uint param_5, undefined8 param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 18006c808-18006ce58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18006c808(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,uint param_5,
                  undefined8 param_6,uint param_7,int param_8,char param_9)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined7 uVar9;
  ulonglong uVar7;
  undefined *puVar8;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  uint local_b8;
  byte local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [4];
  undefined8 local_78 [4];
  undefined8 local_58 [4];
  
  uVar12 = (ulonglong)param_4;
  uVar17 = param_5 & 0xf000000;
  if ((((uVar17 == 0x1000000) || (uVar17 == 0x3000000)) || (uVar17 == 0x5000000)) ||
     ((uVar17 == 0x6000000 || (uVar17 == 0x8000000)))) {
    uVar15 = 0x80000000;
  }
  else {
    uVar15 = 0;
  }
  uVar16 = param_5 & 0x7ff;
  uVar10 = (ulonglong)uVar16;
  uVar11 = (uint)param_6;
  bVar3 = (byte)((ulonglong)param_6 >> 0x20);
  if ((uVar11 == 0) || (param_9 != '\0')) {
    uVar7 = (ulonglong)(param_5 >> 0x10);
  }
  else {
    uVar9 = (undefined7)((ulonglong)param_1 >> 8);
    bVar2 = FUN_1800ee208(0xe4,bVar3);
    uVar7 = CONCAT71(uVar9,bVar2);
  }
  uVar4 = param_5 >> 0x14 & 0x700 | param_5 & 0x1800;
  uVar5 = uVar4 >> 8;
  if (uVar4 == 0) {
    uVar16 = FUN_18006c684(uVar7,(longlong)param_2,uVar16);
LAB_18006c8f6:
    param_2[uVar12 * 8 + 0xd8] = uVar16 | uVar15;
    *(char *)(param_2 + uVar12 * 8 + 0xd9) = (char)uVar7;
    param_2[uVar12 * 8 + 0xdc] = 0xffffffff;
    param_2[uVar12 * 8 + 0xdf] = 0xffffffff;
    param_2[uVar12 * 8 + 0xde] = 0xffffffff;
    param_2[uVar12 * 8 + 0xdd] = 0xffffffff;
  }
  else if (uVar5 == 1) {
    if (param_2[uVar10 + 0x92] == 0) {
      uVar16 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
      param_2[uVar10 + 0x92] = uVar16;
      FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)uVar16);
    }
    uVar7 = uVar7 & 0xffffffff;
    param_2[uVar12 * 8 + 0xd8] = uVar15 | param_2[uVar10 + 0x92];
    param_2[uVar12 * 8 + 0xdc] = 0xffffffff;
LAB_18006cbd9:
    *(char *)(param_2 + uVar12 * 8 + 0xd9) = (char)uVar7;
    param_2[uVar12 * 8 + 0xdf] = 0xffffffff;
    param_2[uVar12 * 8 + 0xde] = 0xffffffff;
    param_2[uVar12 * 8 + 0xdd] = 0xffffffff;
  }
  else if (uVar5 == 2) {
    if (((char)param_2[0x3e] == '\0') ||
       (lVar1 = *(longlong *)(param_2 + 0x40), *(char *)(lVar1 + 0x331 + uVar10) == '\0')) {
      param_2[uVar12 * 8 + 0xd8] = uVar15 | param_2[0x1e];
      param_2[uVar12 * 8 + 0xdc] = uVar16 << 4;
      goto LAB_18006cbd9;
    }
    uVar7 = uVar7 & 0xff;
    uVar10 = (ulonglong)(uVar16 * 4);
    auVar20._4_4_ = *(undefined4 *)(lVar1 + 0x414 + (((uint)(uVar7 >> 2) & 3) + uVar10) * 4);
    auVar20._0_4_ = *(undefined4 *)(lVar1 + 0x414 + (((uint)uVar7 & 3) + uVar10) * 4);
    auVar20._12_4_ = *(undefined4 *)(lVar1 + 0x414 + ((uVar7 >> 6) + uVar10) * 4);
    auVar20._8_4_ = *(undefined4 *)(lVar1 + 0x414 + (((uint)(uVar7 >> 4) & 3) + uVar10) * 4);
    auVar20 = minps(auVar20,_DAT_180107bc0);
    param_2[uVar12 * 8 + 0xd8] = param_2[0x2b];
    *(undefined1 *)(param_2 + uVar12 * 8 + 0xd9) = 0xe4;
    auVar20 = maxps(auVar20,_DAT_180107ce0);
    puVar13 = param_2 + uVar12 * 8 + 0xdc;
    *puVar13 = auVar20._0_4_ ^ uVar15;
    puVar13[1] = auVar20._4_4_ ^ uVar15;
    puVar13[2] = auVar20._8_4_ ^ uVar15;
    puVar13[3] = auVar20._12_4_ ^ uVar15;
  }
  else if (uVar5 == 3) {
    uVar16 = FUN_18006c6c0(uVar7,(longlong)param_2,uVar16);
    goto LAB_18006c8f6;
  }
  uVar12 = (ulonglong)param_4;
  if (uVar11 == 0) {
    return;
  }
  puVar8 = &DAT_1801028f8;
  iVar14 = (param_8 << 0x1c) >> 0x1c;
  fVar19 = *(float *)(&DAT_180102904 + (longlong)iVar14 * 4);
  if ((8 < bVar3) || (puVar8 = (undefined *)0x101, (0x116U >> (param_6._4_4_ & 0x1f) & 1) == 0)) {
    puVar8 = (undefined *)((ulonglong)puVar8 & 0xffffffffffffff00);
  }
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  puVar13 = param_2;
  local_b8 = uVar11;
  local_b4 = bVar3;
  FUN_18006560c(puVar8,local_78,(longlong)param_2,fVar19,(char)puVar8);
  if ((param_5 & 0xe000000) == 0) {
    if (iVar14 == 0) {
LAB_18006cde6:
      FUN_1800edd10(param_2,param_3,param_7 | 0x36,&local_b8);
      goto LAB_18006cdfd;
    }
    if (iVar14 != 1) {
      param_7 = param_7 | 0x38;
    }
    goto LAB_18006cdd2;
  }
  cVar6 = (char)puVar8;
  if (uVar17 == 0x2000000) {
    fVar18 = -0.5;
LAB_18006cd20:
    FUN_18006560c(puVar8,local_98,(longlong)puVar13,fVar19 * fVar18,cVar6);
    if (iVar14 == 0) {
LAB_18006cdd2:
      FUN_1800edd10(param_2,param_3,param_7,&local_b8);
      goto LAB_18006cdfd;
    }
  }
  else {
    if (uVar17 == 0x3000000) {
      fVar18 = 0.5;
      goto LAB_18006cd20;
    }
    if (uVar17 == 0x4000000) {
      fVar18 = -1.0;
LAB_18006ccb4:
      FUN_18006560c(puVar8,local_98,(longlong)puVar13,fVar19 * fVar18,cVar6);
      if (iVar14 != -1) {
        FUN_18006560c(puVar8,local_58,(longlong)puVar13,fVar19 + fVar19,(char)puVar8);
        goto LAB_18006cd80;
      }
      goto LAB_18006cdd2;
    }
    if (uVar17 == 0x5000000) {
      fVar18 = 1.0;
      goto LAB_18006ccb4;
    }
    if (uVar17 != 0x6000000) {
      if ((uVar17 + 0xf9000000 & 0xfeffffff) != 0) goto LAB_18006cdfd;
      if (iVar14 == -1) goto LAB_18006cde6;
      if (iVar14 != 0) {
        FUN_18006560c(puVar8,local_98,(longlong)puVar13,fVar19 + fVar19,cVar6);
        param_7 = param_7 | 0x38;
      }
      goto LAB_18006cdd2;
    }
    if (iVar14 == 0) {
      FUN_18006560c(puVar8,local_98,(longlong)puVar13,0x3f800000,cVar6);
      goto LAB_18006cdd2;
    }
    FUN_18006560c(puVar8,local_98,(longlong)puVar13,fVar19,cVar6);
  }
LAB_18006cd80:
  FUN_1800edd10(param_2,param_3,param_7 | 0x32,&local_b8);
LAB_18006cdfd:
  bVar3 = FUN_1800ee208(0xe4,local_b4);
  param_2[uVar12 * 8 + 0xd8] = local_b8;
  *(byte *)(param_2 + uVar12 * 8 + 0xd9) = bVar3;
  param_2[uVar12 * 8 + 0xdc] = 0xffffffff;
  param_2[uVar12 * 8 + 0xdf] = 0xffffffff;
  param_2[uVar12 * 8 + 0xde] = 0xffffffff;
  param_2[uVar12 * 8 + 0xdd] = 0xffffffff;
                    /* WARNING: Read-only address (ram,0x000180107bc0) is written */
                    /* WARNING: Read-only address (ram,0x000180107ce0) is written */
  return;
}

