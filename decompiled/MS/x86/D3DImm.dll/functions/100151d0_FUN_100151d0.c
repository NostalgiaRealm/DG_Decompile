/*
 * FUN_100151d0 at 100151d0
 * undefined4 __fastcall FUN_100151d0(PRTL_CRITICAL_SECTION_DEBUG param_1)
 * Address ranges: 100151d0-10017633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1001719b) */

undefined4 __fastcall FUN_100151d0(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  _LIST_ENTRY *p_Var4;
  _LIST_ENTRY *p_Var5;
  longlong lVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  int iVar11;
  DWORD DVar12;
  uint uVar13;
  undefined2 uVar14;
  WORD WVar15;
  WORD WVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  uint3 uVar19;
  char cVar20;
  DWORD DVar23;
  uint uVar24;
  byte bVar21;
  byte bVar22;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  PRTL_CRITICAL_SECTION_DEBUG p_Var28;
  SIZE_T SVar29;
  int *piVar30;
  int *piVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  DWORD DVar34;
  int iVar35;
  _LIST_ENTRY **pp_Var36;
  PRTL_CRITICAL_SECTION_DEBUG p_Var37;
  int iVar38;
  int iVar39;
  _RTL_CRITICAL_SECTION *p_Var40;
  uint *puVar41;
  DWORD *pDVar42;
  WORD *pWVar43;
  DWORD *pDVar44;
  _RTL_CRITICAL_SECTION *p_Var45;
  uint uVar46;
  PRTL_CRITICAL_SECTION_DEBUG p_Var47;
  PRTL_CRITICAL_SECTION_DEBUG p_Var48;
  undefined1 *puVar49;
  uint uVar50;
  PRTL_CRITICAL_SECTION_DEBUG p_Var51;
  undefined4 *puVar52;
  bool bVar53;
  float fVar54;
  undefined8 uVar55;
  undefined4 uStack_a8;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_a4;
  undefined4 uStack_a0;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_9c;
  PRTL_CRITICAL_SECTION_DEBUG local_98;
  DWORD DStack_94;
  PRTL_CRITICAL_SECTION_DEBUG local_90;
  PRTL_CRITICAL_SECTION_DEBUG local_8c;
  PRTL_CRITICAL_SECTION_DEBUG local_88;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_84;
  PRTL_CRITICAL_SECTION_DEBUG local_80;
  PRTL_CRITICAL_SECTION_DEBUG local_7c;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_78;
  PRTL_CRITICAL_SECTION_DEBUG local_74;
  undefined8 uStack_70;
  uint uStack_68;
  uint auStack_64 [3];
  byte bStack_55;
  uint local_54;
  DWORD DStack_50;
  DWORD DStack_4c;
  DWORD DStack_48;
  DWORD DStack_44;
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
  
  local_7c = param_1;
  uStack_a0._0_3_ = (uint3)uStack_a0 & 0xffff;
  uVar19 = (uint3)uStack_a0;
  uStack_a0 = (uint)(uint3)uStack_a0;
  local_54 = 0;
  local_80 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (param_1[0x22].CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
    for (; ((uint)param_1[0x22].CriticalSection >> (int)local_80 & 1) == 0;
        local_80 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_80->Type + 1)) {
    }
  }
  if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
    if ((*(char *)((int)&param_1[200].Flags + 1) == '\0') ||
       (uStack_a0 = CONCAT13(1,uVar19),
       *(char *)((int)&param_1[200].ProcessLocksList.Flink + 1) == '\0')) {
      uStack_a0 = uStack_a0 & 0xffffff;
    }
    local_88 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xe9].EntryCount;
    uVar24 = 0;
    bVar53 = local_88 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    if (!bVar53) {
      for (; ((uint)local_88 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
      }
    }
    while (!bVar53) {
      uVar46 = uVar24 & 0xff;
      pbVar7 = (byte *)((int)&local_88 + ((int)uVar24 >> 3));
      *pbVar7 = *pbVar7 & ~('\x01' << (uVar24 & 7));
      DVar23 = param_1[0xea].Flags;
      local_98 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x128);
      p_Var4 = (_LIST_ENTRY *)(&param_1[0xf4].ContentionCount)[uVar46];
      local_8c = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x124);
      local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 300);
      if ((p_Var4 != (_LIST_ENTRY *)0x0) &&
         (((p_Var4 != (_LIST_ENTRY *)param_1[0xf2].Flags &&
           (p_Var4 != param_1[0xf3].ProcessLocksList.Flink)) ||
          (cVar20 = (*(code *)p_Var4->Flink[0x10].Flink)(), cVar20 != '\0')))) {
        piVar30 = (int *)(&param_1[0xf4].ContentionCount)[uVar46];
        if ((piVar30[0xd] == 2) || (piVar30[0xd] == 5)) {
          local_98 = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar30 + 0x60))(0);
        }
        else {
          local_8c = (PRTL_CRITICAL_SECTION_DEBUG)(**(code **)(*piVar30 + 0x60))(0);
        }
      }
      if (uVar46 < 8) {
        if (((uVar46 == 0) && (uStack_a0._3_1_ != '\0')) &&
           (local_8c != *(PRTL_CRITICAL_SECTION_DEBUG *)(param_1[0xea].Flags + 0x124))) {
          DVar23 = (**(code **)(*(int *)param_1[0xf4].ContentionCount + 0x84))();
          param_1[0xee].ContentionCount = DVar23;
          uStack_70 = 0;
          uStack_68 = 0;
          auStack_64[0] = 0;
          (**(code **)(*(int *)param_1[0xf4].ContentionCount + 0x68))
                    (&uStack_70,(int)&uStack_70 + 4,&uStack_68,auStack_64);
          FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,0x1a,4,(int)&uStack_70);
          uStack_a0._0_3_ = CONCAT12(1,(ushort)uStack_a0);
        }
        else {
          (&param_1[0xee].ContentionCount)[uVar46] = 0;
        }
      }
      (&param_1[0xef].ContentionCount)[uVar46] = (DWORD)local_8c;
      (&param_1[0xf0].ContentionCount)[uVar46] = (DWORD)local_98;
      (&param_1[0xf1].ContentionCount)[uVar46] = (DWORD)local_90;
      uVar24 = 0;
      bVar53 = local_88 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      if (!bVar53) {
        for (; ((uint)local_88 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
        }
      }
    }
    DVar23 = param_1[0xea].EntryCount;
    param_1[0xe9].EntryCount = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(DVar23 + 0x4a0));
    local_74 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x49c);
    *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x49c) = param_1;
    cVar20 = uStack_a0._3_1_;
    if ((uStack_a0._3_1_ != '\0') && ((uStack_a0._2_1_ != '\0' || (local_74 != param_1)))) {
      (**(code **)(*(int *)param_1[0xf4].ContentionCount + 0x6c))();
      goto LAB_100153ed;
    }
  }
  else {
    DVar23 = param_1[0xea].EntryCount;
    EnterCriticalSection((LPCRITICAL_SECTION)(DVar23 + 0x4a0));
    local_74 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x49c);
    *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x49c) = param_1;
