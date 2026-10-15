/*
 * FUN_10027eb0 at 10027eb0
 * byte __fastcall FUN_10027eb0(int param_1)
 * Address ranges: 10027eb0-1002a3d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10029f9e) */

byte __fastcall FUN_10027eb0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  int iVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  longlong lVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  _RTL_CRITICAL_SECTION *p_Var12;
  _LIST_ENTRY *p_Var13;
  DWORD DVar14;
  DWORD DVar15;
  DWORD DVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  WORD WVar20;
  char cVar21;
  PRTL_CRITICAL_SECTION_DEBUG p_Var22;
  PRTL_CRITICAL_SECTION_DEBUG p_Var23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  SIZE_T SVar31;
  int *piVar32;
  LPCRITICAL_SECTION p_Var33;
  int *piVar34;
  undefined4 uVar35;
  uint *puVar36;
  int iVar37;
  byte bVar38;
  PRTL_CRITICAL_SECTION_DEBUG p_Var39;
  undefined4 *puVar40;
  uint *puVar41;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar42;
  uint uVar43;
  PRTL_CRITICAL_SECTION_DEBUG p_Var44;
  undefined1 *puVar45;
  LPCRITICAL_SECTION p_Var46;
  uint uVar47;
  _LIST_ENTRY *p_Var48;
  undefined4 *puVar49;
  bool bVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auStack_b8 [4];
  _LIST_ENTRY *p_Stack_b4;
  byte bStack_ad;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_ac;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_a8;
  PRTL_CRITICAL_SECTION_DEBUG local_a4;
  LPCRITICAL_SECTION p_Stack_a0;
  PRTL_CRITICAL_SECTION_DEBUG local_9c;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_98;
  byte bStack_91;
  PRTL_CRITICAL_SECTION_DEBUG local_90;
  byte local_8a;
  byte bStack_89;
  PRTL_CRITICAL_SECTION_DEBUG local_88;
  _LIST_ENTRY *local_84;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  _LIST_ENTRY *p_Stack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_8a = 1;
  local_80 = param_1;
  local_78 = local_78 & 0xffffffff00000000;
  local_90 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (*(uint *)(param_1 + 0x638) != 0) {
    for (; (*(uint *)(param_1 + 0x638) >> (int)local_90 & 1) == 0;
        local_90 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_90->Type + 1)) {
    }
  }
  if (*(char *)(param_1 + 0x5955) == '\0') {
    local_84 = *(_LIST_ENTRY **)(param_1 + 0xd970);
    uVar43 = 0;
    bVar50 = local_84 == (_LIST_ENTRY *)0x0;
    if (!bVar50) {
      for (; ((uint)local_84 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
      }
    }
    while (!bVar50) {
      uVar42 = uVar43 & 0xff;
      pbVar9 = (byte *)((int)&local_84 + ((int)uVar43 >> 3));
      *pbVar9 = *pbVar9 & ~('\x01' << (uVar43 & 7));
      iVar25 = *(int *)(param_1 + 0xd9b8);
      local_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar25 + 0x13c);
      local_88 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar25 + 0x140);
      piVar32 = *(int **)(param_1 + 0xdb08 + uVar42 * 4);
      local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar25 + 0x144);
      if (piVar32 == (int *)0x0) {
        iVar29 = *(int *)(param_1 + 0xdb28 + uVar42 * 4);
        p_Var22 = local_a4;
        p_Var23 = local_88;
        p_Var39 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar25 + 0x144);
        if (iVar29 != 0) {
          p_Var39 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar29 + 0x38);
        }
      }
      else if (((piVar32 != *(int **)(param_1 + 0xdacc)) && (piVar32 != *(int **)(param_1 + 0xdadc))
               ) || (cVar21 = (**(code **)(*piVar32 + 0x80))(), p_Var22 = local_a4,
                    p_Var23 = local_88, p_Var39 = local_9c, cVar21 != '\0')) {
        piVar32 = *(int **)(param_1 + 0xdb08 + uVar42 * 4);
        if ((piVar32[0xd] == 2) || (piVar32[0xd] == 5)) {
          p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar32 + 0x60))();
          p_Var22 = local_a4;
          p_Var39 = local_9c;
        }
        else {
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar32 + 0x60))();
          p_Var23 = local_88;
          p_Var39 = local_9c;
        }
      }
      if (uVar42 < 8) {
        *(undefined4 *)(param_1 + 0xda48 + uVar42 * 4) = 0;
      }
      *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xda68 + uVar42 * 4) = p_Var22;
      uVar43 = 0;
      bVar50 = local_84 == (_LIST_ENTRY *)0x0;
      if (!bVar50) {
        for (; ((uint)local_84 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
        }
      }
      *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xda88 + uVar42 * 4) = p_Var23;
      *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xdaa8 + uVar42 * 4) = p_Var39;
    }
    *(undefined4 *)(param_1 + 0xd970) = 0;
  }
  iVar25 = *(int *)(param_1 + 0xd9b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar25 + 0x4a0));
  iStack_7c = *(int *)(iVar25 + 0x49c);
  *(int *)(iVar25 + 0x49c) = param_1;
  uStack_54 = 1;
  if ((*(char *)(param_1 + 0xd978) != '\0') || (bStack_ad = 1, iStack_7c != param_1)) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      if (*(int *)(param_1 + 0xda2c) == 0) {
        if ((*(int *)(param_1 + 0x5944) == 0) ||
           (bStack_ad = '\x01', *(int *)(param_1 + 0xdbe4) != 0)) {
          bStack_ad = '\0';
        }
        puVar36 = (uint *)(param_1 + 0x5884);
        uVar43 = *(uint *)(param_1 + 0x6a0);
        bStack_89 = *(byte *)(param_1 + 0x5961);
        uVar47 = (1 << ((byte)local_90 & 0x1f)) - 1;
        bStack_91 = *(byte *)(param_1 + 0x5951);
        uVar42 = *(uint *)(param_1 + 0x6a4);
        if ((*(uint *)(param_1 + 0x5880) & uVar47) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar26 = local_78._4_4_;
          param_1 = local_80;
        }
        else {
          uVar26 = uVar42 & 0x10;
        }
        if ((*puVar36 & uVar47) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar47 = local_78._4_4_;
        }
        else {
          uVar47 = uVar42 & 0x20;
        }
        if (bStack_91 == 0) {
          uVar24 = 0x38000000;
        }
        else {
          uVar24 = uVar43 & 0x38000000;
        }
        if (bStack_ad == '\0') {
          local_78 = 0;
          local_78._0_4_ = 0;
          uVar27 = (uint)local_78;
        }
        else {
          uVar27 = uVar43 & 0x80000000;
        }
        if (bStack_89 == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar28 = local_78._4_4_;
        }
        else {
          uVar28 = uVar42 & 8;
        }
        uVar19 = uVar42 & 0xffffffc7;
        if ((uVar42 & 1) == 0) {
          uVar19 = uVar42 & 0xffffffc1;
        }
        piVar34 = (int *)(param_1 + 0xd9b8);
        piVar32 = (int *)(param_1 + 0xd9b8);
        if ((*(int *)(param_1 + 0xdb80) == *(int *)(*piVar34 + 0xe8)) ||
           (piVar1 = (int *)(param_1 + 0xdb80), p_Stack_b4 = (_LIST_ENTRY *)0x0, param_1 = local_80,
           *piVar1 == *(int *)(*piVar34 + 0x108))) {
          p_Stack_b4 = (_LIST_ENTRY *)0x1;
        }
        iVar25 = FUN_1002ded9((void *)(param_1 + 0xd9dc),(undefined4 *)(param_1 + 0x5e0),
                              uVar43 & 0x47ffffff | uVar24 | uVar27,
                              uVar19 | uVar26 | uVar47 | uVar28,(undefined4 *)local_90,
                              (uint)p_Stack_b4,(uint)*(byte *)(param_1 + 0x83));
        bStack_ad = local_8a;
        if (iVar25 == 0) {
          if (*(char *)(param_1 + 0x5955) != '\0') goto LAB_10028385;
          iVar25 = *piVar32;
          p_Var22 = local_90;
          if ((PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004 < local_90) {
            p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004;
          }
          if ((*(int *)(param_1 + 0xdb80) == *(int *)(iVar25 + 0xe8)) ||
             (bVar50 = false, *(int *)(param_1 + 0xdb80) == *(int *)(iVar25 + 0x108))) {
            bVar50 = true;
          }
          if (*(char *)(param_1 + 0x5953) == '\0') {
            iVar29 = 0;
            if (bVar50) {
              iVar29 = 10;
            }
          }
          else {
            iVar29 = 5;
          }
          iVar25 = *(int *)(iVar25 + 0x8c +
                           (*(int *)(&DAT_100b1e1c + (int)p_Var22 * 4) + iVar29) * 4);
        }
      }
      else {
        if ((*(int *)(param_1 + 0x5944) == 0) ||
           (bStack_ad = '\x01', *(int *)(param_1 + 0xdbe4) != 0)) {
          bStack_ad = '\0';
        }
        bStack_91 = *(byte *)(param_1 + 0x5961);
        puVar36 = (uint *)(param_1 + 0x5884);
        uVar43 = *(uint *)(param_1 + 0x6a0);
        uVar42 = *(uint *)(*(int *)(*(int *)(param_1 + 0xda2c) + 4) + 0xcc);
        local_8a = *(byte *)(param_1 + 0x5951);
        uVar47 = *(uint *)(param_1 + 0x6a4);
        if ((*(uint *)(param_1 + 0x5880) & uVar42) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar26 = local_78._4_4_;
          param_1 = local_80;
        }
        else {
          uVar26 = uVar47 & 0x10;
        }
        p_Stack_b4 = (_LIST_ENTRY *)0x0;
        if ((*puVar36 & uVar42) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar42 = local_78._4_4_;
        }
        else {
          uVar42 = uVar47 & 0x20;
        }
        if (local_8a == 0) {
          uVar24 = 0x38000000;
        }
        else {
          uVar24 = uVar43 & 0x38000000;
        }
        if (bStack_ad == '\0') {
          local_78 = 0;
          local_78._0_4_ = 0;
          uVar27 = (uint)local_78;
        }
        else {
          uVar27 = uVar43 & 0x80000000;
        }
        if (bStack_91 == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar28 = local_78._4_4_;
        }
        else {
          uVar28 = uVar47 & 8;
        }
        uVar19 = uVar47 & 0xffffffc7;
        if ((uVar47 & 1) == 0) {
          uVar19 = uVar47 & 0xffffffc1;
        }
        iVar25 = FUN_1002daf0((void *)(*(int *)(param_1 + 0xda2c) + 8),
                              uVar43 & 0x43ffffff | uVar24 | uVar27,
                              uVar19 | uVar26 | uVar42 | uVar28,*(uint *)(param_1 + 0x568),
                              *(uint *)(param_1 + 0x56c));
        bStack_ad = iVar25 != 0;
      }
    }
    else {
      piVar32 = (int *)(param_1 + 0xd9b8);
LAB_10028385:
      iVar25 = *(int *)(*piVar32 + 200 + (uint)(*(int *)(param_1 + 0xdac8) != 0) * 4);
      bStack_ad = local_8a;
    }
    *(undefined1 *)(param_1 + 0xd978) = 0;
    if (*(int *)(param_1 + 0xdb84) != iVar25) {
      *(int *)(param_1 + 0xdb84) = iVar25;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
  }
  if ((*(byte *)(param_1 + 0xd984) & 1) != 0) {
    FUN_100214ed((float *)(param_1 + 0x5964),(undefined4 *)(param_1 + 0x9964),'\x01');
    puVar40 = (undefined4 *)(param_1 + 0x9964);
    puVar49 = (undefined4 *)(param_1 + 0x4dd0);
    for (iVar25 = 0x10; iVar25 != 0; iVar25 = iVar25 + -1) {
      *puVar49 = *puVar40;
      puVar40 = puVar40 + 1;
      puVar49 = puVar49 + 1;
    }
    *(uint *)(local_80 + 0xd984) = *(uint *)(local_80 + 0xd984) & 0xfffffffe;
    param_1 = local_80;
  }
  if (*(char *)(param_1 + 0xd981) != '\0') {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xd9c4);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    iVar29 = (**(code **)(*piVar32 + 0x38))(piVar32,p_Stack_b4,0,4);
    iVar25 = local_80;
    if (-1 < iVar29) {
      puVar40 = (undefined4 *)(param_1 + 0x4ca0);
      p_Var48 = p_Stack_64;
      for (iVar29 = 0x2f0; iVar29 != 0; iVar29 = iVar29 + -1) {
        p_Var48->Flink = (_LIST_ENTRY *)*puVar40;
        puVar40 = puVar40 + 1;
        p_Var48 = (_LIST_ENTRY *)&p_Var48->Blink;
      }
      piVar32 = *(int **)(*(int *)(local_80 + 0xd9b4) + 4);
      (**(code **)(*piVar32 + 0x3c))(piVar32);
      param_1 = iVar25;
    }
    *(undefined1 *)(param_1 + 0xd981) = 0;
  }
  if (((*(uint *)(param_1 + 0x4cb0) & 0xf800) != 0) && (*(char *)(param_1 + 0xd982) != '\0')) {
    uVar43 = 0;
    do {
      puVar36 = (uint *)(param_1 + 0xd984 + uVar43 * 4);
      uVar42 = 0;
      bVar50 = *puVar36 != 0;
      if (bVar50) {
        for (; (*puVar36 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
        }
      }
      if (bVar50) {
        pbVar9 = (byte *)(param_1 + 0xd984 + uVar43 * 4 + ((int)uVar42 >> 3));
        *pbVar9 = *pbVar9 & ~('\x01' << (uVar42 & 7));
        p_Stack_b4 = (_LIST_ENTRY *)(uVar43 << 5);
        while (puVar45 = (undefined1 *)((int)&p_Stack_b4->Flink + (uVar42 & 0xff)),
              (int)puVar45 < 0x100) {
          iVar25 = (int)puVar45 * 0x40;
          FUN_100214ed((float *)(iVar25 + 0x5964 + param_1),
                       (undefined4 *)(iVar25 + 0x9964 + param_1),'\x01');
          puVar36 = (uint *)(param_1 + 0xd984 + uVar43 * 4);
          uVar42 = 0;
          bVar50 = *puVar36 == 0;
          if (!bVar50) {
            for (; (*puVar36 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
            }
          }
          if (bVar50) break;
          pbVar9 = (byte *)(param_1 + 0xd984 + uVar43 * 4 + ((int)uVar42 >> 3));
          *pbVar9 = *pbVar9 & ~('\x01' << (uVar42 & 7));
        }
      }
      uVar43 = uVar43 + 1;
    } while (uVar43 < 8);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0xc0))(piVar32,*(undefined4 *)(param_1 + 0xd9cc),0,0,param_1 + 0x5964);
    *(undefined1 *)(param_1 + 0xd982) = 0;
  }
  if (*(char *)(param_1 + 0xd9a8) != '\0') {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xda40);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    iVar29 = (**(code **)(*piVar32 + 0x38))(piVar32,p_Stack_b4,0,4);
    iVar25 = local_80;
    if (-1 < iVar29) {
      puVar40 = (undefined4 *)(param_1 + 0x4860);
      p_Var48 = p_Stack_64;
      for (iVar29 = 0x110; iVar29 != 0; iVar29 = iVar29 + -1) {
        p_Var48->Flink = (_LIST_ENTRY *)*puVar40;
        puVar40 = puVar40 + 1;
        p_Var48 = (_LIST_ENTRY *)&p_Var48->Blink;
      }
      piVar32 = *(int **)(*(int *)(local_80 + 0xd9b4) + 4);
      (**(code **)(*piVar32 + 0x3c))(piVar32);
      param_1 = iVar25;
    }
    *(undefined1 *)(param_1 + 0xd9a8) = 0;
  }
  if (*(char *)(param_1 + 0xd9a6) != '\0') {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xda38);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    iVar29 = (**(code **)(*piVar32 + 0x38))(piVar32,p_Stack_b4,0,4);
    iVar25 = local_80;
    if (-1 < iVar29) {
      puVar40 = (undefined4 *)(param_1 + 0x47d0);
      p_Var48 = p_Stack_64;
      for (iVar29 = 0x20; iVar29 != 0; iVar29 = iVar29 + -1) {
        p_Var48->Flink = (_LIST_ENTRY *)*puVar40;
        puVar40 = puVar40 + 1;
        p_Var48 = (_LIST_ENTRY *)&p_Var48->Blink;
      }
      piVar32 = *(int **)(*(int *)(local_80 + 0xd9b4) + 4);
      (**(code **)(*piVar32 + 0x3c))(piVar32);
      param_1 = iVar25;
    }
    *(undefined1 *)(param_1 + 0xd9a6) = 0;
  }
  if (*(char *)(param_1 + 0xd9a4) != '\0') {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xda30);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    iVar29 = (**(code **)(*piVar32 + 0x38))(piVar32,p_Stack_b4,0,4);
    iVar25 = local_80;
    if (-1 < iVar29) {
      puVar40 = (undefined4 *)(param_1 + 0x4730);
      p_Var48 = p_Stack_64;
      for (iVar29 = 0x28; iVar29 != 0; iVar29 = iVar29 + -1) {
        p_Var48->Flink = (_LIST_ENTRY *)*puVar40;
        puVar40 = puVar40 + 1;
        p_Var48 = (_LIST_ENTRY *)&p_Var48->Blink;
      }
      piVar32 = *(int **)(*(int *)(local_80 + 0xd9b4) + 4);
      (**(code **)(*piVar32 + 0x3c))(piVar32);
      param_1 = iVar25;
    }
    *(undefined1 *)(param_1 + 0xd9a4) = 0;
  }
  if (*(char *)(param_1 + 0xd9a5) != '\0') {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0x7c);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    iVar25 = (**(code **)(*piVar32 + 0x38))(piVar32,*(undefined4 *)(param_1 + 0xda34),0,4);
    if (-1 < iVar25) {
      FUN_100adac0(&p_Stack_64->Flink,(undefined4 *)(param_1 + 0x730),(uint)p_Stack_b4);
      piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
      (**(code **)(*piVar32 + 0x3c))(piVar32);
    }
    *(undefined1 *)(param_1 + 0xd9a5) = 0;
  }
  if (iStack_7c != param_1) {
    local_78 = *(ulonglong *)(param_1 + 0xda30);
    p_Stack_64 = *(_LIST_ENTRY **)(param_1 + 0xda40);
    iStack_60 = *(int *)(param_1 + 0xda38);
    uStack_5c = *(int *)(param_1 + 0xda3c);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x1c))(piVar32,3);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x40))(piVar32,3,3,(int)&local_78 + 4);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x58))(piVar32,3,2,&p_Stack_98);
    p_Stack_a8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xd9c4);
    local_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xd9c8);
    p_Stack_a0 = *(LPCRITICAL_SECTION *)(param_1 + 0xd9cc);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x1c))(piVar32,0,3,&p_Stack_a8);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x40))(piVar32,0,2,auStack_b8);
    piVar32 = *(int **)(*(int *)(param_1 + 0xd9b4) + 4);
    (**(code **)(*piVar32 + 0x58))(piVar32,0,3,&stack0xffffff38);
  }
  if ((*(char *)(param_1 + 0xd97a) != '\0') || (iStack_7c != param_1)) {
    iVar29 = *(int *)(param_1 + 0x10) * 0x1510;
    iVar25 = *(int *)(param_1 + 0xd9b0);
    p_Stack_64 = (_LIST_ENTRY *)0x0;
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    cVar21 = *(int *)(iVar29 + 0x7fc + iVar25) != 0;
    if ((bool)cVar21) {
      *(undefined4 *)(iVar29 + 0x7fc + iVar25) = 0;
    }
    if (*(int *)(iVar29 + 0x800 + iVar25) != 0) {
      *(undefined4 *)(iVar29 + 0x800 + iVar25) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar29 + 0x804 + iVar25) != 0) {
      *(undefined4 *)(iVar29 + 0x804 + iVar25) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar29 + 0x808 + iVar25) != 0) {
      *(undefined4 *)(iVar29 + 0x808 + iVar25) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if ((cVar21 != '\0') || (*(int *)(iVar29 + iVar25 + 0x80c) != 0)) {
      piVar32 = *(int **)(iVar29 + 0x514 + iVar25);
      (**(code **)(*piVar32 + 0x84))(piVar32,4);
      *(undefined4 *)(iVar29 + iVar25 + 0x80c) = 0;
    }
  }
  if ((*(char *)(param_1 + 0xd979) != '\0') || (iStack_7c != param_1)) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      FUN_10092e70(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),0x18,1,param_1 + 0xda48);
      FUN_10092e70(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),0,8,param_1 + 0xda68);
      FUN_10092e70(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),8,8,param_1 + 0xda88);
      puVar36 = (uint *)(param_1 + 0xdaa8);
      iVar25 = 0x10;
    }
    else {
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      iStack_3c = 0;
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      FUN_10092e70(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),8,8,(int)&uStack_50);
      uStack_50 = *(uint *)(param_1 + 0xdac8);
      puVar36 = &uStack_50;
      iVar25 = 0;
    }
    FUN_10092e70(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),iVar25,8,(int)puVar36);
    *(undefined1 *)(param_1 + 0xd979) = 0;
  }
  iVar25 = local_80;
  if ((*(char *)(param_1 + 0xd97a) != '\0') || (iStack_7c != param_1)) {
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xdb48);
    iVar29 = *(int *)(param_1 + 0xd9b0);
    iStack_60 = *(int *)(param_1 + 0xdb4c);
    p_Stack_64 = p_Stack_b4;
    uStack_5c = *(int *)(param_1 + 0xdb50);
    uStack_58 = *(int *)(param_1 + 0xdb54);
    local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xdb78);
    iVar30 = *(int *)(param_1 + 0x10) * 0x1510;
    cVar21 = *(_LIST_ENTRY **)(iVar30 + 0x7fc + iVar29) != p_Stack_b4;
    if ((bool)cVar21) {
      *(_LIST_ENTRY **)(iVar30 + 0x7fc + iVar29) = p_Stack_b4;
    }
    if (*(int *)(iVar30 + 0x800 + iVar29) != iStack_60) {
      *(int *)(iVar30 + 0x800 + iVar29) = iStack_60;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar30 + 0x804 + iVar29) != uStack_5c) {
      *(uint *)(iVar30 + 0x804 + iVar29) = uStack_5c;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar30 + 0x808 + iVar29) != uStack_58) {
      *(uint *)(iVar30 + 0x808 + iVar29) = uStack_58;
      cVar21 = cVar21 + '\x01';
    }
    if ((cVar21 != '\0') || (local_9c != *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar30 + iVar29 + 0x80c)))
    {
      piVar32 = *(int **)(iVar30 + 0x514 + iVar29);
      (**(code **)(*piVar32 + 0x84))(piVar32,4);
      *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar30 + iVar29 + 0x80c) = local_9c;
    }
    *(undefined1 *)(iVar25 + 0xd97a) = 0;
    param_1 = iVar25;
  }
  if ((*(char *)(param_1 + 0xd97b) == '\0') && (iStack_7c == param_1)) goto LAB_10029231;
  local_88 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0xdda0);
  if (*(char *)(param_1 + 0x5955) == '\0') {
    iVar25 = *(int *)(param_1 + 0x410);
    uVar35 = *(undefined4 *)(param_1 + 0x414);
    uVar10 = *(undefined4 *)(param_1 + 0x418);
    uVar11 = *(undefined4 *)(param_1 + 0x41c);
    local_88->Type = (short)iVar25;
    local_88->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
    *(undefined4 *)(param_1 + 0xdda4) = uVar35;
    *(undefined4 *)(param_1 + 0xdda8) = uVar10;
    *(undefined4 *)(param_1 + 0xddac) = uVar11;
    *(undefined4 *)(param_1 + 0xddb0) = *(undefined4 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0xddb4) = *(undefined4 *)(param_1 + 0x424);
    *(undefined4 *)(param_1 + 0xddb8) = *(undefined4 *)(param_1 + 0x428);
    *(undefined4 *)(param_1 + 0xddbc) = *(undefined4 *)(param_1 + 0x42c);
    *(undefined4 *)(param_1 + 0xddc0) = *(undefined4 *)(param_1 + 0x430);
    *(undefined4 *)(param_1 + 0xddc4) = *(undefined4 *)(param_1 + 0x434);
    *(undefined4 *)(param_1 + 0xddc8) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0xddcc) = *(undefined4 *)(param_1 + 0x43c);
    *(undefined4 *)(param_1 + 0xddd0) = *(undefined4 *)(param_1 + 0x440);
    bStack_89 = *(byte *)(param_1 + 0xddb0) & *(byte *)(param_1 + 0x5892);
    *(byte *)(param_1 + 0xddb0) = bStack_89;
    bStack_91 = *(byte *)(param_1 + 0xddb1) & *(byte *)(param_1 + 0x5892);
    *(byte *)(param_1 + 0xddb1) = bStack_91;
    p_Stack_a0 = *(LPCRITICAL_SECTION *)(param_1 + 0xd9b0);
    local_84 = (_LIST_ENTRY *)(uint)(byte)(&DAT_00005890)[param_1];
    p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)(*(int *)(param_1 + 0x10) * 0x1510);
    uVar43 = *(uint *)(param_1 + 0xddc8) & 0xf;
    p_Stack_a8 = p_Var23;
    p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)(*(uint *)(param_1 + 0xddb8) & 0xf);
    iVar25._0_2_ = local_88->Type;
    iVar25._2_2_ = local_88->CreatorBackTraceIndex;
    p_Stack_b4 = (_LIST_ENTRY *)(uint)(iVar25 != 0);
    local_a4 = (PRTL_CRITICAL_SECTION_DEBUG)
               ((((uint)CONCAT11(bStack_91,bStack_89) << 5 | *(uint *)(param_1 + 0xdda8) & 0xf) * 2
                | *(uint *)(param_1 + 0xdda4) & 1) * 2 |
                -(uint)(*(int *)(param_1 + 0xddac) != 0) & 0x40 | (uint)p_Stack_b4);
    local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
               (((((int)p_Stack_98 << 4 | (uint)p_Stack_98) << 4 | *(uint *)(param_1 + 0xddbc) & 0xf
                 ) << 4 | *(uint *)(param_1 + 0xddc0) & 0xf) << 0x10 |
               ((uVar43 << 4 | uVar43) << 4 | *(uint *)(param_1 + 0xddcc) & 0xf) << 4 |
               *(uint *)(param_1 + 0xddd0) & 0xf);
    p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
    if (p_Stack_ac != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Stack_b4 = *(_LIST_ENTRY **)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Var39 = p_Stack_ac;
      do {
        p_Var44 = (PRTL_CRITICAL_SECTION_DEBUG)
                  ((uint)((int)&p_Var22->Type + (int)&p_Var39->Type) >> 1);
        local_90 = p_Var44;
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)p_Var44 * 8].Flink;
        p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)p_Var44 * 8].Blink;
        if ((p_Stack_ac < local_9c) || ((p_Stack_ac == local_9c && (p_Stack_98 <= local_a4)))) {
          if ((local_9c < p_Stack_ac) || ((local_9c <= p_Stack_ac && (local_a4 <= p_Stack_98))))
          break;
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var44->Type + 1);
          local_90 = p_Var22;
          p_Var44 = p_Var39;
        }
        p_Var39 = p_Var44;
      } while (p_Var44 != p_Var22);
    }
    p_Var39 = local_90;
    p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_90 * 0x40);
    if (((local_90 ==
          *(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink)) ||
        (*(PRTL_CRITICAL_SECTION_DEBUG *)
          ((int)&p_Var22->Type + *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) !=
         local_a4)) ||
       (*(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var22->CriticalSection +
         *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) != local_9c)) {
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection);
      p_Stack_a8 = p_Var22;
      if (*(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink) ==
          iVar25) {
        lVar8 = (ulonglong)(uint)(iVar25 * 2) * 0x40;
        SVar31 = (SIZE_T)lVar8;
        if ((int)((ulonglong)lVar8 >> 0x20) != 0) {
          SVar31 = 0xffffffff;
        }
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100ad4a9(SVar31);
        if (p_Stack_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Stack_b4 = (_LIST_ENTRY *)0x0;
          if (*(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection) != 0) {
            do {
              piVar32 = (int *)(*(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)) +
                               (int)p_Stack_b4 * 0x40);
              iVar25 = *piVar32;
              p_Var12 = (_RTL_CRITICAL_SECTION *)piVar32[1];
              p_Var48 = (_LIST_ENTRY *)piVar32[2];
              p_Var13 = (_LIST_ENTRY *)piVar32[3];
              p_Var22 = p_Stack_98 + (int)p_Stack_b4 * 2;
              p_Var22->Type = (short)iVar25;
              p_Var22->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
              p_Var22->CriticalSection = p_Var12;
              (p_Var22->ProcessLocksList).Flink = p_Var48;
              (p_Var22->ProcessLocksList).Blink = p_Var13;
              DVar14 = piVar32[5];
              DVar15 = piVar32[6];
              iVar25 = piVar32[7];
              pDVar4 = &p_Stack_98[(int)p_Stack_b4 * 2].EntryCount;
              *pDVar4 = piVar32[4];
              pDVar4[1] = DVar14;
              pDVar4[2] = DVar15;
              pDVar4[3] = iVar25;
              iVar25 = piVar32[8];
              p_Var12 = (_RTL_CRITICAL_SECTION *)piVar32[9];
              p_Var48 = (_LIST_ENTRY *)piVar32[10];
              p_Var13 = (_LIST_ENTRY *)piVar32[0xb];
              p_Var22 = p_Stack_98 + (int)p_Stack_b4 * 2 + 1;
              p_Var22->Type = (short)iVar25;
              p_Var22->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
              p_Var22->CriticalSection = p_Var12;
              (p_Var22->ProcessLocksList).Flink = p_Var48;
              (p_Var22->ProcessLocksList).Blink = p_Var13;
              DVar14 = piVar32[0xd];
              DVar15 = piVar32[0xe];
              iVar25 = piVar32[0xf];
              p_Var48 = (_LIST_ENTRY *)((int)&p_Stack_b4->Flink + 1);
              pDVar4 = &p_Stack_98[(int)p_Stack_b4 * 2 + 1].EntryCount;
              *pDVar4 = piVar32[0xc];
              pDVar4[1] = DVar14;
              pDVar4[2] = DVar15;
              pDVar4[3] = iVar25;
              p_Var39 = local_90;
              p_Stack_b4 = p_Var48;
            } while (p_Var48 < *(_LIST_ENTRY **)
                                ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection))
            ;
          }
          thunk_FUN_100ad48c(*(LPVOID *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)));
          piVar32 = (int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection);
          *piVar32 = *piVar32 << 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)) =
               p_Stack_98;
        }
      }
      p_Var22 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                 ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
      if (p_Var39 < p_Var22) {
        do {
          iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
          iVar29 = (int)p_Var22 * 0x40;
          puVar49 = (undefined4 *)(iVar29 + -0x40 + iVar25);
          uVar35 = puVar49[1];
          uVar10 = puVar49[2];
          uVar11 = puVar49[3];
          puVar40 = (undefined4 *)(iVar29 + iVar25);
          *puVar40 = *puVar49;
          puVar40[1] = uVar35;
          puVar40[2] = uVar10;
          puVar40[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x30 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x10 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x20 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x20 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x10 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x30 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var22[-1].SpareWORD + 1);
        } while (p_Var39 < p_Var22);
        p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var39 << 6);
      }
      p_Var22 = p_Stack_a8;
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Stack_b4 = (_LIST_ENTRY *)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_a8->Type + iVar25) = local_a4;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_a8->CriticalSection + iVar25) = local_9c;
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Var12 = local_88->CriticalSection;
      p_Var48 = (local_88->ProcessLocksList).Flink;
      p_Var13 = (local_88->ProcessLocksList).Blink;
      piVar32 = (int *)((int)&(p_Stack_a8->ProcessLocksList).Flink + iVar25);
      *piVar32 = *(int *)&local_88->Type;
      piVar32[1] = (int)p_Var12;
      piVar32[2] = (int)p_Var48;
      piVar32[3] = (int)p_Var13;
      DVar14 = local_88->ContentionCount;
      DVar15 = local_88->Flags;
      DVar16 = *(DWORD *)&local_88->CreatorBackTraceIndexHigh;
      pDVar4 = (DWORD *)((int)&p_Stack_a8->Flags + iVar25);
      *pDVar4 = local_88->EntryCount;
      pDVar4[1] = DVar14;
      pDVar4[2] = DVar15;
      pDVar4[3] = DVar16;
      p_Var12 = local_88[1].CriticalSection;
      p_Var48 = local_88[1].ProcessLocksList.Flink;
      p_Var13 = local_88[1].ProcessLocksList.Blink;
      piVar32 = (int *)((int)&p_Stack_a8[1].ProcessLocksList.Flink + iVar25);
      *piVar32 = *(int *)(local_88 + 1);
      piVar32[1] = (int)p_Var12;
      piVar32[2] = (int)p_Var48;
      piVar32[3] = (int)p_Var13;
      *(DWORD *)((int)&p_Stack_a8[1].Flags + iVar25) = local_88[1].EntryCount;
      piVar32 = *(int **)(*(int *)((int)&p_Var23[0x41].EntryCount + (int)p_Stack_a0) * 0x1510 +
                          0x510 + *(int *)((int)&p_Var23[0x41].ProcessLocksList.Blink +
                                          (int)p_Stack_a0));
      (**(code **)(*piVar32 + 0x54))(piVar32);
      *(_LIST_ENTRY **)
       ((int)&p_Var22[1].CreatorBackTraceIndexHigh +
       *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) = p_Stack_b4;
      piVar32 = (int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
      *piVar32 = *piVar32 + 1;
    }
    puVar45 = (undefined1 *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23->Type);
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var22[1].CreatorBackTraceIndexHigh +
                  *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)));
    if ((p_Stack_ac !=
         *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var23[0x29].ContentionCount + (int)p_Stack_a0)) ||
       (local_84 != *(_LIST_ENTRY **)(puVar45 + 0x538))) {
      piVar32 = *(int **)((int)&p_Var23[0x28].ContentionCount + (int)p_Stack_a0);
      (**(code **)(*piVar32 + 0x90))(piVar32);
      goto LAB_1002920d;
    }
  }
  else {
    iVar25 = *(int *)(param_1 + 0x478);
    uVar35 = *(undefined4 *)(param_1 + 0x47c);
    uVar10 = *(undefined4 *)(param_1 + 0x480);
    uVar11 = *(undefined4 *)(param_1 + 0x484);
    local_88->Type = (short)iVar25;
    local_88->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
    *(undefined4 *)(param_1 + 0xdda4) = uVar35;
    *(undefined4 *)(param_1 + 0xdda8) = uVar10;
    *(undefined4 *)(param_1 + 0xddac) = uVar11;
    *(undefined4 *)(param_1 + 0xddb0) = *(undefined4 *)(param_1 + 0x488);
    *(undefined4 *)(param_1 + 0xddb4) = *(undefined4 *)(param_1 + 0x48c);
    *(undefined4 *)(param_1 + 0xddb8) = *(undefined4 *)(param_1 + 0x490);
    *(undefined4 *)(param_1 + 0xddbc) = *(undefined4 *)(param_1 + 0x494);
    *(undefined4 *)(param_1 + 0xddc0) = *(undefined4 *)(param_1 + 0x498);
    *(undefined4 *)(param_1 + 0xddc4) = *(undefined4 *)(param_1 + 0x49c);
    *(undefined4 *)(param_1 + 0xddc8) = *(undefined4 *)(param_1 + 0x4a0);
    *(undefined4 *)(param_1 + 0xddcc) = *(undefined4 *)(param_1 + 0x4a4);
    *(undefined4 *)(param_1 + 0xddd0) = *(undefined4 *)(param_1 + 0x4a8);
    bStack_89 = *(byte *)(param_1 + 0xddb0) & *(byte *)(param_1 + 0x5892);
    *(byte *)(param_1 + 0xddb0) = bStack_89;
    bStack_91 = *(byte *)(param_1 + 0xddb1) & *(byte *)(param_1 + 0x5892);
    *(byte *)(param_1 + 0xddb1) = bStack_91;
    p_Stack_a0 = *(LPCRITICAL_SECTION *)(param_1 + 0xd9b0);
    local_84 = (_LIST_ENTRY *)(uint)*(byte *)(param_1 + 0x5891);
    p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)(*(int *)(param_1 + 0x10) * 0x1510);
    uVar42 = *(uint *)(param_1 + 0xddc8) & 0xf;
    local_90 = p_Var23;
    uVar43 = *(uint *)(param_1 + 0xddb8) & 0xf;
    iVar29._0_2_ = local_88->Type;
    iVar29._2_2_ = local_88->CreatorBackTraceIndex;
    p_Stack_b4 = (_LIST_ENTRY *)(*(uint *)(param_1 + 0xdda4) & 1);
    local_a4 = (PRTL_CRITICAL_SECTION_DEBUG)
               ((((uint)CONCAT11(bStack_91,bStack_89) << 5 | *(uint *)(param_1 + 0xdda8) & 0xf) * 2
                | (uint)p_Stack_b4) * 2 | -(uint)(*(int *)(param_1 + 0xddac) != 0) & 0x40 |
               (uint)(iVar29 != 0));
    local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
               ((((uVar43 << 4 | uVar43) << 4 | *(uint *)(param_1 + 0xddbc) & 0xf) << 4 |
                *(uint *)(param_1 + 0xddc0) & 0xf) << 0x10 |
               ((uVar42 << 4 | uVar42) << 4 | *(uint *)(param_1 + 0xddcc) & 0xf) << 4 |
               *(uint *)(param_1 + 0xddd0) & 0xf);
    p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Stack_98 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
    if (p_Stack_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Stack_b4 = *(_LIST_ENTRY **)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Var39 = p_Stack_98;
      do {
        p_Var44 = (PRTL_CRITICAL_SECTION_DEBUG)
                  ((uint)((int)&p_Var22->Type + (int)&p_Var39->Type) >> 1);
        p_Stack_a8 = p_Var44;
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)p_Var44 * 8].Flink;
        p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)p_Var44 * 8].Blink;
        if ((p_Stack_ac < local_9c) || ((p_Stack_ac == local_9c && (p_Stack_98 <= local_a4)))) {
          if ((local_9c < p_Stack_ac) || ((local_9c <= p_Stack_ac && (local_a4 <= p_Stack_98))))
          break;
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var44->Type + 1);
          p_Stack_a8 = p_Var22;
          p_Var44 = p_Var39;
        }
        p_Var39 = p_Var44;
      } while (p_Var44 != p_Var22);
    }
    p_Var22 = p_Stack_a8;
    p_Var39 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_a8 * 0x40);
    if (((p_Stack_a8 ==
          *(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink)) ||
        (*(PRTL_CRITICAL_SECTION_DEBUG *)
          ((int)&p_Var39->Type + *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) !=
         local_a4)) ||
       (*(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var39->CriticalSection +
         *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) != local_9c)) {
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection);
      local_90 = p_Var39;
      if (*(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink) ==
          iVar25) {
        lVar8 = (ulonglong)(uint)(iVar25 * 2) * 0x40;
        SVar31 = (SIZE_T)lVar8;
        if ((int)((ulonglong)lVar8 >> 0x20) != 0) {
          SVar31 = 0xffffffff;
        }
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100ad4a9(SVar31);
        if (p_Stack_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Stack_b4 = (_LIST_ENTRY *)0x0;
          if (*(int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection) != 0) {
            do {
              piVar32 = (int *)(*(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)) +
                               (int)p_Stack_b4 * 0x40);
              iVar25 = *piVar32;
              p_Var12 = (_RTL_CRITICAL_SECTION *)piVar32[1];
              p_Var48 = (_LIST_ENTRY *)piVar32[2];
              p_Var13 = (_LIST_ENTRY *)piVar32[3];
              p_Var22 = p_Stack_98 + (int)p_Stack_b4 * 2;
              p_Var22->Type = (short)iVar25;
              p_Var22->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
              p_Var22->CriticalSection = p_Var12;
              (p_Var22->ProcessLocksList).Flink = p_Var48;
              (p_Var22->ProcessLocksList).Blink = p_Var13;
              DVar14 = piVar32[5];
              DVar15 = piVar32[6];
              iVar25 = piVar32[7];
              pDVar4 = &p_Stack_98[(int)p_Stack_b4 * 2].EntryCount;
              *pDVar4 = piVar32[4];
              pDVar4[1] = DVar14;
              pDVar4[2] = DVar15;
              pDVar4[3] = iVar25;
              iVar25 = piVar32[8];
              p_Var12 = (_RTL_CRITICAL_SECTION *)piVar32[9];
              p_Var48 = (_LIST_ENTRY *)piVar32[10];
              p_Var13 = (_LIST_ENTRY *)piVar32[0xb];
              p_Var22 = p_Stack_98 + (int)p_Stack_b4 * 2 + 1;
              p_Var22->Type = (short)iVar25;
              p_Var22->CreatorBackTraceIndex = (short)((uint)iVar25 >> 0x10);
              p_Var22->CriticalSection = p_Var12;
              (p_Var22->ProcessLocksList).Flink = p_Var48;
              (p_Var22->ProcessLocksList).Blink = p_Var13;
              DVar14 = piVar32[0xd];
              DVar15 = piVar32[0xe];
              iVar25 = piVar32[0xf];
              p_Var48 = (_LIST_ENTRY *)((int)&p_Stack_b4->Flink + 1);
              pDVar4 = &p_Stack_98[(int)p_Stack_b4 * 2 + 1].EntryCount;
              *pDVar4 = piVar32[0xc];
              pDVar4[1] = DVar14;
              pDVar4[2] = DVar15;
              pDVar4[3] = iVar25;
              p_Var22 = p_Stack_a8;
              p_Stack_b4 = p_Var48;
            } while (p_Var48 < *(_LIST_ENTRY **)
                                ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection))
            ;
          }
          thunk_FUN_100ad48c(*(LPVOID *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)));
          piVar32 = (int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].CriticalSection);
          *piVar32 = *piVar32 << 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)) =
               p_Stack_98;
        }
      }
      p_Var39 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                 ((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
      if (p_Var22 < p_Var39) {
        do {
          iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
          iVar29 = (int)p_Var39 * 0x40;
          puVar49 = (undefined4 *)(iVar29 + -0x40 + iVar25);
          uVar35 = puVar49[1];
          uVar10 = puVar49[2];
          uVar11 = puVar49[3];
          puVar40 = (undefined4 *)(iVar29 + iVar25);
          *puVar40 = *puVar49;
          puVar40[1] = uVar35;
          puVar40[2] = uVar10;
          puVar40[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x30 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x10 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x20 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x20 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          puVar40 = (undefined4 *)(iVar29 + -0x10 + iVar25);
          uVar35 = puVar40[1];
          uVar10 = puVar40[2];
          uVar11 = puVar40[3];
          puVar49 = (undefined4 *)(iVar29 + 0x30 + iVar25);
          *puVar49 = *puVar40;
          puVar49[1] = uVar35;
          puVar49[2] = uVar10;
          puVar49[3] = uVar11;
          p_Var39 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var39[-1].SpareWORD + 1);
        } while (p_Var22 < p_Var39);
        local_90 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var22 << 6);
      }
      p_Var39 = local_90;
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Stack_b4 = (_LIST_ENTRY *)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_90->Type + iVar25) = local_a4;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_90->CriticalSection + iVar25) = local_9c;
      iVar25 = *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41));
      p_Var12 = local_88->CriticalSection;
      p_Var48 = (local_88->ProcessLocksList).Flink;
      p_Var13 = (local_88->ProcessLocksList).Blink;
      piVar32 = (int *)((int)&(local_90->ProcessLocksList).Flink + iVar25);
      *piVar32 = *(int *)&local_88->Type;
      piVar32[1] = (int)p_Var12;
      piVar32[2] = (int)p_Var48;
      piVar32[3] = (int)p_Var13;
      DVar14 = local_88->ContentionCount;
      DVar15 = local_88->Flags;
      DVar16 = *(DWORD *)&local_88->CreatorBackTraceIndexHigh;
      pDVar4 = (DWORD *)((int)&local_90->Flags + iVar25);
      *pDVar4 = local_88->EntryCount;
      pDVar4[1] = DVar14;
      pDVar4[2] = DVar15;
      pDVar4[3] = DVar16;
      p_Var12 = local_88[1].CriticalSection;
      p_Var48 = local_88[1].ProcessLocksList.Flink;
      p_Var13 = local_88[1].ProcessLocksList.Blink;
      piVar32 = (int *)((int)&local_90[1].ProcessLocksList.Flink + iVar25);
      *piVar32 = *(int *)(local_88 + 1);
      piVar32[1] = (int)p_Var12;
      piVar32[2] = (int)p_Var48;
      piVar32[3] = (int)p_Var13;
      *(DWORD *)((int)&local_90[1].Flags + iVar25) = local_88[1].EntryCount;
      piVar32 = *(int **)(*(int *)((int)&p_Var23[0x41].EntryCount + (int)p_Stack_a0) * 0x1510 +
                          0x510 + *(int *)((int)&p_Var23[0x41].ProcessLocksList.Blink +
                                          (int)p_Stack_a0));
      (**(code **)(*piVar32 + 0x54))(piVar32);
      *(_LIST_ENTRY **)
       ((int)&p_Var39[1].CreatorBackTraceIndexHigh +
       *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41))) = p_Stack_b4;
      piVar32 = (int *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23[0x41].ProcessLocksList.Flink);
      *piVar32 = *piVar32 + 1;
    }
    puVar45 = (undefined1 *)((int)&p_Stack_a0->DebugInfo + (int)&p_Var23->Type);
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var39[1].CreatorBackTraceIndexHigh +
                  *(int *)((int)&p_Stack_a0->DebugInfo + (int)(p_Var23 + 0x41)));
    if ((p_Stack_ac !=
         *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var23[0x29].ContentionCount + (int)p_Stack_a0)) ||
       (local_84 != *(_LIST_ENTRY **)(puVar45 + 0x538))) {
      piVar32 = *(int **)((int)&p_Var23[0x28].ContentionCount + (int)p_Stack_a0);
      (**(code **)(*piVar32 + 0x90))(piVar32);
LAB_1002920d:
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var23[0x29].ContentionCount + (int)p_Stack_a0) =
           p_Stack_ac;
      *(_LIST_ENTRY **)(puVar45 + 0x538) = local_84;
    }
  }
  *(undefined1 *)(local_80 + 0xd97b) = 0;
  param_1 = local_80;
