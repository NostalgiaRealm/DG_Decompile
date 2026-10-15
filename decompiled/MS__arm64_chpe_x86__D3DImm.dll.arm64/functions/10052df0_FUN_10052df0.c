/*
 * FUN_10052df0 at 10052df0
 * undefined FUN_10052df0(void)
 * Address ranges: 10052df0-10053603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10052df0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_7c [4];
  int *local_78;
  int *local_74;
  int local_70;
  int *local_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  FUN_10096840(auStack_68);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x100);
  iVar10 = -0x7789fffb;
  if (*(char *)piVar1 != '\0') goto LAB_100535c8;
  piVar2 = (int *)(param_1 + 0xa70);
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar8 = (*extraout_w11)(uVar9);
  if ((cVar8 == '\0') ||
     (iVar10 = FUN_10081e90(param_2,*(int *)(param_1 + 0xa58),0x10), iVar10 != 0)) {
    iVar10 = -0x7ff8ffa9;
    uVar9 = (*pcVar7)();
    cVar8 = (*extraout_w11_00)(uVar9);
    if ((cVar8 != '\0') ||
       (iVar11 = FUN_10081e90(param_2,*(int *)(param_1 + 0xa58) + 0x10,0x10), iVar11 != 0))
    goto LAB_100535c8;
  }
  uVar9 = (*pcVar7)();
  iVar10 = (*extraout_w11_01)(uVar9);
  uVar9 = (*pcVar7)();
  (*extraout_w11_02)(uVar9);
  puVar3 = (uint *)(param_1 + 0xa8c);
  piVar4 = (int *)(iVar10 + 0x16c);
  *puVar3 = 0;
  uVar17 = 0;
  if (*(char *)*piVar4 != -1) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 1;
      *puVar3 = uVar17;
    } while (*(char *)(uVar17 + *piVar4) != -1);
  }
  uVar18 = 0;
  if (uVar17 != 0) {
    local_70 = param_1 + 0xa94;
    uVar19 = extraout_x1;
    local_78 = piVar1;
    local_74 = piVar2;
    local_6c = piVar2;
    do {
      puVar15 = (undefined4 *)(param_1 + 0xa90 + uVar18 * 0x6c);
      *(undefined8 *)(puVar15 + 3) = 0;
      *(undefined8 *)(puVar15 + 1) = 0;
      *(undefined8 *)(puVar15 + 7) = 0;
      *(undefined8 *)(puVar15 + 5) = 0;
      *(undefined8 *)(puVar15 + 0xb) = 0;
      *(undefined8 *)(puVar15 + 9) = 0;
      *(undefined8 *)(puVar15 + 0xf) = 0;
      *(undefined8 *)(puVar15 + 0xd) = 0;
      *(undefined8 *)(puVar15 + 0x13) = 0;
      *(undefined8 *)(puVar15 + 0x11) = 0;
      *(undefined8 *)(puVar15 + 0x17) = 0;
      *(undefined8 *)(puVar15 + 0x15) = 0;
      *(undefined8 *)(puVar15 + 0x19) = 0;
      *puVar15 = 0x6c;
      *(undefined4 *)(local_70 + uVar18 * 0x6c) = 0x1001;
      *(undefined4 *)(param_1 + (uVar18 + 0x1a) * 0x6c) = 0x1000;
      uVar9 = (*pcVar7)(*local_6c,uVar19,*(undefined1 *)(*piVar4 + uVar18));
      puVar12 = (undefined8 *)(*extraout_w11_03)(uVar9,auStack_60);
      puVar6 = (undefined8 *)(param_1 + 0xad8 + uVar18 * 0x6c);
      uVar18 = uVar18 + 1;
      uVar21 = *puVar12;
      uVar20 = puVar12[3];
      uVar19 = puVar12[2];
      puVar6[1] = puVar12[1];
      *puVar6 = uVar21;
      puVar6[3] = uVar20;
      puVar6[2] = uVar19;
      uVar19 = extraout_x1_00;
      piVar2 = local_74;
      piVar1 = local_78;
    } while (uVar18 < *puVar3);
  }
  iVar10 = -0x7fffbffb;
  iVar11 = FUN_100059a0();
  piVar4 = (int *)(param_1 + 0x9cc);
  *piVar4 = iVar11;
  if (iVar11 == 0) goto LAB_100535c8;
  iVar11 = FUN_10081da0(0x4000);
  local_78 = (int *)(param_1 + 0x1674);
  *local_78 = iVar11;
  if (iVar11 != 0) {
    uVar9 = *(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0xc) + 0x94) + 8);
    uVar13 = (*pcVar7)();
    iVar11 = (*extraout_w11_04)(uVar13);
    if (iVar11 == 0) {
      uVar13 = (*pcVar7)();
      uVar13 = (*extraout_w11_06)(uVar13);
      uVar9 = FUN_10019f70(uVar13,uVar9);
LAB_10053130:
      *(undefined4 *)(param_1 + 0x14) = uVar9;
    }
    else if (iVar11 == 1) {
      uVar13 = (*pcVar7)();
      uVar13 = (*extraout_w11_05)(uVar13);
      uVar9 = FUN_100280d0(uVar13,uVar9);
      goto LAB_10053130;
    }
    piVar2 = (int *)(param_1 + 0x14);
    if (*piVar2 != 0) {
      *(undefined1 *)(*piVar2 + 0xc) = 0;
      local_74 = (int *)(param_1 + 0x9d8);
      *(undefined1 *)local_74 = 0;
      piVar5 = (int *)(param_1 + 0xa58);
      *(undefined4 *)(*piVar2 + 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9d0) = 0xffffffff;
      *(undefined4 *)(*piVar2 + 8) = 0xff000000;
      *(undefined4 *)(param_1 + 0x9d4) = 0xff000000;
      *(bool *)(*piVar2 + 0xd) = *(char *)(*piVar5 + 0x21) == '\0';
      uVar9 = (*pcVar7)();
      iVar14 = (*extraout_w11_07)(uVar9);
      iVar11 = param_1 + 0xa60;
      *(undefined1 *)(*piVar2 + 0xe) = *(undefined1 *)(iVar14 + 0x95e);
      iVar14 = FUN_10081e90(iVar11,&DAT_1009c4b0,0x10);
      if (iVar14 != 0) {
        *(undefined1 *)(*piVar2 + 0xc) = 1;
        *(undefined1 *)local_74 = 1;
      }
      uVar9 = (*pcVar7)();
      cVar8 = (*extraout_w11_08)(uVar9,auStack_7c);
      if (cVar8 != '\0') {
        FUN_10003380(param_1);
        FUN_100033f0(param_1);
        FUN_10050f70(param_1);
        FUN_100035f0(param_1);
        FUN_10003700(param_1);
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x110) = 0;
        FUN_10050fd0(param_1);
        uVar9 = (*pcVar7)(*piVar2,param_1 + 0x2c);
        (*extraout_w11_09)(uVar9);
        puVar15 = (undefined4 *)(param_1 + 0x210);
        uVar9 = (*pcVar7)();
        (*extraout_w11_10)(uVar9,*puVar15);
        puVar16 = (undefined1 *)(param_1 + 0x226);
        uVar9 = (*pcVar7)();
        (*extraout_w11_11)(uVar9,*puVar16);
        uVar9 = (*pcVar7)();
        (*extraout_w11_12)(uVar9,0);
        uVar9 = (*pcVar7)();
        iVar10 = (*extraout_w11_13)(uVar9);
        (*pcVar7)(iVar10,*(undefined1 *)(iVar10 + 0x7e9));
        (*extraout_w11_14)(*piVar2);
        puVar16 = (undefined1 *)(*piVar5 + 0x134);
        uVar9 = (*pcVar7)();
        (*extraout_w11_15)(uVar9,*puVar16);
        iVar10 = FUN_10081e90(iVar11,&DAT_1009c480,0x10);
        if ((iVar10 == 0) || (iVar10 = FUN_10081e90(iVar11,&DAT_1009c490,0x10), iVar10 == 0)) {
          uVar9 = 7;
          if (*(int *)(*piVar5 + 0x30) != 1) {
            uVar9 = 2;
          }
          FUN_100520b0(param_1,0x15,uVar9);
        }
        *(undefined8 *)(param_1 + 0x1f0) = 0xfff00000000;
        *(undefined4 *)(param_1 + 0x1f8) = 0x45000000;
        *(undefined4 *)(param_1 + 0x1fc) = 0;
        *(undefined4 *)(param_1 + 0x200) = 0x45000000;
        *(undefined8 *)(param_1 + 0x204) = 0;
        *(undefined4 *)(param_1 + 0x20c) = 0;
        *(undefined2 *)(param_1 + 0x1754) = 0x101;
        *(undefined1 *)(param_1 + 0xa85) = 0;
        puVar16 = (undefined1 *)(*piVar5 + 0x20);
        uVar9 = (*pcVar7)();
        (*extraout_w11_16)(uVar9,*puVar16);
        iVar10 = *(int *)(param_1 + 0x18);
        if (iVar10 == 0) {
LAB_100535f0:
          iVar10 = 0;
          FUN_1004b960(param_1);
          *(char *)piVar1 = '\x01';
          goto LAB_100535c8;
        }
        iVar10 = FUN_100513a0(param_1,iVar10,*(undefined4 *)(param_1 + 0x28));
        if (-1 < iVar10) {
          cVar8 = FUN_100051f0(param_1,*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),1,1)
          ;
          iVar10 = -0x7fffbffb;
          if (cVar8 != '\0') goto LAB_100535f0;
        }
        uVar9 = (*pcVar7)();
        (*extraout_w11_17)(uVar9);
      }
      uVar9 = (*pcVar7)();
      (*extraout_w11_18)(uVar9);
      *piVar2 = 0;
    }
    piVar1 = local_78;
    FUN_10081dc0(*local_78);
    *piVar1 = 0;
  }
  FUN_10081dd0(*(undefined4 *)(*piVar4 + -4));
  *piVar4 = 0;
LAB_100535c8:
  FUN_10096790(auStack_68);
  return iVar10;
}

