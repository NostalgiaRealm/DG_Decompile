/*
 * FUN_1000e410 at 1000e410
 * undefined FUN_1000e410(void)
 * Address ranges: 1000e410-1000e88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000e410(int param_1,int param_2,char param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char local_140 [4];
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  code *local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 auStack_ec [52];
  int local_b8;
  undefined1 auStack_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  
  iVar6 = param_1 + 0x5000;
  if (*(char *)(param_1 + 0x58c0) != '\0') {
    return 0;
  }
  if (param_2 == 0) {
    return -0x7789f794;
  }
  FUN_10019690(local_140);
  *(char *)(param_1 + 0x58c0) = '\x01';
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(char *)(param_1 + 0x58bd) == '\0') || (*(char *)(param_1 + 0x58be) != '\0')) {
    iVar8 = 0;
    if (param_3 != '\0') {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar5 = (*extraout_w11)(param_1);
      iVar8 = 0;
      if (cVar5 != '\0') {
        iVar8 = -0x7789f798;
      }
    }
    if (-1 < iVar8) {
      local_128 = pcVar2;
      local_140[0] = '\x01';
      local_138 = 0;
      local_130 = 0;
      local_120 = 0;
      uVar15 = 1;
      local_118 = 0;
      iVar8 = -0x7fffbffb;
      bVar1 = false;
      local_13c = iVar6;
      do {
        pcVar2 = local_128;
        iVar6 = local_13c;
        cVar5 = local_140[0];
        puVar14 = (undefined4 *)(param_1 + 0xad0);
        if (bVar1) {
          (*local_128)();
          (*extraout_w11_00)(param_1);
          FUN_1000a660(param_1);
          puVar4 = (undefined8 *)local_120;
          uVar11 = local_120 & 0xffffffff;
          if (uVar15 == 0) {
            FUN_10006940(param_1,1);
            uVar16 = local_138 & 0xffffffff;
            iVar10 = FUN_10006820(param_1,local_138._4_4_,uVar16);
            if (iVar10 < 0) goto LAB_1000e604;
          }
          else {
            puVar13 = (undefined4 *)*puVar14;
            (*pcVar2)();
            (*extraout_w11_01)(param_1,*puVar13);
            puVar3 = (undefined4 *)local_138;
            uVar16 = local_138 & 0xffffffff;
            puVar13 = (undefined4 *)local_138 + 7;
            iVar8 = (*(code *)PTR_FUN_1013420c)(*puVar13);
            if (iVar8 != 0) {
              (*(code *)PTR_FUN_1013428c)(*puVar13,1);
            }
            if ((*(char *)((int)puVar4 + 0x6d) == '\0') &&
               ((*(char *)(DAT_1013ceec + 0x7e5) != '\0' ||
                (*(char *)(DAT_1013ceec + 0x784) == '\0')))) {
              FUN_1001a780(*(undefined4 *)*puVar14);
              uStack_108 = *(undefined8 *)((int)puVar4 + 0xc);
              local_110 = *(undefined8 *)((int)puVar4 + 4);
              local_100 = *(undefined8 *)((int)puVar4 + 0x14);
              local_f8 = *(undefined4 *)((int)puVar4 + 0x44);
              FUN_10004370(*(undefined4 *)(param_1 + 0xacc),*puVar3,&local_110,(int)puVar4 + 0x1c);
            }
            uVar9 = FUN_10004550(*(undefined4 *)(param_1 + 0xacc),*(undefined4 *)(param_1 + 0xb2c));
            *(undefined4 *)(param_1 + 0xb1c) = uVar9;
            puVar12 = puVar4 + 1;
            puVar13 = (undefined4 *)((int)puVar4 + 4);
            (*pcVar2)();
            (*extraout_w11_02)(param_1,*puVar13,*(undefined4 *)puVar12);
            if (*(int *)(param_1 + 0xb04) == 1) {
              uVar9 = FUN_1001a7d0(uVar11);
            }
            else {
              uVar9 = 0;
            }
            uVar19 = *puVar4;
            uVar18 = puVar4[3];
            uVar17 = puVar4[2];
            iVar8 = *(int *)*puVar14;
            *(undefined8 *)(iVar8 + 0x50) = puVar4[1];
            *(undefined8 *)(iVar8 + 0x48) = uVar19;
            *(undefined8 *)(iVar8 + 0x60) = uVar18;
            *(undefined8 *)(iVar8 + 0x58) = uVar17;
            uVar19 = puVar4[4];
            uVar18 = puVar4[7];
            uVar17 = puVar4[6];
            *(undefined8 *)(iVar8 + 0x70) = puVar4[5];
            *(undefined8 *)(iVar8 + 0x68) = uVar19;
            *(undefined8 *)(iVar8 + 0x80) = uVar18;
            *(undefined8 *)(iVar8 + 0x78) = uVar17;
            uVar19 = puVar4[8];
            uVar18 = puVar4[0xb];
            uVar17 = puVar4[10];
            *(undefined8 *)(iVar8 + 0x90) = puVar4[9];
            *(undefined8 *)(iVar8 + 0x88) = uVar19;
            *(undefined8 *)(iVar8 + 0xa0) = uVar18;
            *(undefined8 *)(iVar8 + 0x98) = uVar17;
            uVar17 = puVar4[0xc];
            *(undefined8 *)(iVar8 + 0xb0) = puVar4[0xd];
            *(undefined8 *)(iVar8 + 0xa8) = uVar17;
            *(undefined4 *)(iVar8 + 0xcc) = uVar9;
            *(undefined1 *)(iVar8 + 0xd4) = 0;
          }
          *(undefined1 *)(iVar6 + 0x8bd) = 0;
          iVar8 = 0;
          (*pcVar2)();
          (*extraout_w11_03)(param_1);
          *(undefined1 *)(param_1 + 0xa01) = 0;
          cVar5 = '\0';
          goto LAB_1000e604;
        }
        local_b8 = **(int **)(param_1 + 0xad0);
        local_f0 = *(undefined4 *)(local_b8 + 0xa4);
        iVar6 = FUN_10006e30(param_1,param_2,auStack_ec,*(undefined4 *)(param_1 + 0xb08),0);
        if (-1 < iVar6) {
          local_ac = 0;
          local_a4 = 0;
          local_9c = 0;
          iVar6 = FUN_10006eb0(param_1,local_f0,auStack_ec,1,auStack_b0,0xffffffff);
          uVar7 = FUN_1001a570(**(undefined4 **)(param_1 + 0xad0),auStack_b0);
          uVar15 = uVar7 & 0xff & uVar15;
          if (-1 < iVar6) {
            uVar11 = FUN_1000e9a0(&local_120,auStack_b0);
            if ((uVar11 & 1) == 0) {
              uVar16 = local_138 & 0xffffffff;
              uVar11 = local_120 & 0xffffffff;
              iVar6 = local_13c;
              cVar5 = local_140[0];
              goto LAB_1000e604;
            }
            cVar5 = FUN_1000e8a0(&local_138,&local_f0);
            if (cVar5 == '\0') {
              iVar6 = iVar8;
            }
          }
        }
        bVar1 = true;
      } while (-1 < iVar6);
      uVar16 = local_138 & 0xffffffff;
      uVar11 = local_120 & 0xffffffff;
      iVar8 = iVar6;
      iVar6 = local_13c;
      cVar5 = local_140[0];
LAB_1000e604:
      FUN_100fed00(uVar11);
      FUN_100fed00(uVar16);
      if (cVar5 == '\0') goto LAB_1000e638;
    }
    if (*(char *)(iVar6 + 0x8bd) == '\0') {
      FUN_1000cf40(param_1);
      *(undefined1 *)(param_1 + 0x58be) = 1;
    }
  }
  else {
    iVar8 = -0x7789f798;
  }
LAB_1000e638:
  *(undefined1 *)(param_1 + 0x58c0) = 0;
  FUN_10019760(local_140);
  return iVar8;
}

