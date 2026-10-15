/*
 * FUN_1001fc20 at 1001fc20
 * byte __fastcall FUN_1001fc20(void * param_1)
 * Address ranges: 1001fc20-10020970
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1001fc20(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  void *pvVar18;
  undefined4 *puVar19;
  bool bVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  byte bStack_1cd;
  int iStack_1cc;
  int local_1c8;
  void *pvStack_1c4;
  uint local_1c0;
  void *local_1bc;
  uint local_1b8;
  int local_1b4;
  LARGE_INTEGER local_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int *local_17c;
  uint uStack_178;
  void *pvStack_174;
  void *pvStack_170;
  uint uStack_16c;
  LPCRITICAL_SECTION p_Stack_168;
  int *piStack_164;
  int iStack_160;
  uint *puStack_15c;
  uint auStack_158 [3];
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  int aiStack_12b [73];
  
  local_1b8 = 0;
  if (*(uint *)((int)param_1 + 0x444) != 0) {
    for (; (*(uint *)((int)param_1 + 0x444) >> local_1b8 & 1) == 0; local_1b8 = local_1b8 + 1) {
    }
  }
  if (*(char *)((int)param_1 + 0x1919) == '\0') {
LAB_1001fc5e:
    local_1c0 = local_1c0 & 0xffffff00;
  }
  else {
    local_1c0 = CONCAT31(local_1c0._1_3_,1);
    if (*(char *)((int)param_1 + 0x1909) == '\0') goto LAB_1001fc5e;
  }
  local_1bc = param_1;
  cVar5 = FUN_1001d630(param_1,(char)local_1c0);
  if (((*(char *)((int)param_1 + 0x1905) == '\0') && ((char)local_1c0 != '\0')) &&
     ((cVar5 != '\0' ||
      (param_1 != *(void **)(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304) + 0x948))))) {
    (**(code **)(**(int **)((int)param_1 + 0x1fa8) + 0x68))();
  }
  local_1b4 = *(int *)((int)param_1 + 0x1d54);
  if (0xfff < *(uint *)(local_1b4 + 0x1658)) {
    piVar16 = (int *)(local_1b4 + 0x164c);
    local_1c8 = 0x20;
    local_17c = piVar16;
    do {
      if (DAT_1006bbec == '\0') {
        QueryPerformanceCounter(&local_1b0);
        DAT_1006bbe8 = local_1b0.s.LowPart & 0xffff;
        DAT_1006bbec = '\x01';
      }
      DAT_1006bbe8 = DAT_1006bbe8 * DAT_1006bbe8 + DAT_1006b7a8 & 0xffff;
      DAT_1006b7a8 = (DAT_1006bbe8 >> 2) + DAT_1006b7a8 & 0xffff;
      lVar22 = FUN_1005c8a0();
      piVar15 = *(int **)(*piVar16 + 0x10 + (int)lVar22 * 0x18);
      puStack_15c = (uint *)(*piVar16 + ((int)lVar22 * 3 + 1) * 8);
      uStack_178 = 0;
      uVar8 = 0;
      piStack_164 = piVar15;
      if (piVar15[1] != 0) {
        do {
          iStack_160 = uStack_178 * 0x74;
          pvVar18 = *(void **)(*piVar15 + 0x70 + iStack_160);
          iStack_1cc = *(int *)(local_1b4 + 0x1640);
          p_Stack_168 = (LPCRITICAL_SECTION)(iStack_1cc + 0x1c);
          pvStack_174 = pvVar18;
          EnterCriticalSection(p_Stack_168);
          pvStack_170 = (void *)(iStack_1cc + 0xc);
          uVar14 = (int)pvVar18 >> 0x1f;
          pvStack_1c4 = pvVar18;
          uStack_16c = uVar14;
          uVar8 = FUN_10056245(pvStack_170,(uint)pvVar18,uVar14);
          if (uVar8 != *(uint *)(iStack_1cc + 0x14)) {
            iVar12 = *(int *)(iStack_1cc + 0x10);
            iVar9 = uVar8 * 0x20;
            if (((*(void **)(iVar9 + iVar12) == pvStack_1c4) &&
                (*(uint *)(iVar9 + 4 + iVar12) == uVar14)) &&
               (piVar16 = (int *)(iVar12 + 0x10 + iVar9), piVar16 != (int *)0x0)) {
              uVar23 = (**(code **)(**(int **)(*piVar16 + 0xc) + 0x20))(*(int **)(*piVar16 + 0xc));
              uVar8 = (uint)((ulonglong)uVar23 >> 0x20);
              if ((uVar8 <= (uint)piVar16[3]) &&
                 ((uVar8 < (uint)piVar16[3] || ((uint)uVar23 < (uint)piVar16[2])))) {
                if ((piVar16[1] != -1) &&
                   (uVar8 = FUN_10052215((void *)(piVar16[1] + 4),'\0'), (char)uVar8 == '\0')) {
                  iVar12 = piVar16[1];
                  if (*(int *)(iVar12 + 0x8e0) != 0) {
                    *(void **)(iVar12 + 0x7e0 + *(int *)(iVar12 + 0x918) * 8) = pvStack_174;
                    *(undefined4 *)(iVar12 + 0x7e4 + *(int *)(iVar12 + 0x918) * 8) = 0;
                    *(int *)(iVar12 + 0x918) = *(int *)(iVar12 + 0x918) + 1;
                  }
                  goto LAB_1001feef;
                }
                piVar15 = *(int **)(*piVar16 + 0xc);
                (**(code **)(*piVar15 + 0x24))
                          (piVar15,piVar16[2],piVar16[3],*(undefined4 *)(*piVar16 + 0x10));
                WaitForSingleObject(*(HANDLE *)(*piVar16 + 0x10),0xffffffff);
              }
              uVar14 = FUN_10056245(pvStack_170,(uint)pvStack_1c4,uVar14);
              uVar8 = *(uint *)(iStack_1cc + 0x14);
              if (uVar14 != uVar8) {
                if ((*(void **)(uVar14 * 0x20 + *(int *)(iStack_1cc + 0x10)) == pvStack_1c4) &&
                   (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iStack_1cc + 0x10)) == uStack_16c)) {
                  uVar14 = uVar14 + 1;
                  if (uVar14 < uVar8) {
                    do {
                      iVar12 = *(int *)(iStack_1cc + 0x10);
                      iVar9 = uVar14 * 0x20;
                      uVar14 = uVar14 + 1;
                      puVar17 = (undefined4 *)(iVar9 + iVar12);
                      uVar10 = puVar17[1];
                      uVar11 = puVar17[2];
                      uVar3 = puVar17[3];
                      puVar19 = (undefined4 *)(iVar9 + -0x20 + iVar12);
                      *puVar19 = *puVar17;
                      puVar19[1] = uVar10;
                      puVar19[2] = uVar11;
                      puVar19[3] = uVar3;
                      puVar17 = (undefined4 *)(iVar9 + 0x10 + iVar12);
                      uVar10 = puVar17[1];
                      uVar11 = puVar17[2];
                      uVar3 = puVar17[3];
                      puVar19 = (undefined4 *)(iVar9 + -0x10 + iVar12);
                      *puVar19 = *puVar17;
                      puVar19[1] = uVar10;
                      puVar19[2] = uVar11;
                      puVar19[3] = uVar3;
                      uVar8 = *(uint *)(iStack_1cc + 0x14);
                    } while (uVar14 < uVar8);
                  }
                  *(uint *)(iStack_1cc + 0x14) = uVar8 - 1;
                }
              }
            }
          }
LAB_1001feef:
          LeaveCriticalSection(p_Stack_168);
          piVar15 = piStack_164;
          piVar16 = *(int **)(*piStack_164 + 0x70 + iStack_160);
          (**(code **)(*piVar16 + 8))(piVar16);
          uVar8 = piVar15[1];
          uStack_178 = uStack_178 + 1;
          piVar16 = local_17c;
        } while (uStack_178 < uVar8);
      }
      *(int *)(local_1b4 + 0x1658) = *(int *)(local_1b4 + 0x1658) - uVar8;
      FUN_10054377(piVar16,puStack_15c);
      local_1c8 = local_1c8 + -1;
      param_1 = local_1bc;
    } while (local_1c8 != 0);
  }
  iVar12 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
  pvStack_1c4 = *(void **)(iVar12 + 0x948);
  bVar20 = param_1 != pvStack_1c4;
  *(void **)(iVar12 + 0x948) = param_1;
  iStack_1cc = CONCAT31(iStack_1cc._1_3_,bVar20);
  piVar16 = (int *)(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304) + 0x634);
  *piVar16 = *piVar16 + 1;
  if (param_1 != pvStack_1c4) {
    iVar12 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
    FUN_10055962(*(void **)(iVar12 + 0x8e4),*(undefined4 *)((int)param_1 + 0x1df8),
                 *(int *)(iVar12 + 0x8e0),iVar12,*(int *)(iVar12 + 0x938),*(int *)(iVar12 + 0x93c));
    iVar12 = *(int *)((int)param_1 + 0x1df8);
    iVar9 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
    if (iVar12 != *(int *)(iVar9 + 0x10)) {
      iVar2 = *(int *)(iVar9 + 0x628);
      *(int *)(iVar9 + 0x628) = iVar2 + 1;
      if (((iVar2 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) && (*(int *)(iVar9 + 0x958) != 0)) {
        uVar8 = 0;
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar9 + 0x954) + uVar8 * 4))();
          uVar8 = uVar8 + 1;
          param_1 = local_1bc;
        } while (uVar8 < *(uint *)(iVar9 + 0x958));
      }
      (**(code **)(**(int **)(iVar9 + 0x638) + 0x78))(*(int **)(iVar9 + 0x638),iVar12);
      *(int *)(iVar9 + 0x10) = iVar12;
      *(undefined1 *)(iVar9 + 0x620) = 1;
      FUN_1005c9cc((int *)(iVar9 + 0x38),0,0x100);
    }
  }
  uVar10 = FUN_1001da80(param_1,local_1b8,(char)local_1c0,bVar20);
  if ((*(byte *)((int)param_1 + 0x1d44) & 1) != 0) {
    FUN_10013929((float *)((int)param_1 + 0x1920),(undefined4 *)((int)param_1 + 0x1b20),'\x01');
    puVar17 = (undefined4 *)((int)param_1 + 0x1b20);
    puVar19 = (undefined4 *)((int)param_1 + 0xab0);
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    *(uint *)((int)local_1bc + 0x1d44U) = *(uint *)((int)local_1bc + 0x1d44U) & 0xfffffffe;
    param_1 = local_1bc;
  }
  bVar6 = FUN_1001e0b0(param_1,bVar20);
  if (param_1 != pvStack_1c4) {
    iVar12 = *(int *)((int)param_1 + 0x1e70);
    local_1b4 = *(int *)((int)param_1 + 0x1e74);
    iVar9 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
    if ((iVar12 != *(int *)(iVar9 + 0x40)) || (local_1b4 != *(int *)(iVar9 + 0x44))) {
      iVar2 = *(int *)(iVar9 + 0x628);
      *(int *)(iVar9 + 0x628) = iVar2 + 1;
      if ((iVar2 == 0) && ((*(int *)(iVar9 + 0x8e0) != 0 && (*(int *)(iVar9 + 0x958) != 0)))) {
        uVar8 = 0;
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar9 + 0x954) + uVar8 * 4))();
          uVar8 = uVar8 + 1;
          param_1 = local_1bc;
        } while (uVar8 < *(uint *)(iVar9 + 0x958));
      }
      (**(code **)(**(int **)(iVar9 + 0x638) + 0x98))(*(int **)(iVar9 + 0x638),1,iVar12,local_1b4);
      *(int *)(iVar9 + 0x40) = iVar12;
      *(int *)(iVar9 + 0x44) = local_1b4;
    }
  }
  pvVar18 = pvStack_1c4;
  uVar11 = FUN_1001e280(param_1,bVar20);
  bVar7 = FUN_1001e480(param_1,bVar20);
  bStack_1cd = FUN_1001e640(param_1,local_1c0,bVar20);
  bStack_1cd = (byte)uVar10 & bVar6 & (byte)uVar11 & bVar7 & bStack_1cd;
  if (*(char *)((int)param_1 + 0x1905) == '\0') {
    bVar6 = FUN_1001e800(param_1,iStack_1cc);
    bStack_1cd = bStack_1cd & bVar6;
  }
  FUN_1001eb20(param_1,(char)local_1c0,bVar20);
  if ((*(char *)((int)param_1 + 0x1d3a) != '\0') || (param_1 != pvVar18)) {
    piVar16 = (int *)((int)param_1 + 0x1f64);
    if (*piVar16 == 0) {
      piVar16 = (int *)0x0;
    }
    FUN_10052799(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304),1,(int *)((int)param_1 + 0x1f54)
                 ,0,piVar16);
    local_1b0.s.LowPart = 0;
    local_1b0.s.HighPart = 0;
    local_1b0.s.HighPart = (**(code **)(**(int **)((int)param_1 + 0x1f6c) + 0x20))(0);
    local_1b0.s.HighPart = (**(code **)(**(int **)((int)param_1 + 0x1f6c) + 0x24))(0);
    FUN_10052884(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304),1,(int)&local_1b8);
    piVar16 = *(int **)((int)param_1 + 0x1f6c);
    if (piVar16 == (int *)0x0) {
      piVar16 = *(int **)((int)param_1 + 0x1f7c);
    }
    uVar10 = (**(code **)(*piVar16 + 0x28))();
    *(undefined4 *)((int)param_1 + 0x1e58) = uVar10;
    *(undefined4 *)((int)param_1 + 0x1e5c) = 0;
    *(undefined1 *)((int)param_1 + 0x1d3a) = 0;
    *(undefined1 *)((int)param_1 + 0x1d49) = 1;
    *(undefined1 *)((int)param_1 + 0x21d1) = 1;
  }
  FUN_1001f3f0(param_1,bVar20);
  if (*(char *)((int)param_1 + 0x1d3c) == '\0') {
LAB_1002036c:
    if (param_1 != pvVar18) goto LAB_10020370;
  }
  else {
    auStack_158[0] = 0;
    auStack_158[1] = 0;
    FUN_1005c9cc(aiStack_12b,0,0x11b);
    if (*(char *)((int)param_1 + 0x1905) == '\0') {
      iVar12 = 0x2fc;
      if (*(char *)((int)param_1 + 0x1900) != '\x01') {
        iVar12 = 0x31c;
      }
    }
    else {
      iVar12 = 0x33c;
    }
    auStack_158[2] = *(undefined4 *)(iVar12 + (int)param_1);
    uStack_148 = *(undefined4 *)(iVar12 + 4 + (int)param_1);
    uStack_144 = *(undefined4 *)(iVar12 + 8 + (int)param_1);
    uStack_140 = *(undefined4 *)(iVar12 + 0xc + (int)param_1);
    uStack_13c = *(undefined4 *)(iVar12 + 0x10 + (int)param_1);
    uStack_138 = *(undefined4 *)(iVar12 + 0x14 + (int)param_1);
    uStack_134 = *(undefined4 *)(iVar12 + 0x18 + (int)param_1);
    uStack_12c = *(undefined1 *)(iVar12 + 0x1c + (int)param_1);
    uStack_14c = 0;
    uStack_130 = 0;
    uVar10 = FUN_10023c00((void *)(*(int *)((int)param_1 + 0x1d54) + 0x1610),auStack_158);
    *(undefined4 *)((int)param_1 + 0x1e14) = uVar10;
    *(undefined4 *)((int)param_1 + 0x1e18) = 0xffffffff;
    *(undefined1 *)((int)param_1 + 0x21d1) = 1;
    if (*(char *)((int)param_1 + 0x1d3c) == '\0') goto LAB_1002036c;
LAB_10020370:
    *(undefined1 *)((int)param_1 + 0x1d3c) = 0;
  }
  if (*(char *)((int)param_1 + 0x1d3d) != '\0') {
    pfVar13 = (float *)&DAT_10061260;
    if (*(char *)((int)param_1 + 0x1905) == '\0') {
      pfVar13 = (float *)((int)param_1 + 0x35c);
    }
    local_1b0.s.LowPart = (DWORD)*pfVar13;
    local_1b0.s.HighPart = (LONG)pfVar13[1];
    fStack_1a8 = pfVar13[2];
    fStack_1a4 = pfVar13[3];
    fStack_198 = pfVar13[6];
    fStack_194 = pfVar13[8];
    fStack_190 = pfVar13[9];
    uStack_1a0 = *(undefined8 *)(pfVar13 + 4);
    uStack_18c = 0;
    uStack_188 = 0;
    uVar10 = FUN_10023980((void *)(*(int *)((int)param_1 + 0x1d54) + 0x1620),(uint *)&local_1b0);
    *(undefined4 *)((int)param_1 + 0x1e1c) = uVar10;
    *(undefined1 *)((int)param_1 + 0x21d1) = 1;
    *(undefined1 *)((int)param_1 + 0x1d3d) = 0;
  }
  if ((*(char *)((int)param_1 + 0x1d3e) != '\0') || (param_1 != pvVar18)) {
    if ((*(char *)((int)param_1 + 0x1905) == '\0') &&
       ((*(int *)((int)param_1 + 0x18e0) != 0 || ((*(byte *)((int)param_1 + 0x18f8) & 1) != 0)))) {
      local_1b0.s.LowPart = (DWORD)*(float *)((int)param_1 + 0x3b4);
      local_1b0.s.HighPart = (LONG)*(float *)((int)param_1 + 0x3b8);
      fStack_1a8 = *(float *)((int)param_1 + 0x3bc);
      fStack_1a4 = *(float *)((int)param_1 + 0x3c0);
      uStack_1a0 = *(undefined8 *)((int)param_1 + 0x3c4);
LAB_10020480:
      local_1b0.s.LowPart = (DWORD)((float)local_1b0.s.LowPart + *(float *)((int)param_1 + 0x3e4));
      local_1b0.s.HighPart = (LONG)((float)local_1b0.s.HighPart + *(float *)((int)param_1 + 1000));
    }
    else {
      local_1b0.s.LowPart = (DWORD)*(float *)((int)param_1 + 0x3cc);
      local_1b0.s.HighPart = (LONG)*(float *)((int)param_1 + 0x3d0);
      fStack_1a8 = *(float *)((int)param_1 + 0x3d4);
      fStack_1a4 = *(float *)((int)param_1 + 0x3d8);
      uStack_1a0 = *(undefined8 *)((int)param_1 + 0x3dc);
      if (*(char *)((int)param_1 + 0x1905) == '\0') goto LAB_10020480;
    }
    if (*(int *)((int)param_1 + 0x18e0) == 0) {
      uStack_1a0 = 0x3f80000000000000;
    }
    FUN_1005290f(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304),1,(int)&local_1b0);
    *(undefined1 *)((int)param_1 + 0x1d3e) = 0;
  }
  if (*(char *)((int)param_1 + 0x21d1) == '\0') {
LAB_10020507:
    if (param_1 == pvVar18) goto LAB_100205ca;
  }
  else {
    iVar12 = FUN_10053d6c((void *)(*(int *)((int)param_1 + 0x1d54) + 0x1640),
                          (uint *)((int)param_1 + 0x1df8));
    *(int *)((int)param_1 + 0x2010) = iVar12;
    if (*(char *)((int)param_1 + 0x21d1) == '\0') goto LAB_10020507;
  }
  iVar12 = *(int *)((int)param_1 + 0x2010);
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
  if (iVar12 != *(int *)(iVar9 + 0x18)) {
    iVar2 = *(int *)(iVar9 + 0x628);
    *(int *)(iVar9 + 0x628) = iVar2 + 1;
    if (((iVar2 == 0) && (*(int *)(iVar9 + 0x8e0) != 0)) && (*(int *)(iVar9 + 0x958) != 0)) {
      uVar8 = 0;
      do {
        (**(code **)**(undefined4 **)(*(int *)(iVar9 + 0x954) + uVar8 * 4))();
        uVar8 = uVar8 + 1;
        param_1 = local_1bc;
      } while (uVar8 < *(uint *)(iVar9 + 0x958));
    }
    (**(code **)(**(int **)(iVar9 + 0x638) + 100))(*(int **)(iVar9 + 0x638),iVar12);
    *(undefined1 *)(iVar9 + 0x620) = 1;
    *(int *)(iVar9 + 0x18) = iVar12;
    *(undefined4 *)(iVar9 + 0x1c) = 0;
  }
  iVar12 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
  FUN_10055962(*(void **)(iVar12 + 0x8e4),*(undefined4 *)((int)param_1 + 0x2010),
               *(int *)(iVar12 + 0x8e0),iVar12,*(int *)(iVar12 + 0x938),*(int *)(iVar12 + 0x93c));
  *(undefined1 *)((int)param_1 + 0x21d1) = 0;
  pvVar18 = pvStack_1c4;
LAB_100205ca:
  if ((*(char *)((int)param_1 + 0x21d0) != '\0') || (param_1 != pvVar18)) {
    local_1b8 = *(uint *)((int)param_1 + 0x206c);
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
    local_1c0 = uVar8;
    if (local_1b8 != *(uint *)(uVar8 + 0x20)) {
      iVar12 = *(int *)(uVar8 + 0x628);
      *(int *)(uVar8 + 0x628) = iVar12 + 1;
      if (((iVar12 == 0) && (*(int *)(uVar8 + 0x8e0) != 0)) &&
         (uVar14 = 0, *(int *)(uVar8 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(uVar8 + 0x954) + uVar14 * 4))();
          uVar14 = uVar14 + 1;
          param_1 = local_1bc;
        } while (uVar14 < *(uint *)(uVar8 + 0x958));
      }
      uVar8 = local_1b8;
      (**(code **)(**(int **)(local_1c0 + 0x638) + 0x50))(*(int **)(local_1c0 + 0x638),local_1b8);
      *(uint *)(local_1c0 + 0x20) = uVar8;
    }
    *(undefined1 *)((int)param_1 + 0x21d0) = 0;
    pvVar18 = pvStack_1c4;
  }
  FUN_1001f6a0(param_1,bVar20);
  if ((*(char *)((int)param_1 + 0x1d3f) == '\0') && (param_1 == pvVar18)) {
    pvStack_1c4 = *(void **)((int)param_1 + 0x21c8);
    uVar8 = 0;
    bVar21 = pvStack_1c4 == (void *)0x0;
    if (!bVar21) {
      for (; ((uint)pvStack_1c4 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    while (!bVar21) {
      pbVar1 = (byte *)((int)&pvStack_1c4 + ((int)uVar8 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar8 & 7));
      iVar12 = *(int *)((int)param_1 + (uVar8 & 0xff) * 4 + 0x2024);
      if (iVar12 != 0) {
        LOCK();
        piVar16 = (int *)(iVar12 + 0x30);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
      }
      uVar8 = 0;
      bVar21 = pvStack_1c4 == (void *)0x0;
      if (!bVar21) {
        for (; ((uint)pvStack_1c4 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
  }
  else {
    FUN_1001fac0((int)param_1);
  }
  if (*(char *)((int)param_1 + 0x21cc) == '\0') {
    *(byte *)((int)param_1 + 0x1d40) = *(byte *)((int)param_1 + 0x1d40) | bVar20;
  }
  else {
    bVar6 = (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x2064) + 0x38))();
    pbVar1 = (byte *)((int)param_1 + 0x1d40);
    *pbVar1 = *pbVar1 | bVar6;
    if ((*pbVar1 == 0) && (param_1 == pvVar18)) {
      piVar16 = (int *)(*(int *)((int)param_1 + 0x2064) + 0x30);
      LOCK();
      *piVar16 = *piVar16 + -1;
      UNLOCK();
    }
    else {
      uVar23 = (**(code **)(**(int **)((int)param_1 + 0x2064) + 4))();
      fStack_1a8 = *(float *)(*(int *)((int)param_1 + 0x2064) + 0x28);
      if (*(int *)((int)param_1 + 0x2064) == *(int *)((int)param_1 + 0x1d6c)) {
        fStack_1a4 = 5.88545e-44;
      }
      else {
        fStack_1a4 = *(float *)((int)param_1 + 0x2068);
      }
      iVar12 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
      if ((((*(int *)(iVar12 + 0x438) != (int)uVar23) ||
           (*(int *)(iVar12 + 0x43c) != (int)((ulonglong)uVar23 >> 0x20))) ||
          ((float)*(int *)(iVar12 + 0x444) != fStack_1a4)) ||
         (uVar4 = uVar23, (float)*(int *)(iVar12 + 0x440) != fStack_1a8)) {
        iVar9 = *(int *)(iVar12 + 0x628);
        *(int *)(iVar12 + 0x628) = iVar9 + 1;
        uVar4 = uVar23;
        if (((iVar9 == 0) && (*(int *)(iVar12 + 0x8e0) != 0)) && (*(int *)(iVar12 + 0x958) != 0)) {
          uVar8 = 0;
          do {
            local_17c = (int *)((ulonglong)uVar4 >> 0x20);
            local_1b0.s.LowPart = (DWORD)uVar4;
            local_1b0.s.HighPart = (LONG)((ulonglong)uVar23 >> 0x20);
            local_1b8 = (uint)uVar23;
            (**(code **)**(undefined4 **)(*(int *)(iVar12 + 0x954) + uVar8 * 4))();
            uVar4 = CONCAT44(local_17c,local_1b0.s.LowPart);
            uVar23 = CONCAT44(local_1b0.s.HighPart,local_1b8);
            uVar8 = uVar8 + 1;
            param_1 = local_1bc;
          } while (uVar8 < *(uint *)(iVar12 + 0x958));
        }
        local_17c = (int *)((ulonglong)uVar4 >> 0x20);
        local_1b0.s.LowPart = (DWORD)uVar4;
        local_1b0.s.HighPart = (LONG)((ulonglong)uVar23 >> 0x20);
        local_1b8 = (uint)uVar23;
        (**(code **)(**(int **)(iVar12 + 0x638) + 0xac))(*(int **)(iVar12 + 0x638),&local_1b0);
        uVar4 = CONCAT44(local_17c,local_1b0.s.LowPart);
        uVar23 = CONCAT44(local_1b0.s.HighPart,local_1b8);
        *(undefined1 *)(iVar12 + 0x620) = 1;
        *(DWORD *)(iVar12 + 0x438) = local_1b0.s.LowPart;
        *(LONG *)(iVar12 + 0x43c) = local_1b0.s.HighPart;
        *(float *)(iVar12 + 0x440) = fStack_1a8;
        *(float *)(iVar12 + 0x444) = fStack_1a4;
      }
      pvVar18 = local_1bc;
      local_17c = (int *)((ulonglong)uVar4 >> 0x20);
      local_1b0.s.LowPart = (DWORD)uVar4;
      local_1b0.s.HighPart = (LONG)((ulonglong)uVar23 >> 0x20);
      local_1b8 = (uint)uVar23;
      iVar12 = *(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1304);
      iVar9 = *(int *)((int)local_1bc + 0x2064);
      uVar10 = *(undefined4 *)(iVar12 + 0x938);
      uVar11 = *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1d54) + 0x1300) + 0xc);
      *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar12 + 0x93c);
      *(undefined4 *)(iVar9 + 0x10) = uVar11;
      *(undefined4 *)(iVar9 + 0x18) = uVar10;
      iVar12 = *(int *)(*(int *)((int)local_1bc + 0x1d54) + 0x1304);
      FUN_10055962(*(void **)(*(int *)((int)local_1bc + 0x1d50) + 0x172c0),
                   *(undefined4 *)((int)local_1bc + 0x2064),
                   *(int *)(*(int *)((int)local_1bc + 0x1d54) + 0x1300),iVar12,
                   *(int *)(iVar12 + 0x938),*(int *)(iVar12 + 0x93c));
      (**(code **)(*(int *)(*(int *)((int)pvVar18 + 0x2064) + 0x38) + 4))();
      *(undefined1 *)((int)pvVar18 + 0x1d40) = 0;
      piVar16 = (int *)(*(int *)((int)pvVar18 + 0x2064) + 0x30);
      LOCK();
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      param_1 = pvVar18;
    }
  }
  if (*(char *)((int)param_1 + 0x1d49) != '\0') {
    piVar16 = *(int **)((int)param_1 + 0x1f6c);
    if (piVar16 != (int *)0x0) {
      local_1b0.s.LowPart = 0;
      local_1b0.s.HighPart = 0;
      bVar6 = (byte)*(int *)((int)param_1 + 0x1f80);
      fStack_1a8 = (float)((uint)piVar16[5] >> (bVar6 & 0x1f));
      if (fStack_1a8 == 0.0) {
        fStack_1a8 = (float)1;
      }
      fStack_1a4 = (float)((uint)piVar16[6] >> (bVar6 & 0x1f));
      if (fStack_1a4 == 0.0) {
        fStack_1a4 = 1.4013e-45;
      }
      (**(code **)(*piVar16 + 0xc))
                (piVar16[0xb] * *(int *)((int)param_1 + 0x1f90) + *(int *)((int)param_1 + 0x1f80),
                 &local_1b0);
    }
    iVar12 = 0x2c8;
    piVar16 = *(int **)((int)param_1 + 0x1f7c);
    if (*(char *)((int)param_1 + 0x1905) == '\0') {
      iVar12 = 0x260;
    }
    if (((piVar16 != (int *)0x0) && (*(int *)(iVar12 + (int)param_1) != 0)) &&
       (*(int *)(iVar12 + 4 + (int)param_1) != 0)) {
      local_1b0.s.LowPart = 0;
      local_1b0.s.HighPart = 0;
      bVar6 = (byte)*(int *)((int)param_1 + 0x1fa0);
      fStack_1a8 = (float)((uint)piVar16[5] >> (bVar6 & 0x1f));
      if (fStack_1a8 == 0.0) {
        fStack_1a8 = (float)1;
      }
      fStack_1a4 = (float)((uint)piVar16[6] >> (bVar6 & 0x1f));
      if (fStack_1a4 == 0.0) {
        fStack_1a4 = 1.4013e-45;
      }
      (**(code **)(*piVar16 + 0xc))
                (piVar16[0xb] * *(int *)((int)param_1 + 0x1fa4) + *(int *)((int)param_1 + 0x1fa0),
                 &local_1b0);
    }
    *(undefined1 *)((int)param_1 + 0x1d49) = 0;
  }
  return bStack_1cd;
}