LAB_10029231:
  if ((*(char *)(param_1 + 0xd97c) != '\0') || (iStack_7c != param_1)) {
    if (*(uint *)(param_1 + 0x560) < 2) {
      local_9c = (PRTL_CRITICAL_SECTION_DEBUG)0xffffffff;
    }
    else {
      local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0x55c);
    }
    if (*(char *)(param_1 + 0x5955) == '\0') {
      iVar25 = 0x4ac;
      if (*(char *)(param_1 + 0x5950) != '\x01') {
        iVar25 = 0x4cc;
      }
    }
    else {
      iVar25 = 0x4ec;
    }
    p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0xddd4);
    *(undefined4 *)(param_1 + 0xdddc) = *(undefined4 *)(iVar25 + param_1);
    *(undefined4 *)(param_1 + 0xdde0) = *(undefined4 *)(iVar25 + 4 + param_1);
    *(undefined4 *)(param_1 + 0xdde4) = *(undefined4 *)(iVar25 + 8 + param_1);
    *(undefined4 *)(param_1 + 0xdde8) = *(undefined4 *)(iVar25 + 0xc + param_1);
    *(undefined4 *)(param_1 + 0xddec) = *(undefined4 *)(iVar25 + 0x10 + param_1);
    *(undefined4 *)(param_1 + 0xddf0) = *(undefined4 *)(iVar25 + 0x14 + param_1);
    *(undefined4 *)(param_1 + 0xddf4) = *(undefined4 *)(iVar25 + 0x18 + param_1);
    *(undefined1 *)(param_1 + 0xddf8) = *(undefined1 *)(iVar25 + 0x1c + param_1);
    p_Var33 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0x10) * 0x1510);
    p_Stack_a0 = p_Var33;
    p_Var23 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xd9b0);
    p_Stack_a8 = p_Var23;
    iVar30._0_2_ = p_Stack_98->Type;
    iVar30._2_2_ = p_Stack_98->CreatorBackTraceIndex;
    local_88 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_84 = (_LIST_ENTRY *)
               (((((uint)(*(byte *)(param_1 + 0xde58) & 0xf) << 4 |
                  (uint)(*(byte *)(param_1 + 0xde38) & 0xf)) << 4 |
                 (uint)(*(byte *)(param_1 + 0xde18) & 0xf)) << 4 |
                (uint)(*(byte *)(param_1 + 0xddf8) & 0xf)) << 2);
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)
               ((((((*(uint *)(param_1 + 0xddf0) & 0x1f) << 5 | *(uint *)(param_1 + 0xddec) & 0x1f)
                   << 3 | *(uint *)(param_1 + 0xdde8) & 7) << 5 | *(uint *)(param_1 + 0xdde4) & 0x1f
                 ) << 5 | *(uint *)(param_1 + 0xdde0) & 0x1f) << 6 |
                -(uint)(*(int *)(param_1 + 0xde3c) != 0) & 0x20 |
                -(uint)(*(int *)(param_1 + 0xde1c) != 0) & 0x10 |
                -(uint)(*(int *)(param_1 + 0xddfc) != 0) & 8 |
                -(uint)(*(int *)(param_1 + 0xdddc) != 0) & 4 |
                -(uint)(*(int *)(param_1 + 0xddd8) != 0) & 2 | (uint)(iVar30 != 0) |
               *(int *)(param_1 + 0xddf4) << 0x1d);
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var33[0x57].SpinCount + (int)p_Var23);
    if (p_Stack_ac != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Stack_b4 = *(_LIST_ENTRY **)((int)&p_Var33[0x57].OwningThread + (int)p_Var23);
      p_Var39 = p_Stack_ac;
      do {
        local_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((uint)((int)&p_Var22->Type + (int)&p_Var39->Type) >> 1);
        p_Var48 = p_Stack_b4[(int)local_88 * 0x23].Blink;
        if ((p_Var48 < local_84) ||
           ((p_Var44 = local_88, p_Var48 == local_84 &&
            ((PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)local_88 * 0x23].Flink <= local_90)))) {
          if ((local_84 < p_Var48) ||
             ((local_84 <= p_Var48 &&
              (local_90 <= (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4[(int)local_88 * 0x23].Flink))))
          break;
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_88->Type + 1);
          local_88 = p_Var22;
          p_Var44 = p_Var39;
        }
        p_Var39 = p_Var44;
      } while (p_Var44 != p_Var22);
    }
    local_a4 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_88 * 0x118);
    if (((local_88 == *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var33[0x57].SpinCount + (int)p_Var23)
         ) || (*(PRTL_CRITICAL_SECTION_DEBUG *)
                ((int)&local_a4->Type + *(int *)((int)&p_Var33[0x57].OwningThread + (int)p_Var23))
               != local_90)) ||
       (*(_LIST_ENTRY **)
         ((int)&local_a4->CriticalSection +
         *(int *)((int)&p_Var33[0x57].OwningThread + (int)p_Var23)) != local_84)) {
      iVar25 = *(int *)((int)&p_Var33[0x57].LockSemaphore + (int)p_Var23);
      p_Var46 = p_Var33;
      p_Var22 = p_Var23;
      if (*(int *)((int)&p_Var33[0x57].SpinCount + (int)p_Var23) == iVar25) {
        lVar8 = (ulonglong)(uint)(iVar25 * 2) * 0x118;
        SVar31 = (SIZE_T)lVar8;
        if ((int)((ulonglong)lVar8 >> 0x20) != 0) {
          SVar31 = 0xffffffff;
        }
        p_Stack_b4 = (_LIST_ENTRY *)FUN_100ad4a9(SVar31);
        if (p_Stack_b4 != (_LIST_ENTRY *)0x0) {
          uVar43 = 0;
          if (*(int *)((int)&p_Var33[0x57].LockSemaphore + (int)p_Var23) != 0) {
            do {
              uVar42 = uVar43 + 1;
              puVar40 = (undefined4 *)
                        (*(int *)((int)&p_Var33[0x57].OwningThread + (int)p_Var23) + uVar43 * 0x118)
              ;
              p_Var48 = p_Stack_b4 + uVar43 * 0x23;
              for (iVar25 = 0x46; iVar25 != 0; iVar25 = iVar25 + -1) {
                p_Var48->Flink = (_LIST_ENTRY *)*puVar40;
                puVar40 = puVar40 + 1;
                p_Var48 = (_LIST_ENTRY *)&p_Var48->Blink;
              }
              uVar43 = uVar42;
              p_Var33 = p_Stack_a0;
              p_Var46 = p_Stack_a0;
              p_Var23 = p_Stack_a8;
              p_Var22 = p_Stack_a8;
            } while (uVar42 < *(uint *)((int)&p_Stack_a0[0x57].LockSemaphore + (int)p_Stack_a8));
          }
          thunk_FUN_100ad48c(*(LPVOID *)((int)&p_Var46[0x57].OwningThread + (int)p_Var22));
          piVar32 = (int *)((int)&p_Var46[0x57].LockSemaphore + (int)p_Var22);
          *piVar32 = *piVar32 << 1;
          *(_LIST_ENTRY **)((int)&p_Var46[0x57].OwningThread + (int)p_Var22) = p_Stack_b4;
        }
      }
      p_Var33 = p_Stack_a0;
      p_Var23 = p_Stack_a8;
      p_Var39 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var46[0x57].SpinCount + (int)p_Var22);
      while (local_88 < p_Var39) {
        iVar25 = (int)p_Var39 * 0x118;
        p_Var39 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var39[-1].SpareWORD + 1);
        puVar49 = (undefined4 *)(*(int *)((int)&p_Var46[0x57].OwningThread + (int)p_Var22) + iVar25)
        ;
        puVar40 = puVar49 + -0x46;
        for (iVar25 = 0x46; p_Var46 = p_Stack_a0, p_Var22 = p_Stack_a8, iVar25 != 0;
            iVar25 = iVar25 + -1) {
          *puVar49 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar49 = puVar49 + 1;
        }
      }
      iVar25 = *(int *)((int)&p_Var46[0x57].OwningThread + (int)p_Var22);
      p_Stack_b4 = (_LIST_ENTRY *)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_a4->Type + iVar25) = local_90;
      *(_LIST_ENTRY **)((int)&local_a4->CriticalSection + iVar25) = local_84;
      p_Var39 = p_Stack_98;
      piVar32 = (int *)((int)&(local_a4->ProcessLocksList).Flink +
                       *(int *)((int)&p_Var46[0x57].OwningThread + (int)p_Var22));
      for (iVar25 = 0x42; iVar25 != 0; iVar25 = iVar25 + -1) {
        *piVar32 = *(int *)&p_Var39->Type;
        p_Var39 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var39->CriticalSection;
        piVar32 = piVar32 + 1;
      }
      piVar32 = *(int **)(*(int *)((int)&p_Stack_a0[0x58].LockCount + (int)p_Stack_a8) * 0x1510 +
                          0x510 + *(int *)((int)&p_Stack_a8->Type + (int)&p_Stack_a0[0x58].DebugInfo
                                          ));
      (**(code **)(*piVar32 + 0x50))(piVar32);
      *(_LIST_ENTRY **)
       ((int)&local_a4[8].EntryCount + *(int *)((int)&p_Var33[0x57].OwningThread + (int)p_Var23)) =
           p_Stack_b4;
      piVar32 = (int *)((int)&p_Var33[0x57].SpinCount + (int)p_Var23);
      *piVar32 = *piVar32 + 1;
    }
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&local_a4[8].EntryCount +
                  *(int *)((int)&p_Var33[0x57].OwningThread + (int)p_Var23));
    p_Stack_b4 = (_LIST_ENTRY *)((int)&p_Var23[0x29].CreatorBackTraceIndexHigh + (int)p_Var33);
    if ((p_Stack_ac !=
         *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var33[0x37].RecursionCount + (int)p_Var23)) ||
       (local_9c != (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b4->Flink)) {
      piVar32 = *(int **)((int)&p_Var33[0x36].LockCount + (int)p_Var23);
      (**(code **)(*piVar32 + 0x8c))(piVar32,p_Stack_ac);
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var33[0x37].RecursionCount + (int)p_Var23) =
           p_Stack_ac;
      p_Stack_b4->Flink = (_LIST_ENTRY *)local_9c;
    }
    *(undefined1 *)(local_80 + 0xd97c) = 0;
    param_1 = local_80;
  }
  if ((*(char *)(param_1 + 0xd97d) != '\0') || (iStack_7c != param_1)) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      iVar25 = 0x534;
      if (*(char *)(param_1 + 0x595b) == '\0') {
        iVar25 = 0x50c;
      }
      puVar40 = (undefined4 *)(iVar25 + param_1);
    }
    else {
      puVar40 = &DAT_100b7f70;
    }
    *(undefined4 *)(param_1 + 0xdedc) = *puVar40;
    *(undefined4 *)(param_1 + 0xdee0) = puVar40[1];
    *(undefined4 *)(param_1 + 0xdee4) = puVar40[2];
    *(undefined4 *)(param_1 + 0xdee8) = puVar40[3];
    *(undefined4 *)(param_1 + 0xdeec) = puVar40[4];
    *(undefined4 *)(param_1 + 0xdef0) = puVar40[5];
    *(undefined4 *)(param_1 + 0xdef4) = puVar40[6];
    *(undefined4 *)(param_1 + 0xdef8) = puVar40[7];
    *(undefined4 *)(param_1 + 0xdefc) = puVar40[8];
    *(undefined4 *)(param_1 + 0xdf00) = puVar40[9];
    p_Stack_a0 = *(LPCRITICAL_SECTION *)(param_1 + 0xd9b0);
    iVar25 = *(int *)(param_1 + 0x10);
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)(iVar25 * 0x1510);
    local_88 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)(p_Stack_a0 + 0x59) + iVar25 * 0x1510 + 0xc);
    p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)(p_Stack_a0 + 0x59) + iVar25 * 0x1510 + 4);
    iVar25 = param_1;
    local_9c = p_Var22;
    if ((PRTL_CRITICAL_SECTION_DEBUG)0xff < local_88) {
      p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)
                   (*(int *)&p_Var22->Type + -0x30 + (int)local_88 * 0x38);
      uVar52 = FUN_10093eaa((uint *)p_Stack_98);
      p_Stack_b4 = (_LIST_ENTRY *)((ulonglong)uVar52 >> 0x20);
      p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)uVar52;
      local_a4 = (PRTL_CRITICAL_SECTION_DEBUG)
                 FUN_10094344(p_Var22,(uint)p_Stack_ac,(uint)p_Stack_b4);
      local_88 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var22->ProcessLocksList).Flink;
      if (local_a4 != local_88) {
        local_84 = (_LIST_ENTRY *)((int)local_a4 * 7);
        iVar29 = *(int *)&p_Var22->Type;
        iVar25 = local_80;
        if (((*(PRTL_CRITICAL_SECTION_DEBUG *)(iVar29 + (int)local_a4 * 0x38) == p_Stack_ac) &&
            (*(_LIST_ENTRY **)(iVar29 + 4 + (int)local_a4 * 0x38) == p_Stack_b4)) &&
           (uVar43 = FUN_10093e49((uint *)p_Stack_98,(uint *)(iVar29 + 8 + (int)local_a4 * 0x38)),
           (char)uVar43 == '\0')) {
          p_Stack_b4 = *(_LIST_ENTRY **)(*(int *)&p_Var22->Type + 0x30 + (int)local_84 * 8);
          p_Var48 = (p_Var22->ProcessLocksList).Blink;
          p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var48 + p_Var22->EntryCount * 0x2a2);
          p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var48 + 0x94);
          EnterCriticalSection((LPCRITICAL_SECTION)p_Stack_98);
          if (p_Stack_b4 == ((_LIST_ENTRY *)((int)p_Stack_ac + 0x550))->Flink) {
            ((_LIST_ENTRY *)((int)p_Stack_ac + 0x550))->Flink = (_LIST_ENTRY *)0x0;
          }
          (*(code *)p_Stack_b4->Flink[1].Flink)();
          LeaveCriticalSection((LPCRITICAL_SECTION)p_Stack_98);
          p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var22->ProcessLocksList).Flink;
          p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_a4->Type + 1);
          p_Var39 = p_Stack_ac;
          if (p_Stack_ac < p_Var23) {
            do {
              iVar25 = *(int *)((int)&local_90[0x42].CreatorBackTraceIndexHigh + (int)p_Stack_a0);
              p_Var44 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var39->Type + 1);
              puVar40 = (undefined4 *)(iVar25 + (int)p_Var39 * 0x38);
              uVar35 = puVar40[1];
              uVar10 = puVar40[2];
              uVar11 = puVar40[3];
              puVar49 = (undefined4 *)(iVar25 + -0x38 + (int)p_Var39 * 0x38);
              *puVar49 = *puVar40;
              puVar49[1] = uVar35;
              puVar49[2] = uVar10;
              puVar49[3] = uVar11;
              puVar40 = (undefined4 *)(iVar25 + 0x10 + (int)p_Var39 * 0x38);
              uVar35 = puVar40[1];
              uVar10 = puVar40[2];
              uVar11 = puVar40[3];
              puVar49 = (undefined4 *)(iVar25 + -0x28 + (int)p_Var39 * 0x38);
              *puVar49 = *puVar40;
              puVar49[1] = uVar35;
              puVar49[2] = uVar10;
              puVar49[3] = uVar11;
              puVar40 = (undefined4 *)(iVar25 + 0x20 + (int)p_Var39 * 0x38);
              uVar35 = puVar40[1];
              uVar10 = puVar40[2];
              uVar11 = puVar40[3];
              puVar49 = (undefined4 *)(iVar25 + -0x18 + (int)p_Var39 * 0x38);
              *puVar49 = *puVar40;
              puVar49[1] = uVar35;
              puVar49[2] = uVar10;
              puVar49[3] = uVar11;
              *(undefined8 *)(iVar25 + -8 + (int)p_Var39 * 0x38) =
                   *(undefined8 *)(iVar25 + 0x30 + (int)p_Var39 * 0x38);
              p_Var23 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         ((int)&local_90->Type + (int)&p_Stack_a0[0x59].OwningThread);
              p_Var22 = local_9c;
              p_Var39 = p_Var44;
              iVar25 = local_80;
            } while (p_Var44 < p_Var23);
          }
          local_88 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var23[-1].SpareWORD + 1);
          (p_Var22->ProcessLocksList).Flink = (_LIST_ENTRY *)local_88;
        }
      }
    }
    uVar52 = FUN_10093eaa((uint *)(iVar25 + 0xdedc));
    p_Stack_b4 = (_LIST_ENTRY *)((ulonglong)uVar52 >> 0x20);
    local_84 = (_LIST_ENTRY *)uVar52;
    local_a4 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_10094344(p_Var22,(uint)local_84,(uint)p_Stack_b4);
    param_1 = local_80;
    p_Var23 = local_9c;
    p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_a4 * 0x38);
    p_Var39 = p_Var22;
    if (((local_a4 == local_88) ||
        (iVar25 = local_80,
        *(_LIST_ENTRY **)((int)&p_Stack_a8->Type + *(int *)&p_Var22->Type) != local_84)) ||
       (p_Var39 = local_9c,
       *(_LIST_ENTRY **)((int)&p_Stack_a8->CriticalSection + *(int *)&p_Var22->Type) != p_Stack_b4))
    {
      if (local_88 == (PRTL_CRITICAL_SECTION_DEBUG)p_Var39->CriticalSection) {
        lVar8 = (ulonglong)(uint)((int)p_Var39->CriticalSection * 2) * 0x38;
        SVar31 = (SIZE_T)lVar8;
        if ((int)((ulonglong)lVar8 >> 0x20) != 0) {
          SVar31 = 0xffffffff;
        }
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100ad4a9(SVar31);
        if (p_Stack_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          if (p_Var39->CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
            uVar43 = 0;
            do {
              iVar37 = uVar43 * 0x38;
              uVar43 = uVar43 + 1;
              piVar34 = (int *)(*(int *)((int)&local_90[0x42].CreatorBackTraceIndexHigh +
                                        (int)p_Stack_a0) + iVar37);
              iVar25 = piVar34[1];
              iVar29 = piVar34[2];
              iVar30 = piVar34[3];
              piVar32 = (int *)(iVar37 + (int)p_Stack_98);
              *piVar32 = *piVar34;
              piVar32[1] = iVar25;
              piVar32[2] = iVar29;
              piVar32[3] = iVar30;
              iVar25 = piVar34[5];
              iVar29 = piVar34[6];
              iVar30 = piVar34[7];
              piVar32 = (int *)(iVar37 + 0x10 + (int)p_Stack_98);
              *piVar32 = piVar34[4];
              piVar32[1] = iVar25;
              piVar32[2] = iVar29;
              piVar32[3] = iVar30;
              iVar25 = piVar34[9];
              iVar29 = piVar34[10];
              iVar30 = piVar34[0xb];
              piVar32 = (int *)(iVar37 + 0x20 + (int)p_Stack_98);
              *piVar32 = piVar34[8];
              piVar32[1] = iVar25;
              piVar32[2] = iVar29;
              piVar32[3] = iVar30;
              *(undefined8 *)(iVar37 + 0x30 + (int)p_Stack_98) = *(undefined8 *)(piVar34 + 0xc);
              p_Var39 = local_9c;
              iVar25 = local_80;
            } while (uVar43 < *(uint *)((int)&local_90->Type + (int)&p_Stack_a0[0x59].RecursionCount
                                       ));
          }
          thunk_FUN_100ad48c(*(LPVOID *)&p_Var39->Type);
          p_Var39->CriticalSection = (_RTL_CRITICAL_SECTION *)((int)p_Var39->CriticalSection << 1);
          *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var39->Type = p_Stack_98;
        }
      }
      p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var39->ProcessLocksList).Flink;
      p_Var23 = p_Var39;
      param_1 = iVar25;
      for (p_Var22 = p_Stack_ac; local_a4 < p_Var22;
          p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var22[-1].SpareWORD + 1)) {
        iVar25 = *(int *)((int)&local_90[0x42].CreatorBackTraceIndexHigh + (int)p_Stack_a0);
        puVar49 = (undefined4 *)(iVar25 + -0x38 + (int)p_Var22 * 0x38);
        uVar35 = puVar49[1];
        uVar10 = puVar49[2];
        uVar11 = puVar49[3];
        puVar40 = (undefined4 *)(iVar25 + (int)p_Var22 * 0x38);
        *puVar40 = *puVar49;
        puVar40[1] = uVar35;
        puVar40[2] = uVar10;
        puVar40[3] = uVar11;
        puVar40 = (undefined4 *)(iVar25 + -0x28 + (int)p_Var22 * 0x38);
        uVar35 = puVar40[1];
        uVar10 = puVar40[2];
        uVar11 = puVar40[3];
        puVar49 = (undefined4 *)(iVar25 + 0x10 + (int)p_Var22 * 0x38);
        *puVar49 = *puVar40;
        puVar49[1] = uVar35;
        puVar49[2] = uVar10;
        puVar49[3] = uVar11;
        puVar40 = (undefined4 *)(iVar25 + -0x18 + (int)p_Var22 * 0x38);
        uVar35 = puVar40[1];
        uVar10 = puVar40[2];
        uVar11 = puVar40[3];
        puVar49 = (undefined4 *)(iVar25 + 0x20 + (int)p_Var22 * 0x38);
        *puVar49 = *puVar40;
        puVar49[1] = uVar35;
        puVar49[2] = uVar10;
        puVar49[3] = uVar11;
        *(undefined8 *)(iVar25 + 0x30 + (int)p_Var22 * 0x38) =
             *(undefined8 *)(iVar25 + -8 + (int)p_Var22 * 0x38);
        p_Var23 = local_9c;
        param_1 = local_80;
      }
      iVar25 = *(int *)&p_Var23->Type;
      *(_LIST_ENTRY **)((int)&p_Stack_a8->Type + iVar25) = local_84;
      *(_LIST_ENTRY **)((int)&p_Stack_a8->CriticalSection + iVar25) = p_Stack_b4;
      iVar25 = *(int *)&p_Var23->Type;
      uVar35 = *(undefined4 *)(param_1 + 0xdee0);
      uVar10 = *(undefined4 *)(param_1 + 0xdee4);
      uVar11 = *(undefined4 *)(param_1 + 0xdee8);
      p_Stack_b4 = (_LIST_ENTRY *)0x0;
      puVar40 = (undefined4 *)((int)&(p_Stack_a8->ProcessLocksList).Flink + iVar25);
      *puVar40 = *(undefined4 *)(param_1 + 0xdedc);
      puVar40[1] = uVar35;
      puVar40[2] = uVar10;
      puVar40[3] = uVar11;
      uVar35 = *(undefined4 *)(param_1 + 0xdef0);
      uVar10 = *(undefined4 *)(param_1 + 0xdef4);
      uVar11 = *(undefined4 *)(param_1 + 0xdef8);
      puVar40 = (undefined4 *)((int)&p_Stack_a8->Flags + iVar25);
      *puVar40 = *(undefined4 *)(param_1 + 0xdeec);
      puVar40[1] = uVar35;
      puVar40[2] = uVar10;
      puVar40[3] = uVar11;
      *(undefined8 *)((int)&p_Stack_a8[1].ProcessLocksList.Flink + iVar25) =
           *(undefined8 *)(param_1 + 0xdefc);
      p_Var48 = (p_Var23->ProcessLocksList).Blink[p_Var23->EntryCount * 0x2a2 + 0xa2].Flink;
      (*(code *)p_Var48->Flink[0xb].Flink)(p_Var48);
      *(_LIST_ENTRY **)((int)&p_Stack_a8[1].EntryCount + *(int *)&p_Var23->Type) = p_Stack_b4;
      (p_Var23->ProcessLocksList).Flink =
           (_LIST_ENTRY *)((int)&((p_Var23->ProcessLocksList).Flink)->Flink + 1);
    }
    else {
      uVar43 = FUN_10093e49((uint *)(local_80 + 0xdedc),
                            (uint *)((int)&(p_Stack_a8->ProcessLocksList).Flink +
                                    *(int *)&local_9c->Type));
      if ((char)uVar43 != '\0') {
        p_Stack_98 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                      ((int)&p_Stack_a8[1].EntryCount + *(int *)&p_Var23->Type);
        p_Var48 = (p_Var23->ProcessLocksList).Blink;
        p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var48 + p_Var23->EntryCount * 0x2a2);
        local_9c = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var48 + 0x94);
        EnterCriticalSection((LPCRITICAL_SECTION)local_9c);
        if (p_Stack_98 ==
            (PRTL_CRITICAL_SECTION_DEBUG)((_LIST_ENTRY *)((int)p_Stack_ac + 0x550))->Flink) {
          ((_LIST_ENTRY *)((int)p_Stack_ac + 0x550))->Flink = (_LIST_ENTRY *)0x0;
        }
        (**(code **)(*(int *)&p_Stack_98->Type + 8))();
        LeaveCriticalSection((LPCRITICAL_SECTION)local_9c);
        FUN_10094518(p_Var23,(int)local_a4,local_84,p_Stack_b4,(undefined4 *)(param_1 + 0xdedc));
      }
    }
    p_Var22 = local_90;
    p_Stack_ac = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Stack_a8[1].EntryCount + *(int *)&p_Var23->Type);
    if (p_Stack_ac !=
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_90[0x2a].EntryCount + (int)p_Stack_a0)) {
      (**(code **)(**(int **)((int)&local_90[0x28].ContentionCount + (int)p_Stack_a0) + 0xac))();
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var22[0x2a].EntryCount + (int)p_Stack_a0) =
           p_Stack_ac;
    }
    *(undefined1 *)(param_1 + 0xd97d) = 0;
  }
  if ((*(char *)(param_1 + 0xd97e) != '\0') || (iStack_7c != param_1)) {
    if ((*(char *)(param_1 + 0x5955) == '\0') &&
       ((*(int *)(param_1 + 0x5930) != 0 || ((*(byte *)(param_1 + 0x5948) & 1) != 0)))) {
      iVar25 = 0x5a8;
    }
    else {
      iVar25 = 0x5c0;
    }
    pfVar3 = (float *)(iVar25 + param_1);
    fVar51 = pfVar3[1];
    fVar17 = pfVar3[2];
    fVar18 = pfVar3[3];
    pfVar2 = (float *)(param_1 + 0xdbe8);
    *pfVar2 = *pfVar3;
    *(float *)(param_1 + 0xdbec) = fVar51;
    *(float *)(param_1 + 0xdbf0) = fVar17;
    *(float *)(param_1 + 0xdbf4) = fVar18;
    *(undefined8 *)(param_1 + 0xdbf8) = *(undefined8 *)(iVar25 + 0x10 + param_1);
    if (0xafff < *(int *)(param_1 + 0xda44)) {
      *pfVar2 = *(float *)(param_1 + 0x5d8) + *pfVar2;
      *(float *)(param_1 + 0xdbec) = *(float *)(param_1 + 0xdbec) + *(float *)(param_1 + 0x5dc);
    }
    if (*(int *)(param_1 + 0x5930) == 0) {
      *(undefined4 *)(param_1 + 0xdbf8) = 0;
      *(undefined4 *)(param_1 + 0xdbfc) = 0x3f800000;
    }
    p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)(*(int *)(param_1 + 0x10) * 0x1510);
    p_Stack_b4 = *(_LIST_ENTRY **)(param_1 + 0xd9b0);
    if (((((*pfVar2 != *(float *)((int)&p_Stack_ac[0x3e].EntryCount + (int)p_Stack_b4)) ||
          (*(float *)(param_1 + 0xdbec) !=
           *(float *)((int)&p_Stack_ac[0x3e].ContentionCount + (int)p_Stack_b4))) ||
         (*(float *)(param_1 + 0xdbf0) != *(float *)((int)&p_Stack_ac[0x3e].Flags + (int)p_Stack_b4)
         )) || ((*(float *)(param_1 + 0xdbf4) !=
                 *(float *)((int)&p_Stack_ac[0x3e].CreatorBackTraceIndexHigh + (int)p_Stack_b4) ||
                (*(float *)(param_1 + 0xdbf8) !=
                 *(float *)((int)&p_Stack_ac[0x3f].Type + (int)p_Stack_b4))))) ||
       (*(float *)(param_1 + 0xdbfc) !=
        *(float *)((int)&p_Stack_ac[0x3f].CriticalSection + (int)p_Stack_b4))) {
      piVar32 = *(int **)((int)&p_Stack_ac[0x28].ContentionCount + (int)p_Stack_b4);
      (**(code **)(*piVar32 + 0xb0))(piVar32);
      fVar51 = *(float *)(param_1 + 0xdbec);
      fVar17 = *(float *)(param_1 + 0xdbf0);
      fVar18 = *(float *)(param_1 + 0xdbf4);
      pfVar3 = (float *)((int)&p_Stack_ac[0x3e].EntryCount + (int)p_Stack_b4);
      *pfVar3 = *pfVar2;
      pfVar3[1] = fVar51;
      pfVar3[2] = fVar17;
      pfVar3[3] = fVar18;
      *(undefined8 *)((int)&p_Stack_ac[0x3f].Type + (int)p_Stack_b4) =
           *(undefined8 *)(param_1 + 0xdbf8);
    }
    *(undefined1 *)(param_1 + 0xd97e) = 0;
  }
  if ((*(char *)(param_1 + 0xdf04) != '\0') || (iStack_7c != param_1)) {
    FUN_10093013(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),*(int *)(param_1 + 0xdbe0),
                 *(int *)(param_1 + 0xdb7c),*(int *)(param_1 + 0xdb80),*(int *)(param_1 + 0xdb84),
                 *(int *)(param_1 + 0xdb88));
    *(undefined1 *)(param_1 + 0xdf04) = 0;
  }
  p_Var48 = *(_LIST_ENTRY **)(param_1 + 0xd974);
  iVar25 = iStack_7c;
  if ((p_Var48 != (_LIST_ENTRY *)0x0) || (iStack_7c != param_1)) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      p_Stack_b4 = p_Var48;
      uVar43 = 0;
      bVar50 = p_Var48 != (_LIST_ENTRY *)0x0;
      if (bVar50) {
        for (; ((uint)p_Var48 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
        }
      }
      while (bVar50) {
        pbVar9 = (byte *)((int)&p_Stack_b4 + ((int)uVar43 >> 3));
        *pbVar9 = *pbVar9 & ~('\x01' << (uVar43 & 7));
        local_88 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar43 & 0xff);
        uVar42 = (uint)*(byte *)(param_1 + 0x3d3 + (int)local_88 * 8);
        uVar43 = *(uint *)(param_1 + 0x3d4 + (int)local_88 * 8);
        if (uVar43 < uVar42) {
          fVar51 = (float)uVar42;
        }
        else {
          fVar51 = (float)((double)(int)uVar43 + (double)(&DAT_100b5ce0)[-((int)uVar43 >> 0x1f)]);
        }
        iVar25 = (int)local_88 * 0x34;
        *(float *)(param_1 + 0xbc + iVar25) = fVar51;
        local_8a = *(byte *)(param_1 + 0x3d0 + (int)local_88 * 8);
        bStack_89 = *(byte *)(param_1 + 0x3d1 + (int)local_88 * 8);
        bStack_91 = *(byte *)(param_1 + 0x3d2 + (int)local_88 * 8);
        if (local_8a != 2) {
          fVar51 = 3.4028235e+38;
        }
        *(float *)(param_1 + 0xc0 + iVar25) = fVar51;
        p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        if (local_8a != 2) {
          p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)local_8a;
        }
        if ((bStack_89 == 2) || (bStack_91 == 2)) {
          *(undefined4 *)(param_1 + 0x90 + iVar25) = 0x55;
          *(float *)(param_1 + 0x260 + iVar25) = fVar51;
          p_Stack_ac = p_Stack_98;
          if ((bStack_89 != 2) && (bStack_91 != 2)) goto LAB_10029e4b;
          uVar35 = 0xd5;
        }
        else {
          *(float *)(param_1 + 0x260 + iVar25) = fVar51;
          *(undefined4 *)(param_1 + 0x90 + iVar25) =
               *(undefined4 *)
                (&DAT_100b0198 +
                (((int)(uint)bStack_91 * 2 | (uint)bStack_89) * 2 | (uint)p_Stack_98) * 4);
          p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)(uint)bStack_91;
