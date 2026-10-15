/*
 * FUN_18003be64 at 18003be64
 * undefined __fastcall FUN_18003be64(int * param_1, ushort * param_2, ushort param_3, byte param_4, byte param_5, longlong * param_6)
 * Address ranges: 18003be64-18003cca0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003be64(int *param_1,ushort *param_2,ushort param_3,byte param_4,byte param_5,
                  longlong *param_6)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  ushort *puVar10;
  char cVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char local_res10;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint local_a4;
  
  uVar2 = param_2[1];
  puVar10 = param_2 + 2;
  uVar5 = 0;
  uVar12 = 0xff0;
  local_a4 = 0x2000;
  if ((uVar2 & 0xdf0) == 0) {
LAB_18003bf01:
    if ((uVar2 & 0xdf0) == 0) {
      uVar2 = *puVar10;
    }
LAB_18003bf0f:
    uVar3 = uVar2;
    fVar13 = FUN_180037c50(uVar2);
    uVar7 = (uint)uVar5;
    uVar9 = uVar2;
    if ((fVar13 != 0.0) && (uVar9 = (ushort)uVar5, (uVar3 & uVar12) == 0x300)) {
      uVar9 = uVar2;
    }
    if (uVar9 == 0) goto LAB_18003bf39;
  }
  else {
    if ((*puVar10 & 0xff0) == 0) goto LAB_18003bf0f;
    if ((*puVar10 & 0xff0) == 0x200) goto LAB_18003bf01;
LAB_18003bf39:
    uVar2 = FUN_18003af18((longlong)param_1,*param_2,param_2[3],0,(ushort)uVar5,param_4,'\x01');
    uVar4 = FUN_18003b7a4(param_1,param_2[1],*puVar10,0,uVar2,0,param_4,param_5,param_6,'\0',0);
    uVar7 = 0;
    local_a4 = 0x2000;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    uVar12 = 0xff0;
    uVar9 = uVar2 | 0x2000;
    if ((char)uVar4 != '\0') {
      uVar9 = uVar2;
    }
  }
  uVar2 = *param_2;
  fVar13 = FUN_180037c50(uVar2);
  if ((fVar13 != 0.0) && ((uVar9 & uVar12) != 0x300)) {
    uVar3 = FUN_18003af18((longlong)param_1,uVar9,param_2[3],0,(ushort)uVar7,param_4,'\x01');
    uVar4 = FUN_18003b7a4(param_1,*param_2,0,0,uVar3,0,param_4,param_5,param_6,'\0',0);
    uVar7 = 0;
    local_a4 = 0x2000;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    uVar12 = 0xff0;
    uVar2 = uVar3 | 0x2000;
    if ((char)uVar4 != '\0') {
      uVar2 = uVar3;
    }
  }
  puVar10 = param_2 + 3;
  fVar13 = 255.0;
  if (((ushort)local_a4 & uVar2) == 0) {
    fVar14 = 1.0;
  }
  else {
    fVar14 = 255.0;
  }
  if (((ushort)local_a4 & uVar9) == 0) {
    fVar17 = 1.0;
  }
  else {
    fVar17 = 255.0;
  }
  fVar17 = fVar17 * fVar14;
  local_res10 = (char)uVar7;
  fVar14 = (float)(1 << ((byte)param_2[4] & 0x1f));
  uVar3 = param_3;
  if ((((*puVar10 & uVar12) + (short)uVar7 & 0xfdff) == 0) &&
     (fVar15 = FUN_180037c50(*puVar10), fVar15 == 0.0)) {
    fVar14 = fVar14 / fVar17;
    if (fVar14 != 1.0) {
      if (((uVar2 & 0xf0) == 0x80) || (uVar3 = uVar9, (uVar2 & 0xf0) == 0xf0)) {
        uVar3 = uVar2;
      }
      if (((uVar3 & 0xf0) != 0x80) && ((uVar3 & 0xf0) != 0xf0)) {
        uVar3 = FUN_18003af18((longlong)param_1,0,0,0,(ushort)uVar7,param_4,(char)uVar7);
        local_res10 = '\x01';
      }
    }
    FUN_18003a8dc((longlong)param_1,uVar3,param_4);
    uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
    FUN_18003aa00(param_1,0,uVar2,(byte)uVar5,0,'\0');
    uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
    FUN_18003aa00(param_1,1,uVar9,(byte)uVar5,0,'\0');
    puVar19 = (uint *)(param_1 + 0x5f);
    uVar7 = 0x2038;
    if (fVar14 != 1.0) {
      uVar7 = 0x38;
    }
    FUN_180055834(param_6,(param_1[0x4f] + 1U + *puVar19 + param_1[0x57] & 0x7f) << 0x18 | uVar7,
                  (uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar19,(uint *)0x0);
    if (fVar14 == 1.0) goto LAB_18003cc3c;
    FUN_18003a8dc((longlong)param_1,param_3,param_4);
    FUN_18003aa00(param_1,0,uVar3,param_5,0,'\0');
    param_1[0x61] = (int)fVar14;
    param_1[0x62] = (int)fVar14;
    param_1[99] = (int)fVar14;
    param_1[100] = (int)fVar14;
    uVar7 = 2;
    if (param_5 != 0xff) {
      uVar7 = 5;
    }
    *puVar19 = uVar7;
    iVar6 = 0x4001 - (uint)(param_5 != 0xff);
    if (param_5 != 0xff) {
      iVar6 = 0x4006;
    }
    param_1[0x60] = iVar6;
    uVar7 = (param_1[0x57] + uVar7 + param_1[0x4f]) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x2038;
    puVar20 = (uint *)0x0;
  }
  else {
    uVar8 = 0xf0;
    if ((*puVar10 & 0xf0) == 0) {
      fVar15 = 0.0;
    }
    else {
      uVar8 = 0xf0;
      fVar15 = FUN_180037c50(*puVar10);
    }
    if ((*puVar10 & (ushort)local_a4) == 0) {
      fVar13 = 1.0;
    }
    cVar11 = (char)uVar7;
    if (fVar13 == fVar17) {
      if (((fVar13 != 1.0) || ((char)param_2[4] != cVar11)) || (fVar15 != 0.0)) {
        if (((uVar2 & uVar8) == 0x80) || (uVar3 = uVar9, (uVar2 & uVar8) == uVar8)) {
          uVar3 = uVar2;
        }
        local_a4 = uVar7;
        if (((uVar3 & uVar8) != 0x80) && ((uVar3 & uVar8) != uVar8)) {
          uVar3 = FUN_18003af18((longlong)param_1,0,0,0,(ushort)uVar7,param_4,cVar11);
          local_res10 = '\x01';
          local_a4 = 0;
        }
      }
      FUN_18003a8dc((longlong)param_1,uVar3,param_4);
      uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
      FUN_18003aa00(param_1,0,uVar2,(byte)uVar5,0,'\0');
      uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
      FUN_18003aa00(param_1,1,uVar9,(byte)uVar5,0,'\0');
      uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
      FUN_18003aa00(param_1,2,param_2[3],(byte)uVar5,0,'\0');
      FUN_180055834(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                            0x1000000 + 0x1000000U & 0x7f000000 | local_a4 | 0x32,
                    (uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),
                    (uint *)(param_1 + 0x67));
      FUN_18003a8dc((longlong)param_1,param_3,param_4);
      FUN_18003aa00(param_1,0,uVar3,param_5,0,'\0');
      puVar19 = (uint *)(param_1 + 0x5f);
      fVar17 = fVar14 / fVar13;
      uVar7 = 2;
      if (param_5 != 0xff) {
        uVar7 = 5;
      }
      *puVar19 = uVar7;
      puVar18 = (uint *)(param_1 + 0x67);
      *puVar18 = uVar7;
      param_1[0x61] = (int)fVar17;
      param_1[0x62] = (int)fVar17;
      param_1[99] = (int)fVar17;
      param_1[100] = (int)fVar17;
      iVar6 = 0x4001 - (uint)(param_5 != 0xff);
      if (param_5 != 0xff) {
        iVar6 = 0x4006;
      }
      param_1[0x60] = iVar6;
      param_1[0x68] = iVar6;
      fVar14 = (fVar15 * fVar14) / fVar13;
      param_1[0x69] = (int)fVar14;
      param_1[0x6a] = (int)fVar14;
      param_1[0x6b] = (int)fVar14;
      param_1[0x6c] = (int)fVar14;
      if (fVar15 == 0.0) {
        iVar6 = -1;
      }
      else {
        iVar6 = 0;
      }
      if ((fVar13 != 1.0) || ((char)param_2[4] != '\0')) {
        if (fVar15 == 0.0) {
          uVar7 = (param_1[0x57] + uVar7 + param_1[0x4f]) * 0x1000000 + 0x1000000 & 0x7f000000 |
                  0x2038;
          puVar20 = (uint *)0x0;
        }
        else {
          iVar6 = 4;
          if (param_5 != 0xff) {
            iVar6 = 10;
          }
          uVar7 = (iVar6 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                  0x2032;
          puVar20 = puVar18;
        }
        goto LAB_18003cc2f;
      }
      if (iVar6 != 0) goto LAB_18003cc3c;
      iVar6 = param_1[0x57] + uVar7 + param_1[0x4f];
LAB_18003cc1c:
      uVar7 = iVar6 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2000;
      puVar19 = puVar18;
      puVar20 = (uint *)0x0;
    }
    else {
      if (((uVar2 & uVar8) == 0x80) || (uVar3 = uVar9, (uVar2 & uVar8) == uVar8)) {
        uVar3 = uVar2;
      }
      if (((uVar3 & uVar8) != 0x80) && ((uVar3 & uVar8) != uVar8)) {
        uVar3 = FUN_18003af18((longlong)param_1,0,0,0,(ushort)uVar7,param_4,cVar11);
        local_res10 = '\x01';
      }
      FUN_18003a8dc((longlong)param_1,uVar3,param_4);
      uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
      FUN_18003aa00(param_1,0,uVar2,(byte)uVar5,0,'\0');
      uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar3,param_5);
      FUN_18003aa00(param_1,1,uVar9,(byte)uVar5,0,'\0');
      FUN_180055834(param_6,(param_1[0x5f] + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U
                            & 0x7f000000 | 0x38,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                    (uint *)(param_1 + 0x5f),(uint *)0x0);
      if ((fVar15 == 0.0) && ((char)param_2[4] == '\0')) {
        bVar1 = true;
        local_a4 = 0x2032;
      }
      else {
        bVar1 = false;
        local_a4 = 0x32;
      }
      uVar12 = param_3;
      if (!bVar1) {
        uVar12 = uVar3;
      }
      if (fVar17 == 1.0) {
LAB_18003c831:
        if (fVar13 != 1.0) {
          FUN_18003a8dc((longlong)param_1,uVar12,param_4);
          uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar12,param_5);
          FUN_18003aa00(param_1,0,param_2[3],(byte)uVar5,0,'\0');
          iVar6 = 2;
          if (param_5 != 0xff) {
            iVar6 = 5;
          }
          param_1[0x5f] = iVar6;
          iVar6 = 0x4001 - (uint)(param_5 != 0xff);
          fVar16 = 1.0 / fVar13;
          if (param_5 != 0xff) {
            iVar6 = 0x4006;
          }
          param_1[0x60] = iVar6;
          param_1[0x61] = (int)fVar16;
          param_1[0x62] = (int)fVar16;
          param_1[99] = (int)fVar16;
          param_1[100] = (int)fVar16;
          uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar12,param_5);
          FUN_18003aa00(param_1,2,uVar3,(byte)uVar5,0,'\0');
          FUN_180055834(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                                0x1000000 + 0x1000000U & 0x7f000000 | local_a4,
                        (uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),
                        (uint *)(param_1 + 0x67));
        }
      }
      else if (fVar13 != 1.0) {
        FUN_18003a8dc((longlong)param_1,uVar3,param_4);
        uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar12,param_5);
        FUN_18003aa00(param_1,0,uVar3,(byte)uVar5,0,'\0');
        fVar16 = 1.0 / fVar17;
        uVar7 = 2;
        if (param_5 != 0xff) {
          uVar7 = 5;
        }
        param_1[0x5f] = uVar7;
        iVar6 = 0x4001 - (uint)(param_5 != 0xff);
        if (param_5 != 0xff) {
          iVar6 = 0x4006;
        }
        param_1[0x60] = iVar6;
        param_1[0x61] = (int)fVar16;
        param_1[0x62] = (int)fVar16;
        param_1[99] = (int)fVar16;
        param_1[100] = (int)fVar16;
        FUN_180055834(param_6,(uVar7 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000 &
                              0x7f000000 | 0x38,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                      (uint *)(param_1 + 0x5f),(uint *)0x0);
        goto LAB_18003c831;
      }
      if ((fVar17 != 1.0) && (fVar13 == 1.0)) {
        FUN_18003a8dc((longlong)param_1,uVar12,param_4);
        uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar12,param_5);
        FUN_18003aa00(param_1,0,uVar3,(byte)uVar5,0,'\0');
        iVar6 = 2;
        if (param_5 != 0xff) {
          iVar6 = 5;
        }
        param_1[0x5f] = iVar6;
        iVar6 = 0x4001 - (uint)(param_5 != 0xff);
        fVar17 = 1.0 / fVar17;
        if (param_5 != 0xff) {
          iVar6 = 0x4006;
        }
        param_1[0x60] = iVar6;
        param_1[0x61] = (int)fVar17;
        param_1[0x62] = (int)fVar17;
        param_1[99] = (int)fVar17;
        param_1[100] = (int)fVar17;
        uVar5 = FUN_18003b064((longlong)param_1,(uint)uVar12,param_5);
        FUN_18003aa00(param_1,2,param_2[3],(byte)uVar5,0,'\0');
        FUN_180055834(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                              0x1000000 + 0x1000000U & 0x7f000000 | local_a4,
                      (uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),
                      (uint *)(param_1 + 0x67));
      }
      FUN_18003a8dc((longlong)param_1,param_3,param_4);
      FUN_18003aa00(param_1,0,uVar3,param_5,0,'\0');
      uVar12 = param_2[4];
      if (fVar15 == 0.0) {
        if ((char)uVar12 == '\0') goto LAB_18003cc3c;
        puVar20 = (uint *)0x0;
        uVar7 = 2;
        if (param_5 != 0xff) {
          uVar7 = 5;
        }
        param_1[0x5f] = uVar7;
        param_1[0x61] = (int)fVar14;
        param_1[0x62] = (int)fVar14;
        param_1[99] = (int)fVar14;
        param_1[100] = (int)fVar14;
        iVar6 = 0x4001 - (uint)(param_5 != 0xff);
        if (param_5 != 0xff) {
          iVar6 = 0x4006;
        }
        param_1[0x60] = iVar6;
        uVar7 = (param_1[0x57] + uVar7 + param_1[0x4f]) * 0x1000000 + 0x1000000 & 0x7f000000 |
                0x2038;
        puVar19 = (uint *)(param_1 + 0x5f);
      }
      else {
        puVar18 = (uint *)(param_1 + 0x5f);
        uVar7 = 2;
        if (param_5 != 0xff) {
          uVar7 = 5;
        }
        *puVar18 = uVar7;
        iVar6 = 0x4001 - (uint)(param_5 != 0xff);
        if (param_5 != 0xff) {
          iVar6 = 0x4006;
        }
        param_1[0x60] = iVar6;
        if ((char)uVar12 == '\0') {
          fVar15 = fVar15 / fVar13;
          param_1[0x61] = (int)fVar15;
          param_1[0x62] = (int)fVar15;
          param_1[99] = (int)fVar15;
          param_1[100] = (int)fVar15;
          iVar6 = param_1[0x57] + uVar7 + param_1[0x4f];
          goto LAB_18003cc1c;
        }
        param_1[0x68] = iVar6;
        puVar20 = (uint *)(param_1 + 0x67);
        *puVar20 = uVar7;
        param_1[0x61] = (int)fVar14;
        param_1[0x62] = (int)fVar14;
        param_1[99] = (int)fVar14;
        param_1[100] = (int)fVar14;
        iVar6 = 4;
        if (param_5 != 0xff) {
          iVar6 = 10;
        }
        fVar13 = (fVar15 * fVar14) / fVar13;
        param_1[0x69] = (int)fVar13;
        param_1[0x6a] = (int)fVar13;
        param_1[0x6b] = (int)fVar13;
        param_1[0x6c] = (int)fVar13;
        uVar7 = (iVar6 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                0x2032;
        puVar19 = puVar18;
      }
    }
  }
LAB_18003cc2f:
  FUN_180055834(param_6,uVar7,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar19,puVar20);
LAB_18003cc3c:
  FUN_18003b028((longlong)param_1,uVar2);
  FUN_18003b028((longlong)param_1,uVar9);
  if (local_res10 != '\0') {
    FUN_18003b028((longlong)param_1,uVar3);
  }
  return;
}