LAB_100153ed:
    cVar20 = uStack_a0._3_1_;
  }
  p_Var37 = local_7c;
  local_54 = 1;
  if (((char)param_1[0xe9].Flags != '\0') || (local_74 != param_1)) {
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      if ((param_1[199].ContentionCount == 0) || (param_1[0xfa].EntryCount != 0)) {
        bVar53 = false;
      }
      else {
        bVar53 = true;
      }
      p_Var4 = param_1[0x25].ProcessLocksList.Blink;
      uVar24 = (1 << ((byte)local_80 & 0x1f)) - 1;
      local_90 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1[0xc1].ContentionCount & uVar24);
      cVar2 = (char)param_1[200].SpareWORD;
      cVar3 = *(char *)((int)&param_1[200].Type + 1);
      uStack_a0._0_3_ = CONCAT12(cVar3,(ushort)uStack_a0);
      uStack_a0 = CONCAT13(cVar2,(uint3)uStack_a0);
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0x25].ProcessLocksList.Flink;
      if ((param_1[0xc1].EntryCount & uVar24) == 0) {
        uStack_70 = 0;
        uStack_70._4_4_ = 0;
        uVar24 = uStack_70._4_4_;
      }
      else {
        uVar24 = (uint)p_Var4 & 0x10000000;
      }
      if (local_90 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        uStack_70 = 0;
        uStack_70._4_4_ = 0;
        uVar46 = uStack_70._4_4_;
      }
      else {
        uVar46 = (uint)p_Var4 & 0x20000000;
      }
      if (cVar3 == '\0') {
        uVar50 = 0x380000;
      }
      else {
        uVar50 = (uint)p_Var4 & 0x380000;
      }
      if (bVar53) {
        uVar25 = (uint)p_Var4 & 0x800000;
      }
      else {
        uStack_70 = 0;
        uStack_70._4_4_ = 0;
        uVar25 = uStack_70._4_4_;
      }
      if (cVar2 == '\0') {
        uStack_70 = 0;
        uStack_70._4_4_ = 0;
        uVar26 = uStack_70._4_4_;
      }
      else {
        uVar26 = (uint)p_Var4 & 0x8000000;
      }
      uVar13 = (uint)p_Var4 & 0xc747ffff;
      if (((uint)p_Var4 & 0x1000000) == 0) {
        uVar13 = (uint)p_Var4 & 0xc147ffff;
      }
      p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar13 | uVar24 | uVar46 | uVar50 | uVar25 | uVar26);
      if (cVar20 == '\0') {
        p_Var48 = (PRTL_CRITICAL_SECTION_DEBUG)((uint)p_Var28 & 0xfdffffff);
        local_98 = p_Var28;
LAB_100155da:
        p_Var48 = (PRTL_CRITICAL_SECTION_DEBUG)((uint)p_Var48 & 0x3ffffff);
        p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)
                  (uVar13 & 0xfffc0100 | uVar24 | uVar46 | uVar50 | uVar25 | uVar26);
      }
      else {
        uVar27 = ((uint)p_Var28 >> 0x19) << 0x19;
        p_Var48 = (PRTL_CRITICAL_SECTION_DEBUG)((uVar27 ^ (uint)p_Var28) & 0xfdffffff ^ uVar27);
        local_98 = p_Var47;
        local_8c = p_Var48;
        if (((uint)p_Var28 >> 0x19 & 1) == 0) goto LAB_100155da;
      }
      p_Var4 = local_7c[0xf7].ProcessLocksList.Blink;
      if ((p_Var4 == *(_LIST_ENTRY **)(local_7c[0xea].Flags + 0xf8)) ||
         (local_98 = (PRTL_CRITICAL_SECTION_DEBUG)((uint)local_98 & 0xffffff00),
         p_Var4 == *(_LIST_ENTRY **)(local_7c[0xea].Flags + 0x110))) {
        local_98 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT31(local_98._1_3_,1);
      }
      DVar23 = FUN_10019ea8(&local_7c[0xeb].CreatorBackTraceIndexHigh,
                            &local_7c[0x1f].ProcessLocksList.Blink,(uint)p_Var48,(uint)p_Var47,
                            (undefined4 *)local_80,(uint)local_98);
      if (DVar23 == 0) {
        param_1 = p_Var37;
        if (*(char *)((int)&p_Var37[200].CriticalSection + 1) != '\0') goto LAB_100156f0;
        DVar23 = p_Var37[0xea].Flags;
        p_Var28 = local_80;
        if ((PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004 < local_80) {
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000004;
        }
        p_Var4 = p_Var37[0xf7].ProcessLocksList.Blink;
        if (p_Var4 == *(_LIST_ENTRY **)(DVar23 + 0xf8)) {
LAB_1001566d:
          uStack_a0._0_3_ = CONCAT12(1,(ushort)uStack_a0);
        }
        else {
          uStack_a0._0_3_ = (uint3)(ushort)uStack_a0;
          if (p_Var4 == *(_LIST_ENTRY **)(DVar23 + 0x110)) goto LAB_1001566d;
        }
        if (*(char *)((int)&p_Var37[200].CreatorBackTraceIndex + 1) == '\0') {
          iVar35 = 0;
          if (uStack_a0._2_1_ != '\0') {
            iVar35 = 0x12;
          }
        }
        else {
          iVar35 = 9;
        }
        if (((*(char *)((int)&p_Var37[200].Flags + 1) == '\0') ||
            (*(char *)((int)&p_Var37[200].ProcessLocksList.Flink + 1) == '\0')) ||
           (p_Var28 != (PRTL_CRITICAL_SECTION_DEBUG)0x1)) {
          pDVar42 = (DWORD *)(DVar23 + (*(int *)(&DAT_1005e848 + (int)p_Var28 * 4) + 0x1b + iVar35)
                                       * 4);
        }
        else {
          cVar20 = (char)p_Var37[0x11].Type;
          uStack_a0._0_3_ = CONCAT12(cVar20,(ushort)uStack_a0);
          if (*(char *)((int)&p_Var37[200].EntryCount + 1) == '\0') {
            pDVar42 = (DWORD *)(DVar23 + ((cVar20 == '\x01') + 0x20 + iVar35) * 4);
          }
          else {
            pDVar42 = (DWORD *)(DVar23 + ((cVar20 == '\x01') + 0x22 + iVar35) * 4);
          }
        }
        goto LAB_10015707;
      }
    }
    else {
LAB_100156f0:
      pDVar42 = (DWORD *)(param_1[0xea].Flags + ((param_1[0xf2].ContentionCount != 0) + 0x36) * 4);
      p_Var37 = param_1;
LAB_10015707:
      DVar23 = *pDVar42;
    }
    *(undefined1 *)&p_Var37[0xe9].Flags = 0;
    param_1 = p_Var37;
    if (p_Var37[0xf7].EntryCount != DVar23) {
      p_Var37[0xf7].EntryCount = DVar23;
      *(undefined1 *)&p_Var37[0x113].EntryCount = 1;
    }
  }
  if (((uint)param_1[0xea].CriticalSection & 1) != 0) {
    FUN_10013929((float *)(param_1 + 0xc9),(undefined4 *)(param_1 + 0xd9),'\x01');
    p_Var37 = param_1 + 0xd9;
    pDVar42 = &param_1[0x55].EntryCount;
    for (iVar35 = 0x10; iVar35 != 0; iVar35 = iVar35 + -1) {
      *pDVar42 = *(DWORD *)p_Var37;
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var37->CriticalSection;
      pDVar42 = pDVar42 + 1;
    }
    local_7c[0xea].CriticalSection =
         (_RTL_CRITICAL_SECTION *)((uint)local_7c[0xea].CriticalSection & 0xfffffffe);
    param_1 = local_7c;
  }
  if (*(char *)((int)&param_1[0xea].Type + 1) != '\0') {
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xeb].CriticalSection;
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    iVar35 = (**(code **)(*piVar30 + 0x38))(piVar30,local_90,0,4,0,&uStack_70);
    p_Var37 = local_7c;
    if (-1 < iVar35) {
      p_Var28 = param_1 + 0x4c;
      puVar33 = (undefined4 *)uStack_70;
      for (iVar35 = 0x3a4; iVar35 != 0; iVar35 = iVar35 + -1) {
        *puVar33 = *(undefined4 *)p_Var28;
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var28->CriticalSection;
        puVar33 = puVar33 + 1;
      }
      piVar30 = *(int **)(local_7c[0xea].ContentionCount + 4);
      (**(code **)(*piVar30 + 0x3c))(piVar30,local_90,0);
      param_1 = p_Var37;
    }
    *(undefined1 *)((int)&param_1[0xea].Type + 1) = 0;
  }
  if (((param_1[0x4c].EntryCount & 0x7800) != 0) &&
     ((char)param_1[0xea].CreatorBackTraceIndex != '\0')) {
    while( true ) {
      uVar24 = 0;
      bVar53 = param_1[0xea].CriticalSection == (_RTL_CRITICAL_SECTION *)0x0;
      if (!bVar53) {
        for (; ((uint)param_1[0xea].CriticalSection >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
        }
      }
      if (bVar53) break;
      pbVar7 = (byte *)((int)&param_1[0xea].CriticalSection + ((int)uVar24 >> 3));
      *pbVar7 = *pbVar7 & ~('\x01' << (uVar24 & 7));
      uVar24 = uVar24 & 0xff;
      if (7 < uVar24) break;
      FUN_10013929((float *)(param_1 + uVar24 * 2 + 0xc9),
                   (undefined4 *)(param_1 + uVar24 * 2 + 0xd9),'\x01');
    }
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    (**(code **)(*piVar30 + 0xc0))
              (piVar30,param_1[0xeb].ProcessLocksList.Blink,0,0,param_1 + 0xc9,0,0);
    *(undefined1 *)&param_1[0xea].CreatorBackTraceIndex = 0;
  }
  pp_Var36 = &param_1[0xee].ProcessLocksList.Blink;
  if (*(char *)&param_1[0xea].ProcessLocksList.Flink != '\0') {
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)*pp_Var36;
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    iVar35 = (**(code **)(*piVar30 + 0x38))(piVar30,local_90,0,4,0,&uStack_70);
    p_Var37 = local_7c;
    if (-1 < iVar35) {
      p_Var28 = param_1 + 0x2a;
      puVar33 = (undefined4 *)uStack_70;
      for (iVar35 = 0x110; iVar35 != 0; iVar35 = iVar35 + -1) {
        *puVar33 = *(undefined4 *)p_Var28;
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var28->CriticalSection;
        puVar33 = puVar33 + 1;
      }
      piVar30 = *(int **)(local_7c[0xea].ContentionCount + 4);
      (**(code **)(*piVar30 + 0x3c))(piVar30,local_90,0);
      param_1 = p_Var37;
    }
    *(undefined1 *)&param_1[0xea].ProcessLocksList.Flink = 0;
    pp_Var36 = &param_1[0xee].ProcessLocksList.Blink;
  }
  if (local_74 != param_1) {
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    (**(code **)(*piVar30 + 0x40))(piVar30,3,1,pp_Var36);
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xeb].CriticalSection;
    local_7c = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xeb].ProcessLocksList.Flink;
    p_Stack_78 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xeb].ProcessLocksList.Blink;
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    (**(code **)(*piVar30 + 0x1c))(piVar30,0,3,&local_80);
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    (**(code **)(*piVar30 + 0x40))(piVar30,0,2,&local_90);
    piVar30 = *(int **)(param_1[0xea].ContentionCount + 4);
    (**(code **)(*piVar30 + 0x58))(piVar30,0,3,&uStack_a0);
  }
  if ((*(char *)((int)&param_1[0xe9].Flags + 2) != '\0') || (local_74 != param_1)) {
    iVar35 = param_1->EntryCount * 0x1510;
    DVar23 = param_1[0xea].EntryCount;
    uStack_70 = 0;
    uStack_68 = 0;
    auStack_64[0] = 0;
    cVar20 = *(int *)(iVar35 + 0x7fc + DVar23) != 0;
    if ((bool)cVar20) {
      *(undefined4 *)(iVar35 + 0x7fc + DVar23) = 0;
    }
    if (*(int *)(iVar35 + 0x800 + DVar23) != 0) {
      *(undefined4 *)(iVar35 + 0x800 + DVar23) = 0;
      cVar20 = cVar20 + '\x01';
    }
    if (*(int *)(iVar35 + 0x804 + DVar23) != 0) {
      *(undefined4 *)(iVar35 + 0x804 + DVar23) = 0;
      cVar20 = cVar20 + '\x01';
    }
    if (*(int *)(iVar35 + 0x808 + DVar23) != 0) {
      *(undefined4 *)(iVar35 + 0x808 + DVar23) = 0;
      cVar20 = cVar20 + '\x01';
    }
    if ((cVar20 != '\0') || (*(int *)(iVar35 + DVar23 + 0x80c) != 0)) {
      piVar30 = *(int **)(iVar35 + 0x514 + DVar23);
      (**(code **)(*piVar30 + 0x84))(piVar30,4,&uStack_70,0);
      *(undefined4 *)(iVar35 + DVar23 + 0x80c) = 0;
    }
  }
  if ((*(char *)((int)&param_1[0xe9].Flags + 1) != '\0') || (local_74 != param_1)) {
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,0x18,1,
                   (int)&param_1[0xee].ContentionCount);
      FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,0,8,
                   (int)&param_1[0xef].ContentionCount);
      FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,8,8,
                   (int)&param_1[0xf0].ContentionCount);
      pDVar42 = &param_1[0xf1].ContentionCount;
      iVar35 = 0x10;
    }
    else {
      DStack_50 = 0;
      DStack_4c = 0;
      DStack_48 = 0;
      DStack_44 = 0;
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
      FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,8,8,(int)&DStack_50);
      DStack_50 = param_1[0xf2].ContentionCount;
      pDVar42 = &DStack_50;
      iVar35 = 0;
    }
    FUN_1004fd37((void *)param_1[0xea].EntryCount,param_1->EntryCount,iVar35,8,(int)pDVar42);
    *(undefined1 *)((int)&param_1[0xe9].Flags + 1) = 0;
  }
  p_Var37 = local_7c;
  if ((*(char *)((int)&param_1[0xe9].Flags + 2) != '\0') || (local_74 != param_1)) {
    local_98 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xf5].ContentionCount;
    DVar23 = param_1[0xea].EntryCount;
    DVar34 = param_1[0xf5].Flags;
    uStack_68._0_2_ = param_1[0xf5].CreatorBackTraceIndexHigh;
    uStack_68._2_2_ = param_1[0xf5].SpareWORD;
    auStack_64[0]._0_2_ = param_1[0xf6].Type;
    auStack_64[0]._2_2_ = param_1[0xf6].CreatorBackTraceIndex;
    local_88 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xf7].CriticalSection;
    iVar35 = param_1->EntryCount * 0x1510;
    uStack_70._0_4_ = (undefined4 *)param_1[0xf5].ContentionCount;
    uStack_70._4_4_ = param_1[0xf5].Flags;
    cVar20 = *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + 0x7fc + DVar23) != local_98;
    if ((bool)cVar20) {
      *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + 0x7fc + DVar23) = local_98;
    }
    if (*(DWORD *)(iVar35 + 0x800 + DVar23) != DVar34) {
      *(DWORD *)(iVar35 + 0x800 + DVar23) = DVar34;
      cVar20 = cVar20 + '\x01';
    }
    if (*(uint *)(iVar35 + 0x804 + DVar23) != uStack_68) {
      *(uint *)(iVar35 + 0x804 + DVar23) = uStack_68;
      cVar20 = cVar20 + '\x01';
    }
    if (*(uint *)(iVar35 + 0x808 + DVar23) != auStack_64[0]) {
      *(uint *)(iVar35 + 0x808 + DVar23) = auStack_64[0];
      cVar20 = cVar20 + '\x01';
    }
    if ((cVar20 != '\0') || (local_88 != *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + DVar23 + 0x80c)))
    {
      piVar30 = *(int **)(iVar35 + 0x514 + DVar23);
      (**(code **)(*piVar30 + 0x84))(piVar30,4,&uStack_70,local_88);
      *(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + DVar23 + 0x80c) = local_88;
    }
    *(undefined1 *)((int)&p_Var37[0xe9].Flags + 2) = 0;
    param_1 = p_Var37;
  }
  if ((*(char *)((int)&param_1[0xe9].Flags + 3) != '\0') || (local_74 != param_1)) {
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)&param_1[0x108].ProcessLocksList.Blink;
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      p_Var45 = param_1[0x13].CriticalSection;
      p_Var4 = param_1[0x13].ProcessLocksList.Flink;
      p_Var5 = param_1[0x13].ProcessLocksList.Blink;
      *(_LIST_ENTRY **)local_80 = *(_LIST_ENTRY **)(param_1 + 0x13);
      param_1[0x108].EntryCount = (DWORD)p_Var45;
      param_1[0x108].ContentionCount = (DWORD)p_Var4;
      param_1[0x108].Flags = (DWORD)p_Var5;
      uVar14 = *(undefined2 *)((int)&param_1[0x13].EntryCount + 2);
      uVar17 = *(undefined2 *)&param_1[0x13].ContentionCount;
      uVar18 = *(undefined2 *)((int)&param_1[0x13].ContentionCount + 2);
      p_Var45 = (_RTL_CRITICAL_SECTION *)param_1[0x13].Flags;
      p_Var4 = *(_LIST_ENTRY **)&param_1[0x13].CreatorBackTraceIndexHigh;
      param_1[0x108].CreatorBackTraceIndexHigh = *(undefined2 *)&param_1[0x13].EntryCount;
      param_1[0x108].SpareWORD = uVar14;
      param_1[0x109].Type = uVar17;
      param_1[0x109].CreatorBackTraceIndex = uVar18;
      param_1[0x109].CriticalSection = p_Var45;
      param_1[0x109].ProcessLocksList.Flink = p_Var4;
      p_Var45 = param_1[0x14].CriticalSection;
      p_Var4 = param_1[0x14].ProcessLocksList.Flink;
      p_Var5 = param_1[0x14].ProcessLocksList.Blink;
      param_1[0x109].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x14);
      param_1[0x109].EntryCount = (DWORD)p_Var45;
      param_1[0x109].ContentionCount = (DWORD)p_Var4;
      param_1[0x109].Flags = (DWORD)p_Var5;
      uVar14 = *(undefined2 *)((int)&param_1[0x14].EntryCount + 2);
      param_1[0x109].CreatorBackTraceIndexHigh = *(undefined2 *)&param_1[0x14].EntryCount;
      param_1[0x109].SpareWORD = uVar14;
      bVar21 = (byte)param_1[0x108].CreatorBackTraceIndexHigh &
               (byte)param_1[0xc2].CreatorBackTraceIndex;
      *(byte *)&param_1[0x108].CreatorBackTraceIndexHigh = bVar21;
      uStack_a0._0_3_ = CONCAT12(bVar21,(ushort)uStack_a0);
      bVar22 = *(byte *)((int)&param_1[0x108].CreatorBackTraceIndexHigh + 1) &
               (byte)param_1[0xc2].CreatorBackTraceIndex;
      *(byte *)((int)&param_1[0x108].CreatorBackTraceIndexHigh + 1) = bVar22;
      DStack_94 = param_1[0xea].EntryCount;
      uStack_a0 = CONCAT13(bVar22,(uint3)uStack_a0);
      local_88 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)(byte)param_1[0xc2].Type;
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1->EntryCount * 0x1510);
      uVar46 = param_1[0x109].ContentionCount & 0xf;
      p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)((uint)param_1[0x109].CriticalSection & 0xf);
      p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)
                   (uint)(*(_LIST_ENTRY **)local_80 != (_LIST_ENTRY *)0x0);
      local_8c = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((uint)CONCAT11(bVar22,bVar21) << 5 | param_1[0x108].ContentionCount & 0xf) * 2 |
                  param_1[0x108].EntryCount & 1) * 2 | -(uint)(param_1[0x108].Flags != 0) & 0x40 |
                 (uint)p_Stack_a4);
      uVar24._0_2_ = param_1[0x109].CreatorBackTraceIndexHigh;
      uVar24._2_2_ = param_1[0x109].SpareWORD;
      local_98 = (PRTL_CRITICAL_SECTION_DEBUG)
                 (((((int)p_Stack_84 << 4 | (uint)p_Stack_84) << 4 |
                   (uint)param_1[0x109].ProcessLocksList.Flink & 0xf) << 4 |
                  (uint)param_1[0x109].ProcessLocksList.Blink & 0xf) << 0x10 |
                 ((uVar46 << 4 | uVar46) << 4 | param_1[0x109].Flags & 0xf) << 4 | uVar24 & 0xf);
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Stack_78 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
      if (local_90 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Var47 = local_90;
        do {
          p_Var48 = (PRTL_CRITICAL_SECTION_DEBUG)
                    ((uint)((int)&p_Var37->Type + (int)&p_Var47->Type) >> 1);
          p_Stack_78 = p_Var48;
          p_Stack_84 = *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_a4 + (int)p_Var48 * 2);
          local_90 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_a4[(int)p_Var48 * 2].CriticalSection;
          if ((local_90 < local_98) || ((local_90 == local_98 && (p_Stack_84 <= local_8c)))) {
            if ((local_98 < local_90) || ((local_98 <= local_90 && (local_8c <= p_Stack_84))))
            break;
            p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var48->Type + 1);
            p_Stack_78 = p_Var37;
            p_Var48 = p_Var47;
          }
          p_Var47 = p_Var48;
        } while (p_Var48 != p_Var37);
      }
      p_Var47 = p_Stack_78;
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_78 * 0x40);
      if (((p_Stack_78 ==
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94)
           ) || (*(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var37->Type + *(int *)((int)&p_Var28[0x41].Type + DStack_94)) != local_8c
                )) ||
         (p_Stack_9c = p_Var28,
         *(PRTL_CRITICAL_SECTION_DEBUG *)
          ((int)&p_Var37->CriticalSection + *(int *)((int)&p_Var28[0x41].Type + DStack_94)) !=
         local_98)) {
        iVar35 = *(int *)((int)&p_Var28[0x41].CriticalSection + DStack_94);
        p_Stack_9c = p_Var37;
        if (*(int *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94) == iVar35) {
          lVar6 = (ulonglong)(uint)(iVar35 * 2) * 0x40;
          SVar29 = (SIZE_T)lVar6;
          if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
            SVar29 = 0xffffffff;
          }
          p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c789(SVar29);
          if (p_Stack_84 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if (*(int *)((int)&p_Var28[0x41].CriticalSection + DStack_94) != 0) {
              do {
                piVar30 = (int *)(*(int *)((int)&p_Var28[0x41].Type + DStack_94) +
                                 (int)p_Stack_a4 * 0x40);
                iVar35 = *piVar30;
                p_Var45 = (_RTL_CRITICAL_SECTION *)piVar30[1];
                p_Var4 = (_LIST_ENTRY *)piVar30[2];
                p_Var5 = (_LIST_ENTRY *)piVar30[3];
                p_Var37 = p_Stack_84 + (int)p_Stack_a4 * 2;
                p_Var37->Type = (short)iVar35;
                p_Var37->CreatorBackTraceIndex = (short)((uint)iVar35 >> 0x10);
                p_Var37->CriticalSection = p_Var45;
                (p_Var37->ProcessLocksList).Flink = p_Var4;
                (p_Var37->ProcessLocksList).Blink = p_Var5;
                DVar23 = piVar30[5];
                DVar34 = piVar30[6];
                iVar35 = piVar30[7];
                pDVar42 = &p_Stack_84[(int)p_Stack_a4 * 2].EntryCount;
                *pDVar42 = piVar30[4];
                pDVar42[1] = DVar23;
                pDVar42[2] = DVar34;
                pDVar42[3] = iVar35;
                iVar35 = piVar30[8];
                p_Var45 = (_RTL_CRITICAL_SECTION *)piVar30[9];
                p_Var4 = (_LIST_ENTRY *)piVar30[10];
                p_Var5 = (_LIST_ENTRY *)piVar30[0xb];
                p_Var37 = p_Stack_84 + (int)p_Stack_a4 * 2 + 1;
                p_Var37->Type = (short)iVar35;
                p_Var37->CreatorBackTraceIndex = (short)((uint)iVar35 >> 0x10);
                p_Var37->CriticalSection = p_Var45;
                (p_Var37->ProcessLocksList).Flink = p_Var4;
                (p_Var37->ProcessLocksList).Blink = p_Var5;
                DVar23 = piVar30[0xd];
                DVar34 = piVar30[0xe];
                iVar35 = piVar30[0xf];
                p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_a4->Type + 1);
                pDVar42 = &p_Stack_84[(int)p_Stack_a4 * 2 + 1].EntryCount;
                *pDVar42 = piVar30[0xc];
                pDVar42[1] = DVar23;
                pDVar42[2] = DVar34;
                pDVar42[3] = iVar35;
                p_Var47 = p_Stack_78;
                p_Stack_a4 = p_Var37;
              } while (p_Var37 < *(PRTL_CRITICAL_SECTION_DEBUG *)
                                  ((int)&p_Var28[0x41].CriticalSection + DStack_94));
            }
            thunk_FUN_1005c76c(*(LPVOID *)((int)&p_Var28[0x41].Type + DStack_94));
            piVar30 = (int *)((int)&p_Var28[0x41].CriticalSection + DStack_94);
            *piVar30 = *piVar30 << 1;
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].Type + DStack_94) = p_Stack_84;
          }
        }
        p_Var37 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                   ((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
        if (p_Var47 < p_Var37) {
          do {
            iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
            iVar38 = (int)p_Var37 * 0x40;
            puVar52 = (undefined4 *)(iVar38 + -0x40 + iVar35);
            uVar32 = puVar52[1];
            uVar8 = puVar52[2];
            uVar9 = puVar52[3];
            puVar33 = (undefined4 *)(iVar38 + iVar35);
            *puVar33 = *puVar52;
            puVar33[1] = uVar32;
            puVar33[2] = uVar8;
            puVar33[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x30 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x10 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x20 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x20 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x10 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x30 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var37[-1].SpareWORD + 1);
          } while (p_Var47 < p_Var37);
          p_Stack_9c = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var47 << 6);
        }
        p_Var37 = p_Stack_9c;
        iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_9c->Type + iVar35) = local_8c;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_9c->CriticalSection + iVar35) = local_98;
        iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Var45 = local_80->CriticalSection;
        p_Var4 = (local_80->ProcessLocksList).Flink;
        p_Var5 = (local_80->ProcessLocksList).Blink;
        puVar33 = (undefined4 *)((int)&(p_Stack_9c->ProcessLocksList).Flink + iVar35);
        *puVar33 = *(undefined4 *)local_80;
        puVar33[1] = p_Var45;
        puVar33[2] = p_Var4;
        puVar33[3] = p_Var5;
        DVar23 = local_80->ContentionCount;
        DVar34 = local_80->Flags;
        DVar10 = *(DWORD *)&local_80->CreatorBackTraceIndexHigh;
        pDVar42 = (DWORD *)((int)&p_Stack_9c->Flags + iVar35);
        *pDVar42 = local_80->EntryCount;
        pDVar42[1] = DVar23;
        pDVar42[2] = DVar34;
        pDVar42[3] = DVar10;
        p_Var45 = local_80[1].CriticalSection;
        p_Var4 = local_80[1].ProcessLocksList.Flink;
        p_Var5 = local_80[1].ProcessLocksList.Blink;
        puVar33 = (undefined4 *)((int)&p_Stack_9c[1].ProcessLocksList.Flink + iVar35);
        *puVar33 = *(undefined4 *)(local_80 + 1);
        puVar33[1] = p_Var45;
        puVar33[2] = p_Var4;
        puVar33[3] = p_Var5;
        *(DWORD *)((int)&p_Stack_9c[1].Flags + iVar35) = local_80[1].EntryCount;
        piVar30 = *(int **)(*(int *)((int)&p_Var28[0x41].EntryCount + DStack_94) * 0x1510 + 0x510 +
                           *(int *)((int)&p_Var28[0x41].ProcessLocksList.Blink + DStack_94));
        (**(code **)(*piVar30 + 0x54))(piVar30,local_80,&p_Stack_a4);
        *(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var37[1].CreatorBackTraceIndexHigh +
         *(int *)((int)&p_Var28[0x41].Type + DStack_94)) = p_Stack_a4;
        piVar30 = (int *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
        *piVar30 = *piVar30 + 1;
      }
      puVar49 = (undefined1 *)((int)&p_Var28->Type + DStack_94);
      local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var37[1].CreatorBackTraceIndexHigh +
                  *(int *)((int)&p_Var28[0x41].Type + DStack_94));
      if ((local_90 !=
           *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].ContentionCount + DStack_94)) ||
         (local_88 != *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar49 + 0x538))) {
        piVar30 = *(int **)((int)&p_Var28[0x28].ContentionCount + DStack_94);
        (**(code **)(*piVar30 + 0x90))(piVar30,local_90,local_88);
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].ContentionCount + DStack_94) = local_90
        ;
        p_Var37 = local_88;
        goto LAB_100163ca;
      }
    }
    else {
      p_Var4 = param_1[0x16].ProcessLocksList.Blink;
      DVar23 = param_1[0x16].EntryCount;
      DVar34 = param_1[0x16].ContentionCount;
      *(_LIST_ENTRY **)local_80 = param_1[0x16].ProcessLocksList.Flink;
      param_1[0x108].EntryCount = (DWORD)p_Var4;
      param_1[0x108].ContentionCount = DVar23;
      param_1[0x108].Flags = DVar34;
      uVar14 = *(undefined2 *)((int)&param_1[0x16].Flags + 2);
      WVar15 = param_1[0x16].CreatorBackTraceIndexHigh;
      WVar16 = param_1[0x16].SpareWORD;
      p_Var45 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x17);
      p_Var40 = param_1[0x17].CriticalSection;
      param_1[0x108].CreatorBackTraceIndexHigh = *(undefined2 *)&param_1[0x16].Flags;
      param_1[0x108].SpareWORD = uVar14;
      param_1[0x109].Type = WVar15;
      param_1[0x109].CreatorBackTraceIndex = WVar16;
      param_1[0x109].CriticalSection = p_Var45;
      param_1[0x109].ProcessLocksList.Flink = (_LIST_ENTRY *)p_Var40;
      p_Var4 = param_1[0x17].ProcessLocksList.Blink;
      DVar23 = param_1[0x17].EntryCount;
      DVar34 = param_1[0x17].ContentionCount;
      param_1[0x109].ProcessLocksList.Blink = param_1[0x17].ProcessLocksList.Flink;
      param_1[0x109].EntryCount = (DWORD)p_Var4;
      param_1[0x109].ContentionCount = DVar23;
      param_1[0x109].Flags = DVar34;
      uVar14 = *(undefined2 *)((int)&param_1[0x17].Flags + 2);
      param_1[0x109].CreatorBackTraceIndexHigh = *(undefined2 *)&param_1[0x17].Flags;
      param_1[0x109].SpareWORD = uVar14;
      bVar21 = (byte)param_1[0x108].CreatorBackTraceIndexHigh &
               (byte)param_1[0xc2].CreatorBackTraceIndex;
      *(byte *)&param_1[0x108].CreatorBackTraceIndexHigh = bVar21;
      uStack_a0._0_3_ = CONCAT12(bVar21,(ushort)uStack_a0);
      bVar22 = *(byte *)((int)&param_1[0x108].CreatorBackTraceIndexHigh + 1) &
               (byte)param_1[0xc2].CreatorBackTraceIndex;
      *(byte *)((int)&param_1[0x108].CreatorBackTraceIndexHigh + 1) = bVar22;
      DStack_94 = param_1[0xea].EntryCount;
      uStack_a0 = CONCAT13(bVar22,(uint3)uStack_a0);
      local_98 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)*(byte *)((int)&param_1[0xc2].Type + 1);
      p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1->EntryCount * 0x1510);
      uVar50 = param_1[0x109].ContentionCount & 0xf;
      uVar24 = (uint)param_1[0x109].CriticalSection & 0xf;
      p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)
                   (uint)(*(_LIST_ENTRY **)local_80 != (_LIST_ENTRY *)0x0);
      local_8c = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((uint)CONCAT11(bVar22,bVar21) << 5 | param_1[0x108].ContentionCount & 0xf) * 2 |
                  param_1[0x108].EntryCount & 1) * 2 | -(uint)(param_1[0x108].Flags != 0) & 0x40 |
                 (uint)(*(_LIST_ENTRY **)local_80 != (_LIST_ENTRY *)0x0));
      uVar46._0_2_ = param_1[0x109].CreatorBackTraceIndexHigh;
      uVar46._2_2_ = param_1[0x109].SpareWORD;
      local_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((uVar24 << 4 | uVar24) << 4 | (uint)param_1[0x109].ProcessLocksList.Flink & 0xf)
                   << 4 | (uint)param_1[0x109].ProcessLocksList.Blink & 0xf) << 0x10 |
                 ((uVar50 << 4 | uVar50) << 4 | param_1[0x109].Flags & 0xf) << 4 | uVar46 & 0xf);
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Stack_9c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
      if (local_90 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Stack_78 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Var47 = local_90;
        do {
          p_Stack_9c = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((uint)((int)&p_Var37->Type + (int)&p_Var47->Type) >> 1);
          p_Stack_84 = *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_78 + (int)p_Stack_9c * 2);
          local_90 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_78[(int)p_Stack_9c * 2].CriticalSection;
          if ((local_90 < local_88) ||
             ((p_Var48 = p_Stack_9c, local_90 == local_88 && (p_Stack_84 <= local_8c)))) {
            if ((local_88 < local_90) || ((local_88 <= local_90 && (local_8c <= p_Stack_84))))
            break;
            p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_9c->Type + 1);
            p_Stack_9c = p_Var47;
            p_Var48 = p_Var37;
          }
          bVar53 = p_Stack_9c != p_Var37;
          p_Var47 = p_Stack_9c;
          p_Stack_9c = p_Var48;
        } while (bVar53);
      }
      p_Var37 = p_Stack_9c;
      p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_9c * 0x40);
      p_Stack_a4 = p_Var28;
      if (((p_Stack_9c ==
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94)
           ) || (*(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var47->Type + *(int *)((int)&p_Var28[0x41].Type + DStack_94)) != local_8c
                )) ||
         (*(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Var47->CriticalSection + *(int *)((int)&p_Var28[0x41].Type + DStack_94)) !=
          local_88)) {
        iVar35 = *(int *)((int)&p_Var28[0x41].CriticalSection + DStack_94);
        p_Stack_78 = p_Var47;
        if (*(int *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94) == iVar35) {
          lVar6 = (ulonglong)(uint)(iVar35 * 2) * 0x40;
          SVar29 = (SIZE_T)lVar6;
          if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
            SVar29 = 0xffffffff;
          }
          p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c789(SVar29);
          if (p_Stack_84 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if (*(int *)((int)&p_Var28[0x41].CriticalSection + DStack_94) != 0) {
              do {
                piVar30 = (int *)(*(int *)((int)&p_Var28[0x41].Type + DStack_94) +
                                 (int)p_Stack_a4 * 0x40);
                iVar35 = *piVar30;
                p_Var45 = (_RTL_CRITICAL_SECTION *)piVar30[1];
                p_Var4 = (_LIST_ENTRY *)piVar30[2];
                p_Var5 = (_LIST_ENTRY *)piVar30[3];
                p_Var37 = p_Stack_84 + (int)p_Stack_a4 * 2;
                p_Var37->Type = (short)iVar35;
                p_Var37->CreatorBackTraceIndex = (short)((uint)iVar35 >> 0x10);
                p_Var37->CriticalSection = p_Var45;
                (p_Var37->ProcessLocksList).Flink = p_Var4;
                (p_Var37->ProcessLocksList).Blink = p_Var5;
                DVar23 = piVar30[5];
                DVar34 = piVar30[6];
                iVar35 = piVar30[7];
                pDVar42 = &p_Stack_84[(int)p_Stack_a4 * 2].EntryCount;
                *pDVar42 = piVar30[4];
                pDVar42[1] = DVar23;
                pDVar42[2] = DVar34;
                pDVar42[3] = iVar35;
                iVar35 = piVar30[8];
                p_Var45 = (_RTL_CRITICAL_SECTION *)piVar30[9];
                p_Var4 = (_LIST_ENTRY *)piVar30[10];
                p_Var5 = (_LIST_ENTRY *)piVar30[0xb];
                p_Var37 = p_Stack_84 + (int)p_Stack_a4 * 2 + 1;
                p_Var37->Type = (short)iVar35;
                p_Var37->CreatorBackTraceIndex = (short)((uint)iVar35 >> 0x10);
                p_Var37->CriticalSection = p_Var45;
                (p_Var37->ProcessLocksList).Flink = p_Var4;
                (p_Var37->ProcessLocksList).Blink = p_Var5;
                DVar23 = piVar30[0xd];
                DVar34 = piVar30[0xe];
                iVar35 = piVar30[0xf];
                p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_a4->Type + 1);
                pDVar42 = &p_Stack_84[(int)p_Stack_a4 * 2 + 1].EntryCount;
                *pDVar42 = piVar30[0xc];
                pDVar42[1] = DVar23;
                pDVar42[2] = DVar34;
                pDVar42[3] = iVar35;
                p_Var37 = p_Stack_9c;
                p_Stack_a4 = p_Var47;
              } while (p_Var47 < *(PRTL_CRITICAL_SECTION_DEBUG *)
                                  ((int)&p_Var28[0x41].CriticalSection + DStack_94));
            }
            thunk_FUN_1005c76c(*(LPVOID *)((int)&p_Var28[0x41].Type + DStack_94));
            piVar30 = (int *)((int)&p_Var28[0x41].CriticalSection + DStack_94);
            *piVar30 = *piVar30 << 1;
            *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x41].Type + DStack_94) = p_Stack_84;
          }
        }
        p_Var47 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                   ((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
        if (p_Var37 < p_Var47) {
          do {
            iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
            iVar38 = (int)p_Var47 * 0x40;
            puVar52 = (undefined4 *)(iVar38 + -0x40 + iVar35);
            uVar32 = puVar52[1];
            uVar8 = puVar52[2];
            uVar9 = puVar52[3];
            puVar33 = (undefined4 *)(iVar38 + iVar35);
            *puVar33 = *puVar52;
            puVar33[1] = uVar32;
            puVar33[2] = uVar8;
            puVar33[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x30 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x10 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x20 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x20 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            puVar33 = (undefined4 *)(iVar38 + -0x10 + iVar35);
            uVar32 = puVar33[1];
            uVar8 = puVar33[2];
            uVar9 = puVar33[3];
            puVar52 = (undefined4 *)(iVar38 + 0x30 + iVar35);
            *puVar52 = *puVar33;
            puVar52[1] = uVar32;
            puVar52[2] = uVar8;
            puVar52[3] = uVar9;
            p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var47[-1].SpareWORD + 1);
          } while (p_Var37 < p_Var47);
          p_Stack_78 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var37 << 6);
        }
        p_Var47 = p_Stack_78;
        iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_78->Type + iVar35) = local_8c;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_78->CriticalSection + iVar35) = local_88;
        iVar35 = *(int *)((int)&p_Var28[0x41].Type + DStack_94);
        p_Var45 = local_80->CriticalSection;
        p_Var4 = (local_80->ProcessLocksList).Flink;
        p_Var5 = (local_80->ProcessLocksList).Blink;
        puVar33 = (undefined4 *)((int)&(p_Stack_78->ProcessLocksList).Flink + iVar35);
        *puVar33 = *(undefined4 *)local_80;
        puVar33[1] = p_Var45;
        puVar33[2] = p_Var4;
        puVar33[3] = p_Var5;
        DVar23 = local_80->ContentionCount;
        DVar34 = local_80->Flags;
        DVar10 = *(DWORD *)&local_80->CreatorBackTraceIndexHigh;
        pDVar42 = (DWORD *)((int)&p_Stack_78->Flags + iVar35);
        *pDVar42 = local_80->EntryCount;
        pDVar42[1] = DVar23;
        pDVar42[2] = DVar34;
        pDVar42[3] = DVar10;
        p_Var45 = local_80[1].CriticalSection;
        p_Var4 = local_80[1].ProcessLocksList.Flink;
        p_Var5 = local_80[1].ProcessLocksList.Blink;
        puVar33 = (undefined4 *)((int)&p_Stack_78[1].ProcessLocksList.Flink + iVar35);
        *puVar33 = *(undefined4 *)(local_80 + 1);
        puVar33[1] = p_Var45;
        puVar33[2] = p_Var4;
        puVar33[3] = p_Var5;
        *(DWORD *)((int)&p_Stack_78[1].Flags + iVar35) = local_80[1].EntryCount;
        piVar30 = *(int **)(*(int *)((int)&p_Var28[0x41].EntryCount + DStack_94) * 0x1510 + 0x510 +
                           *(int *)((int)&p_Var28[0x41].ProcessLocksList.Blink + DStack_94));
        (**(code **)(*piVar30 + 0x54))(piVar30,local_80,&p_Stack_a4);
        *(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var47[1].CreatorBackTraceIndexHigh +
         *(int *)((int)&p_Var28[0x41].Type + DStack_94)) = p_Stack_a4;
        piVar30 = (int *)((int)&p_Var28[0x41].ProcessLocksList.Flink + DStack_94);
        *piVar30 = *piVar30 + 1;
      }
      puVar49 = (undefined1 *)((int)&p_Var28->Type + DStack_94);
      local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                  ((int)&p_Var47[1].CreatorBackTraceIndexHigh +
                  *(int *)((int)&p_Var28[0x41].Type + DStack_94));
      if ((local_90 !=
           *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].ContentionCount + DStack_94)) ||
         (local_98 != *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar49 + 0x538))) {
        piVar30 = *(int **)((int)&p_Var28[0x28].ContentionCount + DStack_94);
        (**(code **)(*piVar30 + 0x90))(piVar30,local_90,local_98);
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].ContentionCount + DStack_94) = local_90
        ;
        p_Var37 = local_98;