LAB_10029e4b:
          uVar35 = *(undefined4 *)
                    (&DAT_100b0178 +
                    (((uint)bStack_91 * 2 | (uint)bStack_89) * 2 | (uint)p_Stack_98) * 4);
        }
        *(undefined4 *)(param_1 + 0x230 + iVar25) = uVar35;
        cVar21 = *(char *)(param_1 + 0x5860 + (int)local_88 * 4);
        if ((cVar21 == '\x05') || (iVar29 = 0x90, cVar21 == '\x06')) {
          iVar29 = 0x230;
        }
        puVar36 = (uint *)(iVar29 + param_1 + iVar25);
        puVar41 = (uint *)(param_1 + 0xdc00 + iVar25);
        uVar43 = puVar36[1];
        uVar42 = puVar36[2];
        uVar47 = puVar36[3];
        *puVar41 = *puVar36;
        puVar41[1] = uVar43;
        puVar41[2] = uVar42;
        puVar41[3] = uVar47;
        uVar43 = puVar36[5];
        uVar42 = puVar36[6];
        uVar47 = puVar36[7];
        puVar41[4] = puVar36[4];
        puVar41[5] = uVar43;
        puVar41[6] = uVar42;
        puVar41[7] = uVar47;
        uVar43 = puVar36[9];
        uVar42 = puVar36[10];
        uVar47 = puVar36[0xb];
        puVar41[8] = puVar36[8];
        puVar41[9] = uVar43;
        puVar41[10] = uVar42;
        puVar41[0xb] = uVar47;
        puVar41[0xc] = puVar36[0xc];
        local_90 = (PRTL_CRITICAL_SECTION_DEBUG)
                   FUN_10093fa1((void *)(*(int *)(param_1 + 0xd9b4) + 0x39c),puVar41);
        p_Var22 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xdb58 + (int)local_88 * 4);
        local_78 = CONCAT44(local_78._4_4_,p_Var22);
        if (local_90 != p_Var22) {
          p_Var23 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xd9b4);
          p_Stack_a8 = p_Var23;
          if (p_Var22 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            (**(code **)(*(int *)&p_Var22->Type + 0x1c))();
            p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            p_Stack_a0 = p_Var23[0x1d].CriticalSection;
            local_84 = (_LIST_ENTRY *)
                       ((((((iStack_38 + -1) * 0x10 | iStack_3c - 1U) << 3 | uStack_44) << 3 |
                         uStack_48) << 3 | uStack_4c) << 8 | uStack_50);
            p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a0;
            local_9c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if ((PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Stack_98 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                            &p_Stack_a8[0x1c].CreatorBackTraceIndexHigh;
              p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a0;
              do {
                local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                           ((uint)((int)&p_Var23->Type + (int)&p_Var22->Type) >> 1);
                p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)
                             p_Stack_98[(int)local_9c * 2].CriticalSection;
                p_Var39 = local_9c;
                if (((PRTL_CRITICAL_SECTION_DEBUG)p_Stack_98[(int)local_9c * 2].CriticalSection ==
                     (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
                   (*(_LIST_ENTRY **)(p_Stack_98 + (int)local_9c * 2) <= local_84)) {
                  param_1 = local_80;
                  if (local_84 <= *(_LIST_ENTRY **)(p_Stack_98 + (int)local_9c * 2)) break;
                  p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_9c->Type + 1);
                  local_9c = p_Var22;
                  p_Var39 = p_Var23;
                }
                p_Var23 = p_Var39;
                param_1 = local_80;
              } while (p_Var39 != p_Var22);
            }
            p_Var22 = local_9c;
            p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_9c * 0x40);
            p_Var33 = (LPCRITICAL_SECTION)&p_Stack_a8[0x1c].CreatorBackTraceIndexHigh;
            local_a4 = p_Var23;
            if (((local_9c == (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a0) ||
                (param_1 = local_80,
                *(_LIST_ENTRY **)((int)&p_Var23->Type + *(int *)p_Var33) != local_84)) ||
               (*(int *)((int)&p_Var23->CriticalSection + *(int *)p_Var33) != 0)) {
              p_Stack_a0 = p_Var33;
              if (p_Stack_a8[0x1d].CriticalSection == *(_RTL_CRITICAL_SECTION **)(p_Stack_a8 + 0x1d)
                 ) {
                lVar8 = (ulonglong)(uint)((int)*(_RTL_CRITICAL_SECTION **)(p_Stack_a8 + 0x1d) * 2) *
                        0x40;
                SVar31 = (SIZE_T)lVar8;
                if ((int)((ulonglong)lVar8 >> 0x20) != 0) {
                  SVar31 = 0xffffffff;
                }
                p_Stack_98 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100ad4a9(SVar31);
                if (p_Stack_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                  iVar37._0_2_ = p_Stack_a8[0x1d].Type;
                  iVar37._2_2_ = p_Stack_a8[0x1d].CreatorBackTraceIndex;
                  p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                  if (iVar37 != 0) {
                    uVar43 = 0;
                    do {
                      uVar47 = uVar43 + 1;
                      p_Var23 = p_Stack_a0->DebugInfo + uVar43 * 2;
                      WVar20 = p_Var23->CreatorBackTraceIndex;
                      p_Var12 = p_Var23->CriticalSection;
                      p_Var48 = (p_Var23->ProcessLocksList).Flink;
                      p_Var13 = (p_Var23->ProcessLocksList).Blink;
                      p_Var22 = p_Stack_98 + uVar43 * 2;
                      p_Var22->Type = p_Var23->Type;
                      p_Var22->CreatorBackTraceIndex = WVar20;
                      p_Var22->CriticalSection = p_Var12;
                      (p_Var22->ProcessLocksList).Flink = p_Var48;
                      (p_Var22->ProcessLocksList).Blink = p_Var13;
                      DVar14 = p_Var23->ContentionCount;
                      DVar15 = p_Var23->Flags;
                      uVar35 = *(undefined4 *)&p_Var23->CreatorBackTraceIndexHigh;
                      pDVar4 = &p_Stack_98[uVar43 * 2].EntryCount;
                      *pDVar4 = p_Var23->EntryCount;
                      pDVar4[1] = DVar14;
                      pDVar4[2] = DVar15;
                      pDVar4[3] = uVar35;
                      WVar20 = p_Var23[1].CreatorBackTraceIndex;
                      p_Var12 = p_Var23[1].CriticalSection;
                      p_Var48 = p_Var23[1].ProcessLocksList.Flink;
                      p_Var13 = p_Var23[1].ProcessLocksList.Blink;
                      p_Var22 = p_Stack_98 + uVar43 * 2 + 1;
                      p_Var22->Type = p_Var23[1].Type;
                      p_Var22->CreatorBackTraceIndex = WVar20;
                      p_Var22->CriticalSection = p_Var12;
                      (p_Var22->ProcessLocksList).Flink = p_Var48;
                      (p_Var22->ProcessLocksList).Blink = p_Var13;
                      DVar14 = p_Var23[1].ContentionCount;
                      DVar15 = p_Var23[1].Flags;
                      uVar35 = *(undefined4 *)&p_Var23[1].CreatorBackTraceIndexHigh;
                      pDVar4 = &p_Stack_98[uVar43 * 2 + 1].EntryCount;
                      *pDVar4 = p_Var23[1].EntryCount;
                      pDVar4[1] = DVar14;
                      pDVar4[2] = DVar15;
                      pDVar4[3] = uVar35;
                      uVar42._0_2_ = p_Stack_a8[0x1d].Type;
                      uVar42._2_2_ = p_Stack_a8[0x1d].CreatorBackTraceIndex;
                      p_Var22 = local_9c;
                      uVar43 = uVar47;
                      param_1 = local_80;
                    } while (uVar47 < uVar42);
                  }
                  thunk_FUN_100ad48c(p_Stack_a0->DebugInfo);
                  p_Stack_a0->DebugInfo = p_Stack_98;
                  p_Var23 = p_Stack_a8 + 0x1d;
                  iVar6._0_2_ = p_Var23->Type;
                  iVar6._2_2_ = p_Var23->CreatorBackTraceIndex;
                  p_Var23->Type = (short)(iVar6 << 1);
                  p_Var23->CreatorBackTraceIndex = (short)((uint)(iVar6 << 1) >> 0x10);
                }
              }
              p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a8[0x1d].CriticalSection;
              p_Var39 = p_Stack_ac;
              p_Var23 = local_a4;
              if (p_Var22 < p_Stack_ac) {
                do {
                  p_Var7 = p_Stack_a0->DebugInfo;
                  puVar45 = (undefined1 *)((int)&p_Var39[-1].SpareWORD + 1);
                  p_Var44 = p_Var7 + (int)p_Var39 * 2 + -2;
                  WVar20 = p_Var44->CreatorBackTraceIndex;
                  p_Var12 = p_Var44->CriticalSection;
                  p_Var48 = (p_Var44->ProcessLocksList).Flink;
                  p_Var13 = (p_Var44->ProcessLocksList).Blink;
                  p_Var23 = p_Var7 + (int)p_Var39 * 2;
                  p_Var23->Type = p_Var44->Type;
                  p_Var23->CreatorBackTraceIndex = WVar20;
                  p_Var23->CriticalSection = p_Var12;
                  (p_Var23->ProcessLocksList).Flink = p_Var48;
                  (p_Var23->ProcessLocksList).Blink = p_Var13;
                  pDVar4 = &p_Var7[(int)p_Var39 * 2 + -2].EntryCount;
                  DVar14 = pDVar4[1];
                  DVar15 = pDVar4[2];
                  uVar35 = pDVar4[3];
                  pDVar5 = &p_Var7[(int)p_Var39 * 2].EntryCount;
                  *pDVar5 = *pDVar4;
                  pDVar5[1] = DVar14;
                  pDVar5[2] = DVar15;
                  pDVar5[3] = uVar35;
                  p_Var23 = p_Var7 + (int)p_Var39 * 2 + -1;
                  WVar20 = p_Var23->CreatorBackTraceIndex;
                  p_Var12 = p_Var23->CriticalSection;
                  p_Var48 = (p_Var23->ProcessLocksList).Flink;
                  p_Var13 = (p_Var23->ProcessLocksList).Blink;
                  p_Var44 = p_Var7 + (int)p_Var39 * 2 + 1;
                  p_Var44->Type = p_Var23->Type;
                  p_Var44->CreatorBackTraceIndex = WVar20;
                  p_Var44->CriticalSection = p_Var12;
                  (p_Var44->ProcessLocksList).Flink = p_Var48;
                  (p_Var44->ProcessLocksList).Blink = p_Var13;
                  pDVar4 = &p_Var7[(int)p_Var39 * 2 + -1].EntryCount;
                  DVar14 = pDVar4[1];
                  DVar15 = pDVar4[2];
                  uVar35 = pDVar4[3];
                  pDVar5 = &p_Var7[(int)p_Var39 * 2 + 1].EntryCount;
                  *pDVar5 = *pDVar4;
                  pDVar5[1] = DVar14;
                  pDVar5[2] = DVar15;
                  pDVar5[3] = uVar35;
                  p_Var39 = (PRTL_CRITICAL_SECTION_DEBUG)puVar45;
                } while (p_Var22 < puVar45);
                p_Var23 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var22 << 6);
                param_1 = local_80;
              }
              p_Var22 = p_Stack_a0->DebugInfo;
              *(_LIST_ENTRY **)((int)&p_Var23->Type + (int)p_Var22) = local_84;
              *(undefined4 *)((int)&p_Var23->CriticalSection + (int)p_Var22) = 0;
              p_Var22 = p_Stack_a0->DebugInfo;
              puVar36 = (uint *)((int)&p_Var22->Type + (int)&(p_Var23->ProcessLocksList).Flink);
              *puVar36 = uStack_50;
              puVar36[1] = uStack_4c;
              puVar36[2] = uStack_48;
              puVar36[3] = uStack_44;
              puVar40 = (undefined4 *)((int)&p_Var23->Flags + (int)p_Var22);
              *puVar40 = uStack_40;
              puVar40[1] = iStack_3c;
              puVar40[2] = iStack_38;
              puVar40[3] = uStack_34;
              puVar40 = (undefined4 *)((int)&p_Var22->Type + (int)&p_Var23[1].ProcessLocksList);
              *puVar40 = uStack_30;
              puVar40[1] = uStack_2c;
              puVar40[2] = uStack_28;
              puVar40[3] = uStack_24;
              *(undefined4 *)((int)&p_Var23[1].Flags + (int)p_Var22) = uStack_20;
              p_Stack_ac = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100ad475(0x2d0);
              if (p_Stack_ac != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                FUN_100ada8e((int *)p_Stack_ac,0,0x2d0);
              }
              *(PRTL_CRITICAL_SECTION_DEBUG *)
               ((int)&p_Var23[1].CreatorBackTraceIndexHigh + (int)p_Stack_a0->DebugInfo) =
                   p_Stack_ac;
              p_Stack_a8[0x1d].CriticalSection =
                   (_RTL_CRITICAL_SECTION *)
                   ((int)&(p_Stack_a8[0x1d].CriticalSection)->DebugInfo + 1);
              p_Var33 = p_Stack_a0;
            }
            iVar25 = *(int *)((int)&p_Var23[1].CreatorBackTraceIndexHigh + (int)p_Var33->DebugInfo);
            if (iVar25 != 0) {
              uVar43 = 0;
              do {
                if (*(int *)(iVar25 + 0x1c + uVar43 * 0x24) == (uint)local_78) {
                  *(undefined1 *)(iVar25 + 0x20 + uVar43 * 0x24) = 0;
                  break;
                }
                uVar43 = uVar43 + 1;
              } while (uVar43 < 0x14);
            }
          }
          *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1 + 0xdb58 + (int)local_88 * 4) = local_90;
        }
        pbVar9 = (byte *)(param_1 + 0xd974 + ((int)local_88 >> 3));
        *pbVar9 = *pbVar9 & ~('\x01' << ((uint)local_88 & 7));
        uVar43 = 0;
        bVar50 = p_Stack_b4 != (_LIST_ENTRY *)0x0;
        if (bVar50) {
          for (; ((uint)p_Stack_b4 >> uVar43 & 1) == 0; uVar43 = uVar43 + 1) {
          }
        }
      }
      FUN_10092de6(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),0,8,param_1 + 0xdb58);
      iVar25 = extraout_ECX;
    }
    else if (*(int *)(param_1 + 0xdac8) != 0) {
      FUN_10092de6(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),0,1,param_1 + 0xd9d8);
      *(uint *)(param_1 + 0xd974) = *(uint *)(param_1 + 0xd974) & 0xfffffffe;
      iVar25 = extraout_ECX_00;
    }
  }
  iVar29 = iStack_7c;
  if ((*(char *)(param_1 + 0xd97f) != '\0') || (iStack_7c != param_1)) {
    FUN_10092efa(*(void **)(param_1 + 0xd9b0),*(int *)(param_1 + 0x10),iVar25,0x10,param_1 + 0xdb8c,
                 param_1 + 0x6a8,param_1 + 0x6ec);
    *(undefined1 *)(param_1 + 0xd97f) = 0;
  }
  if ((*(char *)(param_1 + 0xd980) != '\0') || (iVar29 != param_1)) {
    iVar25 = *(int *)(param_1 + 0xdbcc);
    if (iVar25 == *(int *)(param_1 + 0xd9d0)) {
      iVar29 = 0x2a;
    }
    else {
      iVar29 = *(int *)(param_1 + 0xdbd8);
    }
    iVar37 = *(int *)(param_1 + 0x10) * 0x1510;
    iVar30 = *(int *)(param_1 + 0xd9b0);
    if (((iVar25 != *(int *)(iVar37 + 0x7c4 + iVar30)) ||
        (iVar29 != *(int *)(iVar37 + 0x7c8 + iVar30))) || (*(int *)(iVar37 + 0x7cc + iVar30) != 0))
    {
      *(int *)(iVar37 + 0x7c4 + iVar30) = iVar25;
      *(int *)(iVar37 + 0x7c8 + iVar30) = iVar29;
      *(undefined4 *)(iVar37 + 0x7cc + iVar30) = 0;
      piVar32 = *(int **)(iVar37 + 0x514 + iVar30);
      (**(code **)(*piVar32 + 0x4c))(piVar32,iVar25);
    }
    *(undefined1 *)(param_1 + 0xd980) = 0;
  }
  piVar32 = *(int **)(param_1 + 0xdacc);
  if (piVar32 != (int *)0x0) {
    p_Stack_64 = (_LIST_ENTRY *)0x0;
    iStack_60 = 0;
    bVar38 = (byte)*(undefined4 *)(param_1 + 0xdae0);
    uStack_5c = (uint)piVar32[5] >> (bVar38 & 0x1f);
    if (uStack_5c == 0) {
      uStack_5c = uStack_54;
    }
    uStack_58 = (uint)piVar32[6] >> (bVar38 & 0x1f);
    if (uStack_58 == 0) {
      uStack_58 = 1;
    }
    (**(code **)(*piVar32 + 0xc))();
  }
  iVar29 = 0x478;
  iVar25 = *(int *)(param_1 + 0xdadc);
  if (*(char *)(param_1 + 0x5955) == '\0') {
    iVar29 = 0x410;
  }
  if (((iVar25 != 0) && (*(int *)(iVar29 + param_1) != 0)) && (*(int *)(iVar29 + 4 + param_1) != 0))
  {
    p_Stack_64 = (_LIST_ENTRY *)0x0;
    iStack_60 = 0;
    bVar38 = (byte)*(undefined4 *)(param_1 + 0xdb00);
    uStack_5c = *(uint *)(iVar25 + 0x14) >> (bVar38 & 0x1f);
    if (uStack_5c == 0) {
      uStack_5c = uStack_54;
    }
    uStack_58 = *(uint *)(iVar25 + 0x18) >> (bVar38 & 0x1f);
    if (uStack_58 == 0) {
      uStack_58 = 1;
    }
    (**(code **)(**(int **)(param_1 + 0xdadc) + 0xc))();
  }
  return bStack_ad;
}

