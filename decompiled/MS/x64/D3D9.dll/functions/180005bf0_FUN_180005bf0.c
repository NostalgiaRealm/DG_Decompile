/*
 * FUN_180005bf0 at 180005bf0
 * undefined8 __fastcall FUN_180005bf0(longlong param_1, int param_2, uint param_3, uint param_4, longlong param_5, undefined8 param_6, longlong param_7, longlong param_8, uint param_9, longlong param_10, longlong param_11, undefined4 param_12)
 * Address ranges: 180005bf0-180005ff5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180005bf0(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
             undefined8 param_6,longlong param_7,longlong param_8,uint param_9,longlong param_10,
             longlong param_11,undefined4 param_12)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  undefined8 *local_170;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 *local_158;
  longlong local_148;
  undefined4 uStack_140;
  undefined1 auStack_13c [260];
  
  lVar5 = param_10;
  lVar4 = param_8;
  if ((param_10 == 0) || (*(longlong *)(param_10 + 0x870) == 0)) {
    param_10._0_4_ = (uint)param_10._1_3_ << 8;
LAB_180005c59:
    bVar2 = false;
  }
  else {
    plVar1 = (longlong *)(param_10 + 0x868);
    param_10._0_4_ = CONCAT31(param_10._1_3_,1);
    if (*(byte *)(*plVar1 + 1) < 3) goto LAB_180005c59;
    bVar2 = true;
  }
  if (*(int *)(param_8 + 4) == 4) {
    return 0x8876086c;
  }
  if (*(uint *)(param_5 + 0x20) < (param_3 + param_4) * *(int *)(param_8 + 0xc)) {
    return 0x8876086c;
  }
  if ((*(char *)(param_8 + 0x15) != '\x04') && (!bVar2)) {
    return 0x8876086c;
  }
  if ((*(uint *)(param_1 + 0x67c8) & *(uint *)(param_7 + 0x10)) != *(uint *)(param_7 + 0x10)) {
    return 0x8876086c;
  }
  FUN_1800fbea0((undefined1 *)&local_148,0,0x110);
  uVar3 = MXCSR;
  param_12 = 0x3fc0;
  MXCSR = 0x3fc0;
  param_8 = 0;
  iVar7 = FUN_1800181f0(param_5,0,0,&param_8,param_9 & 0xfffffffe);
  if (iVar7 < 0) {
    MXCSR = uVar3;
    return 0x8876086c;
  }
  cVar17 = *(int *)(param_1 + 0x698) != 0;
  param_12 = CONCAT31(param_12._1_3_,cVar17);
  if ((char)param_10 == '\0') {
    bVar6 = FUN_1800094a8(param_1,param_7,(longlong)&local_148);
    if (bVar6 != 0) {
      cVar17 = (char)param_12;
      FUN_18001eb84(param_1,&local_148,param_8,lVar4,
                    -(uint)(*(int *)(param_1 + 0x69c) != 0) & 4 |
                    -(uint)((char)param_12 != '\0') & 2 | 1,param_3,param_4,param_2,param_9 == 1);
      goto LAB_180005f22;
    }
  }
  else {
    lVar9 = *(longlong *)(lVar5 + 0x10);
    uVar14 = 0;
    do {
      if ((*(char *)(uVar14 + 0x10 + lVar9) != '\0') && (uVar12 = 0, *(int *)(param_7 + 8) != 0)) {
        lVar9 = *(longlong *)(lVar5 + 0x10);
        do {
          uVar15 = (ulonglong)*(byte *)(uVar12 + 0x214 + param_7);
          uVar16 = (ulonglong)(uint)(int)*(char *)(param_7 + 0x14 + uVar15 * 8);
          if (*(char *)(uVar14 + lVar9) == *(char *)(param_7 + 0x19 + uVar15 * 8)) {
            (&local_148)[uVar14 * 2] =
                 (ulonglong)*(uint *)(param_1 + 0x6788 + uVar16 * 4) +
                 *(longlong *)(*(longlong *)(&DAT_000066c8 + uVar16 * 8 + param_1) + 8) +
                 (ulonglong)*(byte *)(param_7 + 0x17 + uVar15 * 8) * 4;
            auStack_13c[uVar14 * 0x10] = *(undefined1 *)(param_7 + 0x18 + uVar15 * 8);
            auStack_13c[uVar14 * 0x10 + 1] = *(undefined1 *)(param_7 + 0x15 + uVar15 * 8);
            *(undefined4 *)(auStack_13c + uVar14 * 0x10 + -4) =
                 *(undefined4 *)(param_1 + 0x6748 + uVar16 * 4);
            lVar9 = *(longlong *)(lVar5 + 0x10);
            break;
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_7 + 8));
      }
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
    } while (uVar11 < 0x10);
    puVar13 = *(undefined8 **)(lVar5 + 0x878);
    lVar9 = *(longlong *)(lVar5 + 0x870);
    param_11 = lVar9;
    if (puVar13 == (undefined8 *)0x0) {
      local_160 = 0x100;
      local_170 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
      local_168 = (int)local_170;
      local_164 = (undefined4)((ulonglong)local_170 >> 0x20);
      uVar8 = FUN_180011ba0(lVar9,(longlong *)&local_170);
      iVar7 = local_168;
      if ((char)uVar8 != '\0') {
        param_10._0_4_ = (int)local_170;
        local_158 = VirtualAlloc((LPVOID)0x0,(ulonglong)(uint)(local_168 - (int)param_10),0x1000,
                                 0x40);
        lVar9 = param_11;
        if (local_158 != (undefined8 *)0x0) {
          FUN_1800fbec0(local_158,local_170,(ulonglong)(uint)(iVar7 - (int)param_10));
          puVar13 = local_158;
          lVar9 = param_11;
        }
      }
      FUN_1800fbcf0(local_170);
      *(undefined8 **)(lVar5 + 0x878) = puVar13;
      cVar17 = (char)param_12;
    }
    if (*(byte *)(*(longlong *)(lVar5 + 0x868) + 1) < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(lVar5 + 0x10) + 0x4850;
    }
    FUN_180012f90(param_1,lVar9,(undefined *)puVar13,*(longlong *)(lVar5 + 0x10),
                  (longlong)&local_148,param_6,lVar10,param_8,lVar4,param_3,param_4,param_2,cVar17);
  }
  cVar17 = (char)param_12;
LAB_180005f22:
  FUN_180018430(param_5);
  if (cVar17 != '\0') {
    *(byte *)(param_5 + 0x8c) =
         *(byte *)(param_5 + 0x8c) | ~(byte)(*(uint *)(param_5 + 0x50) >> 5) & 1;
  }
  MXCSR = uVar3;
  return 0;
}