LAB_100163ca:
        *(PRTL_CRITICAL_SECTION_DEBUG *)(puVar49 + 0x538) = p_Var37;
      }
    }
    *(undefined1 *)((int)&local_7c[0xe9].Flags + 3) = 0;
    param_1 = local_7c;
  }
  if (((char)param_1[0xe9].CreatorBackTraceIndexHigh != '\0') || (local_74 != param_1)) {
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      iVar35 = 0x2fc;
      if ((char)param_1[200].Type != '\x01') {
        iVar35 = 0x31c;
      }
    }
    else {
      iVar35 = 0x33c;
    }
    local_98 = param_1 + 0x10a;
    param_1[0x10a].ProcessLocksList.Flink = *(_LIST_ENTRY **)((int)&param_1->Type + iVar35);
    param_1[0x10a].ProcessLocksList.Blink =
         *(_LIST_ENTRY **)((int)&param_1->CriticalSection + iVar35);
    param_1[0x10a].EntryCount = *(DWORD *)((int)&(param_1->ProcessLocksList).Flink + iVar35);
    param_1[0x10a].ContentionCount = *(DWORD *)((int)&(param_1->ProcessLocksList).Blink + iVar35);
    param_1[0x10a].Flags = *(DWORD *)((int)&param_1->EntryCount + iVar35);
    uVar32 = *(undefined4 *)((int)&param_1->ContentionCount + iVar35);
    param_1[0x10a].CreatorBackTraceIndexHigh = (short)uVar32;
    param_1[0x10a].SpareWORD = (short)((uint)uVar32 >> 0x10);
    uVar32 = *(undefined4 *)((int)&param_1->Flags + iVar35);
    param_1[0x10b].Type = (short)uVar32;
    param_1[0x10b].CreatorBackTraceIndex = (short)((uint)uVar32 >> 0x10);
    *(undefined1 *)&param_1[0x10b].CriticalSection =
         *(undefined1 *)((int)&param_1->CreatorBackTraceIndexHigh + iVar35);
    DVar23 = param_1->EntryCount * 0x1510;
    uVar50._0_2_ = param_1[0x10a].CreatorBackTraceIndexHigh;
    uVar50._2_2_ = param_1[0x10a].SpareWORD;
    DStack_94 = DVar23;
    p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xea].EntryCount;
    iVar35._0_2_ = local_98->Type;
    iVar35._2_2_ = local_98->CreatorBackTraceIndex;
    iVar38._0_2_ = param_1[0x10b].Type;
    iVar38._2_2_ = param_1[0x10b].CreatorBackTraceIndex;
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_88 = (PRTL_CRITICAL_SECTION_DEBUG)
               (((((uint)(*(byte *)&param_1[0x10e].CriticalSection & 0xf) << 4 |
                  (uint)(*(byte *)&param_1[0x10d].CriticalSection & 0xf)) << 4 |
                 (uint)(*(byte *)&param_1[0x10c].CriticalSection & 0xf)) << 4 |
                (uint)(*(byte *)&param_1[0x10b].CriticalSection & 0xf)) << 2);
    p_Stack_78 = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((((((uVar50 & 0x1f) << 5 | param_1[0x10a].Flags & 0x1f) << 3 |
                    param_1[0x10a].ContentionCount & 7) << 5 | param_1[0x10a].EntryCount & 0x1f) <<
                   5 | (uint)param_1[0x10a].ProcessLocksList.Blink & 0x1f) << 6 |
                  -(uint)(param_1[0x10d].ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) & 0x20 |
                  -(uint)(param_1[0x10c].ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) & 0x10 |
                  -(uint)(param_1[0x10b].ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) & 8 |
                  -(uint)(param_1[0x10a].ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) & 4 |
                  -(uint)(param_1[0x10a].CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) & 2 |
                  (uint)(iVar35 != 0) | iVar38 << 0x1d);
    local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x83c + (int)p_Var28);
    if (local_90 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x834 + (int)p_Var28);
      p_Var47 = local_90;
      do {
        local_80 = (PRTL_CRITICAL_SECTION_DEBUG)
                   ((uint)((int)&p_Var37->Type + (int)&p_Var47->Type) >> 1);
        p_Stack_84 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)p_Stack_a4 + (int)local_80 * 0x118);
        p_Var48 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)p_Stack_a4 + ((int)local_80 * 0x46 + 1) * 4)
        ;
        if ((p_Var48 < local_88) ||
           ((p_Var51 = local_80, p_Var48 == local_88 && (p_Stack_84 <= p_Stack_78)))) {
          if ((local_88 < p_Var48) || ((local_88 <= p_Var48 && (p_Stack_78 <= p_Stack_84)))) break;
          p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_80->Type + 1);
          local_80 = p_Var37;
          p_Var51 = p_Var47;
        }
        p_Var47 = p_Var51;
      } while (p_Var51 != p_Var37);
    }
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_80 * 0x118);
    p_Stack_9c = p_Var28;
    if (((local_80 == *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x83c + (int)p_Var28)) ||
        (*(PRTL_CRITICAL_SECTION_DEBUG *)
          ((int)&p_Var37->Type + *(int *)(DVar23 + 0x834 + (int)p_Var28)) != p_Stack_78)) ||
       (*(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var37->CriticalSection + *(int *)(DVar23 + 0x834 + (int)p_Var28)) != local_88)) {
      iVar35 = *(int *)(DVar23 + 0x838 + (int)p_Var28);
      DVar34 = DVar23;
      p_Var47 = p_Var28;
      local_8c = p_Var37;
      if (*(int *)(DVar23 + 0x83c + (int)p_Var28) == iVar35) {
        lVar6 = (ulonglong)(uint)(iVar35 * 2) * 0x118;
        SVar29 = (SIZE_T)lVar6;
        if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
          SVar29 = 0xffffffff;
        }
        p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c789(SVar29);
        if (p_Stack_a4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          uVar24 = 0;
          if (*(int *)(DVar23 + 0x838 + (int)p_Var28) != 0) {
            do {
              iVar35 = uVar24 * 0x118;
              uVar24 = uVar24 + 1;
              puVar33 = (undefined4 *)
                        (*(int *)((int)&p_Var28[0x41].ContentionCount + DVar23) + iVar35);
              puVar52 = (undefined4 *)(iVar35 + (int)p_Stack_a4);
              for (iVar38 = 0x46; iVar38 != 0; iVar38 = iVar38 + -1) {
                *puVar52 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar52 = puVar52 + 1;
              }
              DVar34 = DStack_94;
              DVar23 = DStack_94;
              p_Var47 = p_Stack_9c;
              p_Var28 = p_Stack_9c;
            } while (uVar24 < *(uint *)((int)&p_Stack_9c[0x41].Flags + DStack_94));
          }
          thunk_FUN_1005c76c(*(LPVOID *)((int)&p_Var47[0x41].ContentionCount + DVar34));
          piVar30 = (int *)((int)&p_Var47[0x41].Flags + DVar34);
          *piVar30 = *piVar30 << 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var47[0x41].ContentionCount + DVar34) =
               p_Stack_a4;
        }
      }
      DVar23 = DStack_94;
      p_Var28 = p_Stack_9c;
      p_Var37 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                 ((int)&p_Var47[0x41].CreatorBackTraceIndexHigh + DVar34);
      if (local_80 < p_Var37) {
        do {
          iVar35 = (int)p_Var37 * 0x118;
          p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var37[-1].SpareWORD + 1);
          puVar52 = (undefined4 *)(*(int *)((int)&p_Var47[0x41].ContentionCount + DVar34) + iVar35);
          puVar33 = puVar52 + -0x46;
          for (iVar35 = 0x46; iVar35 != 0; iVar35 = iVar35 + -1) {
            *puVar52 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar52 = puVar52 + 1;
          }
          DVar34 = DStack_94;
          p_Var47 = p_Stack_9c;
        } while (local_80 < p_Var37);
        local_8c = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_80 * 0x118);
      }
      iVar35 = *(int *)((int)&p_Var47[0x41].ContentionCount + DVar34);
      p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->Type + iVar35) = p_Stack_78;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_8c->CriticalSection + iVar35) = local_88;
      p_Var37 = local_98;
      piVar30 = (int *)((int)&(local_8c->ProcessLocksList).Flink +
                       *(int *)((int)&p_Var47[0x41].ContentionCount + DVar34));
      for (iVar35 = 0x42; iVar35 != 0; iVar35 = iVar35 + -1) {
        *piVar30 = *(int *)p_Var37;
        p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var37->CriticalSection;
        piVar30 = piVar30 + 1;
      }
      piVar30 = *(int **)(*(int *)((int)&p_Stack_9c[0x42].CriticalSection + DStack_94) * 0x1510 +
                          0x510 + *(int *)((int)&p_Stack_9c[0x42].Type + DStack_94));
      (**(code **)(*piVar30 + 0x50))(piVar30,local_98,&p_Stack_a4);
      *(PRTL_CRITICAL_SECTION_DEBUG *)
       ((int)&local_8c[8].EntryCount + *(int *)((int)&p_Var28[0x41].ContentionCount + DVar23)) =
           p_Stack_a4;
      piVar30 = (int *)((int)&p_Var28[0x41].CreatorBackTraceIndexHigh + DVar23);
      *piVar30 = *piVar30 + 1;
      p_Var37 = local_8c;
    }
    local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                ((int)&p_Var37[8].EntryCount +
                *(int *)((int)&p_Var28[0x41].ContentionCount + DVar23));
    p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)
                 ((int)&p_Var28[0x29].CreatorBackTraceIndexHigh + DVar23);
    if ((local_90 != *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].EntryCount + DVar23)) ||
       (DVar34._0_2_ = p_Stack_a4->Type, DVar34._2_2_ = p_Stack_a4->CreatorBackTraceIndex,
       DVar34 != 0xffffffff)) {
      piVar30 = *(int **)((int)&p_Var28[0x28].ContentionCount + DVar23);
      (**(code **)(*piVar30 + 0x8c))(piVar30,local_90,0,0xffffffff);
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var28[0x29].EntryCount + DVar23) = local_90;
      p_Stack_a4->Type = 0xffff;
      p_Stack_a4->CreatorBackTraceIndex = 0xffff;
    }
    *(undefined1 *)&local_7c[0xe9].CreatorBackTraceIndexHigh = 0;
    param_1 = local_7c;
  }
  if ((*(char *)((int)&param_1[0xe9].CreatorBackTraceIndexHigh + 1) != '\0') ||
     (local_74 != param_1)) {
    pWVar43 = (WORD *)&DAT_10061260;
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      pWVar43 = &param_1[0x1a].CreatorBackTraceIndexHigh;
    }
    param_1[0x112].ProcessLocksList.Flink = *(_LIST_ENTRY **)pWVar43;
    param_1[0x112].ProcessLocksList.Blink = *(_LIST_ENTRY **)(pWVar43 + 2);
    param_1[0x112].EntryCount = *(DWORD *)(pWVar43 + 4);
    param_1[0x112].ContentionCount = *(DWORD *)(pWVar43 + 6);
    param_1[0x112].Flags = *(DWORD *)(pWVar43 + 8);
    uVar32 = *(undefined4 *)(pWVar43 + 10);
    param_1[0x112].CreatorBackTraceIndexHigh = (short)uVar32;
    param_1[0x112].SpareWORD = (short)((uint)uVar32 >> 0x10);
    uVar32 = *(undefined4 *)(pWVar43 + 0xc);
    param_1[0x113].Type = (short)uVar32;
    param_1[0x113].CreatorBackTraceIndex = (short)((uint)uVar32 >> 0x10);
    param_1[0x113].CriticalSection = *(_RTL_CRITICAL_SECTION **)(pWVar43 + 0xe);
    param_1[0x113].ProcessLocksList.Flink = *(_LIST_ENTRY **)(pWVar43 + 0x10);
    param_1[0x113].ProcessLocksList.Blink = *(_LIST_ENTRY **)(pWVar43 + 0x12);
    DStack_94 = param_1->EntryCount * 0x1510;
    p_Stack_9c = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xea].EntryCount;
    local_8c = *(PRTL_CRITICAL_SECTION_DEBUG *)(DStack_94 + 0x864 + (int)p_Stack_9c);
    piVar30 = (int *)(DStack_94 + 0x85c + (int)p_Stack_9c);
    if ((PRTL_CRITICAL_SECTION_DEBUG)0xff < local_8c) {
      p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)(*piVar30 + -0x30 + (int)local_8c * 0x38);
      uVar55 = FUN_10050596((uint *)p_Stack_84);
      p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)uVar55 >> 0x20);
      local_90 = (PRTL_CRITICAL_SECTION_DEBUG)uVar55;
      local_88 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005097d(piVar30,(uint)local_90,(uint)p_Stack_a4);
      p_Var37 = local_7c;
      local_8c = (PRTL_CRITICAL_SECTION_DEBUG)piVar30[2];
      if (local_88 != local_8c) {
        local_98 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_88 * 7);
        iVar35 = *piVar30;
        param_1 = p_Var37;
        if (((*(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + (int)local_88 * 0x38) == local_90) &&
            (*(PRTL_CRITICAL_SECTION_DEBUG *)(iVar35 + 4 + (int)local_88 * 0x38) == p_Stack_a4)) &&
           (uVar24 = FUN_10050535((uint *)p_Stack_84,(uint *)(iVar35 + 8 + (int)local_88 * 0x38)),
           (char)uVar24 == '\0')) {
          p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(*piVar30 + 0x30 + (int)local_98 * 8);
          local_90 = (PRTL_CRITICAL_SECTION_DEBUG)(piVar30[4] * 0x1510 + piVar30[3]);
          p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)(piVar30[3] + 0x4a0);
          EnterCriticalSection((LPCRITICAL_SECTION)p_Stack_84);
          if (p_Stack_a4 == (PRTL_CRITICAL_SECTION_DEBUG)local_90[0x2a].EntryCount) {
            local_90[0x2a].EntryCount = 0;
          }
          (**(code **)(*(int *)p_Stack_a4 + 8))(p_Stack_a4);
          LeaveCriticalSection((LPCRITICAL_SECTION)p_Stack_84);
          p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)piVar30[2];
          p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_88->Type + 1);
          if (p_Stack_a4 < p_Var37) {
            do {
              iVar35 = *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94);
              puVar33 = (undefined4 *)(iVar35 + (int)p_Stack_a4 * 0x38);
              uVar32 = puVar33[1];
              uVar8 = puVar33[2];
              uVar9 = puVar33[3];
              puVar52 = (undefined4 *)(iVar35 + -0x38 + (int)p_Stack_a4 * 0x38);
              *puVar52 = *puVar33;
              puVar52[1] = uVar32;
              puVar52[2] = uVar8;
              puVar52[3] = uVar9;
              puVar33 = (undefined4 *)(iVar35 + 0x10 + (int)p_Stack_a4 * 0x38);
              uVar32 = puVar33[1];
              uVar8 = puVar33[2];
              uVar9 = puVar33[3];
              puVar52 = (undefined4 *)(iVar35 + -0x28 + (int)p_Stack_a4 * 0x38);
              *puVar52 = *puVar33;
              puVar52[1] = uVar32;
              puVar52[2] = uVar8;
              puVar52[3] = uVar9;
              puVar33 = (undefined4 *)(iVar35 + 0x20 + (int)p_Stack_a4 * 0x38);
              uVar32 = puVar33[1];
              uVar8 = puVar33[2];
              uVar9 = puVar33[3];
              puVar52 = (undefined4 *)(iVar35 + -0x18 + (int)p_Stack_a4 * 0x38);
              *puVar52 = *puVar33;
              puVar52[1] = uVar32;
              puVar52[2] = uVar8;
              puVar52[3] = uVar9;
              *(undefined8 *)(iVar35 + -8 + (int)p_Stack_a4 * 0x38) =
                   *(undefined8 *)(iVar35 + 0x30 + (int)p_Stack_a4 * 0x38);
              p_Var37 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         ((int)&p_Stack_9c[0x43].CriticalSection + DStack_94);
              p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Stack_a4->Type + 1);
              param_1 = local_7c;
            } while (p_Stack_a4 < p_Var37);
          }
          local_8c = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var37[-1].SpareWORD + 1);
          piVar30[2] = (int)local_8c;
        }
      }
    }
    uVar55 = FUN_10050596((uint *)&param_1[0x112].ProcessLocksList);
    local_80 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)uVar55 >> 0x20);
    local_88 = (PRTL_CRITICAL_SECTION_DEBUG)uVar55;
    p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005097d(piVar30,(uint)local_88,(uint)local_80);
    param_1 = local_7c;
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_84 * 0x38);
    if (((p_Stack_84 == local_8c) ||
        (local_90 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                     ((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94),
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&local_90->Type + (int)&p_Var37->Type) != local_88))
       || (*(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var37->CriticalSection + (int)local_90) !=
           local_80)) {
      p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_9c[0x43].Type + DStack_94);
      local_90 = p_Var37;
      if (local_8c == p_Var28) {
        lVar6 = (ulonglong)(uint)((int)p_Var28 * 2) * 0x38;
        SVar29 = (SIZE_T)lVar6;
        if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
          SVar29 = 0xffffffff;
        }
        local_98 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c789(SVar29);
        if (local_98 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          if (*(int *)((int)&p_Stack_9c[0x43].Type + DStack_94) != 0) {
            uVar24 = 0;
            do {
              iVar39 = uVar24 * 0x38;
              uVar24 = uVar24 + 1;
              piVar31 = (int *)(*(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh +
                                        DStack_94) + iVar39);
              iVar35 = piVar31[1];
              iVar38 = piVar31[2];
              iVar11 = piVar31[3];
              piVar30 = (int *)(iVar39 + (int)local_98);
              *piVar30 = *piVar31;
              piVar30[1] = iVar35;
              piVar30[2] = iVar38;
              piVar30[3] = iVar11;
              iVar35 = piVar31[5];
              iVar38 = piVar31[6];
              iVar11 = piVar31[7];
              piVar30 = (int *)(iVar39 + 0x10 + (int)local_98);
              *piVar30 = piVar31[4];
              piVar30[1] = iVar35;
              piVar30[2] = iVar38;
              piVar30[3] = iVar11;
              iVar35 = piVar31[9];
              iVar38 = piVar31[10];
              iVar11 = piVar31[0xb];
              piVar30 = (int *)(iVar39 + 0x20 + (int)local_98);
              *piVar30 = piVar31[8];
              piVar30[1] = iVar35;
              piVar30[2] = iVar38;
              piVar30[3] = iVar11;
              *(undefined8 *)(iVar39 + 0x30 + (int)local_98) = *(undefined8 *)(piVar31 + 0xc);
              p_Var37 = local_90;
            } while (uVar24 < *(uint *)((int)&p_Stack_9c[0x43].Type + DStack_94));
          }
          thunk_FUN_1005c76c(*(LPVOID *)
                              ((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94));
          piVar30 = (int *)((int)&p_Stack_9c[0x43].Type + DStack_94);
          *piVar30 = *piVar30 << 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)
           ((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94) = local_98;
        }
      }
      param_1 = local_7c;
      p_Var28 = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Stack_9c[0x43].CriticalSection + DStack_94)
      ;
      if (p_Stack_84 < p_Var28) {
        do {
          iVar35 = *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94);
          puVar52 = (undefined4 *)(iVar35 + -0x38 + (int)p_Var28 * 0x38);
          uVar32 = puVar52[1];
          uVar8 = puVar52[2];
          uVar9 = puVar52[3];
          puVar33 = (undefined4 *)(iVar35 + (int)p_Var28 * 0x38);
          *puVar33 = *puVar52;
          puVar33[1] = uVar32;
          puVar33[2] = uVar8;
          puVar33[3] = uVar9;
          puVar33 = (undefined4 *)(iVar35 + -0x28 + (int)p_Var28 * 0x38);
          uVar32 = puVar33[1];
          uVar8 = puVar33[2];
          uVar9 = puVar33[3];
          puVar52 = (undefined4 *)(iVar35 + 0x10 + (int)p_Var28 * 0x38);
          *puVar52 = *puVar33;
          puVar52[1] = uVar32;
          puVar52[2] = uVar8;
          puVar52[3] = uVar9;
          puVar33 = (undefined4 *)(iVar35 + -0x18 + (int)p_Var28 * 0x38);
          uVar32 = puVar33[1];
          uVar8 = puVar33[2];
          uVar9 = puVar33[3];
          puVar52 = (undefined4 *)(iVar35 + 0x20 + (int)p_Var28 * 0x38);
          *puVar52 = *puVar33;
          puVar52[1] = uVar32;
          puVar52[2] = uVar8;
          puVar52[3] = uVar9;
          *(undefined8 *)(iVar35 + 0x30 + (int)p_Var28 * 0x38) =
               *(undefined8 *)(iVar35 + -8 + (int)p_Var28 * 0x38);
          p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var28[-1].SpareWORD + 1);
        } while (p_Stack_84 < p_Var28);
        p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Stack_84 * 0x38);
      }
      iVar35 = *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94);
      p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var37->Type + iVar35) = local_88;
      *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var37->CriticalSection + iVar35) = local_80;
      iVar35 = *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94);
      p_Var4 = local_7c[0x112].ProcessLocksList.Blink;
      DVar23 = local_7c[0x112].EntryCount;
      DVar34 = local_7c[0x112].ContentionCount;
      puVar33 = (undefined4 *)((int)&(p_Var37->ProcessLocksList).Flink + iVar35);
      *puVar33 = local_7c[0x112].ProcessLocksList.Flink;
      puVar33[1] = p_Var4;
      puVar33[2] = DVar23;
      puVar33[3] = DVar34;
      DVar23 = *(DWORD *)&local_7c[0x112].CreatorBackTraceIndexHigh;
      DVar34 = *(DWORD *)(local_7c + 0x113);
      p_Var45 = local_7c[0x113].CriticalSection;
      pDVar42 = (DWORD *)((int)&p_Var37->Flags + iVar35);
      *pDVar42 = local_7c[0x112].Flags;
      pDVar42[1] = DVar23;
      pDVar42[2] = DVar34;
      pDVar42[3] = (DWORD)p_Var45;
      *(LIST_ENTRY *)((int)&p_Var37[1].ProcessLocksList.Flink + iVar35) =
           local_7c[0x113].ProcessLocksList;
      piVar30 = *(int **)(*(int *)((int)&p_Stack_9c[0x43].ProcessLocksList.Blink + DStack_94) *
                          0x1510 + 0x510 +
                         *(int *)((int)&p_Stack_9c[0x43].ProcessLocksList.Flink + DStack_94));
      (**(code **)(*piVar30 + 0x58))(piVar30,&local_7c[0x112].ProcessLocksList,&p_Stack_a4);
      *(PRTL_CRITICAL_SECTION_DEBUG *)
       ((int)&p_Var37[1].EntryCount +
       *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94)) = p_Stack_a4;
      piVar30 = (int *)((int)&p_Stack_9c[0x43].CriticalSection + DStack_94);
      *piVar30 = *piVar30 + 1;
    }
    else {
      uVar24 = FUN_10050535((uint *)&local_7c[0x112].ProcessLocksList,
                            (uint *)((int)local_90 + (int)p_Stack_84 * 0x38 + 8));
      if ((char)uVar24 != '\0') {
        p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                      ((int)&local_90->Type + (int)&p_Var37[1].EntryCount);
        iVar35 = *(int *)((int)&p_Stack_9c[0x43].ProcessLocksList.Flink + DStack_94);
        local_90 = (PRTL_CRITICAL_SECTION_DEBUG)
                   (*(int *)((int)&p_Stack_9c[0x43].ProcessLocksList.Blink + DStack_94) * 0x1510 +
                   iVar35);
        p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)(iVar35 + 0x4a0);
        EnterCriticalSection((LPCRITICAL_SECTION)p_Stack_84);
        if (p_Stack_a4 == (PRTL_CRITICAL_SECTION_DEBUG)local_90[0x2a].EntryCount) {
          local_90[0x2a].EntryCount = 0;
        }
        (**(code **)(*(DWORD *)p_Stack_a4 + 8))(p_Stack_a4);
        LeaveCriticalSection((LPCRITICAL_SECTION)local_88);
        param_1 = local_80;
        uStack_a8 = 0;
        iVar35 = *(int *)((int)&local_98[0x42].CreatorBackTraceIndexHigh + uStack_a0);
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var37->Type + iVar35) = local_8c;
        *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var37->CriticalSection + iVar35) = p_Stack_84;
        iVar35 = *(int *)((int)&local_98[0x42].CreatorBackTraceIndexHigh + uStack_a0);
        p_Var4 = local_80[0x112].ProcessLocksList.Blink;
        DVar23 = local_80[0x112].EntryCount;
        DVar34 = local_80[0x112].ContentionCount;
        puVar33 = (undefined4 *)((int)&(p_Var37->ProcessLocksList).Flink + iVar35);
        *puVar33 = local_80[0x112].ProcessLocksList.Flink;
        puVar33[1] = p_Var4;
        puVar33[2] = DVar23;
        puVar33[3] = DVar34;
        DVar23 = *(DWORD *)&local_80[0x112].CreatorBackTraceIndexHigh;
        DVar34 = *(DWORD *)(local_80 + 0x113);
        p_Var45 = local_80[0x113].CriticalSection;
        pDVar42 = (DWORD *)((int)&p_Var37->Flags + iVar35);
        *pDVar42 = local_80[0x112].Flags;
        pDVar42[1] = DVar23;
        pDVar42[2] = DVar34;
        pDVar42[3] = (DWORD)p_Var45;
        *(LIST_ENTRY *)((int)&p_Var37[1].ProcessLocksList.Flink + iVar35) =
             local_80[0x113].ProcessLocksList;
        piVar30 = *(int **)(*(int *)((int)&local_98[0x43].ProcessLocksList.Blink + uStack_a0) *
                            0x1510 + 0x510 +
                           *(int *)((int)&local_98[0x43].ProcessLocksList.Flink + uStack_a0));
        (**(code **)(*piVar30 + 0x58))(piVar30,&local_80[0x112].ProcessLocksList,&uStack_a8);
        *(PRTL_CRITICAL_SECTION_DEBUG *)
         ((int)&p_Var37[1].EntryCount +
         *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94)) = p_Stack_a4;
      }
    }
    iVar35 = *(int *)((int)&p_Var37[1].EntryCount +
                     *(int *)((int)&p_Stack_9c[0x42].CreatorBackTraceIndexHigh + DStack_94));
    if (iVar35 != *(int *)((int)&p_Stack_9c[0x2a].EntryCount + DStack_94)) {
      piVar30 = *(int **)((int)&p_Stack_9c[0x28].ContentionCount + DStack_94);
      (**(code **)(*piVar30 + 0xac))(piVar30,iVar35);
      *(int *)((int)&p_Stack_9c[0x2a].EntryCount + DStack_94) = iVar35;
    }
    *(undefined1 *)((int)&param_1[0xe9].CreatorBackTraceIndexHigh + 1) = 0;
  }
  if (((char)param_1[0xe9].SpareWORD != '\0') || (local_74 != param_1)) {
    iVar11._0_2_ = param_1[199].Type;
    iVar11._2_2_ = param_1[199].CreatorBackTraceIndex;
    if ((*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') &&
       ((iVar11 != 0 || ((param_1[199].Flags & 1) != 0)))) {
      iVar35 = 0x3b4;
    }
    else {
      iVar35 = 0x3cc;
    }
    pDVar44 = (DWORD *)((int)&param_1->Type + iVar35);
    DVar34 = pDVar44[1];
    DVar10 = pDVar44[2];
    DVar12 = pDVar44[3];
    DVar23 = param_1[0xee].EntryCount;
    pDVar42 = &param_1[0xfa].ContentionCount;
    *pDVar42 = *pDVar44;
    param_1[0xfa].Flags = DVar34;
    param_1[0xfa].CreatorBackTraceIndexHigh = (short)DVar10;
    param_1[0xfa].SpareWORD = (short)(DVar10 >> 0x10);
    param_1[0xfb].Type = (short)DVar12;
    param_1[0xfb].CreatorBackTraceIndex = (short)(DVar12 >> 0x10);
    uVar55 = *(undefined8 *)((int)&param_1->EntryCount + iVar35);
    param_1[0xfb].CriticalSection = (_RTL_CRITICAL_SECTION *)(int)uVar55;
    param_1[0xfb].ProcessLocksList.Flink = (_LIST_ENTRY *)(int)((ulonglong)uVar55 >> 0x20);
    if (0xafff < (int)DVar23) {
      *pDVar42 = (DWORD)((float)param_1[0x1f].CriticalSection + (float)*pDVar42);
      param_1[0xfa].Flags =
           (DWORD)((float)param_1[0xfa].Flags + (float)param_1[0x1f].ProcessLocksList.Flink);
    }
    if (iVar11 == 0) {
      param_1[0xfb].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
      param_1[0xfb].ProcessLocksList.Flink = (_LIST_ENTRY *)0x3f800000;
    }
    local_90 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1->EntryCount * 0x1510);
    p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xea].EntryCount;
    if ((((((float)*pDVar42 != *(float *)((int)&p_Stack_a4->Type + (int)&local_90[0x3e].EntryCount))
          || ((float)param_1[0xfa].Flags !=
              *(float *)((int)&p_Stack_a4->Type + (int)&local_90[0x3e].ContentionCount))) ||
         (*(float *)&param_1[0xfa].CreatorBackTraceIndexHigh !=
          *(float *)((int)&p_Stack_a4->Type + (int)&local_90[0x3e].Flags))) ||
        ((*(float *)(param_1 + 0xfb) !=
          *(float *)((int)&p_Stack_a4->Type + (int)&local_90[0x3e].CreatorBackTraceIndexHigh) ||
         ((float)param_1[0xfb].CriticalSection !=
          *(float *)((int)&local_90[0x3f].Type + (int)p_Stack_a4))))) ||
       ((float)param_1[0xfb].ProcessLocksList.Flink !=
        *(float *)((int)&local_90[0x3f].CriticalSection + (int)p_Stack_a4))) {
      piVar30 = *(int **)((int)&local_90[0x28].ContentionCount + (int)p_Stack_a4);
      (**(code **)(*piVar30 + 0xb0))(piVar30,1,pDVar42);
      DVar23 = param_1[0xfa].Flags;
      DVar34 = *(DWORD *)&param_1[0xfa].CreatorBackTraceIndexHigh;
      DVar10 = *(DWORD *)(param_1 + 0xfb);
      pDVar44 = (DWORD *)((int)&p_Stack_a4->Type + (int)&local_90[0x3e].EntryCount);
      *pDVar44 = *pDVar42;
      pDVar44[1] = DVar23;
      pDVar44[2] = DVar34;
      pDVar44[3] = DVar10;
      *(undefined8 *)((int)&local_90[0x3f].Type + (int)p_Stack_a4) =
           *(undefined8 *)&param_1[0xfb].CriticalSection;
    }
    *(undefined1 *)&param_1[0xe9].SpareWORD = 0;
  }
  if (((char)param_1[0x113].EntryCount != '\0') || (local_74 != param_1)) {
    FUN_1004fe9f((void *)param_1[0xea].EntryCount,param_1->EntryCount,
                 (int)param_1[0xfa].ProcessLocksList.Blink,(int)param_1[0xf7].ProcessLocksList.Flink
                 ,(int)param_1[0xf7].ProcessLocksList.Blink,param_1[0xf7].EntryCount,
                 param_1[0xf7].ContentionCount);
    *(undefined1 *)&param_1[0x113].EntryCount = 0;
  }
  p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[0xe9].ContentionCount;
  if ((p_Var37 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) || (local_74 != param_1)) {
    if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
      local_98 = p_Var37;
      uVar24 = 0;
      bVar53 = p_Var37 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      if (!bVar53) {
        for (; ((uint)p_Var37 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
        }
      }
      while (!bVar53) {
        p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar24 & 0xff);
        pbVar7 = (byte *)((int)&local_98 + ((int)uVar24 >> 3));
        *pbVar7 = *pbVar7 & ~('\x01' << (uVar24 & 7));
        p_Var40 = (_RTL_CRITICAL_SECTION *)
                  (uint)*(byte *)((int)&param_1[0x11].CreatorBackTraceIndex + (int)p_Var37 * 8 + 1);
        p_Var45 = (&param_1[0x11].CriticalSection)[(int)p_Var37 * 2];
        if (p_Var45 < p_Var40) {
          fVar54 = (float)(int)p_Var40;
        }
        else {
          fVar54 = (float)((double)(int)p_Var45 + (double)(&DAT_100601f0)[-((int)p_Var45 >> 0x1f)]);
        }
        iVar35 = (int)p_Var37 * 0x34;
        *(float *)((int)param_1 + iVar35 + 0xac) = fVar54;
        bVar21 = *(byte *)((int)&param_1[0x11].Type + (int)p_Var37 * 8 + 1);
        bVar22 = (byte)(&param_1[0x11].Type)[(int)p_Var37 * 4];
        bStack_55 = (byte)(&param_1[0x11].CreatorBackTraceIndex)[(int)p_Var37 * 4];
        uStack_a0._0_3_ = CONCAT12(bVar22,(ushort)uStack_a0);
        uStack_a0 = CONCAT13(bVar21,(uint3)uStack_a0);
        if (bVar22 != 2) {
          fVar54 = 3.4028235e+38;
        }
        p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        if (bVar22 != 2) {
          p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)(uint)bVar22;
        }
        *(float *)((int)param_1 + iVar35 + 0xb0) = fVar54;
        if ((bVar21 == 2) || (bStack_55 == 2)) {
          uVar32 = 0x55;
        }
        else {
          uVar32 = *(undefined4 *)
                    (&DAT_1005daa8 +
                    (((uint)bStack_55 * 2 | (uint)bVar21) * 2 | (uint)p_Stack_a4) * 4);
        }
        *(undefined4 *)((int)param_1 + iVar35 + 0x80) = uVar32;
        puVar1 = (uint *)(iVar35 + 0x80 + (int)param_1);
        uVar46 = puVar1[1];
        uVar50 = puVar1[2];
        uVar25 = puVar1[3];
        uVar24 = *(uint *)(iVar35 + 0xb0 + (int)param_1);
        puVar41 = (uint *)((int)param_1 + iVar35 + 0x1f6c);
        *puVar41 = *puVar1;
        puVar41[1] = uVar46;
        puVar41[2] = uVar50;
        puVar41[3] = uVar25;
        puVar1 = (uint *)(iVar35 + 0x90 + (int)param_1);
        uVar46 = puVar1[1];
        uVar50 = puVar1[2];
        uVar25 = puVar1[3];
        puVar41[4] = *puVar1;
        puVar41[5] = uVar46;
        puVar41[6] = uVar50;
        puVar41[7] = uVar25;
        puVar1 = (uint *)(iVar35 + 0xa0 + (int)param_1);
        uVar46 = puVar1[1];
        uVar50 = puVar1[2];
        uVar25 = puVar1[3];
        puVar41[8] = *puVar1;
        puVar41[9] = uVar46;
        puVar41[10] = uVar50;
        puVar41[0xb] = uVar25;
        puVar41[0xc] = uVar24;
        local_90 = p_Var37;
        p_Stack_78 = (PRTL_CRITICAL_SECTION_DEBUG)
                     FUN_1005064f((void *)(param_1[0xea].ContentionCount + 0x39c),puVar41);
        p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(&param_1[0xf6].CriticalSection)[(int)p_Var37];
        uStack_70 = CONCAT44(uStack_70._4_4_,p_Var28);
        if (p_Stack_78 != p_Var28) {
          DVar23 = param_1[0xea].ContentionCount;
          DStack_94 = DVar23;
          if (p_Var28 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            (**(code **)(*(int *)p_Var28 + 0x1c))(p_Var28,&DStack_50);
            p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            p_Stack_9c = *(PRTL_CRITICAL_SECTION_DEBUG *)(DVar23 + 0x3a4);
            local_8c = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((((((iStack_38 + -1) * 0x10 | iStack_3c - 1U) << 3 | DStack_44) << 3 |
                         DStack_48) << 3 | DStack_4c) << 8 | DStack_50);
            p_Stack_84 = p_Stack_9c;
            local_88 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            if (p_Stack_9c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DStack_94 + 0x39c);
              p_Var28 = p_Stack_9c;
              do {
                local_88 = (PRTL_CRITICAL_SECTION_DEBUG)
                           ((uint)((int)&p_Var28->Type + (int)&p_Var37->Type) >> 1);
                p_Stack_84 = *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Stack_a4 + (int)local_88 * 2);
                p_Var47 = local_88;
                if ((p_Stack_a4[(int)local_88 * 2].CriticalSection == (_RTL_CRITICAL_SECTION *)0x0)
                   && (p_Stack_84 <= local_8c)) {
                  param_1 = local_7c;
                  if (local_8c <= p_Stack_84) break;
                  p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&local_88->Type + 1);
                  local_88 = p_Var37;
                  p_Var47 = p_Var28;
                }
                p_Var28 = p_Var47;
                param_1 = local_7c;
              } while (p_Var47 != p_Var37);
            }
            p_Var37 = local_88;
            p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)((int)local_88 * 0x40);
            p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)(DStack_94 + 0x39c);
            local_80 = p_Var47;
            if (((local_88 == p_Stack_9c) ||
                (param_1 = local_7c,
                *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var47->Type + *(int *)p_Var28) != local_8c)
                ) || (*(int *)((int)&p_Var47->CriticalSection + *(int *)p_Var28) != 0)) {
              p_Stack_9c = p_Var28;
              if (*(int *)(DStack_94 + 0x3a4) == *(int *)(DStack_94 + 0x3a0)) {
                lVar6 = (ulonglong)(uint)(*(int *)(DStack_94 + 0x3a0) * 2) * 0x40;
                SVar29 = (SIZE_T)lVar6;
                if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
                  SVar29 = 0xffffffff;
                }
                p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c789(SVar29);
                if (p_Stack_a4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                  p_Stack_84 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                  if (*(int *)(DStack_94 + 0x3a0) != 0) {
                    uVar24 = 0;
                    do {
                      uVar46 = uVar24 + 1;
                      puVar33 = (undefined4 *)(*(int *)p_Stack_9c + uVar24 * 0x40);
                      uVar32 = *puVar33;
                      p_Var45 = (_RTL_CRITICAL_SECTION *)puVar33[1];
                      p_Var4 = (_LIST_ENTRY *)puVar33[2];
                      p_Var5 = (_LIST_ENTRY *)puVar33[3];
                      p_Var37 = p_Stack_a4 + uVar24 * 2;
                      p_Var37->Type = (short)uVar32;
                      p_Var37->CreatorBackTraceIndex = (short)((uint)uVar32 >> 0x10);
                      p_Var37->CriticalSection = p_Var45;
                      (p_Var37->ProcessLocksList).Flink = p_Var4;
                      (p_Var37->ProcessLocksList).Blink = p_Var5;
                      DVar23 = puVar33[5];
                      DVar34 = puVar33[6];
                      uVar32 = puVar33[7];
                      pDVar42 = &p_Stack_a4[uVar24 * 2].EntryCount;
                      *pDVar42 = puVar33[4];
                      pDVar42[1] = DVar23;
                      pDVar42[2] = DVar34;
                      pDVar42[3] = uVar32;
                      uVar32 = puVar33[8];
                      p_Var45 = (_RTL_CRITICAL_SECTION *)puVar33[9];
                      p_Var4 = (_LIST_ENTRY *)puVar33[10];
                      p_Var5 = (_LIST_ENTRY *)puVar33[0xb];
                      p_Var37 = p_Stack_a4 + uVar24 * 2 + 1;
                      p_Var37->Type = (short)uVar32;
                      p_Var37->CreatorBackTraceIndex = (short)((uint)uVar32 >> 0x10);
                      p_Var37->CriticalSection = p_Var45;
                      (p_Var37->ProcessLocksList).Flink = p_Var4;
                      (p_Var37->ProcessLocksList).Blink = p_Var5;
                      DVar23 = puVar33[0xd];
                      DVar34 = puVar33[0xe];
                      uVar32 = puVar33[0xf];
                      pDVar42 = &p_Stack_a4[uVar24 * 2 + 1].EntryCount;
                      *pDVar42 = puVar33[0xc];
                      pDVar42[1] = DVar23;
                      pDVar42[2] = DVar34;
                      pDVar42[3] = uVar32;
                      p_Var37 = local_88;
                      uVar24 = uVar46;
                      param_1 = local_7c;
                    } while (uVar46 < *(uint *)(DStack_94 + 0x3a0));
                  }
                  thunk_FUN_1005c76c(*(LPVOID *)p_Stack_9c);
                  *(PRTL_CRITICAL_SECTION_DEBUG *)p_Stack_9c = p_Stack_a4;
                  *(int *)(DStack_94 + 0x3a0) = *(int *)(DStack_94 + 0x3a0) << 1;
                }
              }
              p_Stack_a4 = *(PRTL_CRITICAL_SECTION_DEBUG *)(DStack_94 + 0x3a4);
              p_Var28 = p_Stack_a4;
              p_Var47 = local_80;
              if (p_Var37 < p_Stack_a4) {
                do {
                  iVar35 = *(int *)p_Stack_9c;
                  iVar38 = (int)p_Var28 * 0x40;
                  p_Var28 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var28[-1].SpareWORD + 1);
                  puVar52 = (undefined4 *)(iVar38 + -0x40 + iVar35);
                  uVar32 = puVar52[1];
                  uVar8 = puVar52[2];
                  uVar9 = puVar52[3];
                  puVar33 = (undefined4 *)(iVar38 + iVar35);
                  *puVar33 = *puVar52;
                  puVar33[1] = uVar32;
                  puVar33[2] = uVar8;
                  puVar33[3] = uVar9;
                  puVar33 = (undefined4 *)(iVar38 + -0x30 + iVar35);
                  uVar32 = puVar33[1];
                  uVar8 = puVar33[2];
                  uVar9 = puVar33[3];
                  puVar52 = (undefined4 *)(iVar38 + 0x10 + iVar35);
                  *puVar52 = *puVar33;
                  puVar52[1] = uVar32;
                  puVar52[2] = uVar8;
                  puVar52[3] = uVar9;
                  puVar33 = (undefined4 *)(iVar38 + -0x20 + iVar35);
                  uVar32 = puVar33[1];
                  uVar8 = puVar33[2];
                  uVar9 = puVar33[3];
                  puVar52 = (undefined4 *)(iVar38 + 0x20 + iVar35);
                  *puVar52 = *puVar33;
                  puVar52[1] = uVar32;
                  puVar52[2] = uVar8;
                  puVar52[3] = uVar9;
                  puVar33 = (undefined4 *)(iVar38 + -0x10 + iVar35);
                  uVar32 = puVar33[1];
                  uVar8 = puVar33[2];
                  uVar9 = puVar33[3];
                  puVar52 = (undefined4 *)(iVar38 + 0x30 + iVar35);
                  *puVar52 = *puVar33;
                  puVar52[1] = uVar32;
                  puVar52[2] = uVar8;
                  puVar52[3] = uVar9;
                } while (p_Var37 < p_Var28);
                p_Var47 = (PRTL_CRITICAL_SECTION_DEBUG)((int)p_Var37 << 6);
                param_1 = local_7c;
              }
              iVar35 = *(int *)p_Stack_9c;
              *(PRTL_CRITICAL_SECTION_DEBUG *)((int)&p_Var47->Type + iVar35) = local_8c;
              *(undefined4 *)((int)&p_Var47->CriticalSection + iVar35) = 0;
              iVar35 = *(int *)p_Stack_9c;
              pDVar42 = (DWORD *)((int)&(p_Var47->ProcessLocksList).Flink + iVar35);
              *pDVar42 = DStack_50;
              pDVar42[1] = DStack_4c;
              pDVar42[2] = DStack_48;
              pDVar42[3] = DStack_44;
              puVar33 = (undefined4 *)((int)&p_Var47->Flags + iVar35);
              *puVar33 = uStack_40;
              puVar33[1] = iStack_3c;
              puVar33[2] = iStack_38;
              puVar33[3] = uStack_34;
              puVar33 = (undefined4 *)((int)&p_Var47[1].ProcessLocksList.Flink + iVar35);
              *puVar33 = uStack_30;
              puVar33[1] = uStack_2c;
              puVar33[2] = uStack_28;
              puVar33[3] = uStack_24;
              *(undefined4 *)((int)&p_Var47[1].Flags + iVar35) = uStack_20;
              p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1005c755(0x2d0);
              if (p_Stack_a4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                FUN_1005c9cc((int *)p_Stack_a4,0,0x2d0);
              }
              *(PRTL_CRITICAL_SECTION_DEBUG *)
               ((int)&p_Var47[1].CreatorBackTraceIndexHigh + *(int *)p_Stack_9c) = p_Stack_a4;
              *(int *)(DStack_94 + 0x3a4) = *(int *)(DStack_94 + 0x3a4) + 1;
              p_Var28 = p_Stack_9c;
            }
            iVar35 = *(int *)((int)&p_Var47[1].CreatorBackTraceIndexHigh + *(int *)p_Var28);
            if (iVar35 != 0) {
              uVar24 = 0;
              do {
                if ((undefined4 *)*(int *)(iVar35 + 0x1c + uVar24 * 0x24) == (undefined4 *)uStack_70
                   ) {
                  *(undefined1 *)(iVar35 + 0x20 + uVar24 * 0x24) = 0;
                  break;
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 < 0x14);
            }
          }
          (&param_1[0xf6].CriticalSection)[(int)local_90] = (_RTL_CRITICAL_SECTION *)p_Stack_78;
          p_Var37 = local_90;
        }
        pbVar7 = (byte *)((int)&param_1[0xe9].ContentionCount + ((int)p_Var37 >> 3));
        *pbVar7 = *pbVar7 & ~('\x01' << ((uint)p_Var37 & 7));
        uVar24 = 0;
        bVar53 = local_98 == (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        if (!bVar53) {
          for (; ((uint)local_98 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
          }
        }
      }
      FUN_1004fcad((void *)param_1[0xea].EntryCount,param_1->EntryCount,0,8,
                   (int)&param_1[0xf6].CriticalSection);
    }
    else if (param_1[0xf2].ContentionCount != 0) {
      FUN_1004fcad((void *)param_1[0xea].EntryCount,param_1->EntryCount,0,1,
                   (int)&param_1[0xeb].Flags);
      param_1[0xe9].ContentionCount = param_1[0xe9].ContentionCount & 0xfffffffe;
    }
  }
  if ((*(char *)((int)&param_1[0xe9].SpareWORD + 1) == '\0') && (local_74 == param_1))
  goto LAB_100174d3;
  DVar23 = param_1[0xea].EntryCount;
  iVar35 = param_1->EntryCount * 0x1510;
  DVar34 = param_1[0xf7].Flags;
  uStack_70 = CONCAT44(uStack_70._4_4_,DVar23);
  p_Stack_a4 = (PRTL_CRITICAL_SECTION_DEBUG)(DVar23 + 0x704 + iVar35);
  DVar10._0_2_ = p_Stack_a4->Type;
  DVar10._2_2_ = p_Stack_a4->CreatorBackTraceIndex;
  if (DVar10 == DVar34) {
    if ((*(DWORD *)(iVar35 + 0x744 + DVar23) != param_1[0x25].EntryCount) ||
       (*(DWORD *)(iVar35 + 0x784 + DVar23) != param_1[0x27].ContentionCount)) {
      DVar34 = param_1[0xf7].Flags;
      goto LAB_1001748b;
    }
  }
  else {
LAB_1001748b:
    p_Stack_a4->Type = (short)DVar34;
    p_Stack_a4->CreatorBackTraceIndex = (short)(DVar34 >> 0x10);
    pDVar44 = (DWORD *)(DVar23 + 0x744 + iVar35);
    pDVar42 = (DWORD *)(DVar23 + 0x784 + iVar35);
    *pDVar44 = param_1[0x25].EntryCount;
    *pDVar42 = param_1[0x27].ContentionCount;
    piVar30 = *(int **)(iVar35 + 0x514 + DVar23);
    (**(code **)(*piVar30 + 0x48))(piVar30,0,1,p_Stack_a4,pDVar44,pDVar42);
  }
  *(undefined1 *)((int)&param_1[0xe9].SpareWORD + 1) = 0;
