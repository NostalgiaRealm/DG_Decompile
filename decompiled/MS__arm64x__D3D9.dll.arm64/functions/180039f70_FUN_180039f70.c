/*
 * FUN_180039f70 at 180039f70
 * undefined FUN_180039f70(void)
 * Address ranges: 180039f70-18003a3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180039f70(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_60 [48];
  
  bVar2 = true;
  if ((*(char *)(param_1 + 0xf688) == '\0') && ((param_4 & 1) == 0)) {
    return true;
  }
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar8 = *(longlong *)(param_1 + 0xf7e0);
    if (lVar8 != 0) {
      if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + 0x1012c) != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar15 = 0xdfffffffffffffff;
      if ((*(uint *)(param_1 + 0x7594) & *(uint *)(*(longlong *)(lVar8 + 8) + 0x1214)) == 0) {
        uVar15 = 0x9fffffffffffffff;
      }
      uVar15 = *(ulonglong *)(param_1 + 0xfe0) & uVar15;
      uVar13 = uVar15 >> 0x34;
      if (*(char *)(param_1 + 0x765e) == '\0') {
        uVar13 = 7;
      }
      uVar13 = (uVar15 ^ uVar13 << 0x34) & 0xff8fffffffffffff ^ uVar13 << 0x34;
      uVar15 = uVar13 >> 0x38;
      if (!bVar2) {
        uVar15 = 0;
      }
      uVar13 = (uVar13 ^ uVar15 << 0x38) & 0xfeffffffffffffff ^ uVar15 << 0x38;
      uVar15 = uVar13 >> 0x39;
      if (*(char *)(*(longlong *)(lVar8 + 8) + 0x126d) == '\x03') {
        uVar15 = 0;
      }
      uVar14 = (uVar13 ^ uVar15 << 0x39) & 0xfdffffffffffffff ^ uVar15 << 0x39;
      uVar13 = uVar14 >> 0x3c;
      if (*(char *)(param_1 + 0x766e) == '\0') {
        uVar13 = 0;
      }
      uVar13 = (uVar14 ^ uVar13 << 0x3c) & 0xefffffffffffffff ^ uVar13 << 0x3c;
      if ((uVar15 & 1) == 0) {
        uVar13 = uVar13 & 0xf3ffffffffffffff;
      }
      plVar3 = (longlong *)
               FUN_18004f678(lVar8 + 0x10,auStack_60,uVar13,*(undefined8 *)(param_1 + 0xea0));
      lVar8 = *plVar3;
      lVar6 = plVar3[1];
      iVar5 = (int)plVar3[2];
      iVar18 = *(int *)((longlong)plVar3 + 0x14);
      uVar17 = *(uint *)(plVar3 + 3);
      uVar16 = *(undefined8 *)((longlong)plVar3 + 0x1c);
      bVar2 = lVar8 != 0;
      uVar12 = *(undefined4 *)((longlong)plVar3 + 0x24);
      uVar10 = *(uint *)(plVar3 + 5);
      uVar7 = *(undefined4 *)((longlong)plVar3 + 0x2c);
      goto LAB_18003a2fc;
    }
    lVar8 = 0x1012c;
    if (*(longlong *)(param_1 + 0xf910) != 0) {
      lVar8 = 0x10154;
    }
    if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + lVar8) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar15 = 0xdfffffffffffffff;
    if (((1 << (ulonglong)(param_2 & 0x1f)) - 1U & *(uint *)(param_1 + 0x7594)) == 0) {
      uVar15 = 0x9fffffffffffffff;
    }
    uVar15 = *(ulonglong *)(param_1 + 0xfe0) & uVar15;
    uVar13 = uVar15 >> 0x34;
    if (*(char *)(param_1 + 0x765e) == '\0') {
      uVar13 = 7;
    }
    uVar13 = (uVar15 ^ uVar13 << 0x34) & 0xff8fffffffffffff ^ uVar13 << 0x34;
    uVar15 = uVar13 >> 0x38;
    if (!bVar1) {
      uVar15 = 0;
    }
    uVar13 = (uVar13 ^ uVar15 << 0x38) & 0xfeffffffffffffff ^ uVar15 << 0x38;
    uVar15 = uVar13 >> 0x3c;
    if (*(char *)(param_1 + 0x766e) == '\0') {
      uVar15 = 0;
    }
    uVar15 = (uVar13 ^ uVar15 << 0x3c) & 0xefffffffffffffff ^ uVar15 << 0x3c;
    if ((uVar13 >> 0x39 & 1) == 0) {
      uVar15 = uVar15 & 0xf3ffffffffffffff;
    }
    if ((*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0xc0))
       || (uVar16 = 0,
          *(longlong *)(param_1 + 0xf8f0) == *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x100))
       ) {
      uVar16 = 1;
    }
    plVar3 = (longlong *)
             FUN_18004fa00(param_1 + 0xf748,auStack_60,param_1 + 0xf18,uVar15,param_2,uVar16,
                           *(undefined1 *)(param_1 + 0xab));
    lVar8 = *plVar3;
    lVar6 = plVar3[1];
    uVar16 = *(undefined8 *)((longlong)plVar3 + 0x1c);
    uVar12 = *(undefined4 *)((longlong)plVar3 + 0x24);
    uVar7 = *(undefined4 *)((longlong)plVar3 + 0x2c);
    if (lVar8 != 0) {
      iVar5 = (int)plVar3[2];
      iVar18 = *(int *)((longlong)plVar3 + 0x14);
      uVar17 = *(uint *)(plVar3 + 3);
      uVar10 = *(uint *)(plVar3 + 5);
      goto LAB_18003a2fc;
    }
  }
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (4 < param_2) {
      param_2 = 4;
    }
    lVar8 = *(longlong *)(param_1 + 0xf6f8);
    if ((*(longlong *)(param_1 + 0xf8f0) == *(longlong *)(lVar8 + 0xc0)) ||
       (bVar1 = false, *(longlong *)(param_1 + 0xf8f0) == *(longlong *)(lVar8 + 0x100))) {
      bVar1 = true;
    }
    iVar5 = 10;
    if (!bVar1) {
      iVar5 = 0;
    }
    iVar18 = 5;
    if (*(char *)(param_1 + 0x7660) == '\0') {
      iVar18 = iVar5;
    }
    lVar8 = *(longlong *)
             (lVar8 + (ulonglong)(uint)(*(int *)(&DAT_18022aa28 + (ulonglong)param_2 * 4) + iVar18)
                      * 8 + 8);
    lVar11 = (ulonglong)(uint)(*(int *)(&DAT_18022aa28 + (ulonglong)param_2 * 4) + iVar18) * 0x28;
    lVar6 = *(longlong *)(&DAT_180230de0 + lVar11);
    iVar5 = *(int *)(lVar11 + 0x180230de8);
    iVar18 = *(int *)(lVar11 + 0x180230dec);
    uVar17 = *(uint *)(lVar11 + 0x180230df0);
    uVar12 = *(undefined4 *)(lVar11 + 0x180230dfc);
    uVar10 = *(uint *)(lVar11 + 0x180230e00);
    uVar7 = *(undefined4 *)(lVar11 + 0x180230e04);
    uVar16 = *(undefined8 *)(lVar11 + 0x180230df4);
  }
  else {
    if (((*(longlong *)(param_1 + 0xfcc8) == 0) && (*(longlong *)(param_1 + 0xfcd0) == 0)) &&
       (*(longlong *)(param_1 + 0xfcd8) == 0)) {
      puVar9 = &DAT_18023104c;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x80);
    }
    else {
      puVar9 = &DAT_18023109c;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x90);
    }
    uVar16 = *puVar9;
    uVar10 = 0;
    uVar12 = *(undefined4 *)(puVar9 + 1);
    uVar17 = 0;
    uVar7 = 0;
    iVar18 = 0;
    iVar5 = 0;
    lVar6 = 1;
  }
LAB_18003a2fc:
  *(undefined1 *)(param_1 + 0xf688) = 0;
  if (*(longlong *)(param_1 + 0xf8f8) != lVar8) {
    *(longlong *)(param_1 + 0xf8f8) = lVar8;
    *(byte *)(param_1 + 0x1018c) =
         *(uint *)(param_1 + 0x10178) < uVar10 | *(byte *)(param_1 + 0x1018c);
    *(byte *)(param_1 + 0x10190) =
         *(uint *)(param_1 + 0x10168) < uVar17 | *(byte *)(param_1 + 0x10190);
    if ((iVar5 == 0) || (*(int *)(param_1 + 0x10160) != 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((iVar18 != 0) && (*(int *)(param_1 + 0x10164) == 0)) {
      bVar4 = 1;
    }
    *(byte *)(param_1 + 0x10192) = bVar4 | *(byte *)(param_1 + 0x10192);
    *(longlong *)(param_1 + 0x10158) = lVar6;
    *(int *)(param_1 + 0x10160) = iVar5;
    *(int *)(param_1 + 0x10164) = iVar18;
    *(uint *)(param_1 + 0x10168) = uVar17;
    *(undefined8 *)(param_1 + 0x1016c) = uVar16;
    *(undefined4 *)(param_1 + 0x10174) = uVar12;
    *(uint *)(param_1 + 0x10178) = uVar10;
    *(undefined4 *)(param_1 + 0x1017c) = uVar7;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  return bVar2;
}

