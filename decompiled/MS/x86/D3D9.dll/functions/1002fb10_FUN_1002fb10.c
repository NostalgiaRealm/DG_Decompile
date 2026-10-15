/*
 * FUN_1002fb10 at 1002fb10
 * uint __fastcall FUN_1002fb10(undefined4 * param_1)
 * Address ranges: 1002fb10-10032c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1003230b) */
/* WARNING: Removing unreachable block (ram,0x1003277d) */
/* WARNING: Removing unreachable block (ram,0x10031508) */
/* WARNING: Removing unreachable block (ram,0x100314ee) */

uint __fastcall FUN_1002fb10(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  float *pfVar3;
  float *pfVar4;
  DWORD *pDVar5;
  DWORD *pDVar6;
  byte bVar7;
  ULONG_PTR UVar8;
  DWORD DVar9;
  _LIST_ENTRY *p_Var10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  longlong lVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _RTL_CRITICAL_SECTION *p_Var16;
  _LIST_ENTRY *p_Var17;
  DWORD DVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  uint uVar22;
  WORD WVar23;
  undefined1 uVar24;
  char cVar25;
  byte bVar26;
  byte bVar27;
  PRTL_CRITICAL_SECTION_DEBUG p_Var28;
  PRTL_CRITICAL_SECTION_DEBUG p_Var29;
  PRTL_CRITICAL_SECTION_DEBUG p_Var30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  SIZE_T SVar38;
  int *piVar39;
  uint *puVar40;
  int iVar41;
  int *piVar42;
  uint *puVar43;
  undefined4 uVar44;
  int iVar45;
  undefined4 extraout_ECX;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_00;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_01;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_02;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_03;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_04;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_05;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_06;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_07;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_08;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_09;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_10;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_11;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_12;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_13;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_14;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_15;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_16;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_17;
  PRTL_CRITICAL_SECTION_DEBUG extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 *puVar46;
  uint uVar47;
  uint uVar48;
  PRTL_CRITICAL_SECTION_DEBUG p_Var49;
  undefined1 *puVar50;
  LPCRITICAL_SECTION p_Var51;
  PRTL_CRITICAL_SECTION_DEBUG p_Var52;
  undefined4 *puVar53;
  bool bVar54;
  float fVar55;
  ulonglong uVar56;
  undefined8 uVar57;
  float fStack_b4;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_b0;
  LPCRITICAL_SECTION local_ac;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_a8;
  int iStack_a4;
  PRTL_CRITICAL_SECTION_DEBUG local_a0;
  PRTL_CRITICAL_SECTION_DEBUG local_9c;
  undefined4 uStack_98;
  PRTL_CRITICAL_SECTION_DEBUG local_94;
  undefined4 uStack_90;
  PRTL_CRITICAL_SECTION_DEBUG local_8c;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_88;
  undefined4 *local_84;
  PRTL_CRITICAL_SECTION_DEBUG local_80;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 *puStack_68;
  LPCRITICAL_SECTION p_Stack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
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
  
  uStack_90._0_3_ = CONCAT12(1,(undefined2)uStack_90);
  local_84 = param_1;
  local_78 = local_78 & 0xffffffff00000000;
  local_8c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (param_1[0x3d4] != 0) {
    for (; ((uint)param_1[0x3d4] >> (int)local_8c & 1) == 0;
        local_8c = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_8c->Type + 1)) {
    }
  }
  if (*(char *)((int)param_1 + 0x7642) == '\0') {
    if (*(char *)((int)param_1 + 0xf6a2) != '\0') {
      iVar33 = param_1[0x3dcb];
      if (iVar33 == 0) {
        iVar37 = 0;
        uVar48 = 0;
      }
      else {
        iVar37 = *(int *)(iVar33 + 4);
        uVar48 = *(uint *)(iVar33 + 0x40);
      }
      FUN_10057b79(param_1,-(uint)(param_1[0x3dd0] != 0) & param_1[0x3dd0] + 0x18,iVar37,uVar48);
      *(undefined1 *)((int)param_1 + 0xf6a2) = 0;
    }
    local_94 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3da6];
    uVar48 = 0;
    bVar54 = local_94 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    if (!bVar54) {
      for (; ((uint)local_94 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
      }
    }
    while (!bVar54) {
      uVar47 = uVar48 & 0xff;
      pbVar13 = (byte *)((int)&local_94 + ((int)uVar48 >> 3));
      *pbVar13 = *pbVar13 & ~('\x01' << (uVar48 & 7));
      iVar33 = param_1[0x3dae];
      local_ac = *(LPCRITICAL_SECTION *)(iVar33 + 0x13c);
      local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x144);
      local_54 = param_1[0x39e];
      bVar54 = (*(byte *)((int)&local_54 + ((int)uVar47 >> 3)) >> (uVar48 & 7) & 1) != 0;
      local_80 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x140);
      piVar39 = (int *)param_1[uVar47 + 0x3e5e];
      local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT31(local_a0._1_3_,bVar54);
      if (piVar39 == (int *)0x0) {
        p_Var28 = local_9c;
        if ((void *)param_1[uVar47 + 0x3e63] != (void *)0x0) {
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)
                    FUN_1007bf54((void *)param_1[uVar47 + 0x3e63],bVar54);
        }
      }
      else if (((((piVar39 != (int *)param_1[0x3e0c]) && (piVar39 != (int *)param_1[0x3e0d])) &&
                (piVar39 != (int *)param_1[0x3e0e])) &&
               ((piVar39 != (int *)param_1[0x3e0f] && (piVar39 != (int *)param_1[0x3e10])))) ||
              (cVar25 = (**(code **)(*piVar39 + 0x80))(), p_Var28 = local_9c, cVar25 != '\0')) {
        piVar39 = (int *)param_1[uVar47 + 0x3e5e];
        if ((piVar39[0xd] == 2) || (piVar39[0xd] == 5)) {
          local_80 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar39 + 0x60))(local_a0);
          p_Var28 = local_9c;
        }
        else {
          local_ac = (LPCRITICAL_SECTION)(**(code **)(*piVar39 + 0x60))(local_a0);
          p_Var28 = local_9c;
        }
      }
      param_1[uVar47 + 0x3e4f] = local_ac;
      param_1[uVar47 + 0x3e59] = p_Var28;
      uVar48 = 0;
      bVar54 = local_94 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      if (!bVar54) {
        for (; ((uint)local_94 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
        }
      }
      param_1[uVar47 + 0x3e54] = local_80;
    }
    p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3d98];
    param_1[0x3da6] = 0;
    uVar48 = 0;
    bVar54 = p_Stack_88 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    if (!bVar54) {
      for (; ((uint)p_Stack_88 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
      }
    }
    while (!bVar54) {
      uVar47 = uVar48 & 0xff;
      pbVar13 = (byte *)((int)&p_Stack_88 + ((int)uVar48 >> 3));
      *pbVar13 = *pbVar13 & ~('\x01' << (uVar48 & 7));
      iVar33 = param_1[0x3dae];
      local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x13c);
      local_54 = param_1[0x39d];
      bVar54 = (*(byte *)((int)&local_54 + ((int)uVar47 >> 3)) >> (uVar48 & 7) & 1) != 0;
      local_94 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x140);
      piVar39 = (int *)param_1[uVar47 + 0x3e1b];
      local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT31(local_a0._1_3_,bVar54);
      local_80 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x144);
      if (piVar39 == (int *)0x0) {
        p_Var28 = local_9c;
        p_Var29 = local_94;
        p_Var30 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x144);
        if ((void *)param_1[uVar47 + 0x3e2b] != (void *)0x0) {
          p_Var30 = (PRTL_CRITICAL_SECTION_DEBUG)
                    FUN_1007bf54((void *)param_1[uVar47 + 0x3e2b],bVar54);
          p_Var28 = local_9c;
          p_Var29 = local_94;
        }
      }
      else if (((((piVar39 != (int *)param_1[0x3e0c]) && (piVar39 != (int *)param_1[0x3e0d])) &&
                (piVar39 != (int *)param_1[0x3e0e])) &&
               ((piVar39 != (int *)param_1[0x3e0f] && (piVar39 != (int *)param_1[0x3e10])))) ||
              (cVar25 = (**(code **)(*piVar39 + 0x80))(), p_Var28 = local_9c, p_Var29 = local_94,
              p_Var30 = local_80, cVar25 != '\0')) {
        piVar39 = (int *)param_1[uVar47 + 0x3e1b];
        if ((piVar39[0xd] == 2) || (piVar39[0xd] == 5)) {
          p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar39 + 0x60))(local_a0);
          p_Var28 = local_9c;
          p_Var30 = local_80;
        }
        else {
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar39 + 0x60))(local_a0);
          p_Var29 = local_94;
          p_Var30 = local_80;
        }
      }
      if (uVar47 < 8) {
        param_1[uVar47 + 0x3dd3] = 0;
      }
      param_1[uVar47 + 0x3ddb] = p_Var28;
      uVar48 = 0;
      bVar54 = p_Stack_88 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      if (!bVar54) {
        for (; ((uint)p_Stack_88 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
        }
      }
      param_1[uVar47 + 0x3deb] = p_Var29;
      param_1[uVar47 + 0x3dfb] = p_Var30;
    }
    param_1[0x3d98] = 0;
  }
  iVar33 = param_1[0x3dac];
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar33 + 0x4a0));
  p_Var29 = local_8c;
  puStack_68 = *(undefined4 **)(iVar33 + 0x49c);
  p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
  *(undefined4 **)(iVar33 + 0x49c) = param_1;
  local_54 = 1;
  if (*(char *)(param_1 + 0x3d9a) == '\0') {
    uStack_98 = CONCAT13(1,(undefined3)uStack_98);
    if (puStack_68 != param_1) goto LAB_1002fe15;
  }
  else {
LAB_1002fe15:
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      if (param_1[0x3dcb] == 0) {
        if ((param_1[0x1d8c] == 0) ||
           (uStack_98 = CONCAT13(1,(undefined3)uStack_98), param_1[0x3e8c] != 0)) {
          uStack_98 = uStack_98 & 0xffffff;
        }
        puVar43 = param_1 + 0x1d5d;
        puVar40 = param_1 + 0x3f0;
        pcVar1 = (char *)((int)param_1 + 0x764e);
        uVar47 = (1 << ((byte)local_8c & 0x1f)) - 1;
        uStack_90._0_2_ = CONCAT11(*pcVar1,(undefined1)uStack_90);
        pcVar2 = (char *)((int)param_1 + 0x763e);
        uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT13(*pcVar2,(undefined3)uStack_90);
        uVar48 = param_1[0x3f1];
        if ((param_1[0x1d5c] & uVar47) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar34 = local_78._4_4_;
          param_1 = local_84;
        }
        else {
          uVar34 = uVar48 & 0x20000000;
        }
        if ((*puVar43 & uVar47) == 0) {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar47 = local_78._4_4_;
        }
        else {
          uVar47 = uVar48 & 0x40000000;
        }
        if (*pcVar2 == '\0') {
          uVar31 = 0x700000;
        }
        else {
          uVar31 = uVar48 & 0x700000;
        }
        if (uStack_98._3_1_ == '\0') {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar35 = local_78._4_4_;
        }
        else {
          uVar35 = uVar48 & 0x1000000;
        }
        if (*pcVar1 == '\0') {
          local_78 = 0;
          local_78._4_4_ = 0;
          uVar36 = local_78._4_4_;
        }
        else {
          uVar36 = uVar48 & 0x10000000;
        }
        uVar32 = uVar48 & 0x8e8fffff;
        if ((uVar48 & 0x2000000) == 0) {
          uVar32 = uVar48 & 0x828fffff;
        }
        if ((param_1[0x3e73] == *(int *)(param_1[0x3dae] + 0xe8)) ||
           (local_ac = (LPCRITICAL_SECTION)0x0, param_1[0x3e73] == *(int *)(param_1[0x3dae] + 0x108)
           )) {
          local_ac = (LPCRITICAL_SECTION)0x1;
        }
        iVar33 = FUN_1003764a(param_1 + 0x3db7,param_1 + 0x3be,*puVar40,
                              uVar32 | uVar34 | uVar47 | uVar31 | uVar35 | uVar36,(int)local_8c,
                              (uint)local_ac,(undefined4 *)(uint)*(byte *)((int)param_1 + 0x83));
        p_Var28 = extraout_ECX_00;
        if (iVar33 == 0) goto LAB_10030164;
        goto LAB_10030201;
      }
      iVar33 = *(int *)(param_1[0x3dcb] + 4);
      cVar25 = *(char *)(iVar33 + 0x126d);
      if ((param_1[0x1d8c] == 0) ||
         (uStack_98 = CONCAT13(1,(undefined3)uStack_98), param_1[0x3e8c] != 0)) {
        uStack_98 = uStack_98 & 0xffffff;
      }
      pcVar1 = (char *)((int)param_1 + 0x764e);
      uVar48 = *(uint *)(iVar33 + 0x1214);
      puVar43 = param_1 + 0x1d5d;
      puVar40 = param_1 + 0x3f0;
      pcVar2 = (char *)((int)param_1 + 0x763e);
      uStack_90._0_2_ = CONCAT11(*pcVar2,(undefined1)uStack_90);
      uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)
                  CONCAT22(CONCAT11(*pcVar1,cVar25),(undefined2)uStack_90);
      uVar47 = param_1[0x3f1];
      if ((param_1[0x1d5c] & uVar48) == 0) {
        local_78 = 0;
        local_78._4_4_ = 0;
        uVar34 = local_78._4_4_;
        param_1 = local_84;
      }
      else {
        uVar34 = uVar47 & 0x20000000;
      }
      local_ac = (LPCRITICAL_SECTION)0x0;
      if ((*puVar43 & uVar48) == 0) {
        local_78 = 0;
        local_78._4_4_ = 0;
        uVar48 = local_78._4_4_;
      }
      else {
        uVar48 = uVar47 & 0x40000000;
      }
      if (*pcVar2 == '\0') {
        uVar31 = 0x700000;
      }
      else {
        uVar31 = uVar47 & 0x700000;
      }
      if (uStack_98._3_1_ == '\0') {
        local_78 = 0;
        local_78._4_4_ = 0;
        uVar35 = local_78._4_4_;
      }
      else {
        uVar35 = uVar47 & 0x1000000;
      }
      if (cVar25 == '\x03') {
        local_78 = 0;
        local_78._4_4_ = 0;
        uVar36 = local_78._4_4_;
      }
      else {
        uVar36 = uVar47 & 0x2000000;
      }
      if (*pcVar1 == '\0') {
        local_78 = 0;
        local_78._4_4_ = 0;
        uVar32 = local_78._4_4_;
      }
      else {
        uVar32 = uVar47 & 0x10000000;
      }
      uVar22 = uVar47 & 0x8c8fffff;
      if (uVar36 == 0) {
        uVar22 = uVar47 & 0x808fffff;
      }
      iVar33 = FUN_10037261((void *)(param_1[0x3dcb] + 8),*puVar40,
                            uVar22 | uVar34 | uVar48 | uVar31 | uVar35 | uVar36 | uVar32,
                            param_1[0x3a0],param_1[0x3a1]);
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT31((int3)((uint)extraout_ECX >> 8),iVar33 != 0);
    }
    else {
LAB_10030164:
      if (*(char *)((int)param_1 + 0x7642) == '\0') {
        iVar33 = param_1[0x3dae];
        if ((PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004 < p_Var29) {
          p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004;
        }
        if ((param_1[0x3e73] == *(int *)(iVar33 + 0xe8)) ||
           (param_1[0x3e73] == *(int *)(iVar33 + 0x108))) {
          bVar54 = true;
        }
        else {
          bVar54 = false;
        }
        if (*(char *)(param_1 + 0x1d90) == '\0') {
          p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0xa;
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          if (bVar54) {
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0xa;
          }
        }
        else {
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x5;
        }
        iVar33 = *(int *)(iVar33 + 0x8c +
                         (int)((int)&p_Var28->Type + *(int *)(&DAT_100d52d0 + (int)p_Var29 * 4)) * 4
                         );
      }
      else if (((param_1[0x3e0d] == 0) && (param_1[0x3e0e] == 0)) && (param_1[0x3e0f] == 0)) {
        iVar33 = *(int *)(param_1[0x3dae] + 200);
      }
      else {
        iVar33 = *(int *)(param_1[0x3dae] + 0xd0);
      }
LAB_10030201:
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT31((int3)((uint)p_Var28 >> 8),uStack_90._2_1_);
    }
    *(undefined1 *)(param_1 + 0x3d9a) = 0;
    if (param_1[0x3e74] != iVar33) {
      param_1[0x3e74] = iVar33;
      *(undefined1 *)(param_1 + 0x408c) = 1;
    }
    uStack_98 = CONCAT13((char)p_Var28,(undefined3)uStack_98);
  }
  if ((*(byte *)(param_1 + 0x3d9d) & 1) != 0) {
    FUN_10028b85((float *)(param_1 + 0x1d94),param_1 + 0x2d94,'\x01');
    puVar46 = param_1 + 0x2d94;
    puVar53 = param_1 + 0x1a90;
    for (iVar33 = 0x10; iVar33 != 0; iVar33 = iVar33 + -1) {
      *puVar53 = *puVar46;
      puVar46 = puVar46 + 1;
      puVar53 = puVar53 + 1;
    }
    local_84[0x3d9d] = local_84[0x3d9d] & 0xfffffffe;
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    param_1 = local_84;
  }
  if (*(char *)((int)param_1 + 0xf671) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3db1];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),p_Stack_b0,0,4,0,&p_Stack_64);
    puVar46 = local_84;
    p_Var28 = extraout_ECX_01;
    if (-1 < iVar33) {
      puVar43 = param_1 + 0x1a44;
      p_Var51 = p_Stack_64;
      for (iVar33 = 0x308; iVar33 != 0; iVar33 = iVar33 + -1) {
        p_Var51->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*puVar43;
        puVar43 = puVar43 + 1;
        p_Var51 = (LPCRITICAL_SECTION)&p_Var51->LockCount;
      }
      (**(code **)(**(int **)(local_84[0x3dad] + 4) + 0x3c))
                (*(int **)(local_84[0x3dad] + 4),p_Stack_b0,0);
      p_Var28 = extraout_ECX_02;
      param_1 = puVar46;
    }
    *(undefined1 *)((int)param_1 + 0xf671) = 0;
  }
  if (((param_1[0x1a48] & 0xf800) != 0) && (*(char *)((int)param_1 + 0xf672) != '\0')) {
    uVar48 = 0;
    do {
      uVar47 = 0;
      bVar54 = param_1[uVar48 + 0x3d9d] != 0;
      if (bVar54) {
        for (; ((uint)param_1[uVar48 + 0x3d9d] >> uVar47 & 1) == 0; uVar47 = uVar47 + 1) {
        }
      }
      if (bVar54) {
        pbVar13 = (byte *)((int)param_1 + ((int)uVar47 >> 3) + uVar48 * 4 + 0xf674);
        *pbVar13 = *pbVar13 & ~('\x01' << (uVar47 & 7));
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar48 << 5);
        while (puVar50 = (undefined1 *)((int)&p_Stack_b0->Type + (uVar47 & 0xff)),
              (int)puVar50 < 0x100) {
          FUN_10028b85((float *)(param_1 + (int)puVar50 * 0x10 + 0x1d94),
                       param_1 + (int)puVar50 * 0x10 + 0x2d94,'\x01');
          uVar47 = 0;
          bVar54 = param_1[uVar48 + 0x3d9d] == 0;
          if (!bVar54) {
            for (; ((uint)param_1[uVar48 + 0x3d9d] >> uVar47 & 1) == 0; uVar47 = uVar47 + 1) {
            }
          }
          if (bVar54) break;
          pbVar13 = (byte *)((int)param_1 + ((int)uVar47 >> 3) + uVar48 * 4 + 0xf674);
          *pbVar13 = *pbVar13 & ~('\x01' << (uVar47 & 7));
        }
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 < 8);
    (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0xc0))
              (*(int **)(param_1[0x3dad] + 4),param_1[0x3db3],0,0,param_1 + 0x1d94,0,0);
    *(undefined1 *)((int)param_1 + 0xf672) = 0;
    p_Var28 = extraout_ECX_03;
  }
  if (*(char *)((int)param_1 + 0xf6a3) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dd1];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),p_Stack_b0,0,4,0,&p_Stack_64);
    puVar46 = local_84;
    p_Var28 = extraout_ECX_04;
    if (-1 < iVar33) {
      puVar43 = param_1 + 0x1910;
      p_Var51 = p_Stack_64;
      for (iVar33 = 0x134; iVar33 != 0; iVar33 = iVar33 + -1) {
        p_Var51->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*puVar43;
        puVar43 = puVar43 + 1;
        p_Var51 = (LPCRITICAL_SECTION)&p_Var51->LockCount;
      }
      (**(code **)(**(int **)(local_84[0x3dad] + 4) + 0x3c))
                (*(int **)(local_84[0x3dad] + 4),p_Stack_b0,0);
      p_Var28 = extraout_ECX_05;
      param_1 = puVar46;
    }
    *(undefined1 *)((int)param_1 + 0xf6a3) = 0;
  }
  if (*(char *)((int)param_1 + 0xf696) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dce];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),p_Stack_b0,0,4,0,&p_Stack_64);
    puVar46 = local_84;
    p_Var28 = extraout_ECX_06;
    if (-1 < iVar33) {
      puVar43 = param_1 + 0x1520;
      p_Var51 = p_Stack_64;
      for (iVar33 = 0x3b0; iVar33 != 0; iVar33 = iVar33 + -1) {
        p_Var51->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*puVar43;
        puVar43 = puVar43 + 1;
        p_Var51 = (LPCRITICAL_SECTION)&p_Var51->LockCount;
      }
      (**(code **)(**(int **)(local_84[0x3dad] + 4) + 0x3c))
                (*(int **)(local_84[0x3dad] + 4),p_Stack_b0,0);
      p_Var28 = extraout_ECX_07;
      param_1 = puVar46;
    }
    *(undefined1 *)((int)param_1 + 0xf696) = 0;
  }
  if (*(char *)(param_1 + 0x3da5) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dcc];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),p_Stack_b0,0,4,0,&p_Stack_64);
    puVar46 = local_84;
    p_Var28 = extraout_ECX_08;
    if (-1 < iVar33) {
      puVar43 = param_1 + 0x1464;
      p_Var51 = p_Stack_64;
      for (iVar33 = 0xbc; iVar33 != 0; iVar33 = iVar33 + -1) {
        p_Var51->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*puVar43;
        puVar43 = puVar43 + 1;
        p_Var51 = (LPCRITICAL_SECTION)&p_Var51->LockCount;
      }
      (**(code **)(**(int **)(local_84[0x3dad] + 4) + 0x3c))
                (*(int **)(local_84[0x3dad] + 4),p_Stack_b0,0);
      p_Var28 = extraout_ECX_09;
      param_1 = puVar46;
    }
    *(undefined1 *)(param_1 + 0x3da5) = 0;
  }
  if (*(char *)((int)param_1 + 0xf695) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x1f];
    uVar44 = param_1[0x3dcd];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),uVar44,0,4,0,&p_Stack_64);
    p_Var28 = extraout_ECX_10;
    if (-1 < iVar33) {
      FUN_100cff00(&p_Stack_64->DebugInfo,param_1 + 0x414,(uint)p_Stack_b0);
      (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x3c))(*(int **)(param_1[0x3dad] + 4),uVar44,0)
      ;
      p_Var28 = extraout_ECX_11;
    }
    *(undefined1 *)((int)param_1 + 0xf695) = 0;
  }
  puVar46 = puStack_68;
  if (puStack_68 != param_1) {
    local_78 = *(ulonglong *)(param_1 + 0x3dcc);
    p_Stack_64 = (LPCRITICAL_SECTION)param_1[0x3dd1];
    iStack_60 = param_1[0x3dce];
    uStack_5c = param_1[0x3dcf];
    (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x1c))
              (*(int **)(param_1[0x3dad] + 4),3,2,&local_78);
    (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x40))
              (*(int **)(param_1[0x3dad] + 4),3,3,(int)&local_78 + 4);
    (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x58))
              (*(int **)(param_1[0x3dad] + 4),3,2,&uStack_98);
    p_Var28 = extraout_ECX_12;
  }
  if (*(char *)((int)param_1 + 0xf697) != '\0') {
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dcf];
    iVar33 = (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x38))
                       (*(int **)(param_1[0x3dad] + 4),p_Stack_b0,0,4,0,&p_Stack_64);
    puVar53 = local_84;
    p_Var28 = extraout_ECX_13;
    if (-1 < iVar33) {
      puVar43 = param_1 + 0x18d0;
      p_Var51 = p_Stack_64;
      for (iVar33 = 0x40; iVar33 != 0; iVar33 = iVar33 + -1) {
        p_Var51->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*puVar43;
        puVar43 = puVar43 + 1;
        p_Var51 = (LPCRITICAL_SECTION)&p_Var51->LockCount;
      }
      (**(code **)(**(int **)(local_84[0x3dad] + 4) + 0x3c))
                (*(int **)(local_84[0x3dad] + 4),p_Stack_b0,0);
      p_Var28 = extraout_ECX_14;
      puVar46 = puStack_68;
      param_1 = puVar53;
    }
    *(undefined1 *)((int)param_1 + 0xf697) = 0;
  }
  if ((*(char *)((int)param_1 + 0xf6a1) != '\0') || (puVar46 != param_1)) {
    local_ac = (LPCRITICAL_SECTION)param_1[0x3e0c];
    if (local_ac == (LPCRITICAL_SECTION)0x0) {
      local_ac = (LPCRITICAL_SECTION)param_1[0x3e10];
      fVar55 = 1.0;
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x3f800000;
      if (local_ac != (LPCRITICAL_SECTION)0x0) goto LAB_10030623;
    }
    else {
LAB_10030623:
      UVar8 = local_ac->SpinCount;
      iVar33 = (**(code **)(local_ac->DebugInfo + 1))(0);
      DVar9 = p_Stack_b0->Flags;
      fStack_b4 = (float)((double)iVar33 + (double)(&DAT_100d97a0)[-(iVar33 >> 0x1f)]) /
                  (float)((double)(int)UVar8 + (double)(&DAT_100d97a0)[-((int)UVar8 >> 0x1f)]);
      iVar33 = (*(code *)(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type)[1].CriticalSection)(0);
      fVar55 = (float)((double)iVar33 + (double)(&DAT_100d97a0)[-(iVar33 >> 0x1f)]) /
               (float)((double)(int)DVar9 + (double)(&DAT_100d97a0)[-((int)DVar9 >> 0x1f)]);
      p_Var28 = p_Stack_b0;
    }
    piVar39 = param_1 + 0x394;
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(int)((float)(int)param_1[0x391] * fVar55);
    local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)(int)((float)(int)param_1[0x392] * (float)p_Var28);
    local_ac = (LPCRITICAL_SECTION)(int)((float)(int)param_1[0x393] * fVar55);
    *piVar39 = (int)((float)(int)param_1[0x390] * (float)p_Var28);
    param_1[0x395] = p_Stack_b0;
    param_1[0x396] = local_a0;
    param_1[0x397] = local_ac;
    iVar33 = param_1[4] * 0x1510;
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dac];
    local_9c = p_Var28;
    if ((((*piVar39 != *(int *)(iVar33 + 0x810 + (int)p_Var28)) ||
         (p_Stack_b0 != *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x814 + (int)p_Var28))) ||
        (local_a0 != *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x818 + (int)p_Var28))) ||
       (local_ac != *(LPCRITICAL_SECTION *)(iVar33 + 0x81c + (int)p_Var28))) {
      piVar42 = *(int **)(iVar33 + 0x514 + (int)p_Var28);
      (**(code **)(*piVar42 + 0xb4))(piVar42,1,piVar39);
      uVar44 = param_1[0x395];
      uVar14 = param_1[0x396];
      uVar15 = param_1[0x397];
      puVar46 = (undefined4 *)(iVar33 + 0x810 + (int)local_9c);
      *puVar46 = param_1[0x394];
      puVar46[1] = uVar44;
      puVar46[2] = uVar14;
      puVar46[3] = uVar15;
      p_Var28 = extraout_ECX_15;
    }
    puVar46 = puStack_68;
    *(undefined1 *)((int)param_1 + 0xf6a1) = 0;
    if (puStack_68 != param_1) {
      local_78 = *(ulonglong *)(param_1 + 0x3db1);
      uStack_70 = param_1[0x3db3];
      (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x1c))
                (*(int **)(param_1[0x3dad] + 4),0,3,&local_78);
      (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x40))
                (*(int **)(param_1[0x3dad] + 4),0,2,&p_Stack_88);
      (**(code **)(**(int **)(param_1[0x3dad] + 4) + 0x58))
                (*(int **)(param_1[0x3dad] + 4),0,3,&uStack_98);
      p_Var28 = extraout_ECX_16;
    }
  }
  if ((*(char *)((int)param_1 + 0xf66a) != '\0') || (puVar46 != param_1)) {
    iVar33 = param_1[4] * 0x1510;
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dac];
    p_Stack_64 = (LPCRITICAL_SECTION)0x0;
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    cVar25 = *(int *)(iVar33 + 0x7fc + (int)p_Var28) != 0;
    if ((bool)cVar25) {
      *(undefined4 *)(iVar33 + 0x7fc + (int)p_Var28) = 0;
    }
    if (*(int *)(iVar33 + 0x800 + (int)p_Var28) != 0) {
      *(undefined4 *)(iVar33 + 0x800 + (int)p_Var28) = 0;
      cVar25 = cVar25 + '\x01';
    }
    if (*(int *)(iVar33 + 0x804 + (int)p_Var28) != 0) {
      *(undefined4 *)(iVar33 + 0x804 + (int)p_Var28) = 0;
      cVar25 = cVar25 + '\x01';
    }
    if (*(int *)(iVar33 + 0x808 + (int)p_Var28) != 0) {
      *(undefined4 *)(iVar33 + 0x808 + (int)p_Var28) = 0;
      cVar25 = cVar25 + '\x01';
    }
    if ((cVar25 != '\0') || (puVar46 = puStack_68, *(int *)((int)p_Var28 + iVar33 + 0x80c) != 0)) {
      piVar39 = *(int **)(iVar33 + 0x514 + (int)p_Var28);
      (**(code **)(*piVar39 + 0x84))(piVar39,4,&p_Stack_64,0);
      *(undefined4 *)((int)p_Var28 + iVar33 + 0x80c) = 0;
      p_Var28 = extraout_ECX_17;
      puVar46 = puStack_68;
    }
  }
  if ((*(char *)((int)param_1 + 0xf669) != '\0') || (puVar46 != param_1)) {
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      FUN_100b5170((void *)param_1[0x3dac],param_1[4],0x30,1,(int)(param_1 + 0x3dd3));
      FUN_100b5170((void *)param_1[0x3dac],param_1[4],0,0x10,(int)(param_1 + 0x3ddb));
      FUN_100b5170((void *)param_1[0x3dac],param_1[4],0x10,0x10,(int)(param_1 + 0x3deb));
      puVar43 = param_1 + 0x3dfb;
      iVar33 = 0x20;
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
      FUN_100b5170((void *)param_1[0x3dac],param_1[4],0x10,0x10,(int)&uStack_50);
      uStack_50 = param_1[0x3e0b];
      puVar43 = &uStack_50;
      iVar33 = 0;
    }
    FUN_100b5170((void *)param_1[0x3dac],param_1[4],iVar33,0x10,(int)puVar43);
    *(undefined1 *)((int)param_1 + 0xf669) = 0;
    p_Var28 = extraout_ECX_18;
  }
  if (((*(char *)(param_1 + 0x3da8) != '\0') || (puVar46 != param_1)) &&
     (*(char *)((int)param_1 + 0x7642) == '\0')) {
    FUN_100b5004((void *)param_1[0x3dac],param_1[4],0,p_Var28,(int)(param_1 + 0x3e4f));
    FUN_100b5004((void *)param_1[0x3dac],param_1[4],5,extraout_ECX_19,(int)(param_1 + 0x3e54));
    FUN_100b5004((void *)param_1[0x3dac],param_1[4],10,extraout_ECX_20,(int)(param_1 + 0x3e59));
    *(undefined1 *)(param_1 + 0x3da8) = 0;
  }
  puVar53 = local_84;
  if ((*(char *)((int)param_1 + 0xf66a) != '\0') || (puVar46 != param_1)) {
    iVar33 = 0xf9a0;
    if (*(char *)((int)param_1 + 0x763d) == '\0') {
      iVar33 = 0xf8ec;
    }
    local_ac = *(LPCRITICAL_SECTION *)(iVar33 + (int)param_1);
    iStack_60 = *(int *)(iVar33 + 4 + (int)param_1);
    p_Stack_64 = local_ac;
    uStack_5c = *(int *)(iVar33 + 8 + (int)param_1);
    uStack_58 = *(int *)(iVar33 + 0xc + (int)param_1);
    iVar33 = param_1[0x3dac];
    local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3e71];
    iVar37 = param_1[4] * 0x1510;
    cVar25 = *(LPCRITICAL_SECTION *)(iVar37 + 0x7fc + iVar33) != local_ac;
    if ((bool)cVar25) {
      *(LPCRITICAL_SECTION *)(iVar37 + 0x7fc + iVar33) = local_ac;
    }
    if (*(int *)(iVar37 + 0x800 + iVar33) != iStack_60) {
      *(int *)(iVar37 + 0x800 + iVar33) = iStack_60;
      cVar25 = cVar25 + '\x01';
    }
    if (*(int *)(iVar37 + 0x804 + iVar33) != uStack_5c) {
      *(uint *)(iVar37 + 0x804 + iVar33) = uStack_5c;
      cVar25 = cVar25 + '\x01';
    }
    if (*(int *)(iVar37 + 0x808 + iVar33) != uStack_58) {
      *(uint *)(iVar37 + 0x808 + iVar33) = uStack_58;
      cVar25 = cVar25 + '\x01';
    }
    if ((cVar25 != '\0') || (local_a0 != *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar37 + iVar33 + 0x80c)))
    {
      piVar39 = *(int **)(iVar37 + 0x514 + iVar33);
      (**(code **)(*piVar39 + 0x84))(piVar39,4,&p_Stack_64,local_a0);
      *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar37 + iVar33 + 0x80c) = local_a0;
    }
    *(undefined1 *)((int)puVar53 + 0xf66a) = 0;
    puVar46 = puStack_68;
    param_1 = puVar53;
  }
  if ((*(char *)((int)param_1 + 0xf66b) != '\0') || (puVar46 != param_1)) {
    p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0x4033);
    uVar24 = (undefined1)uStack_90;
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      if (*(char *)((int)param_1 + 0x764a) == '\0') {
        uVar44 = param_1[0x1e5];
        uVar14 = param_1[0x1e6];
        uVar15 = param_1[0x1e7];
        *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type =
             (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x1e4];
        param_1[0x4034] = uVar44;
        param_1[0x4035] = uVar14;
        param_1[0x4036] = uVar15;
        param_1[0x4037] = param_1[0x1e8];
        param_1[0x4038] = param_1[0x1e9];
        param_1[0x4039] = param_1[0x1ea];
        param_1[0x403a] = param_1[0x1eb];
        param_1[0x403b] = param_1[0x1ec];
        param_1[0x403c] = param_1[0x1ed];
        param_1[0x403d] = param_1[0x1ee];
        param_1[0x403e] = param_1[0x1ef];
        uVar44 = param_1[0x1f0];
      }
      else {
        uVar44 = param_1[0x2d9];
        uVar14 = param_1[0x2da];
        uVar15 = param_1[0x2db];
        *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type =
             (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x2d8];
        param_1[0x4034] = uVar44;
        param_1[0x4035] = uVar14;
        param_1[0x4036] = uVar15;
        param_1[0x4037] = param_1[0x2dc];
        param_1[0x4038] = param_1[0x2dd];
        param_1[0x4039] = param_1[0x2de];
        param_1[0x403a] = param_1[0x2df];
        param_1[0x403b] = param_1[0x2e0];
        param_1[0x403c] = param_1[0x2e1];
        param_1[0x403d] = param_1[0x2e2];
        param_1[0x403e] = param_1[0x2e3];
        uVar44 = param_1[0x2e4];
      }
      param_1[0x403f] = uVar44;
      bVar26 = *(byte *)((int)param_1 + 0x7582) & *(byte *)(param_1 + 0x4037);
      *(byte *)(param_1 + 0x4037) = bVar26;
      bVar27 = *(byte *)((int)param_1 + 0x7582) & *(byte *)((int)param_1 + 0x100dd);
      *(byte *)((int)param_1 + 0x100dd) = bVar27;
      iStack_a4 = param_1[0x3dac];
      uStack_90._0_2_ = CONCAT11(bVar27,(undefined1)uStack_90);
      uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)
                  CONCAT22(CONCAT11(uStack_90._3_1_,bVar26),(undefined2)uStack_90);
      local_94 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)*(byte *)(param_1 + 0x1d60);
      p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[4] * 0x1510);
      local_80 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[0x403d] & 0xf);
      local_ac = (LPCRITICAL_SECTION)(param_1[0x4034] & 1);
      local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((uint)CONCAT11(bVar27,bVar26) << 5 | param_1[0x4035] & 0xf) * 2 | (uint)local_ac
                  ) * 2 | -(uint)(param_1[0x4036] != 0) & 0x40 |
                 (uint)(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type !=
                       (PRTL_CRITICAL_SECTION_DEBUG)0x0));
      local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)
                 (((((param_1[0x4039] & 0xf) << 4 | param_1[0x4039] & 0xf) << 4 |
                   param_1[0x403a] & 0xf) << 4 | param_1[0x403b] & 0xf) << 0x10 |
                 (((int)local_80 << 4 | (uint)local_80) << 4 | param_1[0x403e] & 0xf) << 4 |
                 param_1[0x403f] & 0xf);
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_8c = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
      if (local_8c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        local_ac = *(LPCRITICAL_SECTION *)((int)&p_Var29[0x41].Type + iStack_a4);
        do {
          p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((uint)((int)&p_Var28->Type + (int)&local_8c->Type) >> 1);
          local_80 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_ac + (int)p_Stack_88 * 0x40);
          p_Var30 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_ac + (int)p_Stack_88 * 0x40 + 4);
          if ((p_Var30 < local_a0) || ((p_Var30 == local_a0 && (local_80 <= local_9c)))) {
            if ((local_a0 < p_Var30) || ((local_a0 <= p_Var30 && (local_9c <= local_80)))) break;
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_88->Type + 1);
            p_Stack_88 = p_Var28;
          }
          else {
            local_8c = p_Stack_88;
          }
        } while (local_8c != p_Var28);
      }
      p_Var30 = p_Stack_88;
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_88 * 0x40);
      if (((p_Stack_88 ==
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4)
           ) || (*(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var28->Type + *(int *)((int)&p_Var29[0x41].Type + iStack_a4)) != local_9c
                )) ||
         (*(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Var28->CriticalSection + *(int *)((int)&p_Var29[0x41].Type + iStack_a4)) !=
          local_a0)) {
        iVar33 = *(int *)((int)&p_Var29[0x41].CriticalSection + iStack_a4);
        local_8c = p_Var28;
        if (*(int *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4) == iVar33) {
          lVar12 = (ulonglong)(uint)(iVar33 * 2) * 0x40;
          SVar38 = (SIZE_T)lVar12;
          if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
            SVar38 = 0xffffffff;
          }
          p_Stack_b0 = p_Var29;
          local_ac = (LPCRITICAL_SECTION)FUN_100cfd89(SVar38);
          if (local_ac != (LPCRITICAL_SECTION)0x0) {
            p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if (*(int *)((int)&p_Var29[0x41].CriticalSection + iStack_a4) != 0) {
              do {
                iVar33 = (int)p_Stack_b0 * 0x40;
                puVar40 = (uint *)(*(int *)((int)&p_Var29[0x41].Type + iStack_a4) + iVar33);
                uVar48 = puVar40[1];
                uVar47 = puVar40[2];
                uVar34 = puVar40[3];
                puVar43 = (uint *)(iVar33 + (int)local_ac);
                *puVar43 = *puVar40;
                puVar43[1] = uVar48;
                puVar43[2] = uVar47;
                puVar43[3] = uVar34;
                uVar48 = puVar40[5];
                uVar47 = puVar40[6];
                uVar34 = puVar40[7];
                puVar43 = (uint *)(iVar33 + 0x10 + (int)local_ac);
                *puVar43 = puVar40[4];
                puVar43[1] = uVar48;
                puVar43[2] = uVar47;
                puVar43[3] = uVar34;
                uVar48 = puVar40[9];
                uVar47 = puVar40[10];
                uVar34 = puVar40[0xb];
                puVar43 = (uint *)(iVar33 + 0x20 + (int)local_ac);
                *puVar43 = puVar40[8];
                puVar43[1] = uVar48;
                puVar43[2] = uVar47;
                puVar43[3] = uVar34;
                uVar48 = puVar40[0xd];
                uVar47 = puVar40[0xe];
                uVar34 = puVar40[0xf];
                p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_b0->Type + 1);
                puVar43 = (uint *)(iVar33 + 0x30 + (int)local_ac);
                *puVar43 = puVar40[0xc];
                puVar43[1] = uVar48;
                puVar43[2] = uVar47;
                puVar43[3] = uVar34;
                p_Var30 = p_Stack_88;
              } while (p_Stack_b0 <
                       *(PRTL_CRITICAL_SECTION_DEBUG *)
                        ((int)&p_Var29[0x41].CriticalSection + iStack_a4));
            }
            thunk_FUN_100cfd6c(*(LPVOID *)((int)&p_Var29[0x41].Type + iStack_a4));
            piVar39 = (int *)((int)&p_Var29[0x41].CriticalSection + iStack_a4);
            *piVar39 = *piVar39 << 1;
            *(LPCRITICAL_SECTION *)((int)&p_Var29[0x41].Type + iStack_a4) = local_ac;
          }
        }
        p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                   ((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
        if (p_Var30 < p_Var28) {
          do {
            iVar33 = *(int *)((int)&p_Var29[0x41].Type + iStack_a4);
            iVar37 = (int)p_Var28 * 0x40;
            puVar53 = (undefined4 *)(iVar37 + -0x40 + iVar33);
            uVar44 = puVar53[1];
            uVar14 = puVar53[2];
            uVar15 = puVar53[3];
            puVar46 = (undefined4 *)(iVar37 + iVar33);
            *puVar46 = *puVar53;
            puVar46[1] = uVar44;
            puVar46[2] = uVar14;
            puVar46[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x30 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x10 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x20 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x20 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x10 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x30 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var28[-1].SpareWORD + 1);
          } while (p_Var30 < p_Var28);
          local_8c = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var30 << 6);
        }
        p_Var28 = local_8c;
        iVar33 = *(int *)((int)&p_Var29[0x41].Type + iStack_a4);
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->Type + iVar33) = local_9c;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->CriticalSection + iVar33) = local_a0;
        iVar33 = *(int *)((int)&p_Var29[0x41].Type + iStack_a4);
        p_Var16 = p_Stack_a8->CriticalSection;
        p_Var10 = (p_Stack_a8->ProcessLocksList).Flink;
        p_Var17 = (p_Stack_a8->ProcessLocksList).Blink;
        piVar39 = (int *)((int)&(local_8c->ProcessLocksList).Flink + iVar33);
        *piVar39 = (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
        piVar39[1] = (int)p_Var16;
        piVar39[2] = (int)p_Var10;
        piVar39[3] = (int)p_Var17;
        UVar8 = p_Stack_a8->ContentionCount;
        DVar9 = p_Stack_a8->Flags;
        uVar44 = *(undefined4 *)&p_Stack_a8->CreatorBackTraceIndexHigh;
        puVar46 = (undefined4 *)((int)&local_8c->Flags + iVar33);
        *puVar46 = (HANDLE)p_Stack_a8->EntryCount;
        puVar46[1] = UVar8;
        puVar46[2] = DVar9;
        puVar46[3] = uVar44;
        p_Var16 = p_Stack_a8[1].CriticalSection;
        p_Var10 = p_Stack_a8[1].ProcessLocksList.Flink;
        p_Var17 = p_Stack_a8[1].ProcessLocksList.Blink;
        piVar39 = (int *)((int)&local_8c[1].ProcessLocksList.Flink + iVar33);
        *piVar39 = *(int *)(p_Stack_a8 + 1);
        piVar39[1] = (int)p_Var16;
        piVar39[2] = (int)p_Var10;
        piVar39[3] = (int)p_Var17;
        *(DWORD *)((int)&local_8c[1].Flags + iVar33) = p_Stack_a8[1].EntryCount;
        piVar39 = *(int **)(*(int *)((int)&p_Var29[0x41].EntryCount + iStack_a4) * 0x1510 + 0x510 +
                           *(int *)((int)&p_Var29[0x41].ProcessLocksList.Blink + iStack_a4));
        (**(code **)(*piVar39 + 0x54))(piVar39,p_Stack_a8,&p_Stack_b0);
        *(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var28[1].CreatorBackTraceIndexHigh +
         *(int *)((int)&p_Var29[0x41].Type + iStack_a4)) = p_Stack_b0;
        piVar39 = (int *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
        *piVar39 = *piVar39 + 1;
      }
      puVar50 = (undefined1 *)((int)&p_Var29->Type + iStack_a4);
      p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                    ((int)&p_Var28[1].CreatorBackTraceIndexHigh +
                    *(int *)((int)&p_Var29[0x41].Type + iStack_a4));
      if ((p_Stack_b0 !=
           *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x29].ContentionCount + iStack_a4)) ||
         (local_94 != *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar50 + 0x538))) {
        piVar39 = *(int **)((int)&p_Var29[0x28].ContentionCount + iStack_a4);
        (**(code **)(*piVar39 + 0x90))(piVar39,p_Stack_b0,local_94);
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x29].ContentionCount + iStack_a4) =
             p_Stack_b0;
        p_Var28 = local_94;
        goto LAB_1003133a;
      }
    }
    else {
      uVar44 = param_1[0x2e6];
      uVar14 = param_1[0x2e7];
      uVar15 = param_1[0x2e8];
      *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type =
           (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x2e5];
      param_1[0x4034] = uVar44;
      param_1[0x4035] = uVar14;
      param_1[0x4036] = uVar15;
      param_1[0x4037] = param_1[0x2e9];
      param_1[0x4038] = param_1[0x2ea];
      param_1[0x4039] = param_1[0x2eb];
      param_1[0x403a] = param_1[0x2ec];
      param_1[0x403b] = param_1[0x2ed];
      param_1[0x403c] = param_1[0x2ee];
      param_1[0x403d] = param_1[0x2ef];
      param_1[0x403e] = param_1[0x2f0];
      param_1[0x403f] = param_1[0x2f1];
      bVar26 = *(byte *)((int)param_1 + 0x7582) & *(byte *)(param_1 + 0x4037);
      *(byte *)(param_1 + 0x4037) = bVar26;
      uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT13(bVar26,(undefined3)uStack_90);
      bVar27 = *(byte *)((int)param_1 + 0x7582) & *(byte *)((int)param_1 + 0x100dd);
      *(byte *)((int)param_1 + 0x100dd) = bVar27;
      iStack_a4 = param_1[0x3dac];
      uStack_90._0_2_ = CONCAT11(bVar27,uVar24);
      local_80 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)*(byte *)((int)param_1 + 0x7581);
      p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[4] * 0x1510);
      local_8c = p_Var29;
      local_ac = (LPCRITICAL_SECTION)
                 (uint)(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type !=
                       (PRTL_CRITICAL_SECTION_DEBUG)0x0);
      local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((uint)CONCAT11(bVar27,bVar26) << 5 | param_1[0x4035] & 0xf) * 2 |
                  param_1[0x4034] & 1) * 2 | -(uint)(param_1[0x4036] != 0) & 0x40 | (uint)local_ac);
      local_a0 = local_9c;
      local_94 = (PRTL_CRITICAL_SECTION_DEBUG)
                 (((((param_1[0x4039] & 0xf) << 4 | param_1[0x4039] & 0xf) << 4 |
                   param_1[0x403a] & 0xf) << 4 | param_1[0x403b] & 0xf) << 0x10 |
                 (((param_1[0x403d] & 0xf) << 4 | param_1[0x403d] & 0xf) << 4 |
                 param_1[0x403e] & 0xf) << 4 | param_1[0x403f] & 0xf);
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                    ((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
      if (p_Stack_b0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        local_ac = *(LPCRITICAL_SECTION *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4);
        p_Var30 = p_Stack_b0;
        do {
          p_Var49 = (PRTL_CRITICAL_SECTION_DEBUG)
                    ((uint)((int)&p_Var28->Type + (int)&p_Var30->Type) >> 1);
          p_Stack_88 = p_Var49;
          local_a0 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_ac + (int)p_Var49 * 0x40);
          p_Var52 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_ac + (int)p_Var49 * 0x40 + 4);
          if ((p_Var52 < local_94) || ((p_Var52 == local_94 && (local_a0 <= local_9c)))) {
            if ((local_94 < p_Var52) || ((local_94 <= p_Var52 && (local_9c <= local_a0)))) break;
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var49->Type + 1);
            p_Stack_88 = p_Var28;
            p_Var49 = p_Var30;
          }
          p_Var30 = p_Var49;
        } while (p_Var49 != p_Var28);
      }
      p_Var30 = p_Stack_88;
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_88 * 0x40);
      if (((p_Stack_88 ==
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4)
           ) || (*(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var28->Type + *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4)) !=
                 local_9c)) ||
         (*(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Var28->CriticalSection + *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4))
          != local_94)) {
        iVar33 = *(int *)((int)&(p_Var29 + 0x40)[1].CriticalSection + iStack_a4);
        local_8c = p_Var28;
        if (*(int *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4) == iVar33) {
          lVar12 = (ulonglong)(uint)(iVar33 * 2) * 0x40;
          SVar38 = (SIZE_T)lVar12;
          if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
            SVar38 = 0xffffffff;
          }
          local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100cfd89(SVar38);
          if (local_a0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            local_ac = (LPCRITICAL_SECTION)0x0;
            if (*(int *)((int)&(p_Var29 + 0x40)[1].CriticalSection + iStack_a4) != 0) {
              do {
                piVar39 = (int *)(*(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4) +
                                 (int)local_ac * 0x40);
                iVar33 = *piVar39;
                p_Var16 = (_RTL_CRITICAL_SECTION *)piVar39[1];
                p_Var10 = (_LIST_ENTRY *)piVar39[2];
                p_Var17 = (_LIST_ENTRY *)piVar39[3];
                p_Var28 = local_a0 + (int)local_ac * 2;
                p_Var28->Type = (short)iVar33;
                p_Var28->CreatorBackTraceIndex = (short)((uint)iVar33 >> 0x10);
                p_Var28->CriticalSection = p_Var16;
                (p_Var28->ProcessLocksList).Flink = p_Var10;
                (p_Var28->ProcessLocksList).Blink = p_Var17;
                DVar9 = piVar39[5];
                DVar18 = piVar39[6];
                iVar33 = piVar39[7];
                pDVar5 = &local_a0[(int)local_ac * 2].EntryCount;
                *pDVar5 = piVar39[4];
                pDVar5[1] = DVar9;
                pDVar5[2] = DVar18;
                pDVar5[3] = iVar33;
                iVar33 = piVar39[8];
                p_Var16 = (_RTL_CRITICAL_SECTION *)piVar39[9];
                p_Var10 = (_LIST_ENTRY *)piVar39[10];
                p_Var17 = (_LIST_ENTRY *)piVar39[0xb];
                p_Var28 = local_a0 + (int)local_ac * 2 + 1;
                p_Var28->Type = (short)iVar33;
                p_Var28->CreatorBackTraceIndex = (short)((uint)iVar33 >> 0x10);
                p_Var28->CriticalSection = p_Var16;
                (p_Var28->ProcessLocksList).Flink = p_Var10;
                (p_Var28->ProcessLocksList).Blink = p_Var17;
                DVar9 = piVar39[0xd];
                DVar18 = piVar39[0xe];
                iVar33 = piVar39[0xf];
                p_Var51 = (LPCRITICAL_SECTION)((int)&local_ac->DebugInfo + 1);
                pDVar5 = &local_a0[(int)local_ac * 2 + 1].EntryCount;
                *pDVar5 = piVar39[0xc];
                pDVar5[1] = DVar9;
                pDVar5[2] = DVar18;
                pDVar5[3] = iVar33;
                p_Var30 = p_Stack_88;
                local_ac = p_Var51;
              } while (p_Var51 < *(LPCRITICAL_SECTION *)
                                  ((int)&(p_Var29 + 0x40)[1].CriticalSection + iStack_a4));
            }
            thunk_FUN_100cfd6c(*(LPVOID *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4));
            piVar39 = (int *)((int)&(p_Var29 + 0x40)[1].CriticalSection + iStack_a4);
            *piVar39 = *piVar39 << 1;
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4) = local_a0;
          }
        }
        p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                   ((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
        if (p_Var30 < p_Var28) {
          do {
            iVar33 = *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4);
            iVar37 = (int)p_Var28 * 0x40;
            puVar53 = (undefined4 *)(iVar37 + -0x40 + iVar33);
            uVar44 = puVar53[1];
            uVar14 = puVar53[2];
            uVar15 = puVar53[3];
            puVar46 = (undefined4 *)(iVar37 + iVar33);
            *puVar46 = *puVar53;
            puVar46[1] = uVar44;
            puVar46[2] = uVar14;
            puVar46[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x30 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x10 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x20 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x20 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            puVar46 = (undefined4 *)(iVar37 + -0x10 + iVar33);
            uVar44 = puVar46[1];
            uVar14 = puVar46[2];
            uVar15 = puVar46[3];
            puVar53 = (undefined4 *)(iVar37 + 0x30 + iVar33);
            *puVar53 = *puVar46;
            puVar53[1] = uVar44;
            puVar53[2] = uVar14;
            puVar53[3] = uVar15;
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var28[-1].SpareWORD + 1);
          } while (p_Var30 < p_Var28);
          local_8c = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var30 << 6);
        }
        p_Var28 = local_8c;
        iVar33 = *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4);
        local_ac = (LPCRITICAL_SECTION)0x0;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->Type + iVar33) = local_9c;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->CriticalSection + iVar33) = local_94;
        iVar33 = *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4);
        p_Var16 = p_Stack_a8->CriticalSection;
        p_Var10 = (p_Stack_a8->ProcessLocksList).Flink;
        p_Var17 = (p_Stack_a8->ProcessLocksList).Blink;
        piVar39 = (int *)((int)&(local_8c->ProcessLocksList).Flink + iVar33);
        *piVar39 = (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
        piVar39[1] = (int)p_Var16;
        piVar39[2] = (int)p_Var10;
        piVar39[3] = (int)p_Var17;
        UVar8 = p_Stack_a8->ContentionCount;
        DVar9 = p_Stack_a8->Flags;
        uVar44 = *(undefined4 *)&p_Stack_a8->CreatorBackTraceIndexHigh;
        puVar46 = (undefined4 *)((int)&local_8c->Flags + iVar33);
        *puVar46 = (HANDLE)p_Stack_a8->EntryCount;
        puVar46[1] = UVar8;
        puVar46[2] = DVar9;
        puVar46[3] = uVar44;
        p_Var16 = p_Stack_a8[1].CriticalSection;
        p_Var10 = p_Stack_a8[1].ProcessLocksList.Flink;
        p_Var17 = p_Stack_a8[1].ProcessLocksList.Blink;
        piVar39 = (int *)((int)&local_8c[1].ProcessLocksList.Flink + iVar33);
        *piVar39 = *(int *)(p_Stack_a8 + 1);
        piVar39[1] = (int)p_Var16;
        piVar39[2] = (int)p_Var10;
        piVar39[3] = (int)p_Var17;
        *(DWORD *)((int)&local_8c[1].Flags + iVar33) = p_Stack_a8[1].EntryCount;
        piVar39 = *(int **)(*(int *)((int)&p_Var29[0x41].EntryCount + iStack_a4) * 0x1510 + 0x510 +
                           *(int *)((int)&p_Var29[0x41].ProcessLocksList.Blink + iStack_a4));
        (**(code **)(*piVar39 + 0x54))(piVar39,p_Stack_a8,&local_ac);
        *(LPCRITICAL_SECTION *)
         ((int)&p_Var28[1].CreatorBackTraceIndexHigh +
         *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4)) = local_ac;
        piVar39 = (int *)((int)&p_Var29[0x41].ProcessLocksList.Flink + iStack_a4);
        *piVar39 = *piVar39 + 1;
      }
      puVar50 = (undefined1 *)((int)&p_Var29->Type + iStack_a4);
      p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                    ((int)&p_Var28[1].CreatorBackTraceIndexHigh +
                    *(int *)((int)&(p_Var29 + 0x40)[1].Type + iStack_a4));
      if ((p_Stack_b0 !=
           *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x29].ContentionCount + iStack_a4)) ||
         (local_80 != *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar50 + 0x538))) {
        piVar39 = *(int **)((int)&p_Var29[0x28].ContentionCount + iStack_a4);
        (**(code **)(*piVar39 + 0x90))(piVar39,p_Stack_b0,local_80);
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x29].ContentionCount + iStack_a4) =
             p_Stack_b0;
        p_Var28 = local_80;