LAB_100174d3:
  if (((char)param_1[0xea].Type != '\0') || (local_74 != param_1)) {
    DVar23 = param_1[0xf9].Flags;
    if (DVar23 == param_1[0xeb].EntryCount) {
      p_Var45 = (_RTL_CRITICAL_SECTION *)0x2a;
    }
    else {
      p_Var45 = param_1[0xfa].CriticalSection;
    }
    iVar35 = param_1->EntryCount * 0x1510;
    DVar34 = param_1[0xea].EntryCount;
    if (((DVar23 != *(DWORD *)(iVar35 + 0x7c4 + DVar34)) ||
        (p_Var45 != *(_RTL_CRITICAL_SECTION **)(iVar35 + 0x7c8 + DVar34))) ||
       (*(int *)(iVar35 + 0x7cc + DVar34) != 0)) {
      *(DWORD *)(iVar35 + 0x7c4 + DVar34) = DVar23;
      *(_RTL_CRITICAL_SECTION **)(iVar35 + 0x7c8 + DVar34) = p_Var45;
      *(undefined4 *)(iVar35 + 0x7cc + DVar34) = 0;
      piVar30 = *(int **)(iVar35 + 0x514 + DVar34);
      (**(code **)(*piVar30 + 0x4c))(piVar30,DVar23,p_Var45,0);
    }
    *(undefined1 *)&param_1[0xea].Type = 0;
  }
  piVar30 = (int *)param_1[0xf2].Flags;
  if (piVar30 != (int *)0x0) {
    p_Var4 = param_1[0xf3].ProcessLocksList.Blink;
    uStack_70 = 0;
    bVar21 = (byte)p_Var4;
    uStack_68 = (uint)piVar30[5] >> (bVar21 & 0x1f);
    if (uStack_68 == 0) {
      uStack_68 = local_54;
    }
    auStack_64[0] = (uint)piVar30[6] >> (bVar21 & 0x1f);
    if (auStack_64[0] == 0) {
      auStack_64[0] = 1;
    }
    (**(code **)(*piVar30 + 0xc))
              ((_LIST_ENTRY **)
               ((int)&p_Var4->Flink +
               piVar30[0xb] * *(int *)&param_1[0xf3].CreatorBackTraceIndexHigh),&uStack_70);
  }
  iVar35 = 0x2c8;
  p_Var4 = param_1[0xf3].ProcessLocksList.Flink;
  if (*(char *)((int)&param_1[200].CriticalSection + 1) == '\0') {
    iVar35 = 0x260;
  }
  if (((p_Var4 != (_LIST_ENTRY *)0x0) && (*(int *)((int)&param_1->Type + iVar35) != 0)) &&
     (*(int *)((int)&param_1->CriticalSection + iVar35) != 0)) {
    p_Var5 = param_1[0xf4].ProcessLocksList.Blink;
    uStack_70 = 0;
    bVar21 = (byte)p_Var5;
    uStack_68 = (uint)p_Var4[2].Blink >> (bVar21 & 0x1f);
    if (uStack_68 == 0) {
      uStack_68 = 1;
    }
    auStack_64[0] = (uint)p_Var4[3].Flink >> (bVar21 & 0x1f);
    if (auStack_64[0] == 0) {
      auStack_64[0] = 1;
    }
    iVar35 = (*(code *)p_Var4->Flink[1].Blink)
                       ((_LIST_ENTRY **)
                        ((int)&p_Var5->Flink + (int)p_Var4[5].Blink * param_1[0xf4].EntryCount),
                        &uStack_70);
  }
  return CONCAT31((int3)((uint)iVar35 >> 8),1);
}

