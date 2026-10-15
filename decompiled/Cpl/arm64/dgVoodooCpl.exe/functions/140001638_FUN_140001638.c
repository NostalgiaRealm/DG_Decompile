/*
 * FUN_140001638 at 140001638
 * ulonglong __cdecl FUN_140001638(longlong * param_1, undefined4 param_2, uint param_3, uint param_4, byte param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140001638-140001b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140001638(longlong *param_1,undefined4 param_2,uint param_3,uint param_4,byte param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  SIZE_T SVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 local_1b0;
  ulonglong uStack_1a8;
  uint local_1a0;
  longlong *local_190;
  longlong *local_188;
  CHAR local_180 [32];
  longlong *local_160;
  char *apcStack_158 [8];
  longlong *local_118;
  char *apcStack_110 [8];
  CHAR aCStack_d0 [128];
  
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  FUN_140010038(param_1[1],(int)param_1[2]);
  uVar6 = FUN_14000fe68(param_1[1],(int)param_1[2],param_1[5],-1);
  if ((char)param_1[6] != '\0') {
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265dc,-0xe);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265e0,-0xf);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265e4,-0x10);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265e8,-8);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265f0,-9);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x1400265f8,-10);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x140026600,-0xb);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x140026610,-0xc);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x140026618,-0xd);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x140026624,-0x12);
    FUN_14000fe68(param_1[1],(int)param_1[2],0x140026630,-0x13);
    uVar6 = FUN_14000fe68(param_1[1],(int)param_1[2],0x140026640,-0x11);
  }
  uVar9 = (ulonglong)uVar6;
  iVar3 = *(int *)(*param_1 + 600);
  if (iVar3 != -1) {
    plVar8 = *(longlong **)(*param_1 + (longlong)iVar3 * 8 + 0x210);
    uVar6 = (**(code **)(*plVar8 + 0x60))(plVar8,param_2,param_3,param_4);
    uVar9 = thunk_FUN_140024830((LPVOID)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    if (uVar6 != 0) {
      local_188 = param_1 + 0x17;
      local_190 = param_1 + 7;
      uVar19 = 0;
      do {
        local_1b0 = 0;
        uStack_1a8 = 0;
        puVar10 = &local_1b0;
        local_1a0 = 0;
        uVar18 = (ulonglong)param_4;
        uVar12 = (ulonglong)param_3;
        plVar8 = *(longlong **)(*param_1 + (longlong)*(int *)(*param_1 + 600) * 8 + 0x210);
        uVar13 = uVar19;
        uVar9 = (**(code **)(*plVar8 + 0x68))(plVar8,param_2);
        if ((uVar9 & 0xff) != 0) {
          uVar5 = (uint)local_1b0;
          uVar7 = local_1b0._4_4_;
          if (*(uint *)(param_1 + 4) != 0) {
            lVar16 = param_1[3];
            uVar14 = 0;
            do {
              if ((((uint)local_1b0 == *(uint *)(lVar16 + uVar14 * 0x14)) &&
                  (local_1b0._4_4_ == *(uint *)(lVar16 + 4 + uVar14 * 0x14))) &&
                 (((param_5 & 1) == 0 || (local_1a0 == *(uint *)(lVar16 + 0x10 + uVar14 * 0x14)))))
              goto LAB_140001b24;
              uVar1 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar1;
            } while (uVar1 < *(uint *)(param_1 + 4));
          }
          uVar1 = local_1a0;
          if (param_5 == 0) {
            uVar1 = 0;
          }
          if ((((uint)local_1b0 < 0xfffffff8) ||
              (((uint)local_1b0 != local_1b0._4_4_ || (uint)local_1b0 == 0xfffffff9) &&
               0xff < local_1b0._4_4_)) || ((char)param_1[6] == '\0')) {
            if ((uint)local_1b0 == 0 && local_1b0._4_4_ == 0) {
              plVar8 = local_188;
              uVar7 = uVar1;
              if (uVar1 != 0) goto LAB_140001a2c;
              FUN_140024880(aCStack_d0,(LPCSTR)local_190,uVar12,uVar18,uVar13,puVar10,param_7,
                            param_8);
            }
            else {
              uVar18 = (ulonglong)local_1b0._4_4_;
              uVar9 = local_1b0 & 0xffffffff;
              if (uVar1 == 0) {
                pcVar11 = "%ux%u";
                goto LAB_140001a48;
              }
              FUN_140024880(aCStack_d0,"%ux%u, %uHz",uVar9,uVar18,(ulonglong)uVar1,puVar10,param_7,
                            param_8);
            }
          }
          else {
            apcStack_110[1] = "Max ISF%s, %uHz";
            apcStack_110[2] = "Max FHD%s, %uHz";
            local_118 = local_188;
            apcStack_110[0] = "Max%s, %uHz";
            apcStack_110[3] = "Max FHD ISF%s, %uHz";
            apcStack_110[4] = "Max QHD%s, %uHz";
            local_180[8] = '\0';
            local_180[9] = '\0';
            local_180[10] = '\0';
            local_180[0xb] = '\0';
            local_180[0xc] = '\0';
            local_180[0xd] = '\0';
            local_180[0xe] = '\0';
            local_180[0xf] = '\0';
            local_180[0] = '\0';
            local_180[1] = '\0';
            local_180[2] = '\0';
            local_180[3] = '\0';
            local_180[4] = '\0';
            local_180[5] = '\0';
            local_180[6] = '\0';
            local_180[7] = '\0';
            local_180[0x18] = '\0';
            local_180[0x19] = '\0';
            local_180[0x1a] = '\0';
            local_180[0x1b] = '\0';
            local_180[0x1c] = '\0';
            local_180[0x1d] = '\0';
            local_180[0x1e] = '\0';
            local_180[0x1f] = '\0';
            local_180[0x10] = '\0';
            local_180[0x11] = '\0';
            local_180[0x12] = '\0';
            local_180[0x13] = '\0';
            local_180[0x14] = '\0';
            local_180[0x15] = '\0';
            local_180[0x16] = '\0';
            local_180[0x17] = '\0';
            apcStack_110[5] = "Max QHD ISF%s, %uHz";
            apcStack_110[6] = "%ux, %uHz";
            apcStack_110[7] = "Desktop%s, %uHz";
            local_160 = local_190;
            apcStack_158[0] = "Max%s";
            apcStack_158[1] = "Max ISF%s";
            apcStack_158[2] = "Max FHD%s";
            apcStack_158[3] = "Max FHD ISF%s";
            apcStack_158[4] = "Max QHD%s";
            apcStack_158[5] = "Max QHD ISF%s";
            apcStack_158[6] = "%ux";
            apcStack_158[7] = "Desktop%s";
            if (local_1b0._4_4_ - 2 < 0xfe) {
              FUN_140024880(local_180," %ux",(ulonglong)local_1b0._4_4_,uVar18,uVar13,puVar10,
                            param_7,param_8);
            }
            if (uVar1 == 0) {
              plVar8 = (longlong *)apcStack_158[(longlong)(int)-uVar5 + -1];
              if (uVar5 == 0xfffffff9) {
LAB_140001a2c:
                FUN_140024880(aCStack_d0,(LPCSTR)plVar8,(ulonglong)uVar7,uVar18,uVar13,puVar10,
                              param_7,param_8);
              }
              else {
                FUN_140024880(aCStack_d0,(LPCSTR)plVar8,local_180,uVar18,uVar13,puVar10,param_7,
                              param_8);
              }
            }
            else {
              pcVar11 = apcStack_110[(longlong)(int)-uVar5 + -1];
              uVar18 = (ulonglong)uVar1;
              if (uVar5 == 0xfffffff9) {
                uVar9 = (ulonglong)uVar7;
LAB_140001a48:
                FUN_140024880(aCStack_d0,pcVar11,uVar9,uVar18,uVar13,puVar10,param_7,param_8);
              }
              else {
                FUN_140024880(aCStack_d0,pcVar11,local_180,uVar18,uVar13,puVar10,param_7,param_8);
              }
            }
          }
          uVar7 = FUN_14000fe68(param_1[1],(int)param_1[2],(LPARAM)aCStack_d0,
                                (ulonglong)*(uint *)(param_1 + 4));
          uVar9 = (ulonglong)uVar7;
          iVar3 = *(int *)((longlong)param_1 + 0x24);
          if ((int)param_1[4] == iVar3) {
            uVar7 = iVar3 << 1;
            if (iVar3 == 0) {
              uVar7 = 0x10;
            }
            uVar18 = CONCAT44(0,uVar7);
            SVar17 = uVar18 * 0x14;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar18;
            if (SUB168(auVar4 * ZEXT816(0x14),8) != 0) {
              SVar17 = 0xffffffffffffffff;
            }
            puVar10 = (undefined8 *)thunk_FUN_1400247f0(SVar17);
            uVar9 = 0;
            if (puVar10 == (undefined8 *)0x0) goto LAB_140001b24;
            puVar15 = puVar10;
            if (uVar7 != 0) {
              do {
                *puVar15 = 0;
                puVar15[1] = 0;
                uVar18 = uVar18 - 1;
                *(undefined4 *)(puVar15 + 2) = 0;
                puVar15 = (undefined8 *)((longlong)puVar15 + 0x14);
              } while (uVar18 != 0);
            }
            thunk_FUN_140001000(puVar10,(undefined8 *)param_1[3],
                                (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x14);
            uVar9 = thunk_FUN_140024830((LPVOID)param_1[3]);
            param_1[3] = (longlong)puVar10;
            *(uint *)((longlong)param_1 + 0x24) = uVar7;
          }
          puVar2 = (ulonglong *)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x14);
          puVar2[1] = uStack_1a8;
          *puVar2 = local_1b0;
          *(uint *)(puVar2 + 2) = local_1a0;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        }
LAB_140001b24:
        uVar7 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar7;
      } while (uVar7 < uVar6);
    }
  }
  return uVar9;
}