LAB_1003133a:
        *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar50 + 0x538) = p_Var28;
      }
    }
    *(undefined1 *)((int)local_84 + 0xf66b) = 0;
    puVar46 = puStack_68;
    param_1 = local_84;
  }
  if ((*(char *)(param_1 + 0x3d9b) != '\0') || (puVar46 != param_1)) {
    if ((uint)param_1[0x38f] < 2) {
      local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)0xffffffff;
    }
    else {
      local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x38e];
    }
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0x4040);
    *(PRTL_CRITICAL_SECTION_DEBUG *)&local_80->Type =
         (PRTL_CRITICAL_SECTION_DEBUG)(uint)(param_1[0x39f] == 1);
    local_9c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    do {
      p_Var28 = local_9c;
      piVar39 = (int *)param_1[(int)local_9c + 0x3e0c];
      if (piVar39 != (int *)0x0) {
        iVar33 = (int)local_9c * 0x20;
        if (*(char *)((int)param_1 + 0x7649) == '\0') {
          if (*(char *)((int)param_1 + 0x7642) == '\0') {
            cVar25 = (**(code **)(*piVar39 + 0x40))();
            iVar37 = 0xbc8;
            iVar41 = 0xc48;
            goto LAB_10031403;
          }
          puVar46 = param_1 + 0x372;
        }
        else if (*(char *)((int)param_1 + 0x7642) == '\0') {
          cVar25 = (**(code **)(*piVar39 + 0x40))();
          iVar37 = 0xcc8;
          iVar41 = 0xd48;
LAB_10031403:
          if (cVar25 == '\0') {
            iVar37 = iVar41;
          }
          puVar46 = (undefined4 *)(iVar37 + iVar33 + (int)param_1);
        }
        else {
          puVar46 = param_1 + 0x372;
        }
        param_1[(int)p_Var28 * 8 + 0x4042] = *puVar46;
        param_1[(int)p_Var28 * 8 + 0x4043] = puVar46[1];
        param_1[(int)p_Var28 * 8 + 0x4044] = puVar46[2];
        param_1[(int)p_Var28 * 8 + 0x4045] = puVar46[3];
        param_1[(int)p_Var28 * 8 + 0x4046] = puVar46[4];
        param_1[(int)p_Var28 * 8 + 0x4047] = puVar46[5];
        param_1[(int)p_Var28 * 8 + 0x4048] = puVar46[6];
        *(undefined1 *)(param_1 + (int)p_Var28 * 8 + 0x4049) = *(undefined1 *)(puVar46 + 7);
      }
      local_9c = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_9c + 1);
    } while (local_9c < 4);
    p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[4] * 0x1510);
    iStack_a4 = param_1[0x3dac];
    local_8c = p_Var29;
    uVar56 = FUN_100b623d(param_1 + 0x4040);
    local_9c = (PRTL_CRITICAL_SECTION_DEBUG)(uVar56 >> 0x20);
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_94 = (PRTL_CRITICAL_SECTION_DEBUG)uVar56;
    p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x42].EntryCount + iStack_a4);
    p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    if (p_Stack_b0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      local_ac = *(LPCRITICAL_SECTION *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4);
      p_Var30 = p_Stack_b0;
      do {
        p_Var52 = (PRTL_CRITICAL_SECTION_DEBUG)
                  ((uint)((int)&p_Var28->Type + (int)&p_Var30->Type) >> 1);
        p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_ac + (int)p_Var52 * 0x118);
        uVar21 = CONCAT44(*(undefined4 *)((int)local_ac + (int)p_Var52 * 0x118 + 4),p_Stack_b0);
        p_Stack_a8 = p_Var52;
        if (uVar21 <= uVar56) {
          p_Var29 = local_8c;
          if (uVar56 <= uVar21) break;
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var52->Type + 1);
          p_Var52 = p_Var30;
          p_Stack_a8 = p_Var28;
        }
        p_Var30 = p_Var52;
        p_Var29 = local_8c;
      } while (p_Var52 != p_Var28);
    }
    p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_a8 * 0x118);
    if (((p_Stack_a8 == *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x42].EntryCount + iStack_a4)
         ) || (p_Stack_7c = *(PRTL_CRITICAL_SECTION_DEBUG *)
                             ((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4),
              *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_7c->Type + (int)&p_Stack_88->Type) !=
              (PRTL_CRITICAL_SECTION_DEBUG)uVar56)) ||
       (*(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_88->CriticalSection + (int)p_Stack_7c) !=
        local_9c)) {
      iVar33 = *(int *)((int)&p_Var29[0x42].ProcessLocksList.Blink + iStack_a4);
      if (*(int *)((int)&p_Var29[0x42].EntryCount + iStack_a4) == iVar33) {
        lVar12 = (ulonglong)(uint)(iVar33 * 2) * 0x118;
        SVar38 = (SIZE_T)lVar12;
        if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
          SVar38 = 0xffffffff;
        }
        local_ac = (LPCRITICAL_SECTION)FUN_100cfd89(SVar38);
        if (local_ac != (LPCRITICAL_SECTION)0x0) {
          p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          if (*(int *)((int)&p_Var29[0x42].ProcessLocksList.Blink + iStack_a4) != 0) {
            do {
              iVar33 = (int)p_Stack_b0 * 0x118;
              p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_b0->Type + 1);
              puVar43 = (uint *)(*(int *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4) +
                                iVar33);
              puVar40 = (uint *)(iVar33 + (int)local_ac);
              for (iVar37 = 0x46; iVar37 != 0; iVar37 = iVar37 + -1) {
                *puVar40 = *puVar43;
                puVar43 = puVar43 + 1;
                puVar40 = puVar40 + 1;
              }
              p_Var29 = local_8c;
            } while (p_Stack_b0 <
                     *(PRTL_CRITICAL_SECTION_DEBUG *)
                      ((int)&local_8c[0x42].ProcessLocksList.Blink + iStack_a4));
          }
          thunk_FUN_100cfd6c(*(LPVOID *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4));
          piVar39 = (int *)((int)&p_Var29[0x42].ProcessLocksList.Blink + iStack_a4);
          *piVar39 = *piVar39 << 1;
          *(LPCRITICAL_SECTION *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4) = local_ac
          ;
        }
      }
      p_Var30 = local_8c;
      p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x42].EntryCount + iStack_a4);
      for (; p_Stack_a8 < p_Var28;
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var28[-1].SpareWORD + 1)) {
        puVar53 = (undefined4 *)
                  ((int)p_Var28 * 0x118 +
                  *(int *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4));
        puVar46 = puVar53 + -0x46;
        for (iVar33 = 0x46; iVar33 != 0; iVar33 = iVar33 + -1) {
          *puVar53 = *puVar46;
          puVar46 = puVar46 + 1;
          puVar53 = puVar53 + 1;
        }
        p_Var29 = local_8c;
      }
      iVar33 = *(int *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4);
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_88->Type + iVar33) = local_94;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_88->CriticalSection + iVar33) = local_9c;
      p_Var28 = local_80;
      piVar39 = (int *)((int)&(p_Stack_88->ProcessLocksList).Flink +
                       *(int *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4));
      for (iVar33 = 0x42; iVar33 != 0; iVar33 = iVar33 + -1) {
        *piVar39 = (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type;
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var28->CriticalSection;
        piVar39 = piVar39 + 1;
      }
      piVar39 = *(int **)(*(int *)((int)&local_8c[0x42].Flags + iStack_a4) * 0x1510 + 0x510 +
                         *(int *)((int)&local_8c[0x42].ContentionCount + iStack_a4));
      (**(code **)(*piVar39 + 0x50))(piVar39,local_80,&p_Stack_b0);
      *(PRTL_CRITICAL_SECTION_DEBUG *)
       ((int)&p_Stack_88[8].EntryCount +
       *(int *)((int)&p_Var30[0x42].ProcessLocksList.Flink + iStack_a4)) = p_Stack_b0;
      piVar39 = (int *)((int)&p_Var30[0x42].EntryCount + iStack_a4);
      *piVar39 = *piVar39 + 1;
    }
    else if ((*(PRTL_CRITICAL_SECTION_DEBUG *)&local_80->Type ==
              *(PRTL_CRITICAL_SECTION_DEBUG *)
               ((int)&p_Stack_7c->Type + (int)&(p_Stack_88->ProcessLocksList).Flink)) &&
            (local_80->CriticalSection ==
             *(_RTL_CRITICAL_SECTION **)
              ((int)&(p_Stack_88->ProcessLocksList).Blink + (int)p_Stack_7c))) {
      local_ac = (LPCRITICAL_SECTION)&DAT_0000001c;
      p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((int)&p_Stack_88->EntryCount +
                   *(int *)((int)&p_Var29[0x42].ProcessLocksList.Flink + iStack_a4));
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_84 + 0x4042);
      do {
        p_Var29 = local_8c;
        if (*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type !=
            *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) goto LAB_100316c1;
        p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_a8->CriticalSection;
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_b0->CriticalSection;
        bVar54 = (LPCRITICAL_SECTION)0x3 < local_ac;
        local_ac = (LPCRITICAL_SECTION)&local_ac[-1].SpinCount;
      } while (bVar54);
      local_ac = (LPCRITICAL_SECTION)&DAT_0000001c;
      p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((int)&p_Stack_88[1].EntryCount +
                   *(int *)((int)&local_8c[0x42].ProcessLocksList.Flink + iStack_a4));
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_84 + 0x404a);
      do {
        if (*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type !=
            *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) goto LAB_100316c1;
        p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_a8->CriticalSection;
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_b0->CriticalSection;
        bVar54 = (LPCRITICAL_SECTION)0x3 < local_ac;
        local_ac = (LPCRITICAL_SECTION)&local_ac[-1].SpinCount;
      } while (bVar54);
      local_ac = (LPCRITICAL_SECTION)&DAT_0000001c;
      p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((int)&p_Stack_88[2].EntryCount +
                   *(int *)((int)&local_8c[0x42].ProcessLocksList.Flink + iStack_a4));
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_84 + 0x4052);
      do {
        if (*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type !=
            *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) goto LAB_100316c1;
        p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_a8->CriticalSection;
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_b0->CriticalSection;
        bVar54 = (LPCRITICAL_SECTION)0x3 < local_ac;
        local_ac = (LPCRITICAL_SECTION)&local_ac[-1].SpinCount;
      } while (bVar54);
      local_ac = (LPCRITICAL_SECTION)&DAT_0000001c;
      p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((int)&p_Stack_88[3].EntryCount +
                   *(int *)((int)&local_8c[0x42].ProcessLocksList.Flink + iStack_a4));
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_84 + 0x405a);
      do {
        if (*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type !=
            *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) goto LAB_100316c1;
        p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_a8->CriticalSection;
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Stack_b0->CriticalSection;
        bVar54 = (LPCRITICAL_SECTION)0x3 < local_ac;
        local_ac = (LPCRITICAL_SECTION)&local_ac[-1].SpinCount;
        p_Var30 = local_8c;
      } while (bVar54);
    }
    else {
LAB_100316c1:
      piVar39 = *(int **)((int)&p_Stack_7c->Type + (int)&p_Stack_88[8].EntryCount);
      (**(code **)(*piVar39 + 8))(piVar39);
      p_Var30 = uStack_90;
      fStack_b4 = 0.0;
      iVar33 = *(int *)((int)&p_Stack_a8->Type + (int)&p_Var29[0x42].ProcessLocksList.Flink);
      *(uint *)((int)&local_8c->Type + iVar33) = uStack_98;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->CriticalSection + iVar33) = local_a0;
      puVar46 = local_84;
      puVar53 = (undefined4 *)
                ((int)&(local_8c->ProcessLocksList).Flink +
                *(int *)((int)&p_Stack_a8->Type + (int)&p_Var29[0x42].ProcessLocksList.Flink));
      for (iVar33 = 0x42; iVar33 != 0; iVar33 = iVar33 + -1) {
        *puVar53 = *puVar46;
        puVar46 = puVar46 + 1;
        puVar53 = puVar53 + 1;
      }
      piVar39 = *(int **)(*(int *)((int)&p_Stack_a8->Type + (int)&uStack_90[0x42].Flags) * 0x1510 +
                          0x510 + *(int *)((int)&uStack_90[0x42].ContentionCount + (int)p_Stack_a8))
      ;
      (**(code **)(*piVar39 + 0x50))(piVar39,local_84,&fStack_b4);
      *(PRTL_CRITICAL_SECTION_DEBUG *)
       ((int)&p_Stack_88[8].EntryCount +
       *(int *)((int)&p_Var30[0x42].ProcessLocksList.Flink + iStack_a4)) = p_Stack_b0;
    }
    param_1 = local_84;
    p_Stack_7c = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Stack_88[8].EntryCount +
                  *(int *)((int)&p_Var30[0x42].ProcessLocksList.Flink + iStack_a4));
    if (((p_Stack_7c != *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var30[0x29].EntryCount + iStack_a4)
         ) || (local_a0 !=
               *(PRTL_CRITICAL_SECTION_DEBUG *)
                ((int)&p_Var30[0x29].CreatorBackTraceIndexHigh + iStack_a4))) ||
       ((local_84 + 0x398 != (int *)0x0 &&
        ((((local_84[0x398] != *(int *)((int)&p_Var30[0x2a].Type + iStack_a4) ||
           (local_84[0x399] != *(int *)((int)&p_Var30[0x2a].CriticalSection + iStack_a4))) ||
          (local_84[0x39a] != *(int *)((int)&p_Var30[0x2a].ProcessLocksList.Flink + iStack_a4))) ||
         (local_84[0x39b] != *(int *)((int)&p_Var30[0x2a].ProcessLocksList.Blink + iStack_a4)))))))
    {
      piVar39 = *(int **)((int)&p_Var30[0x28].ContentionCount + iStack_a4);
      (**(code **)(*piVar39 + 0x8c))(piVar39,p_Stack_7c,local_84 + 0x398,local_a0);
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var30[0x29].EntryCount + iStack_a4) = p_Stack_7c;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var30[0x29].CreatorBackTraceIndexHigh + iStack_a4) =
           local_a0;
      if (param_1 + 0x398 != (undefined4 *)0x0) {
        *(undefined4 *)((int)&p_Var30[0x2a].Type + iStack_a4) = param_1[0x398];
        *(undefined4 *)((int)&p_Var30[0x2a].CriticalSection + iStack_a4) = param_1[0x39c];
        *(undefined4 *)((int)&p_Var30[0x2a].ProcessLocksList.Flink + iStack_a4) = param_1[0x3a0];
        *(undefined4 *)((int)&p_Var30[0x2a].ProcessLocksList.Blink + iStack_a4) = param_1[0x3a4];
      }
    }
    *(undefined1 *)(param_1 + 0x3d9b) = 0;
    puVar46 = puStack_68;
  }
  if ((*(char *)((int)param_1 + 0xf66d) != '\0') || (puVar46 != param_1)) {
    param_1[0x387] = 0;
    param_1[0x37d] = 0;
    if (param_1[0x3e10] != 0) {
      if (*(int *)(&DAT_100d2658 + *(int *)(param_1[0x3e10] + 0x1c) * 4) == 0x20) {
        iVar33 = 0;
      }
      else {
        iVar33 = (int)((float)((1 << ((byte)*(int *)(&DAT_100d2658 +
                                                    *(int *)(param_1[0x3e10] + 0x1c) * 4) & 0x1f)) +
                              -1) * (float)param_1[0x39c]);
      }
      param_1[0x387] = iVar33;
      param_1[0x37d] = iVar33;
    }
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      iVar33 = 0xe10;
      if (*(char *)(param_1 + 0x1d92) == '\0') {
        iVar33 = 0xde8;
      }
      puVar46 = (undefined4 *)(iVar33 + (int)param_1);
    }
    else {
      puVar46 = &DAT_100dc298;
    }
    param_1[0x4082] = *puVar46;
    param_1[0x4083] = puVar46[1];
    param_1[0x4084] = puVar46[2];
    param_1[0x4085] = puVar46[3];
    param_1[0x4086] = puVar46[4];
    param_1[0x4087] = puVar46[5];
    param_1[0x4088] = puVar46[6];
    param_1[0x4089] = puVar46[7];
    param_1[0x408a] = puVar46[8];
    param_1[0x408b] = puVar46[9];
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dac];
    iVar33 = param_1[4];
    local_94 = (PRTL_CRITICAL_SECTION_DEBUG)(iVar33 * 0x1510);
    local_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_80 + iVar33 * 0x1510 + 0x864);
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_80 + iVar33 * 0x1510 + 0x85c);
    puVar46 = param_1;
    local_8c = p_Var28;
    if ((PRTL_CRITICAL_SECTION_DEBUG)0xff < local_9c) {
      local_ac = (LPCRITICAL_SECTION)
                 ((int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type + (int)local_9c * 0x38 + -0x30
                 );
      uVar57 = FUN_100b64fd((uint *)local_ac);
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)uVar57 >> 0x20);
      p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)uVar57;
      p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                   FUN_100b6997(p_Var28,(uint)p_Stack_7c,(uint)p_Stack_b0);
      local_9c = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var28->ProcessLocksList).Flink;
      if (p_Stack_88 != local_9c) {
        local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_88 * 7);
        p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type;
        puVar46 = local_84;
        if (((*(PRTL_CRITICAL_SECTION_DEBUG *)((int)p_Var29 + (int)p_Stack_88 * 0x38) == p_Stack_7c)
            && (*(PRTL_CRITICAL_SECTION_DEBUG *)((int)p_Var29 + (int)p_Stack_88 * 0x38 + 4) ==
                p_Stack_b0)) &&
           (uVar48 = FUN_100b649c((uint *)local_ac,
                                  (uint *)((int)p_Var29 + (int)p_Stack_88 * 0x38 + 8)),
           (char)uVar48 == '\0')) {
          p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)
                       (&(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type)[1].EntryCount)
                       [(int)local_a0 * 2];
          p_Var10 = (p_Var28->ProcessLocksList).Blink;
          p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var10 + (int)p_Var28->EntryCount * 0x2a2);
          local_ac = (LPCRITICAL_SECTION)(p_Var10 + 0x94);
          EnterCriticalSection(local_ac);
          if (p_Stack_b0 ==
              (PRTL_CRITICAL_SECTION_DEBUG)((_LIST_ENTRY *)((int)p_Stack_7c + 0x550))->Flink) {
            ((_LIST_ENTRY *)((int)p_Stack_7c + 0x550))->Flink = (_LIST_ENTRY *)0x0;
          }
          (*(code *)((*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type)->ProcessLocksList).Flink)
                    (p_Stack_b0);
          LeaveCriticalSection(local_ac);
          p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var28->ProcessLocksList).Flink;
          p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_88->Type + 1);
          p_Var30 = p_Stack_7c;
          if (p_Stack_7c < p_Var29) {
            do {
              iVar33 = *(int *)((int)&local_94[0x42].CreatorBackTraceIndexHigh + (int)local_80);
              p_Var52 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var30->Type + 1);
              puVar46 = (undefined4 *)(iVar33 + (int)p_Var30 * 0x38);
              uVar44 = puVar46[1];
              uVar14 = puVar46[2];
              uVar15 = puVar46[3];
              puVar53 = (undefined4 *)(iVar33 + -0x38 + (int)p_Var30 * 0x38);
              *puVar53 = *puVar46;
              puVar53[1] = uVar44;
              puVar53[2] = uVar14;
              puVar53[3] = uVar15;
              puVar46 = (undefined4 *)(iVar33 + 0x10 + (int)p_Var30 * 0x38);
              uVar44 = puVar46[1];
              uVar14 = puVar46[2];
              uVar15 = puVar46[3];
              puVar53 = (undefined4 *)(iVar33 + -0x28 + (int)p_Var30 * 0x38);
              *puVar53 = *puVar46;
              puVar53[1] = uVar44;
              puVar53[2] = uVar14;
              puVar53[3] = uVar15;
              puVar46 = (undefined4 *)(iVar33 + 0x20 + (int)p_Var30 * 0x38);
              uVar44 = puVar46[1];
              uVar14 = puVar46[2];
              uVar15 = puVar46[3];
              puVar53 = (undefined4 *)(iVar33 + -0x18 + (int)p_Var30 * 0x38);
              *puVar53 = *puVar46;
              puVar53[1] = uVar44;
              puVar53[2] = uVar14;
              puVar53[3] = uVar15;
              *(undefined8 *)(iVar33 + -8 + (int)p_Var30 * 0x38) =
                   *(undefined8 *)(iVar33 + 0x30 + (int)p_Var30 * 0x38);
              p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         ((int)&(local_94 + 0x42)[1].CriticalSection + (int)local_80);
              p_Var28 = local_8c;
              p_Var30 = p_Var52;
              puVar46 = local_84;
            } while (p_Var52 < p_Var29);
          }
          local_9c = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var29[-1].SpareWORD + 1);
          (p_Var28->ProcessLocksList).Flink = (_LIST_ENTRY *)local_9c;
        }
      }
    }
    uVar57 = FUN_100b64fd(puVar46 + 0x4082);
    local_ac = (LPCRITICAL_SECTION)((ulonglong)uVar57 >> 0x20);
    p_Stack_a8 = (PRTL_CRITICAL_SECTION_DEBUG)uVar57;
    p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100b6997(p_Var28,(uint)p_Stack_a8,(uint)local_ac);
    param_1 = local_84;
    iStack_a4 = (int)p_Stack_88 * 0x38;
    if (((p_Stack_88 == local_9c) ||
        (p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type, puVar46 = local_84,
        *(PRTL_CRITICAL_SECTION_DEBUG *)(iStack_a4 + (int)p_Var29) != p_Stack_a8)) ||
       (*(LPCRITICAL_SECTION *)(iStack_a4 + 4 + (int)p_Var29) != local_ac)) {
      if (local_9c == (PRTL_CRITICAL_SECTION_DEBUG)p_Var28->CriticalSection) {
        lVar12 = (ulonglong)(uint)((int)p_Var28->CriticalSection * 2) * 0x38;
        SVar38 = (SIZE_T)lVar12;
        if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
          SVar38 = 0xffffffff;
        }
        local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100cfd89(SVar38);
        if (local_a0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          if (p_Var28->CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
            uVar48 = 0;
            do {
              iVar45 = uVar48 * 0x38;
              uVar48 = uVar48 + 1;
              piVar42 = (int *)(*(int *)((int)&local_94[0x42].CreatorBackTraceIndexHigh +
                                        (int)local_80) + iVar45);
              iVar33 = piVar42[1];
              iVar37 = piVar42[2];
              iVar41 = piVar42[3];
              piVar39 = (int *)(iVar45 + (int)local_a0);
              *piVar39 = *piVar42;
              piVar39[1] = iVar33;
              piVar39[2] = iVar37;
              piVar39[3] = iVar41;
              iVar33 = piVar42[5];
              iVar37 = piVar42[6];
              iVar41 = piVar42[7];
              piVar39 = (int *)(iVar45 + 0x10 + (int)local_a0);
              *piVar39 = piVar42[4];
              piVar39[1] = iVar33;
              piVar39[2] = iVar37;
              piVar39[3] = iVar41;
              iVar33 = piVar42[9];
              iVar37 = piVar42[10];
              iVar41 = piVar42[0xb];
              piVar39 = (int *)(iVar45 + 0x20 + (int)local_a0);
              *piVar39 = piVar42[8];
              piVar39[1] = iVar33;
              piVar39[2] = iVar37;
              piVar39[3] = iVar41;
              *(undefined8 *)(iVar45 + 0x30 + (int)local_a0) = *(undefined8 *)(piVar42 + 0xc);
              p_Var28 = local_8c;
              puVar46 = local_84;
            } while (uVar48 < *(uint *)((int)&local_80->Type + (int)&(local_94 + 0x42)[1].Type));
          }
          thunk_FUN_100cfd6c(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type);
          p_Var28->CriticalSection = (_RTL_CRITICAL_SECTION *)((int)p_Var28->CriticalSection << 1);
          *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type = local_a0;
        }
      }
      p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var28->ProcessLocksList).Flink;
      param_1 = puVar46;
      for (; p_Stack_88 < p_Var29;
          p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var29[-1].SpareWORD + 1)) {
        iVar33 = *(int *)((int)&local_94[0x42].CreatorBackTraceIndexHigh + (int)local_80);
        puVar53 = (undefined4 *)(iVar33 + -0x38 + (int)p_Var29 * 0x38);
        uVar44 = puVar53[1];
        uVar14 = puVar53[2];
        uVar15 = puVar53[3];
        puVar46 = (undefined4 *)(iVar33 + (int)p_Var29 * 0x38);
        *puVar46 = *puVar53;
        puVar46[1] = uVar44;
        puVar46[2] = uVar14;
        puVar46[3] = uVar15;
        puVar46 = (undefined4 *)(iVar33 + -0x28 + (int)p_Var29 * 0x38);
        uVar44 = puVar46[1];
        uVar14 = puVar46[2];
        uVar15 = puVar46[3];
        puVar53 = (undefined4 *)(iVar33 + 0x10 + (int)p_Var29 * 0x38);
        *puVar53 = *puVar46;
        puVar53[1] = uVar44;
        puVar53[2] = uVar14;
        puVar53[3] = uVar15;
        puVar46 = (undefined4 *)(iVar33 + -0x18 + (int)p_Var29 * 0x38);
        uVar44 = puVar46[1];
        uVar14 = puVar46[2];
        uVar15 = puVar46[3];
        puVar53 = (undefined4 *)(iVar33 + 0x20 + (int)p_Var29 * 0x38);
        *puVar53 = *puVar46;
        puVar53[1] = uVar44;
        puVar53[2] = uVar14;
        puVar53[3] = uVar15;
        *(undefined8 *)(iVar33 + 0x30 + (int)p_Var29 * 0x38) =
             *(undefined8 *)(iVar33 + -8 + (int)p_Var29 * 0x38);
        p_Var28 = local_8c;
        param_1 = local_84;
      }
      p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type;
      p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29->Type + iStack_a4) = p_Stack_a8;
      *(LPCRITICAL_SECTION *)((int)&p_Var29->CriticalSection + iStack_a4) = local_ac;
      p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type;
      uVar44 = param_1[0x4083];
      uVar14 = param_1[0x4084];
      uVar15 = param_1[0x4085];
      puVar46 = (undefined4 *)((int)&(p_Var29->ProcessLocksList).Flink + iStack_a4);
      *puVar46 = param_1[0x4082];
      puVar46[1] = uVar44;
      puVar46[2] = uVar14;
      puVar46[3] = uVar15;
      uVar44 = param_1[0x4087];
      uVar14 = param_1[0x4088];
      uVar15 = param_1[0x4089];
      puVar46 = (undefined4 *)((int)&p_Var29->Flags + iStack_a4);
      *puVar46 = param_1[0x4086];
      puVar46[1] = uVar44;
      puVar46[2] = uVar14;
      puVar46[3] = uVar15;
      *(undefined8 *)((int)&p_Var29[1].ProcessLocksList.Flink + iStack_a4) =
           *(undefined8 *)(param_1 + 0x408a);
      p_Var10 = (p_Var28->ProcessLocksList).Blink[(int)p_Var28->EntryCount * 0x2a2 + 0xa2].Flink;
      (*(code *)p_Var10->Flink[0xb].Flink)(p_Var10,param_1 + 0x4082,&p_Stack_b0);
      *(PRTL_CRITICAL_SECTION_DEBUG *)
       ((int)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type)[1].EntryCount + iStack_a4) =
           p_Stack_b0;
      (p_Var28->ProcessLocksList).Flink =
           (_LIST_ENTRY *)((int)&((p_Var28->ProcessLocksList).Flink)->Flink + 1);
    }
    else {
      uVar48 = FUN_100b649c(local_84 + 0x4082,(uint *)((int)p_Var29 + iStack_a4 + 8));
      if ((char)uVar48 != '\0') {
        p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                      ((int)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type)[1].EntryCount +
                      iStack_a4);
        p_Var10 = (p_Var28->ProcessLocksList).Blink;
        p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var10 + (int)p_Var28->EntryCount * 0x2a2);
        local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var10 + 0x94);
        EnterCriticalSection((LPCRITICAL_SECTION)local_a0);
        if (p_Stack_b0 ==
            (PRTL_CRITICAL_SECTION_DEBUG)((_LIST_ENTRY *)((int)p_Stack_7c + 0x550))->Flink) {
          ((_LIST_ENTRY *)((int)p_Stack_7c + 0x550))->Flink = (_LIST_ENTRY *)0x0;
        }
        (*(code *)((*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_b0->Type)->ProcessLocksList).Flink)
                  (p_Stack_b0);
        LeaveCriticalSection((LPCRITICAL_SECTION)local_a0);
        FUN_100b6b6b(p_Var28,(int)p_Stack_88,p_Stack_a8,local_ac,param_1 + 0x4082);
      }
    }
    p_Var29 = local_94;
    p_Stack_7c = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type)[1].EntryCount + iStack_a4)
    ;
    if (p_Stack_7c !=
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_94[0x2a].EntryCount + (int)local_80)) {
      piVar39 = *(int **)((int)&local_94[0x28].ContentionCount + (int)local_80);
      (**(code **)(*piVar39 + 0xac))(piVar39,p_Stack_7c);
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var29[0x2a].EntryCount + (int)local_80) = p_Stack_7c;
    }
    *(undefined1 *)((int)param_1 + 0xf66d) = 0;
    puVar46 = puStack_68;
  }
  if ((*(char *)((int)param_1 + 0xf66e) != '\0') || (puVar46 != param_1)) {
    if ((*(char *)((int)param_1 + 0x7642) == '\0') &&
       ((param_1[0x1d87] != 0 || ((*(byte *)(param_1 + 0x1d8d) & 1) != 0)))) {
      iVar33 = 0xec0;
    }
    else {
      iVar33 = 0xed8;
    }
    pfVar4 = (float *)(iVar33 + (int)param_1);
    fVar55 = pfVar4[1];
    fVar19 = pfVar4[2];
    fVar20 = pfVar4[3];
    pfVar3 = (float *)(param_1 + 0x3e8d);
    *pfVar3 = *pfVar4;
    param_1[0x3e8e] = fVar55;
    param_1[0x3e8f] = fVar19;
    param_1[0x3e90] = fVar20;
    *(undefined8 *)(param_1 + 0x3e91) = *(undefined8 *)(iVar33 + 0x10 + (int)param_1);
    if (0xafff < (int)param_1[0x3dd2]) {
      *pfVar3 = (float)param_1[0x3bc] + *pfVar3;
      param_1[0x3e8e] = (float)param_1[0x3e8e] + (float)param_1[0x3bd];
    }
    if (param_1[0x1d87] == 0) {
      param_1[0x3e91] = 0;
      param_1[0x3e92] = 0x3f800000;
    }
    p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[4] * 0x1510);
    p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x3dac];
    if (((((*pfVar3 != *(float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3e].EntryCount)) ||
          ((float)param_1[0x3e8e] !=
           *(float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3e].ContentionCount))) ||
         ((float)param_1[0x3e8f] !=
          *(float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3e].Flags))) ||
        (((float)param_1[0x3e90] !=
          *(float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3e].CreatorBackTraceIndexHigh) ||
         ((float)param_1[0x3e91] != *(float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3f].Type)
         )))) || ((float)param_1[0x3e92] !=
                  *(float *)((int)&p_Stack_7c[0x3f].CriticalSection + (int)p_Stack_b0))) {
      piVar39 = *(int **)((int)&p_Stack_7c[0x28].ContentionCount + (int)p_Stack_b0);
      (**(code **)(*piVar39 + 0xb0))(piVar39,1,pfVar3);
      fVar55 = (float)param_1[0x3e8e];
      fVar19 = (float)param_1[0x3e8f];
      fVar20 = (float)param_1[0x3e90];
      pfVar4 = (float *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3e].EntryCount);
      *pfVar4 = *pfVar3;
      pfVar4[1] = fVar55;
      pfVar4[2] = fVar19;
      pfVar4[3] = fVar20;
      *(undefined8 *)((int)&p_Stack_b0->Type + (int)&p_Stack_7c[0x3f].Type) =
           *(undefined8 *)(param_1 + 0x3e91);
    }
    *(undefined1 *)((int)param_1 + 0xf66e) = 0;
    puVar46 = puStack_68;
  }
  if ((*(char *)(param_1 + 0x408c) != '\0') || (puVar46 != param_1)) {
    FUN_100b5313((void *)param_1[0x3dac],param_1[4],param_1[0x3e8b],param_1[0x3e72],param_1[0x3e73],
                 param_1[0x3e74],param_1[0x3e75]);
    *(undefined1 *)(param_1 + 0x408c) = 0;
  }
  p_Var51 = (LPCRITICAL_SECTION)param_1[0x3d99];
  if ((p_Var51 != (LPCRITICAL_SECTION)0x0) || (puVar46 != param_1)) {
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      local_ac = p_Var51;
      uVar48 = 0;
      bVar54 = p_Var51 != (LPCRITICAL_SECTION)0x0;
      if (bVar54) {
        for (; ((uint)p_Var51 >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
        }
      }
      while (bVar54) {
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar48 & 0xff);
        pbVar13 = (byte *)((int)&local_ac + ((int)uVar48 >> 3));
        *pbVar13 = *pbVar13 & ~('\x01' << (uVar48 & 7));
        uVar47 = (uint)*(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x713);
        uVar48 = param_1[(int)p_Var28 * 2 + 0x1c5];
        if (uVar48 < uVar47) {
          fVar55 = (float)uVar47;
        }
        else {
          fVar55 = (float)((double)(int)uVar48 + (double)(&DAT_100d97a0)[-((int)uVar48 >> 0x1f)]);
        }
        param_1[(int)p_Var28 * 0xd + 0x2f] = fVar55;
        bVar26 = *(byte *)(param_1 + (int)p_Var28 * 2 + 0x1c4);
        bVar27 = *(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x711);
        bVar7 = *(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x712);
        uStack_90._0_2_ = CONCAT11(bVar27,(undefined1)uStack_90);
        uStack_90._0_3_ = CONCAT12(bVar7,(undefined2)uStack_90);
        uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT13(bVar26,(undefined3)uStack_90);
        if (bVar26 != 2) {
          fVar55 = 3.4028235e+38;
        }
        param_1[(int)p_Var28 * 0xd + 0x30] = fVar55;
        p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        if (bVar26 != 2) {
          p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)bVar26;
        }
        if ((bVar27 == 2) || (bVar7 == 2)) {
          param_1[(int)p_Var28 * 0xd + 0x24] = 0x55;
          param_1[(int)p_Var28 * 0xd + 0x100] = fVar55;
          p_Stack_7c = p_Stack_b0;
          if ((bVar27 != 2) && (bVar7 != 2)) goto LAB_100321b4;
          uVar44 = 0xd5;
        }
        else {
          p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)(uint)bVar7;
          param_1[(int)p_Var28 * 0xd + 0x100] = fVar55;
          param_1[(int)p_Var28 * 0xd + 0x24] =
               *(undefined4 *)
                (&DAT_100d22e0 + (((int)p_Stack_7c * 2 | (uint)bVar27) * 2 | (uint)p_Stack_b0) * 4);
LAB_100321b4:
          uVar44 = *(undefined4 *)
                    (&DAT_100d22c0 + (((uint)bVar7 * 2 | (uint)bVar27) * 2 | (uint)p_Stack_b0) * 4);
        }
        param_1[(int)p_Var28 * 0xd + 0xf4] = uVar44;
        if ((*(char *)(param_1 + (int)&p_Var28[0xea].ProcessLocksList.Blink) == '\x05') ||
           (iVar33 = 0x90, *(char *)(param_1 + (int)&p_Var28[0xea].ProcessLocksList.Blink) == '\x06'
           )) {
          iVar33 = 0x3d0;
        }
        puVar43 = (uint *)((int)param_1 + (int)p_Var28 * 0x34 + iVar33);
        puVar40 = param_1 + (int)p_Var28 * 0xd + 0x3e93;
        uVar48 = puVar43[1];
        uVar47 = puVar43[2];
        uVar34 = puVar43[3];
        *puVar40 = *puVar43;
        puVar40[1] = uVar48;
        puVar40[2] = uVar47;
        puVar40[3] = uVar34;
        uVar48 = puVar43[5];
        uVar47 = puVar43[6];
        uVar34 = puVar43[7];
        puVar40[4] = puVar43[4];
        puVar40[5] = uVar48;
        puVar40[6] = uVar47;
        puVar40[7] = uVar34;
        uVar48 = puVar43[9];
        uVar47 = puVar43[10];
        uVar34 = puVar43[0xb];
        puVar40[8] = puVar43[8];
        puVar40[9] = uVar48;
        puVar40[10] = uVar47;
        puVar40[0xb] = uVar34;
        puVar40[0xc] = puVar43[0xc];
        local_80 = p_Var28;
        p_Stack_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                     FUN_100b65f4((void *)(param_1[0x3dad] + 0x39c),puVar40);
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[(int)((int)&local_80[0x1f1].SpareWORD + 1)];
        local_78 = CONCAT44(local_78._4_4_,p_Var28);
        if (p_Stack_88 != p_Var28) {
          iVar33 = param_1[0x3dad];
          iStack_a4 = iVar33;
          if (p_Var28 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            (**(code **)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var28->Type)->CreatorBackTraceIndexHigh
            )(p_Var28,&uStack_50);
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            local_8c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x3a4);
            local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((((((iStack_38 + -1) * 0x10 | iStack_3c - 1U) << 3 | uStack_44) << 3 |
                         uStack_48) << 3 | uStack_4c) << 8 | uStack_50);
            p_Stack_7c = local_8c;
            local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if (local_8c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iStack_a4 + 0x39c);
              p_Var29 = local_8c;
              do {
                local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)
                           ((uint)((int)&p_Var29->Type + (int)&p_Var28->Type) >> 1);
                p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)
                             p_Stack_b0[(int)local_a0 * 2].CriticalSection;
                p_Var30 = local_a0;
                if (((PRTL_CRITICAL_SECTION_DEBUG)p_Stack_b0[(int)local_a0 * 2].CriticalSection ==
                     (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
                   (*(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_b0 + (int)local_a0 * 2) <= local_9c)) {
                  param_1 = local_84;
                  if (local_9c <= *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_b0 + (int)local_a0 * 2))
                  break;
                  p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_a0->Type + 1);
                  local_a0 = p_Var28;
                  p_Var30 = p_Var29;
                }
                p_Var29 = p_Var30;
                param_1 = local_84;
              } while (p_Var30 != p_Var28);
            }
            p_Var28 = local_a0;
            p_Var30 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_a0 * 0x40);
            p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(iStack_a4 + 0x39c);
            local_94 = p_Var30;
            if (((local_a0 == local_8c) ||
                (param_1 = local_84,
                *(PRTL_CRITICAL_SECTION_DEBUG *)
                 ((int)&p_Var30->Type + (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type) !=
                local_9c)) ||
               (*(int *)((int)&p_Var30->CriticalSection +
                        (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type) != 0)) {
              p_Stack_a8 = p_Var29;
              if (*(int *)(iStack_a4 + 0x3a4) == *(int *)(iStack_a4 + 0x3a0)) {
                lVar12 = (ulonglong)(uint)(*(int *)(iStack_a4 + 0x3a0) * 2) * 0x40;
                SVar38 = (SIZE_T)lVar12;
                if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
                  SVar38 = 0xffffffff;
                }
                p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100cfd89(SVar38);
                if (p_Stack_b0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                  p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                  if (*(int *)(iStack_a4 + 0x3a0) != 0) {
                    uVar48 = 0;
                    do {
                      uVar47 = uVar48 + 1;
                      p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type + uVar48 * 2;
                      WVar23 = p_Var29->CreatorBackTraceIndex;
                      p_Var16 = p_Var29->CriticalSection;
                      p_Var10 = (p_Var29->ProcessLocksList).Flink;
                      p_Var17 = (p_Var29->ProcessLocksList).Blink;
                      p_Var28 = p_Stack_b0 + uVar48 * 2;
                      p_Var28->Type = p_Var29->Type;
                      p_Var28->CreatorBackTraceIndex = WVar23;
                      p_Var28->CriticalSection = p_Var16;
                      (p_Var28->ProcessLocksList).Flink = p_Var10;
                      (p_Var28->ProcessLocksList).Blink = p_Var17;
                      DVar9 = p_Var29->ContentionCount;
                      DVar18 = p_Var29->Flags;
                      uVar44 = *(undefined4 *)&p_Var29->CreatorBackTraceIndexHigh;
                      pDVar5 = &p_Stack_b0[uVar48 * 2].EntryCount;
                      *pDVar5 = p_Var29->EntryCount;
                      pDVar5[1] = DVar9;
                      pDVar5[2] = DVar18;
                      pDVar5[3] = uVar44;
                      WVar23 = p_Var29[1].CreatorBackTraceIndex;
                      p_Var16 = p_Var29[1].CriticalSection;
                      p_Var10 = p_Var29[1].ProcessLocksList.Flink;
                      p_Var17 = p_Var29[1].ProcessLocksList.Blink;
                      p_Var28 = p_Stack_b0 + uVar48 * 2 + 1;
                      p_Var28->Type = p_Var29[1].Type;
                      p_Var28->CreatorBackTraceIndex = WVar23;
                      p_Var28->CriticalSection = p_Var16;
                      (p_Var28->ProcessLocksList).Flink = p_Var10;
                      (p_Var28->ProcessLocksList).Blink = p_Var17;
                      DVar9 = p_Var29[1].ContentionCount;
                      DVar18 = p_Var29[1].Flags;
                      uVar44 = *(undefined4 *)&p_Var29[1].CreatorBackTraceIndexHigh;
                      pDVar5 = &p_Stack_b0[uVar48 * 2 + 1].EntryCount;
                      *pDVar5 = p_Var29[1].EntryCount;
                      pDVar5[1] = DVar9;
                      pDVar5[2] = DVar18;
                      pDVar5[3] = uVar44;
                      p_Var28 = local_a0;
                      uVar48 = uVar47;
                      param_1 = local_84;
                    } while (uVar47 < *(uint *)(iStack_a4 + 0x3a0));
                  }
                  thunk_FUN_100cfd6c(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type);
                  *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type = p_Stack_b0;
                  *(int *)(iStack_a4 + 0x3a0) = *(int *)(iStack_a4 + 0x3a0) << 1;
                }
              }
              p_Stack_7c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iStack_a4 + 0x3a4);
              p_Var29 = p_Stack_7c;
              p_Var30 = local_94;
              if (p_Var28 < p_Stack_7c) {
                do {
                  p_Var49 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
                  puVar50 = (undefined1 *)((int)&p_Var29[-1].SpareWORD + 1);
                  p_Var52 = p_Var49 + (int)p_Var29 * 2 + -2;
                  WVar23 = p_Var52->CreatorBackTraceIndex;
                  p_Var16 = p_Var52->CriticalSection;
                  p_Var10 = (p_Var52->ProcessLocksList).Flink;
                  p_Var17 = (p_Var52->ProcessLocksList).Blink;
                  p_Var30 = p_Var49 + (int)p_Var29 * 2;
                  p_Var30->Type = p_Var52->Type;
                  p_Var30->CreatorBackTraceIndex = WVar23;
                  p_Var30->CriticalSection = p_Var16;
                  (p_Var30->ProcessLocksList).Flink = p_Var10;
                  (p_Var30->ProcessLocksList).Blink = p_Var17;
                  pDVar5 = &p_Var49[(int)p_Var29 * 2 + -2].EntryCount;
                  DVar9 = pDVar5[1];
                  DVar18 = pDVar5[2];
                  uVar44 = pDVar5[3];
                  pDVar6 = &p_Var49[(int)p_Var29 * 2].EntryCount;
                  *pDVar6 = *pDVar5;
                  pDVar6[1] = DVar9;
                  pDVar6[2] = DVar18;
                  pDVar6[3] = uVar44;
                  p_Var30 = p_Var49 + (int)p_Var29 * 2 + -1;
                  WVar23 = p_Var30->CreatorBackTraceIndex;
                  p_Var16 = p_Var30->CriticalSection;
                  p_Var10 = (p_Var30->ProcessLocksList).Flink;
                  p_Var17 = (p_Var30->ProcessLocksList).Blink;
                  p_Var52 = p_Var49 + (int)p_Var29 * 2 + 1;
                  p_Var52->Type = p_Var30->Type;
                  p_Var52->CreatorBackTraceIndex = WVar23;
                  p_Var52->CriticalSection = p_Var16;
                  (p_Var52->ProcessLocksList).Flink = p_Var10;
                  (p_Var52->ProcessLocksList).Blink = p_Var17;
                  pDVar5 = &p_Var49[(int)p_Var29 * 2 + -1].EntryCount;
                  DVar9 = pDVar5[1];
                  DVar18 = pDVar5[2];
                  uVar44 = pDVar5[3];
                  pDVar6 = &p_Var49[(int)p_Var29 * 2 + 1].EntryCount;
                  *pDVar6 = *pDVar5;
                  pDVar6[1] = DVar9;
                  pDVar6[2] = DVar18;
                  pDVar6[3] = uVar44;
                  p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)puVar50;
                } while (p_Var28 < puVar50);
                p_Var30 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var28 << 6);
                param_1 = local_84;
              }
              p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
              *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var30->Type + (int)p_Var28) = local_9c;
              *(undefined4 *)((int)&p_Var30->CriticalSection + (int)p_Var28) = 0;
              p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
              puVar43 = (uint *)((int)&p_Var28->Type + (int)&(p_Var30->ProcessLocksList).Flink);
              *puVar43 = uStack_50;
              puVar43[1] = uStack_4c;
              puVar43[2] = uStack_48;
              puVar43[3] = uStack_44;
              puVar46 = (undefined4 *)((int)&p_Var30->Flags + (int)p_Var28);
              *puVar46 = uStack_40;
              puVar46[1] = iStack_3c;
              puVar46[2] = iStack_38;
              puVar46[3] = uStack_34;
              puVar46 = (undefined4 *)
                        ((int)&p_Var28->Type + (int)&p_Var30[1].ProcessLocksList.Flink);
              *puVar46 = uStack_30;
              puVar46[1] = uStack_2c;
              puVar46[2] = uStack_28;
              puVar46[3] = uStack_24;
              *(undefined4 *)((int)&p_Var30[1].Flags + (int)p_Var28) = uStack_20;
              p_Stack_7c = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100cfd55(0x2d0);
              if (p_Stack_7c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                FUN_100cfed0((int *)p_Stack_7c,0,0x2d0);
              }
              *(PRTL_CRITICAL_SECTION_DEBUG *)
               ((int)&p_Var30[1].CreatorBackTraceIndexHigh +
               (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) = p_Stack_7c;
              *(int *)(iStack_a4 + 0x3a4) = *(int *)(iStack_a4 + 0x3a4) + 1;
              p_Var29 = p_Stack_a8;
            }
            iVar33 = *(int *)((int)&p_Var30[1].CreatorBackTraceIndexHigh +
                             (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type);
            if (iVar33 != 0) {
              uVar48 = 0;
              do {
                if ((PRTL_CRITICAL_SECTION_DEBUG)*(int *)(iVar33 + 0x1c + uVar48 * 0x24) ==
                    (PRTL_CRITICAL_SECTION_DEBUG)local_78) {
                  *(undefined1 *)(iVar33 + 0x20 + uVar48 * 0x24) = 0;
                  break;
                }
                uVar48 = uVar48 + 1;
              } while (uVar48 < 0x14);
            }
          }
          param_1[(int)((int)&local_80[0x1f1].SpareWORD + 1)] = p_Stack_88;
        }
        pbVar13 = (byte *)((int)param_1 + ((int)local_80 >> 3) + 0xf664);
        *pbVar13 = *pbVar13 & ~('\x01' << ((uint)local_80 & 7));
        uVar48 = 0;
        bVar54 = local_ac != (LPCRITICAL_SECTION)0x0;
        if (bVar54) {
          for (; ((uint)local_ac >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
          }
        }
      }
      FUN_100b50e6((void *)param_1[0x3dac],param_1[4],0,0x10,(int)(param_1 + 0x3e3f));
    }
    else if (param_1[0x3e0b] != 0) {
      FUN_100b50e6((void *)param_1[0x3dac],param_1[4],0,1,(int)(param_1 + 0x3db6));
      param_1[0x3d99] = param_1[0x3d99] & 0xfffffffe;
    }
  }
  if ((param_1[0x3da7] == 0) && (puStack_68 == param_1)) goto LAB_10032a78;
  local_ac = (LPCRITICAL_SECTION)(param_1[0x3da7] & 0xf);
  uVar48 = 0;
  bVar54 = local_ac == (LPCRITICAL_SECTION)0x0;
  if (!bVar54) {
    for (; ((uint)local_ac >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
    }
  }
  while (!bVar54) {
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar48 & 0xff);
    pbVar13 = (byte *)((int)&local_ac + ((int)uVar48 >> 3));
    *pbVar13 = *pbVar13 & ~('\x01' << (uVar48 & 7));
    uVar47 = (uint)*(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x7fb);
    uVar48 = param_1[(int)p_Var28 * 2 + 0x1ff];
    if (uVar48 < uVar47) {
      fVar55 = (float)uVar47;
    }
    else {
      fVar55 = (float)((double)(int)uVar48 + (double)(&DAT_100d97a0)[-((int)uVar48 >> 0x1f)]);
    }
    param_1[(int)p_Var28 * 0xd + 0x213] = fVar55;
    bVar26 = *(byte *)(param_1 + (int)p_Var28 * 2 + 0x1fe);
    bVar27 = *(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x7f9);
    uStack_90 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT13(bVar26,(undefined3)uStack_90);
    bVar7 = *(byte *)((int)param_1 + (int)p_Var28 * 8 + 0x7fa);
    param_1[(int)p_Var28 * 0xd + 0x214] = 0x7f7fffff;
    if ((bVar27 == 2) || (bVar7 == 2)) {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined4 *)
                (&DAT_100d22e0 + (((uint)bVar7 * 2 | (uint)bVar27) * 2 | (uint)bVar26) * 4);
    }
    param_1[(int)p_Var28 * 0xd + 0x208] = uVar44;
    puVar43 = param_1 + (int)p_Var28 * 0xd + 0x208;
    uVar47 = puVar43[1];
    uVar34 = puVar43[2];
    uVar31 = puVar43[3];
    uVar48 = param_1[(int)p_Var28 * 0xd + 0x214];
    puVar40 = param_1 + (int)p_Var28 * 0xd + 0x3f63;
    *puVar40 = *puVar43;
    puVar40[1] = uVar47;
    puVar40[2] = uVar34;
    puVar40[3] = uVar31;
    puVar43 = param_1 + (int)p_Var28 * 0xd + 0x20c;
    uVar47 = puVar43[1];
    uVar34 = puVar43[2];
    uVar31 = puVar43[3];
    puVar40[4] = *puVar43;
    puVar40[5] = uVar47;
    puVar40[6] = uVar34;
    puVar40[7] = uVar31;
    puVar43 = param_1 + (int)p_Var28 * 0xd + 0x210;
    uVar47 = puVar43[1];
    uVar34 = puVar43[2];
    uVar31 = puVar43[3];
    puVar40[8] = *puVar43;
    puVar40[9] = uVar47;
    puVar40[10] = uVar34;
    puVar40[0xb] = uVar31;
    puVar40[0xc] = uVar48;
    p_Stack_88 = p_Var28;
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100b65f4((void *)(param_1[0x3dad] + 0x39c),puVar40);
    local_8c = (PRTL_CRITICAL_SECTION_DEBUG)
               param_1[(int)&(p_Var28 + 0x1f2)[1].ProcessLocksList.Blink];
    if (local_80 != local_8c) {
      iVar33 = param_1[0x3dad];
      iStack_a4 = iVar33;
      if (local_8c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        (**(code **)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&local_8c->Type)->CreatorBackTraceIndexHigh)
                  (local_8c,&uStack_50);
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        p_Stack_7c = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x3a4);
        local_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((((((iStack_38 + -1) * 0x10 | iStack_3c - 1U) << 3 | uStack_44) << 3 | uStack_48
                     ) << 3 | uStack_4c) << 8 | uStack_50);
        local_78 = CONCAT44(local_78._4_4_,p_Stack_7c);
        local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        if (p_Stack_7c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Stack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iStack_a4 + 0x39c);
          p_Var29 = p_Stack_7c;
          do {
            local_a0 = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((uint)((int)&p_Var29->Type + (int)&p_Var28->Type) >> 1);
            local_78 = CONCAT44(local_78._4_4_,p_Stack_b0[(int)local_a0 * 2].CriticalSection);
            p_Var30 = local_a0;
            if ((p_Stack_b0[(int)local_a0 * 2].CriticalSection == (_RTL_CRITICAL_SECTION *)0x0) &&
               (*(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_b0 + (int)local_a0 * 2) <= local_9c)) {
              param_1 = local_84;
              if (local_9c <= *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_b0 + (int)local_a0 * 2))
              break;
              p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_a0->Type + 1);
              local_a0 = p_Var28;
              p_Var30 = p_Var29;
            }
            p_Var29 = p_Var30;
            param_1 = local_84;
          } while (p_Var30 != p_Var28);
        }
        p_Var28 = local_a0;
        p_Var30 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_a0 * 0x40);
        p_Var29 = (PRTL_CRITICAL_SECTION_DEBUG)(iStack_a4 + 0x39c);
        local_94 = p_Var30;
        if (((local_a0 == p_Stack_7c) ||
            (param_1 = local_84,
            *(PRTL_CRITICAL_SECTION_DEBUG *)
             ((int)&p_Var30->Type + (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type) != local_9c
            )) || (*(int *)((int)&p_Var30->CriticalSection +
                           (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type) != 0)) {
          p_Stack_a8 = p_Var29;
          if (*(int *)(iStack_a4 + 0x3a4) == *(int *)(iStack_a4 + 0x3a0)) {
            lVar12 = (ulonglong)(uint)(*(int *)(iStack_a4 + 0x3a0) * 2) * 0x40;
            SVar38 = (SIZE_T)lVar12;
            if ((int)((ulonglong)lVar12 >> 0x20) != 0) {
              SVar38 = 0xffffffff;
            }
            p_Stack_b0 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_100cfd89(SVar38);
            if (p_Stack_b0 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              local_78 = local_78 & 0xffffffff00000000;
              uVar56 = local_78;
              if (*(int *)(iStack_a4 + 0x3a0) != 0) {
                local_78._0_4_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                do {
                  uVar48 = (int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 + 1;
                  p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type +
                            (int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 * 2;
                  WVar23 = p_Var29->CreatorBackTraceIndex;
                  p_Var16 = p_Var29->CriticalSection;
                  p_Var10 = (p_Var29->ProcessLocksList).Flink;
                  p_Var17 = (p_Var29->ProcessLocksList).Blink;
                  p_Var28 = p_Stack_b0 + (int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 * 2;
                  p_Var28->Type = p_Var29->Type;
                  p_Var28->CreatorBackTraceIndex = WVar23;
                  p_Var28->CriticalSection = p_Var16;
                  (p_Var28->ProcessLocksList).Flink = p_Var10;
                  (p_Var28->ProcessLocksList).Blink = p_Var17;
                  DVar9 = p_Var29->ContentionCount;
                  DVar18 = p_Var29->Flags;
                  uVar44 = *(undefined4 *)&p_Var29->CreatorBackTraceIndexHigh;
                  pDVar5 = &p_Stack_b0[(int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 * 2].EntryCount;
                  *pDVar5 = p_Var29->EntryCount;
                  pDVar5[1] = DVar9;
                  pDVar5[2] = DVar18;
                  pDVar5[3] = uVar44;
                  WVar23 = p_Var29[1].CreatorBackTraceIndex;
                  p_Var16 = p_Var29[1].CriticalSection;
                  p_Var10 = p_Var29[1].ProcessLocksList.Flink;
                  p_Var17 = p_Var29[1].ProcessLocksList.Blink;
                  p_Var28 = p_Stack_b0 + (int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 * 2 + 1;
                  p_Var28->Type = p_Var29[1].Type;
                  p_Var28->CreatorBackTraceIndex = WVar23;
                  p_Var28->CriticalSection = p_Var16;
                  (p_Var28->ProcessLocksList).Flink = p_Var10;
                  (p_Var28->ProcessLocksList).Blink = p_Var17;
                  DVar9 = p_Var29[1].ContentionCount;
                  DVar18 = p_Var29[1].Flags;
                  uVar44 = *(undefined4 *)&p_Var29[1].CreatorBackTraceIndexHigh;
                  pDVar5 = &p_Stack_b0[(int)(PRTL_CRITICAL_SECTION_DEBUG)local_78 * 2 + 1].
                            EntryCount;
                  *pDVar5 = p_Var29[1].EntryCount;
                  pDVar5[1] = DVar9;
                  pDVar5[2] = DVar18;
                  pDVar5[3] = uVar44;
                  p_Var28 = local_a0;
                  local_78._0_4_ = (PRTL_CRITICAL_SECTION_DEBUG)uVar48;
                  param_1 = local_84;
                } while (uVar48 < *(uint *)(iStack_a4 + 0x3a0));
              }
              local_78 = uVar56;
              thunk_FUN_100cfd6c(*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type);
              *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type = p_Stack_b0;
              *(int *)(iStack_a4 + 0x3a0) = *(int *)(iStack_a4 + 0x3a0) << 1;
            }
          }
          p_Var29 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iStack_a4 + 0x3a4);
          p_Var52 = p_Var29;
          p_Var30 = local_94;
          if (p_Var28 < p_Var29) {
            do {
              p_Var11 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
              puVar50 = (undefined1 *)((int)&p_Var52[-1].SpareWORD + 1);
              p_Var49 = p_Var11 + (int)p_Var52 * 2 + -2;
              WVar23 = p_Var49->CreatorBackTraceIndex;
              p_Var16 = p_Var49->CriticalSection;
              p_Var10 = (p_Var49->ProcessLocksList).Flink;
              p_Var17 = (p_Var49->ProcessLocksList).Blink;
              p_Var30 = p_Var11 + (int)p_Var52 * 2;
              p_Var30->Type = p_Var49->Type;
              p_Var30->CreatorBackTraceIndex = WVar23;
              p_Var30->CriticalSection = p_Var16;
              (p_Var30->ProcessLocksList).Flink = p_Var10;
              (p_Var30->ProcessLocksList).Blink = p_Var17;
              pDVar5 = &p_Var11[(int)p_Var52 * 2 + -2].EntryCount;
              DVar9 = pDVar5[1];
              DVar18 = pDVar5[2];
              uVar44 = pDVar5[3];
              pDVar6 = &p_Var11[(int)p_Var52 * 2].EntryCount;
              *pDVar6 = *pDVar5;
              pDVar6[1] = DVar9;
              pDVar6[2] = DVar18;
              pDVar6[3] = uVar44;
              p_Var30 = p_Var11 + (int)p_Var52 * 2 + -1;
              WVar23 = p_Var30->CreatorBackTraceIndex;
              p_Var16 = p_Var30->CriticalSection;
              p_Var10 = (p_Var30->ProcessLocksList).Flink;
              p_Var17 = (p_Var30->ProcessLocksList).Blink;
              p_Var49 = p_Var11 + (int)p_Var52 * 2 + 1;
              p_Var49->Type = p_Var30->Type;
              p_Var49->CreatorBackTraceIndex = WVar23;
              p_Var49->CriticalSection = p_Var16;
              (p_Var49->ProcessLocksList).Flink = p_Var10;
              (p_Var49->ProcessLocksList).Blink = p_Var17;
              pDVar5 = &p_Var11[(int)p_Var52 * 2 + -1].EntryCount;
              DVar9 = pDVar5[1];
              DVar18 = pDVar5[2];
              uVar44 = pDVar5[3];
              pDVar6 = &p_Var11[(int)p_Var52 * 2 + 1].EntryCount;
              *pDVar6 = *pDVar5;
              pDVar6[1] = DVar9;
              pDVar6[2] = DVar18;
              pDVar6[3] = uVar44;
              p_Var52 = (PRTL_CRITICAL_SECTION_DEBUG)puVar50;
            } while (p_Var28 < puVar50);
            p_Var30 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var28 << 6);
            param_1 = local_84;
          }
          p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var30->Type + (int)p_Var28) = local_9c;
          *(undefined4 *)((int)&p_Var30->CriticalSection + (int)p_Var28) = 0;
          p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type;
          puVar43 = (uint *)((int)&p_Var28->Type + (int)&(p_Var30->ProcessLocksList).Flink);
          *puVar43 = uStack_50;
          puVar43[1] = uStack_4c;
          puVar43[2] = uStack_48;
          puVar43[3] = uStack_44;
          puVar46 = (undefined4 *)((int)&p_Var30->Flags + (int)p_Var28);
          *puVar46 = uStack_40;
          puVar46[1] = iStack_3c;
          puVar46[2] = iStack_38;
          puVar46[3] = uStack_34;
          puVar46 = (undefined4 *)((int)&p_Var28->Type + (int)&p_Var30[1].ProcessLocksList.Flink);
          *puVar46 = uStack_30;
          puVar46[1] = uStack_2c;
          puVar46[2] = uStack_28;
          puVar46[3] = uStack_24;
          *(undefined4 *)((int)&p_Var30[1].Flags + (int)p_Var28) = uStack_20;
          local_78._0_4_ = p_Var29;
          piVar39 = (int *)FUN_100cfd55(0x2d0);
          local_78 = CONCAT44(local_78._4_4_,piVar39);
          if (piVar39 != (int *)0x0) {
            FUN_100cfed0(piVar39,0,0x2d0);
          }
          *(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Var30[1].CreatorBackTraceIndexHigh +
           (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Stack_a8->Type) =
               (PRTL_CRITICAL_SECTION_DEBUG)local_78;
          *(int *)(iStack_a4 + 0x3a4) = *(int *)(iStack_a4 + 0x3a4) + 1;
          p_Var29 = p_Stack_a8;
        }
        iVar33 = *(int *)((int)&p_Var30[1].CreatorBackTraceIndexHigh +
                         (int)*(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var29->Type);
        if (iVar33 != 0) {
          uVar48 = 0;
          do {
            if (*(PRTL_CRITICAL_SECTION_DEBUG *)(iVar33 + 0x1c + uVar48 * 0x24) == local_8c) {
              *(undefined1 *)(iVar33 + 0x20 + uVar48 * 0x24) = 0;
              break;
            }
            uVar48 = uVar48 + 1;
          } while (uVar48 < 0x14);
        }
      }
      param_1[(int)&(p_Stack_88 + 0x1f2)[1].ProcessLocksList.Blink] = local_80;
    }
    uVar48 = 0;
    bVar54 = local_ac == (LPCRITICAL_SECTION)0x0;
    if (!bVar54) {
      for (; ((uint)local_ac >> uVar48 & 1) == 0; uVar48 = uVar48 + 1) {
      }
    }
  }
  iVar37 = param_1[0x3dac] + param_1[4] * 0x1510 + 0x510;
  iVar33 = param_1[0x3e6c];
  bVar54 = *(int *)(iVar37 + 0x44) != iVar33;
  if (bVar54) {
    *(int *)(iVar37 + 0x44) = iVar33;
  }
  uVar48 = (uint)bVar54;
  iVar33 = 0;
  if (*(int *)(iVar37 + 0x48) != param_1[0x3e6d]) {
    *(undefined4 *)(iVar37 + 0x48) = param_1[0x3e6d];
    if (uVar48 == 0) {
      iVar33 = 1;
      uVar48 = 1;
    }
    else {
      uVar48 = 2;
      iVar33 = 0;
    }
  }
  if (*(int *)(iVar37 + 0x4c) != param_1[0x3e6e]) {
    *(undefined4 *)(iVar37 + 0x4c) = param_1[0x3e6e];
    if (uVar48 == 0) {
      iVar33 = 2;
      uVar48 = 1;
    }
    else {
      uVar48 = 3 - iVar33;
    }
  }
  if (*(int *)(iVar37 + 0x50) == param_1[0x3e6f]) {
LAB_10032a54:
    if (uVar48 != 0) goto LAB_10032a58;
  }
  else {
    *(undefined4 *)(iVar37 + 0x50) = param_1[0x3e6f];
    if (uVar48 != 0) {
      uVar48 = 4 - iVar33;
      goto LAB_10032a54;
    }
    iVar33 = 3;
    uVar48 = 1;
LAB_10032a58:
    (**(code **)(**(int **)(iVar37 + 4) + 0x68))
              (*(int **)(iVar37 + 4),iVar33,uVar48,iVar37 + iVar33 * 4 + 0x44);
  }
  param_1[0x3da7] = 0;
LAB_10032a78:
  if ((*(char *)((int)param_1 + 0xf66f) != '\0') || (puStack_68 != param_1)) {
    FUN_100b51fa((void *)param_1[0x3dac],param_1[4],puStack_68,0x10,(int)(param_1 + 0x3e76),
                 (int)(param_1 + 0x3f2),(int)(param_1 + 0x403));
    *(undefined1 *)((int)param_1 + 0xf66f) = 0;
  }
  if ((*(char *)(param_1 + 0x3d9c) != '\0') || (puStack_68 != param_1)) {
    iVar33 = param_1[0x3e86];
    if (iVar33 == param_1[0x3db4]) {
      iVar37 = 0x2a;
    }
    else {
      iVar37 = param_1[0x3e89];
    }
    iVar45 = param_1[4] * 0x1510;
    iVar41 = param_1[0x3dac];
    if (((iVar33 != *(int *)(iVar45 + 0x7c4 + iVar41)) ||
        (iVar37 != *(int *)(iVar45 + 0x7c8 + iVar41))) || (*(int *)(iVar45 + 0x7cc + iVar41) != 0))
    {
      *(int *)(iVar45 + 0x7c4 + iVar41) = iVar33;
      *(int *)(iVar45 + 0x7c8 + iVar41) = iVar37;
      *(undefined4 *)(iVar45 + 0x7cc + iVar41) = 0;
      piVar39 = *(int **)(iVar45 + 0x514 + iVar41);
      (**(code **)(*piVar39 + 0x4c))(piVar39,iVar33,iVar37,0);
    }
    *(undefined1 *)(param_1 + 0x3d9c) = 0;
  }
  uVar48 = 0;
  do {
    iVar33 = param_1[uVar48 + 0x3e0c];
    if (iVar33 != 0) {
      p_Stack_64 = (LPCRITICAL_SECTION)0x0;
      iStack_60 = 0;
      bVar26 = (byte)param_1[uVar48 + 0x3e11];
      uStack_5c = *(uint *)(iVar33 + 0x14) >> (bVar26 & 0x1f);
      if (uStack_5c == 0) {
        uStack_5c = local_54;
      }
      uStack_58 = *(uint *)(param_1[uVar48 + 0x3e0c] + 0x18) >> (bVar26 & 0x1f);
      if (uStack_58 == 0) {
        uStack_58 = 1;
      }
      (**(code **)(*(int *)param_1[uVar48 + 0x3e0c] + 0xc))
                (*(int *)(iVar33 + 0x2c) * param_1[uVar48 + 0x3e15] + param_1[uVar48 + 0x3e11],
                 &p_Stack_64);
    }
    uVar48 = uVar48 + 1;
  } while (uVar48 < 4);
  iVar37 = 0xb94;
  iVar33 = param_1[0x3e10];
  if (*(char *)((int)param_1 + 0x7642) == '\0') {
    iVar37 = 0x790;
  }
  if (((iVar33 != 0) && (*(int *)(iVar37 + (int)param_1) != 0)) &&
     (*(int *)(iVar37 + 4 + (int)param_1) != 0)) {
    p_Stack_64 = (LPCRITICAL_SECTION)0x0;
    iStack_60 = 0;
    bVar26 = (byte)param_1[0x3e19];
    uStack_5c = *(uint *)(iVar33 + 0x14) >> (bVar26 & 0x1f);
    if (uStack_5c == 0) {
      uStack_5c = local_54;
    }
    uStack_58 = *(uint *)(iVar33 + 0x18) >> (bVar26 & 0x1f);
    if (uStack_58 == 0) {
      uStack_58 = 1;
    }
    iVar37 = (**(code **)(*(int *)param_1[0x3e10] + 0xc))
                       (*(int *)(iVar33 + 0x2c) * param_1[0x3e1a] + param_1[0x3e19],&p_Stack_64);
  }
  return CONCAT31((int3)((uint)iVar37 >> 8),uStack_98._3_1_);
}

