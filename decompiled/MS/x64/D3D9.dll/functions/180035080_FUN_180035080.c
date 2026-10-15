/*
 * FUN_180035080 at 180035080
 * undefined1 __fastcall FUN_180035080(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 180035080-1800386ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180035080(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  float *pfVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  ulonglong uVar35;
  int iVar36;
  longlong *plVar37;
  uint uVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong local_res18;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 **in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong lStack_78;
  undefined1 local_70 [16];
  
  uVar38 = 0;
  if (*(uint *)(param_1 + 0xf70) != 0) {
    for (; (*(uint *)(param_1 + 0xf70) >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
    }
  }
  uVar25 = 0;
  local_res18 = CONCAT44(local_res18._4_4_,uVar38);
  local_res8[0] = 0;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar15 = *(longlong *)(param_1 + 0xf7a8);
      uVar30 = uVar25;
      param_4 = uVar25;
      if (lVar15 != 0) {
        uVar30 = *(ulonglong *)(lVar15 + 8);
        param_4 = (ulonglong)*(uint *)(lVar15 + 0x58);
      }
      uVar35 = *(longlong *)(param_1 + 0xf7d0) + 0x30;
      if (*(longlong *)(param_1 + 0xf7d0) == 0) {
        uVar35 = uVar25;
      }
      FUN_180063e10(param_1,uVar35,uVar30,(uint)param_4);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    local_res8[0] = *(uint *)(param_1 + 0xf6b8);
    uVar38 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
      }
    }
    if (local_res8[0] != 0) {
      pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar38 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
      while( true ) {
        uVar25 = (ulonglong)(uVar38 & 0xff);
        lVar15 = *(longlong *)(param_1 + 0xf6e0);
        uVar13 = *(undefined8 *)(lVar15 + 0x238);
        uVar14 = *(undefined8 *)(lVar15 + 0x240);
        lVar15 = *(longlong *)(lVar15 + 0x248);
        local_res10[0] = *(uint *)(param_1 + 0xe98);
        bVar39 = (*(byte *)((longlong)local_res10 + ((longlong)(int)(uVar38 & 0xff) >> 3)) >>
                  (uVar38 & 7) & 1) != 0;
        plVar37 = *(longlong **)(param_1 + 0xfc18 + uVar25 * 8);
        if (plVar37 == (longlong *)0x0) {
          lVar32 = *(longlong *)(param_1 + 0xfc40 + uVar25 * 8);
          if (lVar32 != 0) {
            lVar15 = FUN_180093be0(lVar32,bVar39);
          }
        }
        else if (((((plVar37 != *(longlong **)(param_1 + 0xf9b0)) &&
                   (plVar37 != *(longlong **)(param_1 + 0xf9b8))) &&
                  (plVar37 != *(longlong **)(param_1 + 0xf9c0))) &&
                 ((plVar37 != *(longlong **)(param_1 + 0xf9c8) &&
                  (plVar37 != *(longlong **)(param_1 + 0xf9d0))))) ||
                (cVar7 = (**(code **)(*plVar37 + 0x100))(), cVar7 != '\0')) {
          plVar37 = *(longlong **)(param_1 + 0xfc18 + uVar25 * 8);
          if ((*(int *)((longlong)plVar37 + 0x44) == 2) || (*(int *)((longlong)plVar37 + 0x44) == 5)
             ) {
            uVar14 = (**(code **)(*plVar37 + 0xc0))(plVar37,bVar39);
          }
          else {
            uVar13 = (**(code **)(*plVar37 + 0xc0))(plVar37,bVar39);
          }
        }
        uVar38 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
          }
        }
        *(undefined8 *)(param_1 + 0xfba0 + uVar25 * 8) = uVar13;
        *(undefined8 *)(param_1 + 0xfbc8 + uVar25 * 8) = uVar14;
        *(longlong *)(param_1 + 0xfbf0 + uVar25 * 8) = lVar15;
        if (local_res8[0] == 0) break;
        pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar38 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
      }
    }
    local_res8[0] = *(uint *)(param_1 + 0xf680);
    uVar38 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
      }
    }
    *(undefined4 *)(param_1 + 0xf6b8) = 0;
    if (local_res8[0] != 0) {
      pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar38 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
      while( true ) {
        uVar26 = uVar38 & 0xff;
        uVar25 = (ulonglong)uVar26;
        lVar15 = *(longlong *)(param_1 + 0xf6e0);
        plVar37 = *(longlong **)(param_1 + 64000 + uVar25 * 8);
        uVar13 = *(undefined8 *)(lVar15 + 0x238);
        uVar14 = *(undefined8 *)(lVar15 + 0x240);
        lVar15 = *(longlong *)(lVar15 + 0x248);
        local_res10[0] = *(uint *)(param_1 + 0xe94);
        bVar39 = (*(byte *)((longlong)local_res10 + ((longlong)(int)uVar26 >> 3)) >> (uVar38 & 7) &
                 1) != 0;
        if (plVar37 == (longlong *)0x0) {
          lVar32 = *(longlong *)(param_1 + 0xfa80 + uVar25 * 8);
          if (lVar32 != 0) {
            lVar15 = FUN_180093be0(lVar32,bVar39);
          }
        }
        else if (((((plVar37 != *(longlong **)(param_1 + 0xf9b0)) &&
                   (plVar37 != *(longlong **)(param_1 + 0xf9b8))) &&
                  (plVar37 != *(longlong **)(param_1 + 0xf9c0))) &&
                 ((plVar37 != *(longlong **)(param_1 + 0xf9c8) &&
                  (plVar37 != *(longlong **)(param_1 + 0xf9d0))))) ||
                (cVar7 = (**(code **)(*plVar37 + 0x100))(), cVar7 != '\0')) {
          plVar37 = *(longlong **)(param_1 + 64000 + uVar25 * 8);
          if ((*(int *)((longlong)plVar37 + 0x44) == 2) || (*(int *)((longlong)plVar37 + 0x44) == 5)
             ) {
            uVar14 = (**(code **)(*plVar37 + 0xc0))(plVar37,bVar39);
          }
          else {
            uVar13 = (**(code **)(*plVar37 + 0xc0))(plVar37,bVar39);
          }
        }
        if (uVar26 < 8) {
          *(undefined8 *)(param_1 + 0xf7e8 + uVar25 * 8) = 0;
        }
        uVar38 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
          }
        }
        *(undefined8 *)(param_1 + 0xf828 + uVar25 * 8) = uVar13;
        *(undefined8 *)(param_1 + 0xf8a8 + uVar25 * 8) = uVar14;
        *(longlong *)(param_1 + 0xf928 + uVar25 * 8) = lVar15;
        if (local_res8[0] == 0) break;
        pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar38 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
      }
    }
    *(undefined4 *)(param_1 + 0xf680) = 0;
    uVar38 = (uint)local_res18;
  }
  uVar25 = 0;
  lVar15 = *(longlong *)(param_1 + 0xf6d0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x620));
  lVar32 = *(longlong *)(lVar15 + 0x618);
  *(longlong *)(lVar15 + 0x618) = param_1;
  local_res18 = lVar32;
  if (*(char *)(param_1 + 0xf688) == '\0') {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
    if (lVar32 != param_1) goto LAB_1800353b3;
  }
  else {
LAB_1800353b3:
    if ((*(char *)(param_1 + 0x7662) == '\0') &&
       (lVar15 = *(longlong *)(param_1 + 0xf7a8), lVar15 != 0)) {
      if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + 0xfd84) != 0)) {
        uVar30 = param_4 & 0xffffffffffffff00;
      }
      else {
        uVar30 = 1;
      }
      uVar38 = *(uint *)(*(longlong *)(lVar15 + 8) + 0x1214);
      uVar35 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
      if ((*(uint *)(param_1 + 0x7590) & uVar38) == 0) {
        uVar35 = uVar25;
      }
      uVar27 = (*(ulonglong *)(param_1 + 0xfe0) ^ uVar35 << 0x3d) & 0xdfffffffffffffff ^
               uVar35 << 0x3d;
      uVar35 = uVar27 >> 0x3e;
      if ((*(uint *)(param_1 + 0x7594) & uVar38) == 0) {
        uVar35 = uVar25;
      }
      uVar27 = (uVar27 ^ uVar35 << 0x3e) & 0xbfffffffffffffff ^ uVar35 << 0x3e;
      uVar35 = 7;
      if (*(char *)(param_1 + 0x765e) != '\0') {
        uVar35 = uVar27 >> 0x34;
      }
      uVar27 = (uVar27 ^ uVar35 << 0x34) & 0xff8fffffffffffff ^ uVar35 << 0x34;
      uVar35 = uVar27 >> 0x38;
      if ((char)uVar30 == '\0') {
        uVar35 = uVar25;
      }
      uVar27 = (uVar27 ^ uVar35 << 0x38) & 0xfeffffffffffffff ^ uVar35 << 0x38;
      uVar35 = uVar27 >> 0x39;
      if (*(char *)(*(longlong *)(lVar15 + 8) + 0x126d) == '\x03') {
        uVar35 = uVar25;
      }
      uVar27 = (uVar27 ^ uVar35 << 0x39) & 0xfdffffffffffffff ^ uVar35 << 0x39;
      uVar35 = uVar27 >> 0x3c;
      if (*(char *)(param_1 + 0x766e) == '\0') {
        uVar35 = uVar25;
      }
      uVar27 = (uVar27 ^ uVar35 << 0x3c) & 0xefffffffffffffff ^ uVar35 << 0x3c;
      uVar35 = uVar27 & 0xf3ffffffffffffff;
      if (((byte)(uVar27 >> 0x39) & 1) != 0) {
        uVar35 = uVar27;
      }
      lVar15 = FUN_18003d428((undefined8 *)(lVar15 + 0x10),uVar35,*(ulonglong *)(param_1 + 0xea0),
                             uVar30);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,lVar15 != 0);
    }
    else {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      if (*(char *)(param_1 + 0x7662) == '\0') {
        if ((*(int *)(param_1 + 0x7650) == 0) || (*(int *)(param_1 + 0xfd84) != 0)) {
          bVar39 = false;
        }
        else {
          bVar39 = true;
        }
        uVar26 = (1 << ((byte)uVar38 & 0x1f)) - 1;
        uVar30 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
        if ((*(uint *)(param_1 + 0x7590) & uVar26) == 0) {
          uVar30 = uVar25;
        }
        uVar35 = (uVar30 << 0x3d ^ *(ulonglong *)(param_1 + 0xfe0)) & 0xdfffffffffffffff ^
                 uVar30 << 0x3d;
        uVar30 = uVar35 >> 0x3e;
        if ((*(uint *)(param_1 + 0x7594) & uVar26) == 0) {
          uVar30 = uVar25;
        }
        uVar35 = (uVar35 ^ uVar30 << 0x3e) & 0xbfffffffffffffff ^ uVar30 << 0x3e;
        uVar30 = 7;
        if (*(char *)(param_1 + 0x765e) != '\0') {
          uVar30 = uVar35 >> 0x34;
        }
        uVar35 = (uVar35 ^ uVar30 << 0x34) & 0xff8fffffffffffff ^ uVar30 << 0x34;
        uVar30 = uVar35 >> 0x38;
        if (!bVar39) {
          uVar30 = uVar25;
        }
        uVar30 = (uVar35 ^ uVar30 << 0x38) & 0xfeffffffffffffff ^ uVar30 << 0x38;
        uVar35 = uVar30 & 0xfe00000000000000;
        uVar35 = (uVar30 ^ uVar35) & 0xfdffffffffffffff ^ uVar35;
        uVar30 = uVar35 >> 0x3c;
        if (*(char *)(param_1 + 0x766e) == '\0') {
          uVar30 = uVar25;
        }
        uVar35 = (uVar35 ^ uVar30 << 0x3c) & 0xefffffffffffffff ^ uVar30 << 0x3c;
        uVar30 = uVar35 & 0xf3ffffffffffffff;
        if (((byte)(uVar35 >> 0x39) & 1) != 0) {
          uVar30 = uVar35;
        }
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 400)
            ) || (*(longlong *)(param_1 + 0xfcc0) ==
                  *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1d0))) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        in_stack_ffffffffffffff50 =
             (undefined8 **)
             CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff50 >> 8),
                      *(undefined1 *)(param_1 + 0xab));
        in_stack_ffffffffffffff48 = CONCAT71((int7)(in_stack_ffffffffffffff48 >> 8),uVar9);
        lVar15 = FUN_18003d78c((longlong *)(param_1 + 0xf728),(uint *)(param_1 + 0xf18),uVar30,
                               uVar38,(uint)in_stack_ffffffffffffff48,
                               *(undefined1 *)(param_1 + 0xab));
        if (lVar15 != 0) goto LAB_18003577c;
      }
      if (*(char *)(param_1 + 0x7662) == '\0') {
        lVar15 = *(longlong *)(param_1 + 0xf6e0);
        if (4 < uVar38) {
          uVar38 = 4;
        }
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar15 + 400)) ||
           (bVar8 = 0, *(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar15 + 0x1d0))) {
          bVar8 = 1;
        }
        if (*(char *)(param_1 + 0x7660) == '\0') {
          uVar26 = -(uint)bVar8 & 10;
        }
        else {
          uVar26 = 5;
        }
        lVar15 = *(longlong *)
                  (lVar15 + 0xd8 +
                  (ulonglong)(*(int *)(&DAT_1801017c0 + (ulonglong)uVar38 * 4) + uVar26) * 8);
      }
      else if (((*(longlong *)(param_1 + 0xf9b8) == 0) && (*(longlong *)(param_1 + 0xf9c0) == 0)) &&
              (*(longlong *)(param_1 + 0xf9c8) == 0)) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x150);
      }
      else {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x160);
      }
    }
LAB_18003577c:
    *(undefined1 *)(param_1 + 0xf688) = 0;
    if (*(longlong *)(param_1 + 0xfcc8) != lVar15) {
      *(longlong *)(param_1 + 0xfcc8) = lVar15;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
  }
  if ((*(byte *)(param_1 + 0xf694) & 1) != 0) {
    FUN_18002d088((float *)(param_1 + 0x7670),(undefined8 *)(param_1 + 0xb670),'\x01');
    puVar17 = (undefined8 *)(param_1 + 0xb670);
    puVar31 = (undefined4 *)(param_1 + 0x6a60);
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar31 = *(undefined4 *)puVar17;
      puVar17 = (undefined8 *)((longlong)puVar17 + 4);
      puVar31 = puVar31 + 1;
    }
    *(uint *)(param_1 + 0xf694) = *(uint *)(param_1 + 0xf694) & 0xfffffffe;
  }
  if (*(char *)(param_1 + 0xf691) != '\0') {
    in_stack_ffffffffffffff50 = &local_98;
    uVar13 = *(undefined8 *)(param_1 + 0xf6f8);
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar10 = (**(code **)(*plVar37 + 0x70))
                       (plVar37,uVar13,0,4,in_stack_ffffffffffffff48,in_stack_ffffffffffffff50);
    if (-1 < iVar10) {
      FUN_1800fbec0(local_98,(undefined8 *)(param_1 + 0x6930),0xc20);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf691) = 0;
  }
  if (((*(uint *)(param_1 + 0x6940) & 0xf800) != 0) && (*(char *)(param_1 + 0xf692) != '\0')) {
    uVar30 = 0;
    do {
      puVar23 = (uint *)(param_1 + 0xf694 + uVar30 * 4);
      uVar38 = 0;
      bVar39 = *puVar23 != 0;
      if (bVar39) {
        for (; (*puVar23 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
        }
      }
      if (bVar39) {
        pbVar4 = (byte *)(param_1 + 0xf694 + uVar30 * 4 + ((longlong)(int)uVar38 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
        while (iVar10 = (uVar38 & 0xff) + (int)uVar30 * 0x20, iVar10 < 0x100) {
          lVar15 = (longlong)iVar10 * 0x40;
          FUN_18002d088((float *)(param_1 + 0x7670 + lVar15),
                        (undefined8 *)(param_1 + 0xb670 + lVar15),'\x01');
          puVar23 = (uint *)(param_1 + 0xf694 + uVar30 * 4);
          uVar38 = 0;
          bVar39 = *puVar23 == 0;
          if (!bVar39) {
            for (; (*puVar23 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
            }
          }
          if (bVar39) break;
          pbVar4 = (byte *)(param_1 + 0xf694 + uVar30 * 4 + ((longlong)(int)uVar38 >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
        }
      }
      uVar38 = (int)uVar30 + 1;
      uVar30 = (ulonglong)uVar38;
    } while (uVar38 < 8);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    in_stack_ffffffffffffff48 = param_1 + 0x7670;
    (**(code **)(*plVar37 + 0x180))
              (plVar37,*(undefined8 *)(param_1 + 0xf708),0,0,in_stack_ffffffffffffff48,
               (ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000,
               in_stack_ffffffffffffff58 & 0xffffffff00000000);
    *(undefined1 *)(param_1 + 0xf692) = 0;
  }
  if (*(char *)(param_1 + 0xf6c3) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0xf7d8);
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar10 = (**(code **)(*plVar37 + 0x70))(plVar37,uVar13,0,4,in_stack_ffffffffffffff48,&local_98);
    if (-1 < iVar10) {
      lVar15 = 9;
      puVar17 = local_98;
      puVar22 = (undefined8 *)(param_1 + 0x6460);
      do {
        puVar21 = puVar22;
        puVar16 = puVar17;
        uVar14 = puVar21[1];
        *puVar16 = *puVar21;
        puVar16[1] = uVar14;
        uVar14 = puVar21[3];
        puVar16[2] = puVar21[2];
        puVar16[3] = uVar14;
        uVar14 = puVar21[5];
        puVar16[4] = puVar21[4];
        puVar16[5] = uVar14;
        uVar14 = puVar21[7];
        puVar16[6] = puVar21[6];
        puVar16[7] = uVar14;
        uVar14 = puVar21[9];
        puVar16[8] = puVar21[8];
        puVar16[9] = uVar14;
        uVar14 = puVar21[0xb];
        puVar16[10] = puVar21[10];
        puVar16[0xb] = uVar14;
        uVar14 = puVar21[0xd];
        puVar16[0xc] = puVar21[0xc];
        puVar16[0xd] = uVar14;
        uVar14 = puVar21[0xf];
        puVar16[0xe] = puVar21[0xe];
        puVar16[0xf] = uVar14;
        lVar15 = lVar15 + -1;
        puVar17 = puVar16 + 0x10;
        puVar22 = puVar21 + 0x10;
      } while (lVar15 != 0);
      uVar14 = puVar21[0x11];
      puVar16[0x10] = puVar21[0x10];
      puVar16[0x11] = uVar14;
      uVar14 = puVar21[0x13];
      puVar16[0x12] = puVar21[0x12];
      puVar16[0x13] = uVar14;
      uVar14 = puVar21[0x15];
      puVar16[0x14] = puVar21[0x14];
      puVar16[0x15] = uVar14;
      *(undefined1 (*) [16])(puVar16 + 0x16) = *(undefined1 (*) [16])(puVar21 + 0x16);
      uVar14 = puVar21[0x19];
      puVar16[0x18] = puVar21[0x18];
      puVar16[0x19] = uVar14;
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf6c3) = 0;
  }
  if (*(char *)(param_1 + 0xf6b6) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0xf7c0);
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar10 = (**(code **)(*plVar37 + 0x70))(plVar37,uVar13,0,4,in_stack_ffffffffffffff48,&local_98);
    if (-1 < iVar10) {
      FUN_1800fbec0(local_98,(undefined8 *)(param_1 + 0x54a0),0xec0);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf6b6) = 0;
  }
  if (*(char *)(param_1 + 0xf6b4) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0xf7b0);
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar10 = (**(code **)(*plVar37 + 0x70))(plVar37,uVar13,0,4,in_stack_ffffffffffffff48,&local_98);
    if (-1 < iVar10) {
      lVar15 = 5;
      puVar17 = local_98;
      puVar22 = (undefined8 *)(param_1 + 0x51b0);
      do {
        puVar21 = puVar22;
        puVar16 = puVar17;
        uVar14 = puVar21[1];
        *puVar16 = *puVar21;
        puVar16[1] = uVar14;
        uVar14 = puVar21[3];
        puVar16[2] = puVar21[2];
        puVar16[3] = uVar14;
        uVar14 = puVar21[5];
        puVar16[4] = puVar21[4];
        puVar16[5] = uVar14;
        uVar14 = puVar21[7];
        puVar16[6] = puVar21[6];
        puVar16[7] = uVar14;
        uVar14 = puVar21[9];
        puVar16[8] = puVar21[8];
        puVar16[9] = uVar14;
        uVar14 = puVar21[0xb];
        puVar16[10] = puVar21[10];
        puVar16[0xb] = uVar14;
        uVar14 = puVar21[0xd];
        puVar16[0xc] = puVar21[0xc];
        puVar16[0xd] = uVar14;
        uVar14 = puVar21[0xf];
        puVar16[0xe] = puVar21[0xe];
        puVar16[0xf] = uVar14;
        lVar15 = lVar15 + -1;
        puVar17 = puVar16 + 0x10;
        puVar22 = puVar21 + 0x10;
      } while (lVar15 != 0);
      uVar14 = puVar21[0x11];
      puVar16[0x10] = puVar21[0x10];
      puVar16[0x11] = uVar14;
      uVar14 = puVar21[0x13];
      puVar16[0x12] = puVar21[0x12];
      puVar16[0x13] = uVar14;
      uVar14 = puVar21[0x15];
      puVar16[0x14] = puVar21[0x14];
      puVar16[0x15] = uVar14;
      uVar14 = puVar21[0x17];
      puVar16[0x16] = puVar21[0x16];
      puVar16[0x17] = uVar14;
      uVar14 = puVar21[0x19];
      puVar16[0x18] = puVar21[0x18];
      puVar16[0x19] = uVar14;
      *(undefined1 (*) [16])(puVar16 + 0x1a) = *(undefined1 (*) [16])(puVar21 + 0x1a);
      uVar14 = puVar21[0x1d];
      puVar16[0x1c] = puVar21[0x1c];
      puVar16[0x1d] = uVar14;
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf6b4) = 0;
  }
  if (*(char *)(param_1 + 0xf6b5) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0xf7b8);
    uVar38 = *(uint *)(param_1 + 0xa4);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    iVar10 = (**(code **)(*plVar37 + 0x70))(plVar37,uVar13,0,4,in_stack_ffffffffffffff48,&local_98);
    if (-1 < iVar10) {
      FUN_1800fbec0(local_98,(undefined8 *)(param_1 + 0x1070),(ulonglong)uVar38);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf6b5) = 0;
  }
  if (lVar32 != param_1) {
    local_98 = *(undefined8 **)(param_1 + 0xf7b0);
    local_90 = *(undefined8 *)(param_1 + 0xf7b8);
    local_80 = *(longlong *)(param_1 + 0xf7d8);
    lStack_78 = *(longlong *)(param_1 + 0xf7c0);
    local_70._0_8_ = *(undefined8 *)(param_1 + 0xf7c8);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar37 + 0x38))(plVar37,3,2,&local_98);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar37 + 0x80))(plVar37,3,3,&local_80);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar37 + 0xb0))(plVar37,3,2,&local_98);
  }
  if (*(char *)(param_1 + 0xf6b7) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0xf7c8);
    plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    iVar10 = (**(code **)(*plVar37 + 0x70))
                       (plVar37,uVar13,0,4,in_stack_ffffffffffffff48 & 0xffffffff00000000,&local_98)
    ;
    if (-1 < iVar10) {
      lVar15 = 2;
      puVar17 = local_98;
      puVar22 = (undefined8 *)(param_1 + 0x6360);
      do {
        uVar14 = puVar22[1];
        *puVar17 = *puVar22;
        puVar17[1] = uVar14;
        uVar14 = puVar22[3];
        puVar17[2] = puVar22[2];
        puVar17[3] = uVar14;
        uVar14 = puVar22[5];
        puVar17[4] = puVar22[4];
        puVar17[5] = uVar14;
        uVar14 = puVar22[7];
        puVar17[6] = puVar22[6];
        puVar17[7] = uVar14;
        uVar14 = puVar22[9];
        puVar17[8] = puVar22[8];
        puVar17[9] = uVar14;
        uVar14 = puVar22[0xb];
        puVar17[10] = puVar22[10];
        puVar17[0xb] = uVar14;
        uVar14 = puVar22[0xd];
        puVar17[0xc] = puVar22[0xc];
        puVar17[0xd] = uVar14;
        *(undefined1 (*) [16])(puVar17 + 0xe) = *(undefined1 (*) [16])(puVar22 + 0xe);
        lVar15 = lVar15 + -1;
        puVar17 = puVar17 + 0x10;
        puVar22 = puVar22 + 0x10;
      } while (lVar15 != 0);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x78))(plVar37,uVar13,0);
    }
    *(undefined1 *)(param_1 + 0xf6b7) = 0;
  }
  if ((*(char *)(param_1 + 0xf6c1) != '\0') || (lVar32 != param_1)) {
    plVar37 = *(longlong **)(param_1 + 0xf9b0);
    if ((plVar37 == (longlong *)0x0) &&
       (plVar37 = *(longlong **)(param_1 + 0xf9d0), plVar37 == (longlong *)0x0)) {
      fVar41 = 1.0;
      fVar40 = 1.0;
    }
    else {
      uVar38 = *(uint *)((longlong)plVar37 + 0x24);
      uVar11 = (**(code **)(*plVar37 + 0x40))(plVar37,0);
      uVar26 = *(uint *)(plVar37 + 5);
      fVar41 = (float)uVar11 / (float)uVar38;
      uVar38 = (**(code **)(*plVar37 + 0x48))(plVar37,0);
      fVar40 = (float)uVar38 / (float)uVar26;
    }
    iVar10 = (int)((float)*(int *)(param_1 + 0xe60) * fVar41);
    iVar24 = (int)((float)*(int *)(param_1 + 0xe64) * fVar40);
    *(int *)(param_1 + 0xe70) = iVar10;
    *(int *)(param_1 + 0xe74) = iVar24;
    iVar33 = (int)((float)*(int *)(param_1 + 0xe68) * fVar41);
    iVar36 = (int)((float)*(int *)(param_1 + 0xe6c) * fVar40);
    *(int *)(param_1 + 0xe78) = iVar33;
    *(int *)(param_1 + 0xe7c) = iVar36;
    lVar15 = *(longlong *)(param_1 + 0xf6d0);
    lVar29 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if ((((iVar10 != *(int *)(lVar29 + 0xbe8 + lVar15)) ||
         (iVar24 != *(int *)(lVar29 + 0xbec + lVar15))) ||
        (iVar33 != *(int *)(lVar29 + 0xbf0 + lVar15))) ||
       (iVar36 != *(int *)(lVar29 + 0xbf4 + lVar15))) {
      plVar37 = *(longlong **)(lVar29 + 0x6b8 + lVar15);
      (**(code **)(*plVar37 + 0x168))(plVar37,1,param_1 + 0xe70);
      uVar13 = *(undefined8 *)(param_1 + 0xe78);
      puVar17 = (undefined8 *)(lVar29 + 0xbe8 + lVar15);
      *puVar17 = *(undefined8 *)(param_1 + 0xe70);
      puVar17[1] = uVar13;
    }
    *(undefined1 *)(param_1 + 0xf6c1) = 0;
    if (lVar32 != param_1) {
      local_98 = *(undefined8 **)(param_1 + 0xf6f8);
      local_90 = *(undefined8 *)(param_1 + 0xf700);
      local_88 = *(undefined8 *)(param_1 + 0xf708);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x38))(plVar37,0,3,&local_98);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0x80))(plVar37,0,2,&local_98);
      plVar37 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar37 + 0xb0))(plVar37,0,3,&local_98);
    }
  }
  if ((*(char *)(param_1 + 0xf68a) != '\0') || (lVar32 != param_1)) {
    lVar15 = *(longlong *)(param_1 + 0xf6d0);
    local_70 = ZEXT816(0);
    lVar29 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    local_80 = 0;
    lStack_78 = 0;
    cVar7 = *(longlong *)(lVar29 + 0xbc0 + lVar15) != 0;
    if ((bool)cVar7) {
      *(undefined8 *)(lVar29 + 0xbc0 + lVar15) = 0;
    }
    if (*(longlong *)(lVar29 + 0xbc8 + lVar15) != 0) {
      *(undefined8 *)(lVar29 + 0xbc8 + lVar15) = 0;
      cVar7 = cVar7 + '\x01';
    }
    if (*(longlong *)(lVar29 + 0xbd0 + lVar15) != 0) {
      *(undefined8 *)(lVar29 + 0xbd0 + lVar15) = 0;
      cVar7 = cVar7 + '\x01';
    }
    if (*(longlong *)(lVar29 + 0xbd8 + lVar15) != 0) {
      *(undefined8 *)(lVar29 + 0xbd8 + lVar15) = 0;
      cVar7 = cVar7 + '\x01';
    }
    if ((cVar7 != '\0') || (*(longlong *)(lVar29 + 0xbe0 + lVar15) != 0)) {
      plVar37 = *(longlong **)(lVar29 + 0x6b8 + lVar15);
      (**(code **)(*plVar37 + 0x108))(plVar37,4,&local_80,0);
      *(undefined8 *)(lVar29 + 0xbe0 + lVar15) = 0;
    }
  }
  if ((*(char *)(param_1 + 0xf689) != '\0') || (lVar32 != param_1)) {
    lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
    if (*(char *)(param_1 + 0x7662) == '\0') {
      if (*(longlong *)(lVar15 + 0x9f0) != *(longlong *)(param_1 + 0xf7e8)) {
        *(longlong *)(lVar15 + 0x9f0) = *(longlong *)(param_1 + 0xf7e8);
        (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x40))(*(longlong **)(lVar15 + 0x6b8),0x30,1)
        ;
      }
      lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
      bVar39 = *(longlong *)(lVar15 + 0x870) != *(longlong *)(param_1 + 0xf828);
      if (bVar39) {
        *(longlong *)(lVar15 + 0x870) = *(longlong *)(param_1 + 0xf828);
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x878) == *(longlong *)(param_1 + 0xf830)) {
LAB_1800360b0:
        uVar26 = 3;
        uVar30 = uVar25;
      }
      else {
        *(longlong *)(lVar15 + 0x878) = *(longlong *)(param_1 + 0xf830);
        if (bVar39) {
          uVar38 = 2;
          goto LAB_1800360b0;
        }
        uVar38 = 1;
        uVar26 = 2;
        uVar30 = 1;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x880) != *(longlong *)(param_1 + 0xf838)) &&
         (*(longlong *)(lVar15 + 0x880) = *(longlong *)(param_1 + 0xf838), uVar11 = uVar26,
         uVar38 == 0)) {
        uVar30 = 2;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x888) != *(longlong *)(param_1 + 0xf840)) {
        *(longlong *)(lVar15 + 0x888) = *(longlong *)(param_1 + 0xf840);
        if (uVar11 == 0) {
          uVar30 = 3;
          uVar11 = 1;
        }
        else {
          uVar11 = 4 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x890) != *(longlong *)(param_1 + 0xf848)) {
        *(longlong *)(lVar15 + 0x890) = *(longlong *)(param_1 + 0xf848);
        if (uVar11 == 0) {
          uVar30 = 4;
          uVar11 = 1;
        }
        else {
          uVar11 = 5 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x898) != *(longlong *)(param_1 + 0xf850)) {
        *(longlong *)(lVar15 + 0x898) = *(longlong *)(param_1 + 0xf850);
        if (uVar11 == 0) {
          uVar30 = 5;
          uVar11 = 1;
        }
        else {
          uVar11 = 6 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8a0) != *(longlong *)(param_1 + 0xf858)) {
        *(longlong *)(lVar15 + 0x8a0) = *(longlong *)(param_1 + 0xf858);
        if (uVar11 == 0) {
          uVar30 = 6;
          uVar11 = 1;
        }
        else {
          uVar11 = 7 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8a8) != *(longlong *)(param_1 + 0xf860)) {
        *(longlong *)(lVar15 + 0x8a8) = *(longlong *)(param_1 + 0xf860);
        if (uVar11 == 0) {
          uVar30 = 7;
          uVar11 = 1;
        }
        else {
          uVar11 = 8 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8b0) != *(longlong *)(param_1 + 0xf868)) {
        *(longlong *)(lVar15 + 0x8b0) = *(longlong *)(param_1 + 0xf868);
        if (uVar11 == 0) {
          uVar30 = 8;
          uVar11 = 1;
        }
        else {
          uVar11 = 9 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8b8) != *(longlong *)(param_1 + 0xf870)) {
        *(longlong *)(lVar15 + 0x8b8) = *(longlong *)(param_1 + 0xf870);
        if (uVar11 == 0) {
          uVar30 = 9;
          uVar11 = 1;
        }
        else {
          uVar11 = 10 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8c0) != *(longlong *)(param_1 + 0xf878)) {
        *(longlong *)(lVar15 + 0x8c0) = *(longlong *)(param_1 + 0xf878);
        if (uVar11 == 0) {
          uVar30 = 10;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xb - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8c8) != *(longlong *)(param_1 + 0xf880)) {
        *(longlong *)(lVar15 + 0x8c8) = *(longlong *)(param_1 + 0xf880);
        if (uVar11 == 0) {
          uVar30 = 0xb;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xc - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8d0) != *(longlong *)(param_1 + 0xf888)) {
        *(longlong *)(lVar15 + 0x8d0) = *(longlong *)(param_1 + 0xf888);
        if (uVar11 == 0) {
          uVar30 = 0xc;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xd - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8d8) != *(longlong *)(param_1 + 0xf890)) {
        *(longlong *)(lVar15 + 0x8d8) = *(longlong *)(param_1 + 0xf890);
        if (uVar11 == 0) {
          uVar30 = 0xd;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xe - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8e0) != *(longlong *)(param_1 + 0xf898)) {
        *(longlong *)(lVar15 + 0x8e0) = *(longlong *)(param_1 + 0xf898);
        if (uVar11 == 0) {
          uVar30 = 0xe;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xf - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8e8) == *(longlong *)(param_1 + 0xf8a0)) {
LAB_180036344:
        if (uVar11 != 0) goto LAB_180036349;
      }
      else {
        *(longlong *)(lVar15 + 0x8e8) = *(longlong *)(param_1 + 0xf8a0);
        if (uVar11 != 0) {
          uVar11 = 0x10 - (int)uVar30;
          goto LAB_180036344;
        }
        uVar30 = 0xf;
        uVar11 = 1;
LAB_180036349:
        (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar15 + 0x6b8),uVar30,uVar11,lVar15 + (uVar30 + 0x10e) * 8);
      }
      lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
      bVar39 = *(longlong *)(lVar15 + 0x8f0) != *(longlong *)(param_1 + 0xf8a8);
      if (bVar39) {
        *(longlong *)(lVar15 + 0x8f0) = *(longlong *)(param_1 + 0xf8a8);
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x8f8) == *(longlong *)(param_1 + 0xf8b0)) {
LAB_1800363c3:
        uVar26 = 3;
        lVar29 = 0x10;
      }
      else {
        *(longlong *)(lVar15 + 0x8f8) = *(longlong *)(param_1 + 0xf8b0);
        if (bVar39) {
          uVar38 = 2;
          goto LAB_1800363c3;
        }
        lVar29 = 0x11;
        uVar38 = 1;
        uVar26 = 2;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x900) != *(longlong *)(param_1 + 0xf8b8)) &&
         (*(longlong *)(lVar15 + 0x900) = *(longlong *)(param_1 + 0xf8b8), uVar11 = uVar26,
         uVar38 == 0)) {
        lVar29 = 0x12;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x908) != *(longlong *)(param_1 + 0xf8c0)) {
        *(longlong *)(lVar15 + 0x908) = *(longlong *)(param_1 + 0xf8c0);
        if (uVar11 == 0) {
          lVar29 = 0x13;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x14 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x910) != *(longlong *)(param_1 + 0xf8c8)) {
        *(longlong *)(lVar15 + 0x910) = *(longlong *)(param_1 + 0xf8c8);
        if (uVar11 == 0) {
          lVar29 = 0x14;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x15 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x918) != *(longlong *)(param_1 + 0xf8d0)) {
        *(longlong *)(lVar15 + 0x918) = *(longlong *)(param_1 + 0xf8d0);
        if (uVar11 == 0) {
          lVar29 = 0x15;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x16 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x920) != *(longlong *)(param_1 + 0xf8d8)) {
        *(longlong *)(lVar15 + 0x920) = *(longlong *)(param_1 + 0xf8d8);
        if (uVar11 == 0) {
          lVar29 = 0x16;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x17 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x928) != *(longlong *)(param_1 + 0xf8e0)) {
        *(longlong *)(lVar15 + 0x928) = *(longlong *)(param_1 + 0xf8e0);
        if (uVar11 == 0) {
          lVar29 = 0x17;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x18 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x930) != *(longlong *)(param_1 + 0xf8e8)) {
        *(longlong *)(lVar15 + 0x930) = *(longlong *)(param_1 + 0xf8e8);
        if (uVar11 == 0) {
          lVar29 = 0x18;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x19 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x938) != *(longlong *)(param_1 + 0xf8f0)) {
        *(longlong *)(lVar15 + 0x938) = *(longlong *)(param_1 + 0xf8f0);
        if (uVar11 == 0) {
          lVar29 = 0x19;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1a - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x940) != *(longlong *)(param_1 + 0xf8f8)) {
        *(longlong *)(lVar15 + 0x940) = *(longlong *)(param_1 + 0xf8f8);
        if (uVar11 == 0) {
          lVar29 = 0x1a;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1b - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x948) != *(longlong *)(param_1 + 0xf900)) {
        *(longlong *)(lVar15 + 0x948) = *(longlong *)(param_1 + 0xf900);
        if (uVar11 == 0) {
          lVar29 = 0x1b;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1c - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x950) != *(longlong *)(param_1 + 0xf908)) {
        *(longlong *)(lVar15 + 0x950) = *(longlong *)(param_1 + 0xf908);
        if (uVar11 == 0) {
          lVar29 = 0x1c;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1d - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x958) != *(longlong *)(param_1 + 0xf910)) {
        *(longlong *)(lVar15 + 0x958) = *(longlong *)(param_1 + 0xf910);
        if (uVar11 == 0) {
          lVar29 = 0x1d;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1e - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x960) != *(longlong *)(param_1 + 0xf918)) {
        *(longlong *)(lVar15 + 0x960) = *(longlong *)(param_1 + 0xf918);
        if (uVar11 == 0) {
          lVar29 = 0x1e;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1f - (int)lVar29;
        }
      }
      uVar30 = 0x20;
      if (*(longlong *)(lVar15 + 0x968) == *(longlong *)(param_1 + 0xf920)) {
LAB_18003665b:
        if (uVar11 != 0) goto LAB_180036660;
      }
      else {
        *(longlong *)(lVar15 + 0x968) = *(longlong *)(param_1 + 0xf920);
        if (uVar11 != 0) {
          uVar11 = 0x20 - (int)lVar29;
          goto LAB_18003665b;
        }
        lVar29 = 0x1f;
        uVar11 = 1;
LAB_180036660:
        (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar15 + 0x6b8),lVar29,uVar11,lVar15 + (lVar29 + 0x10e) * 8);
      }
      lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
      bVar39 = *(longlong *)(lVar15 + 0x970) != *(longlong *)(param_1 + 0xf928);
      if (bVar39) {
        *(longlong *)(lVar15 + 0x970) = *(longlong *)(param_1 + 0xf928);
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x978) == *(longlong *)(param_1 + 0xf930)) {
LAB_1800366d8:
        uVar26 = 3;
      }
      else {
        *(longlong *)(lVar15 + 0x978) = *(longlong *)(param_1 + 0xf930);
        if (bVar39) {
          uVar38 = 2;
          goto LAB_1800366d8;
        }
        uVar30 = 0x21;
        uVar38 = 1;
        uVar26 = 2;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x980) != *(longlong *)(param_1 + 0xf938)) &&
         (*(longlong *)(lVar15 + 0x980) = *(longlong *)(param_1 + 0xf938), uVar11 = uVar26,
         uVar38 == 0)) {
        uVar30 = 0x22;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x988) != *(longlong *)(param_1 + 0xf940)) {
        *(longlong *)(lVar15 + 0x988) = *(longlong *)(param_1 + 0xf940);
        if (uVar11 == 0) {
          uVar30 = 0x23;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x24 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x990) != *(longlong *)(param_1 + 0xf948)) {
        *(longlong *)(lVar15 + 0x990) = *(longlong *)(param_1 + 0xf948);
        if (uVar11 == 0) {
          uVar30 = 0x24;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x25 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x998) != *(longlong *)(param_1 + 0xf950)) {
        *(longlong *)(lVar15 + 0x998) = *(longlong *)(param_1 + 0xf950);
        if (uVar11 == 0) {
          uVar30 = 0x25;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x26 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9a0) != *(longlong *)(param_1 + 0xf958)) {
        *(longlong *)(lVar15 + 0x9a0) = *(longlong *)(param_1 + 0xf958);
        if (uVar11 == 0) {
          uVar30 = 0x26;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x27 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9a8) != *(longlong *)(param_1 + 0xf960)) {
        *(longlong *)(lVar15 + 0x9a8) = *(longlong *)(param_1 + 0xf960);
        if (uVar11 == 0) {
          uVar30 = 0x27;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x28 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9b0) != *(longlong *)(param_1 + 0xf968)) {
        *(longlong *)(lVar15 + 0x9b0) = *(longlong *)(param_1 + 0xf968);
        if (uVar11 == 0) {
          uVar30 = 0x28;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x29 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9b8) != *(longlong *)(param_1 + 0xf970)) {
        *(longlong *)(lVar15 + 0x9b8) = *(longlong *)(param_1 + 0xf970);
        if (uVar11 == 0) {
          uVar30 = 0x29;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2a - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9c0) != *(longlong *)(param_1 + 0xf978)) {
        *(longlong *)(lVar15 + 0x9c0) = *(longlong *)(param_1 + 0xf978);
        if (uVar11 == 0) {
          uVar30 = 0x2a;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2b - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9c8) != *(longlong *)(param_1 + 0xf980)) {
        *(longlong *)(lVar15 + 0x9c8) = *(longlong *)(param_1 + 0xf980);
        if (uVar11 == 0) {
          uVar30 = 0x2b;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2c - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9d0) != *(longlong *)(param_1 + 0xf988)) {
        *(longlong *)(lVar15 + 0x9d0) = *(longlong *)(param_1 + 0xf988);
        if (uVar11 == 0) {
          uVar30 = 0x2c;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2d - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9d8) != *(longlong *)(param_1 + 0xf990)) {
        *(longlong *)(lVar15 + 0x9d8) = *(longlong *)(param_1 + 0xf990);
        if (uVar11 == 0) {
          uVar30 = 0x2d;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2e - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9e0) != *(longlong *)(param_1 + 0xf998)) {
        *(longlong *)(lVar15 + 0x9e0) = *(longlong *)(param_1 + 0xf998);
        if (uVar11 == 0) {
          uVar30 = 0x2e;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x2f - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x9e8) != *(longlong *)(param_1 + 0xf9a0)) {
        *(longlong *)(lVar15 + 0x9e8) = *(longlong *)(param_1 + 0xf9a0);
        if (uVar11 == 0) {
          uVar30 = 0x2f;
          uVar11 = 1;
          goto LAB_180036e82;
        }
        iVar10 = 0x30;
LAB_180036e7a:
        uVar11 = iVar10 - (int)uVar30;
      }
LAB_180036e7d:
      if (uVar11 != 0) goto LAB_180036e82;
    }
    else {
      bVar39 = *(longlong *)(lVar15 + 0x8f0) != 0;
      if (bVar39) {
        *(undefined8 *)(lVar15 + 0x8f0) = 0;
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x8f8) == 0) {
LAB_1800369ad:
        uVar26 = 3;
        lVar29 = 0x10;
      }
      else {
        *(undefined8 *)(lVar15 + 0x8f8) = 0;
        if (bVar39) {
          uVar38 = 2;
          goto LAB_1800369ad;
        }
        lVar29 = 0x11;
        uVar38 = 1;
        uVar26 = 2;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x900) != 0) &&
         (*(undefined8 *)(lVar15 + 0x900) = 0, uVar11 = uVar26, uVar38 == 0)) {
        lVar29 = 0x12;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x908) != 0) {
        *(undefined8 *)(lVar15 + 0x908) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x13;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x14 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x910) != 0) {
        *(undefined8 *)(lVar15 + 0x910) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x14;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x15 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x918) != 0) {
        *(undefined8 *)(lVar15 + 0x918) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x15;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x16 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x920) != 0) {
        *(undefined8 *)(lVar15 + 0x920) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x16;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x17 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x928) != 0) {
        *(undefined8 *)(lVar15 + 0x928) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x17;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x18 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x930) != 0) {
        *(undefined8 *)(lVar15 + 0x930) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x18;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x19 - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x938) != 0) {
        *(undefined8 *)(lVar15 + 0x938) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x19;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1a - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x940) != 0) {
        *(undefined8 *)(lVar15 + 0x940) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x1a;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1b - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x948) != 0) {
        *(undefined8 *)(lVar15 + 0x948) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x1b;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1c - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x950) != 0) {
        *(undefined8 *)(lVar15 + 0x950) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x1c;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1d - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x958) != 0) {
        *(undefined8 *)(lVar15 + 0x958) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x1d;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1e - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x960) != 0) {
        *(undefined8 *)(lVar15 + 0x960) = 0;
        if (uVar11 == 0) {
          lVar29 = 0x1e;
          uVar11 = 1;
        }
        else {
          uVar11 = 0x1f - (int)lVar29;
        }
      }
      if (*(longlong *)(lVar15 + 0x968) == 0) {
LAB_180036bc6:
        if (uVar11 != 0) goto LAB_180036bca;
      }
      else {
        *(undefined8 *)(lVar15 + 0x968) = 0;
        if (uVar11 != 0) {
          uVar11 = 0x20 - (int)lVar29;
          goto LAB_180036bc6;
        }
        lVar29 = 0x1f;
        uVar11 = 1;
LAB_180036bca:
        (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar15 + 0x6b8),lVar29,uVar11,lVar15 + (lVar29 + 0x10e) * 8);
      }
      lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
      bVar39 = *(longlong *)(lVar15 + 0x870) != *(longlong *)(param_1 + 0xf9a8);
      if (bVar39) {
        *(longlong *)(lVar15 + 0x870) = *(longlong *)(param_1 + 0xf9a8);
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x878) == 0) {
LAB_180036c3d:
        uVar26 = 3;
        uVar30 = uVar25;
      }
      else {
        *(undefined8 *)(lVar15 + 0x878) = 0;
        if (bVar39) {
          uVar38 = 2;
          goto LAB_180036c3d;
        }
        uVar38 = 1;
        uVar26 = 2;
        uVar30 = 1;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x880) != 0) &&
         (*(undefined8 *)(lVar15 + 0x880) = 0, uVar11 = uVar26, uVar38 == 0)) {
        uVar30 = 2;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x888) != 0) {
        *(undefined8 *)(lVar15 + 0x888) = 0;
        if (uVar11 == 0) {
          uVar30 = 3;
          uVar11 = 1;
        }
        else {
          uVar11 = 4 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x890) != 0) {
        *(undefined8 *)(lVar15 + 0x890) = 0;
        if (uVar11 == 0) {
          uVar30 = 4;
          uVar11 = 1;
        }
        else {
          uVar11 = 5 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x898) != 0) {
        *(undefined8 *)(lVar15 + 0x898) = 0;
        if (uVar11 == 0) {
          uVar30 = 5;
          uVar11 = 1;
        }
        else {
          uVar11 = 6 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8a0) != 0) {
        *(undefined8 *)(lVar15 + 0x8a0) = 0;
        if (uVar11 == 0) {
          uVar30 = 6;
          uVar11 = 1;
        }
        else {
          uVar11 = 7 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8a8) != 0) {
        *(undefined8 *)(lVar15 + 0x8a8) = 0;
        if (uVar11 == 0) {
          uVar30 = 7;
          uVar11 = 1;
        }
        else {
          uVar11 = 8 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8b0) != 0) {
        *(undefined8 *)(lVar15 + 0x8b0) = 0;
        if (uVar11 == 0) {
          uVar30 = 8;
          uVar11 = 1;
        }
        else {
          uVar11 = 9 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8b8) != 0) {
        *(undefined8 *)(lVar15 + 0x8b8) = 0;
        if (uVar11 == 0) {
          uVar30 = 9;
          uVar11 = 1;
        }
        else {
          uVar11 = 10 - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8c0) != 0) {
        *(undefined8 *)(lVar15 + 0x8c0) = 0;
        if (uVar11 == 0) {
          uVar30 = 10;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xb - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8c8) != 0) {
        *(undefined8 *)(lVar15 + 0x8c8) = 0;
        if (uVar11 == 0) {
          uVar30 = 0xb;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xc - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8d0) != 0) {
        *(undefined8 *)(lVar15 + 0x8d0) = 0;
        if (uVar11 == 0) {
          uVar30 = 0xc;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xd - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8d8) != 0) {
        *(undefined8 *)(lVar15 + 0x8d8) = 0;
        if (uVar11 == 0) {
          uVar30 = 0xd;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xe - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8e0) != 0) {
        *(undefined8 *)(lVar15 + 0x8e0) = 0;
        if (uVar11 == 0) {
          uVar30 = 0xe;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xf - (int)uVar30;
        }
      }
      if (*(longlong *)(lVar15 + 0x8e8) == 0) goto LAB_180036e7d;
      *(undefined8 *)(lVar15 + 0x8e8) = 0;
      if (uVar11 != 0) {
        iVar10 = 0x10;
        goto LAB_180036e7a;
      }
      uVar30 = 0xf;
      uVar11 = 1;
LAB_180036e82:
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x40))
                (*(longlong **)(lVar15 + 0x6b8),uVar30,uVar11,lVar15 + (uVar30 + 0x10e) * 8);
    }
    *(undefined1 *)(param_1 + 0xf689) = 0;
  }
  if (((*(char *)(param_1 + 0xf6c0) != '\0') || (lVar32 != param_1)) &&
     (*(char *)(param_1 + 0x7662) == '\0')) {
    lVar15 = *(longlong *)(param_1 + 0xf6d0);
    uVar30 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    bVar39 = *(longlong *)(uVar30 + 0x810 + lVar15) != *(longlong *)(param_1 + 0xfba0);
    if (bVar39) {
      *(longlong *)(uVar30 + 0x810 + lVar15) = *(longlong *)(param_1 + 0xfba0);
    }
    uVar38 = (uint)bVar39;
    if (*(longlong *)(uVar30 + 0x818 + lVar15) == *(longlong *)(param_1 + 0xfba8)) {
LAB_180036f24:
      uVar26 = 3;
    }
    else {
      *(longlong *)(uVar30 + 0x818 + lVar15) = *(longlong *)(param_1 + 0xfba8);
      if (bVar39) {
        uVar38 = 2;
        goto LAB_180036f24;
      }
      uVar25 = 1;
      uVar38 = 1;
      uVar26 = 2;
    }
    uVar34 = (uint)uVar25;
    uVar11 = uVar38;
    if ((*(longlong *)(uVar30 + 0x820 + lVar15) != *(longlong *)(param_1 + 0xfbb0)) &&
       (*(longlong *)(uVar30 + 0x820 + lVar15) = *(longlong *)(param_1 + 0xfbb0), uVar11 = uVar26,
       uVar38 == 0)) {
      uVar34 = 2;
      uVar11 = 1;
    }
    if (*(longlong *)(uVar30 + 0x828 + lVar15) == *(longlong *)(param_1 + 0xfbb8)) {
LAB_180036f88:
      if (uVar11 != 0) goto LAB_180036f8d;
    }
    else {
      *(longlong *)(uVar30 + 0x828 + lVar15) = *(longlong *)(param_1 + 0xfbb8);
      if (uVar11 != 0) {
        uVar11 = 4 - uVar34;
        goto LAB_180036f88;
      }
      uVar34 = 3;
      uVar11 = 1;
LAB_180036f8d:
      plVar37 = *(longlong **)(uVar30 + 0x6b8 + lVar15);
      (**(code **)(*plVar37 + 200))
                (plVar37,uVar34,uVar11,((ulonglong)uVar34 << 3 | uVar30) + 0x810 + lVar15);
    }
    lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
    bVar39 = *(longlong *)(lVar15 + 0x838) != *(longlong *)(param_1 + 0xfbc8);
    if (bVar39) {
      *(longlong *)(lVar15 + 0x838) = *(longlong *)(param_1 + 0xfbc8);
    }
    uVar38 = (uint)bVar39;
    if (*(longlong *)(lVar15 + 0x840) == *(longlong *)(param_1 + 0xfbd0)) {
LAB_180037013:
      uVar26 = 3;
      uVar11 = 5;
    }
    else {
      *(longlong *)(lVar15 + 0x840) = *(longlong *)(param_1 + 0xfbd0);
      if (bVar39) {
        uVar38 = 2;
        goto LAB_180037013;
      }
      uVar11 = 6;
      uVar38 = 1;
      uVar26 = 2;
    }
    uVar34 = uVar38;
    if ((*(longlong *)(lVar15 + 0x848) != *(longlong *)(param_1 + 0xfbd8)) &&
       (*(longlong *)(lVar15 + 0x848) = *(longlong *)(param_1 + 0xfbd8), uVar34 = uVar26,
       uVar38 == 0)) {
      uVar11 = 7;
      uVar34 = 1;
    }
    if (*(longlong *)(lVar15 + 0x850) == *(longlong *)(param_1 + 0xfbe0)) {
LAB_180037075:
      if (uVar34 != 0) goto LAB_18003707a;
    }
    else {
      *(longlong *)(lVar15 + 0x850) = *(longlong *)(param_1 + 0xfbe0);
      if (uVar34 != 0) {
        uVar34 = 9 - uVar11;
        goto LAB_180037075;
      }
      uVar11 = 8;
      uVar34 = 1;
LAB_18003707a:
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 200))
                (*(longlong **)(lVar15 + 0x6b8),uVar11,uVar34,
                 lVar15 + ((ulonglong)uVar11 + 0x102) * 8);
    }
    lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
    bVar39 = *(longlong *)(lVar15 + 0x860) != *(longlong *)(param_1 + 0xfbf0);
    if (bVar39) {
      *(longlong *)(lVar15 + 0x860) = *(longlong *)(param_1 + 0xfbf0);
    }
    uVar38 = (uint)bVar39;
    if (*(longlong *)(lVar15 + 0x868) == *(longlong *)(param_1 + 0xfbf8)) {
LAB_1800370f7:
      uVar26 = 3;
      lVar29 = 10;
    }
    else {
      *(longlong *)(lVar15 + 0x868) = *(longlong *)(param_1 + 0xfbf8);
      if (bVar39) {
        uVar38 = 2;
        goto LAB_1800370f7;
      }
      lVar29 = 0xb;
      uVar38 = 1;
      uVar26 = 2;
    }
    uVar11 = uVar38;
    if ((*(longlong *)(lVar15 + 0x870) != *(longlong *)(param_1 + 0xfc00)) &&
       (*(longlong *)(lVar15 + 0x870) = *(longlong *)(param_1 + 0xfc00), uVar11 = uVar26,
       uVar38 == 0)) {
      lVar29 = 0xc;
      uVar11 = 1;
    }
    if (*(longlong *)(lVar15 + 0x878) == *(longlong *)(param_1 + 0xfc08)) {
LAB_180037159:
      if (uVar11 != 0) goto LAB_18003715e;
    }
    else {
      *(longlong *)(lVar15 + 0x878) = *(longlong *)(param_1 + 0xfc08);
      if (uVar11 != 0) {
        uVar11 = 0xe - (int)lVar29;
        goto LAB_180037159;
      }
      lVar29 = 0xd;
      uVar11 = 1;
LAB_18003715e:
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 200))
                (*(longlong **)(lVar15 + 0x6b8),lVar29,uVar11,lVar15 + (lVar29 + 0x102) * 8);
    }
    *(undefined1 *)(param_1 + 0xf6c0) = 0;
  }
  if ((*(char *)(param_1 + 0xf68a) != '\0') || (lVar32 != param_1)) {
    lVar15 = *(longlong *)(param_1 + 0xf6d0);
    bVar39 = *(char *)(param_1 + 0x765d) == '\0';
    lVar29 = *(longlong *)(param_1 + 0xfcb0);
    lVar18 = 0xfc68;
    if (bVar39) {
      lVar18 = 0xfb00;
    }
    local_80 = *(longlong *)(lVar18 + param_1);
    lVar18 = 0xfc70;
    if (bVar39) {
      lVar18 = 0xfb08;
    }
    lStack_78 = *(longlong *)(lVar18 + param_1);
    lVar18 = 0xfc78;
    if (bVar39) {
      lVar18 = 0xfb10;
    }
    local_70._0_8_ = *(longlong *)(lVar18 + param_1);
    lVar18 = 0xfc80;
    if (bVar39) {
      lVar18 = 0xfb18;
    }
    local_70._8_8_ = *(longlong *)(lVar18 + param_1);
    lVar18 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    cVar7 = *(longlong *)(lVar18 + 0xbc0 + lVar15) != local_80;
    if ((bool)cVar7) {
      *(longlong *)(lVar18 + 0xbc0 + lVar15) = local_80;
    }
    if (*(longlong *)(lVar18 + 0xbc8 + lVar15) != lStack_78) {
      *(longlong *)(lVar18 + 0xbc8 + lVar15) = lStack_78;
      cVar7 = cVar7 + '\x01';
    }
    if (*(longlong *)(lVar18 + 0xbd0 + lVar15) != local_70._0_8_) {
      *(undefined8 *)(lVar18 + 0xbd0 + lVar15) = local_70._0_8_;
      cVar7 = cVar7 + '\x01';
    }
    if (*(longlong *)(lVar18 + 0xbd8 + lVar15) != local_70._8_8_) {
      *(undefined8 *)(lVar18 + 0xbd8 + lVar15) = local_70._8_8_;
      cVar7 = cVar7 + '\x01';
    }
    if ((cVar7 != '\0') || (lVar29 != *(longlong *)(lVar18 + 0xbe0 + lVar15))) {
      plVar37 = *(longlong **)(lVar18 + 0x6b8 + lVar15);
      (**(code **)(*plVar37 + 0x108))(plVar37,4,&local_80,lVar29);
      *(longlong *)(lVar18 + 0xbe0 + lVar15) = lVar29;
    }
    *(undefined1 *)(param_1 + 0xf68a) = 0;
  }
  if ((*(char *)(param_1 + 0xf68b) != '\0') || (lVar32 != param_1)) {
    piVar1 = (int *)(param_1 + 0x10420);
    if (*(char *)(param_1 + 0x7662) == '\0') {
      if (*(char *)(param_1 + 0x766a) == '\0') {
        *(undefined8 *)piVar1 = *(undefined8 *)(param_1 + 0x7b0);
        *(undefined8 *)(param_1 + 0x10428) = *(undefined8 *)(param_1 + 0x7b8);
        *(undefined1 (*) [16])(param_1 + 0x10430) = *(undefined1 (*) [16])(param_1 + 0x7c0);
        *(undefined8 *)(param_1 + 0x10440) = *(undefined8 *)(param_1 + 2000);
        *(undefined8 *)(param_1 + 0x10448) = *(undefined8 *)(param_1 + 0x7d8);
        uVar12 = *(undefined4 *)(param_1 + 0x7e0);
      }
      else {
        *(undefined8 *)piVar1 = *(undefined8 *)(param_1 + 0xb80);
        *(undefined8 *)(param_1 + 0x10428) = *(undefined8 *)(param_1 + 0xb88);
        *(undefined1 (*) [16])(param_1 + 0x10430) = *(undefined1 (*) [16])(param_1 + 0xb90);
        *(undefined8 *)(param_1 + 0x10440) = *(undefined8 *)(param_1 + 0xba0);
        *(undefined8 *)(param_1 + 0x10448) = *(undefined8 *)(param_1 + 0xba8);
        uVar12 = *(undefined4 *)(param_1 + 0xbb0);
      }
      *(undefined4 *)(param_1 + 0x10450) = uVar12;
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & *(byte *)(param_1 + 0x75a2);
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & *(byte *)(param_1 + 0x75a2);
      bVar8 = *(byte *)(param_1 + 0x75a0);
    }
    else {
      *(undefined8 *)piVar1 = *(undefined8 *)(param_1 + 0xbb4);
      *(undefined8 *)(param_1 + 0x10428) = *(undefined8 *)(param_1 + 0xbbc);
      *(undefined1 (*) [16])(param_1 + 0x10430) = *(undefined1 (*) [16])(param_1 + 0xbc4);
      *(undefined8 *)(param_1 + 0x10440) = *(undefined8 *)(param_1 + 0xbd4);
      *(undefined8 *)(param_1 + 0x10448) = *(undefined8 *)(param_1 + 0xbdc);
      *(undefined4 *)(param_1 + 0x10450) = *(undefined4 *)(param_1 + 0xbe4);
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & *(byte *)(param_1 + 0x75a2);
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & *(byte *)(param_1 + 0x75a2);
      bVar8 = *(byte *)(param_1 + 0x75a1);
    }
    FUN_1800dbc90(*(longlong *)(param_1 + 0xf6d0),(ulonglong)*(uint *)(param_1 + 0x18),piVar1,
                  (uint)bVar8);
    *(undefined1 *)(param_1 + 0xf68b) = 0;
  }
  if ((*(char *)(param_1 + 0xf68c) != '\0') || (lVar32 != param_1)) {
    if (*(uint *)(param_1 + 0xe5c) < 2) {
      local_res10[0] = 0xffffffff;
    }
    else {
      local_res10[0] = *(uint *)(param_1 + 0xe58);
    }
    lVar15 = 0;
    *(uint *)(param_1 + 0x10454) = (uint)(*(int *)(param_1 + 0xe9c) == 1);
    do {
      plVar37 = *(longlong **)(param_1 + 0xf9b0 + lVar15 * 8);
      if (plVar37 != (longlong *)0x0) {
        lVar29 = lVar15 * 0x20;
        if (*(char *)(param_1 + 0x7669) == '\0') {
          if (*(char *)(param_1 + 0x7662) == '\0') {
            cVar7 = (**(code **)(*plVar37 + 0x80))();
            lVar18 = 0xbe8;
            if (cVar7 == '\0') {
              lVar18 = 0xc68;
            }
            puVar31 = (undefined4 *)(lVar18 + lVar29 + param_1);
          }
          else {
            puVar31 = (undefined4 *)(param_1 + 0xde8);
          }
          *(undefined4 *)(param_1 + 0x1045c + lVar29) = *puVar31;
          *(undefined4 *)(param_1 + 0x10460 + lVar29) = puVar31[1];
          *(undefined4 *)(param_1 + 0x10464 + lVar29) = puVar31[2];
          *(undefined4 *)(param_1 + 0x10468 + lVar29) = puVar31[3];
          *(undefined4 *)(param_1 + 0x1046c + lVar29) = puVar31[4];
          *(undefined4 *)(param_1 + 0x10470 + lVar29) = puVar31[5];
          *(undefined4 *)(param_1 + 0x10474 + lVar29) = puVar31[6];
          uVar9 = *(undefined1 *)(puVar31 + 7);
        }
        else {
          if (*(char *)(param_1 + 0x7662) == '\0') {
            cVar7 = (**(code **)(*plVar37 + 0x80))();
            lVar18 = 0xce8;
            if (cVar7 == '\0') {
              lVar18 = 0xd68;
            }
            puVar31 = (undefined4 *)(lVar29 + param_1 + lVar18);
          }
          else {
            puVar31 = (undefined4 *)(param_1 + 0xde8);
          }
          *(undefined4 *)(param_1 + 0x1045c + lVar29) = *puVar31;
          *(undefined4 *)(param_1 + 0x10460 + lVar29) = puVar31[1];
          *(undefined4 *)(param_1 + 0x10464 + lVar29) = puVar31[2];
          *(undefined4 *)(param_1 + 0x10468 + lVar29) = puVar31[3];
          *(undefined4 *)(param_1 + 0x1046c + lVar29) = puVar31[4];
          *(undefined4 *)(param_1 + 0x10470 + lVar29) = puVar31[5];
          *(undefined4 *)(param_1 + 0x10474 + lVar29) = puVar31[6];
          uVar9 = *(undefined1 *)(puVar31 + 7);
        }
        *(undefined1 *)(param_1 + 0x10478 + lVar29) = uVar9;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    lVar15 = *(longlong *)(param_1 + 0xf6d0);
    lVar18 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    lVar29 = FUN_1800dc760((longlong *)(lVar15 + 0xc38 + lVar18),(int *)(param_1 + 0x10454));
    uVar38 = local_res10[0];
    piVar1 = (int *)(param_1 + 0xe80);
    if (((lVar29 != *(longlong *)(lVar18 + 0x6e0 + lVar15)) ||
        (local_res10[0] != *(uint *)(lVar18 + 0x6f4 + lVar15))) ||
       ((piVar1 != (int *)0x0 &&
        ((((*piVar1 != *(int *)(lVar18 + 0x6f8 + lVar15) ||
           (*(int *)(param_1 + 0xe84) != *(int *)(lVar18 + 0x6fc + lVar15))) ||
          (*(int *)(param_1 + 0xe88) != *(int *)(lVar18 + 0x700 + lVar15))) ||
         (*(int *)(param_1 + 0xe8c) != *(int *)(lVar18 + 0x704 + lVar15))))))) {
      plVar37 = *(longlong **)(lVar18 + 0x6b8 + lVar15);
      (**(code **)(*plVar37 + 0x118))(plVar37,lVar29,piVar1,local_res10[0]);
      *(longlong *)(lVar18 + 0x6e0 + lVar15) = lVar29;
      *(uint *)(lVar18 + 0x6f4 + lVar15) = uVar38;
      if (piVar1 != (int *)0x0) {
        *(int *)(lVar18 + 0x6f8 + lVar15) = *piVar1;
        *(undefined4 *)(lVar18 + 0x6fc + lVar15) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(lVar18 + 0x700 + lVar15) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(lVar18 + 0x704 + lVar15) = *(undefined4 *)(param_1 + 0xeb0);
      }
    }
    *(undefined1 *)(param_1 + 0xf68c) = 0;
  }
  iVar10 = 0;
  if ((*(char *)(param_1 + 0xf68d) != '\0') || (lVar32 != param_1)) {
    *(undefined4 *)(param_1 + 0xe3c) = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
    if (*(longlong *)(param_1 + 0xf9d0) != 0) {
      if (*(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4
                  ) != 0x20) {
        iVar10 = (int)((float)((1 << ((byte)*(int *)(&DAT_1800ff000 +
                                                    (ulonglong)
                                                    *(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c
                                                             ) * 4) & 0x1f)) + -1) *
                      *(float *)(param_1 + 0xe90));
      }
      *(int *)(param_1 + 0xe3c) = iVar10;
      *(int *)(param_1 + 0xe14) = iVar10;
    }
    if (*(char *)(param_1 + 0x7662) == '\0') {
      lVar15 = 0xe30;
      if (*(char *)(param_1 + 0x7668) == '\0') {
        lVar15 = 0xe08;
      }
      puVar23 = (uint *)(lVar15 + param_1);
    }
    else {
      puVar23 = &DAT_18010f408;
    }
    *(uint *)(param_1 + 0x1055c) = *puVar23;
    *(uint *)(param_1 + 0x10560) = puVar23[1];
    *(uint *)(param_1 + 0x10564) = puVar23[2];
    *(uint *)(param_1 + 0x10568) = puVar23[3];
    *(uint *)(param_1 + 0x1056c) = puVar23[4];
    *(uint *)(param_1 + 0x10570) = puVar23[5];
    *(uint *)(param_1 + 0x10574) = puVar23[6];
    *(uint *)(param_1 + 0x10578) = puVar23[7];
    *(uint *)(param_1 + 0x1057c) = puVar23[8];
    *(uint *)(param_1 + 0x10580) = puVar23[9];
    FUN_1800dbe08(*(longlong *)(param_1 + 0xf6d0),(ulonglong)*(uint *)(param_1 + 0x18),
                  (uint *)(param_1 + 0x1055c));
    *(undefined1 *)(param_1 + 0xf68d) = 0;
  }
  if ((*(char *)(param_1 + 0xf68e) != '\0') || (lVar32 != param_1)) {
    if ((*(char *)(param_1 + 0x7662) == '\0') &&
       ((*(int *)(param_1 + 0x763c) != 0 || ((*(byte *)(param_1 + 0x7654) & 1) != 0)))) {
      lVar15 = 0xee0;
    }
    else {
      lVar15 = 0xef8;
    }
    pfVar2 = (float *)(param_1 + 0xfd88);
    uVar13 = ((undefined8 *)(lVar15 + param_1))[1];
    *(undefined8 *)pfVar2 = *(undefined8 *)(lVar15 + param_1);
    *(undefined8 *)(param_1 + 0xfd90) = uVar13;
    *(undefined8 *)(param_1 + 0xfd98) = *(undefined8 *)(lVar15 + 0x10 + param_1);
    if (0xafff < *(int *)(param_1 + 0xf7e0)) {
      *pfVar2 = *(float *)(param_1 + 0xf10) + *pfVar2;
      *(float *)(param_1 + 0xfd8c) = *(float *)(param_1 + 0xfd8c) + *(float *)(param_1 + 0xf14);
    }
    if (*(int *)(param_1 + 0x763c) == 0) {
      *(undefined4 *)(param_1 + 0xfd98) = 0;
      *(undefined4 *)(param_1 + 0xfd9c) = 0x3f800000;
    }
    FUN_1800dc004(*(longlong *)(param_1 + 0xf6d0),(ulonglong)*(uint *)(param_1 + 0x18),pfVar2);
    *(undefined1 *)(param_1 + 0xf68e) = 0;
  }
  if ((*(char *)(param_1 + 0x10588) != '\0') || (lVar32 != param_1)) {
    FUN_1800dc3ec(*(longlong *)(param_1 + 0xf6d0),(ulonglong)*(uint *)(param_1 + 0x18),
                  *(int *)(param_1 + 0xfd80),*(longlong *)(param_1 + 0xfcb8),
                  *(longlong *)(param_1 + 0xfcc0),*(longlong *)(param_1 + 0xfcc8),
                  *(longlong *)(param_1 + 0xfcd0));
    *(undefined1 *)(param_1 + 0x10588) = 0;
  }
  uVar38 = *(uint *)(param_1 + 0xf684);
  if ((uVar38 != 0) || (lVar32 != param_1)) {
    if (*(char *)(param_1 + 0x7662) == '\0') {
      uVar26 = 0;
      if (uVar38 != 0) {
        for (; (uVar38 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
        }
      }
      local_res10[0] = uVar38;
      if (uVar38 != 0) {
        pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar26 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar26 & 7));
        do {
          uVar25 = (ulonglong)(uVar26 & 0xff);
          bVar8 = *(byte *)(param_1 + 0x733 + uVar25 * 8);
          uVar38 = *(uint *)(param_1 + 0x734 + uVar25 * 8);
          if (uVar38 < bVar8) {
            fVar40 = (float)bVar8;
          }
          else {
            fVar40 = (float)uVar38;
          }
          lVar15 = uVar25 * 0x34;
          *(float *)(param_1 + 0xdc + lVar15) = fVar40;
          bVar8 = *(byte *)(param_1 + 0x730 + uVar25 * 8);
          bVar20 = *(byte *)(param_1 + 0x731 + uVar25 * 8);
          bVar3 = *(byte *)(param_1 + 0x732 + uVar25 * 8);
          if (bVar8 != 2) {
            fVar40 = 3.4028235e+38;
          }
          *(float *)(param_1 + 0xe0 + lVar15) = fVar40;
          bVar28 = 0;
          if (bVar8 != 2) {
            bVar28 = bVar8;
          }
          if ((bVar20 == 2) || (bVar3 == 2)) {
            *(float *)(param_1 + 0x420 + lVar15) = fVar40;
            *(undefined4 *)(param_1 + 0xb0 + lVar15) = 0x55;
            if ((bVar20 != 2) && (bVar3 != 2)) goto LAB_180037941;
            uVar12 = 0xd5;
          }
          else {
            *(float *)(param_1 + 0x420 + lVar15) = fVar40;
            *(undefined4 *)(param_1 + 0xb0 + lVar15) =
                 *(undefined4 *)
                  (&DAT_1800fe660 +
                  (((ulonglong)bVar3 * 2 | (ulonglong)bVar20) * 2 | (ulonglong)bVar28) * 4);
LAB_180037941:
            uVar12 = *(undefined4 *)
                      (&DAT_1800fe640 +
                      (((ulonglong)bVar3 * 2 | (ulonglong)bVar20) * 2 | (ulonglong)bVar28) * 4);
          }
          *(undefined4 *)(param_1 + 0x3f0 + lVar15) = uVar12;
          puVar23 = (uint *)(lVar15 + 0xfda0 + param_1);
          uVar30 = uVar25 + 0x10;
          if (1 < (byte)(*(char *)(param_1 + 0x7550 + uVar25 * 4) - 5U)) {
            uVar30 = uVar25;
          }
          lVar15 = uVar30 * 0x34;
          puVar17 = (undefined8 *)(lVar15 + 0xb0 + param_1);
          uVar13 = puVar17[1];
          *(undefined8 *)puVar23 = *puVar17;
          *(undefined8 *)(puVar23 + 2) = uVar13;
          puVar17 = (undefined8 *)(lVar15 + 0xc0 + param_1);
          uVar13 = puVar17[1];
          *(undefined8 *)(puVar23 + 4) = *puVar17;
          *(undefined8 *)(puVar23 + 6) = uVar13;
          puVar17 = (undefined8 *)(lVar15 + 0xd0 + param_1);
          uVar13 = puVar17[1];
          *(undefined8 *)(puVar23 + 8) = *puVar17;
          *(undefined8 *)(puVar23 + 10) = uVar13;
          puVar23[0xc] = *(uint *)(lVar15 + 0xe0 + param_1);
          plVar19 = (longlong *)
                    FUN_1800dd870((longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x628),puVar23);
          plVar37 = *(longlong **)(param_1 + 0xfb20 + uVar25 * 8);
          if (plVar19 != plVar37) {
            if (plVar37 != (longlong *)0x0) {
              lVar15 = *(longlong *)(param_1 + 0xf6d8);
              (**(code **)(*plVar37 + 0x38))(plVar37,&local_80);
              lVar15 = FUN_1800dda84((longlong *)(lVar15 + 0x628),(uint *)&local_80);
              if (lVar15 != 0) {
                uVar30 = 0;
                do {
                  if (*(longlong **)(lVar15 + 0x20 + uVar30 * 0x30) == plVar37) {
                    *(undefined1 *)(lVar15 + 0x28 + uVar30 * 0x30) = 0;
                    break;
                  }
                  uVar38 = (int)uVar30 + 1;
                  uVar30 = (ulonglong)uVar38;
                } while (uVar38 < 0x14);
              }
            }
            *(longlong **)(param_1 + 0xfb20 + uVar25 * 8) = plVar19;
          }
          pbVar4 = (byte *)(param_1 + 0xf684 + ((longlong)(int)(uVar26 & 0xff) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar26 & 7));
          uVar26 = 0;
          if (local_res10[0] != 0) {
            for (; (local_res10[0] >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
            }
          }
          if (local_res10[0] == 0) break;
          pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar26 >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar26 & 7));
        } while( true );
      }
      lVar32 = 0;
      lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
      bVar39 = *(longlong *)(lVar15 + 0x790) != *(longlong *)(param_1 + 0xfb20);
      if (bVar39) {
        *(longlong *)(lVar15 + 0x790) = *(longlong *)(param_1 + 0xfb20);
      }
      uVar38 = (uint)bVar39;
      if (*(longlong *)(lVar15 + 0x798) == *(longlong *)(param_1 + 0xfb28)) {
LAB_180037ac6:
        uVar26 = 3;
      }
      else {
        *(longlong *)(lVar15 + 0x798) = *(longlong *)(param_1 + 0xfb28);
        if (bVar39) {
          uVar38 = 2;
          goto LAB_180037ac6;
        }
        lVar32 = 1;
        uVar38 = 1;
        uVar26 = 2;
      }
      uVar11 = uVar38;
      if ((*(longlong *)(lVar15 + 0x7a0) != *(longlong *)(param_1 + 0xfb30)) &&
         (*(longlong *)(lVar15 + 0x7a0) = *(longlong *)(param_1 + 0xfb30), uVar11 = uVar26,
         uVar38 == 0)) {
        lVar32 = 2;
        uVar11 = 1;
      }
      if (*(longlong *)(lVar15 + 0x7a8) != *(longlong *)(param_1 + 0xfb38)) {
        *(longlong *)(lVar15 + 0x7a8) = *(longlong *)(param_1 + 0xfb38);
        if (uVar11 == 0) {
          lVar32 = 3;
          uVar11 = 1;
        }
        else {
          uVar11 = 4 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7b0) != *(longlong *)(param_1 + 0xfb40)) {
        *(longlong *)(lVar15 + 0x7b0) = *(longlong *)(param_1 + 0xfb40);
        if (uVar11 == 0) {
          lVar32 = 4;
          uVar11 = 1;
        }
        else {
          uVar11 = 5 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7b8) != *(longlong *)(param_1 + 0xfb48)) {
        *(longlong *)(lVar15 + 0x7b8) = *(longlong *)(param_1 + 0xfb48);
        if (uVar11 == 0) {
          lVar32 = 5;
          uVar11 = 1;
        }
        else {
          uVar11 = 6 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7c0) != *(longlong *)(param_1 + 0xfb50)) {
        *(longlong *)(lVar15 + 0x7c0) = *(longlong *)(param_1 + 0xfb50);
        if (uVar11 == 0) {
          lVar32 = 6;
          uVar11 = 1;
        }
        else {
          uVar11 = 7 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7c8) != *(longlong *)(param_1 + 0xfb58)) {
        *(longlong *)(lVar15 + 0x7c8) = *(longlong *)(param_1 + 0xfb58);
        if (uVar11 == 0) {
          lVar32 = 7;
          uVar11 = 1;
        }
        else {
          uVar11 = 8 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 2000) != *(longlong *)(param_1 + 0xfb60)) {
        *(longlong *)(lVar15 + 2000) = *(longlong *)(param_1 + 0xfb60);
        if (uVar11 == 0) {
          lVar32 = 8;
          uVar11 = 1;
        }
        else {
          uVar11 = 9 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7d8) != *(longlong *)(param_1 + 0xfb68)) {
        *(longlong *)(lVar15 + 0x7d8) = *(longlong *)(param_1 + 0xfb68);
        if (uVar11 == 0) {
          lVar32 = 9;
          uVar11 = 1;
        }
        else {
          uVar11 = 10 - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7e0) != *(longlong *)(param_1 + 0xfb70)) {
        *(longlong *)(lVar15 + 0x7e0) = *(longlong *)(param_1 + 0xfb70);
        if (uVar11 == 0) {
          lVar32 = 10;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xb - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7e8) != *(longlong *)(param_1 + 0xfb78)) {
        *(longlong *)(lVar15 + 0x7e8) = *(longlong *)(param_1 + 0xfb78);
        if (uVar11 == 0) {
          lVar32 = 0xb;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xc - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7f0) != *(longlong *)(param_1 + 0xfb80)) {
        *(longlong *)(lVar15 + 0x7f0) = *(longlong *)(param_1 + 0xfb80);
        if (uVar11 == 0) {
          lVar32 = 0xc;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xd - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x7f8) != *(longlong *)(param_1 + 0xfb88)) {
        *(longlong *)(lVar15 + 0x7f8) = *(longlong *)(param_1 + 0xfb88);
        if (uVar11 == 0) {
          lVar32 = 0xd;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xe - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x800) != *(longlong *)(param_1 + 0xfb90)) {
        *(longlong *)(lVar15 + 0x800) = *(longlong *)(param_1 + 0xfb90);
        if (uVar11 == 0) {
          lVar32 = 0xe;
          uVar11 = 1;
        }
        else {
          uVar11 = 0xf - (int)lVar32;
        }
      }
      if (*(longlong *)(lVar15 + 0x808) == *(longlong *)(param_1 + 0xfb98)) {
LAB_180037d5a:
        if (uVar11 == 0) goto LAB_180037dcb;
      }
      else {
        *(longlong *)(lVar15 + 0x808) = *(longlong *)(param_1 + 0xfb98);
        if (uVar11 != 0) {
          uVar11 = 0x10 - (int)lVar32;
          goto LAB_180037d5a;
        }
        lVar32 = 0xf;
        uVar11 = 1;
      }
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x50))
                (*(longlong **)(lVar15 + 0x6b8),lVar32,uVar11,lVar15 + (lVar32 + 0xf2) * 8);
    }
    else if (*(longlong *)(param_1 + 0xf9a8) != 0) {
      lVar32 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      lVar15 = *(longlong *)(param_1 + 0xf6d0);
      plVar37 = (longlong *)(lVar15 + 0x790 + lVar32);
      if (*plVar37 != *(longlong *)(param_1 + 0xf720)) {
        *plVar37 = *(longlong *)(param_1 + 0xf720);
        plVar37 = *(longlong **)(lVar32 + 0x6b8 + lVar15);
        (**(code **)(*plVar37 + 0x50))(plVar37,0,1);
      }
      *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) & 0xfffffffe;
    }
  }
LAB_180037dcb:
  if ((*(uint *)(param_1 + 0xf6bc) == 0) && (lVar15 = local_res18, local_res18 == param_1))
  goto LAB_180038069;
  local_res10[0] = *(uint *)(param_1 + 0xf6bc) & 0xf;
  uVar38 = 0;
  if (local_res10[0] != 0) {
    for (; (local_res10[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
    }
  }
  if (local_res10[0] != 0) {
    pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar38 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
    do {
      uVar25 = (ulonglong)(uVar38 & 0xff);
      bVar8 = *(byte *)(param_1 + 0x81b + uVar25 * 8);
      uVar38 = *(uint *)(param_1 + 0x81c + uVar25 * 8);
      if (uVar38 < bVar8) {
        fVar40 = (float)bVar8;
      }
      else {
        fVar40 = (float)uVar38;
      }
      lVar15 = uVar25 * 0x34;
      *(float *)(param_1 + 0x86c + lVar15) = fVar40;
      bVar8 = *(byte *)(param_1 + 0x819 + uVar25 * 8);
      bVar20 = *(byte *)(param_1 + 0x818 + uVar25 * 8);
      bVar3 = *(byte *)(param_1 + 0x81a + uVar25 * 8);
      *(undefined4 *)(param_1 + 0x870 + lVar15) = 0x7f7fffff;
      if ((bVar8 == 2) || (bVar3 == 2)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)
                  (&DAT_1800fe660 +
                  (((ulonglong)bVar3 * 2 | (ulonglong)bVar8) * 2 | (ulonglong)bVar20) * 4);
      }
      *(undefined4 *)(param_1 + 0x840 + lVar15) = uVar12;
      puVar17 = (undefined8 *)(lVar15 + 0x840 + param_1);
      uVar13 = puVar17[1];
      uVar38 = *(uint *)(lVar15 + 0x870 + param_1);
      puVar23 = (uint *)(param_1 + 0x100e0 + lVar15);
      puVar22 = (undefined8 *)(lVar15 + 0x850 + param_1);
      uVar14 = *puVar22;
      uVar5 = puVar22[1];
      *(undefined8 *)puVar23 = *puVar17;
      *(undefined8 *)(puVar23 + 2) = uVar13;
      puVar17 = (undefined8 *)(lVar15 + 0x860 + param_1);
      uVar13 = *puVar17;
      uVar6 = puVar17[1];
      *(undefined8 *)(puVar23 + 4) = uVar14;
      *(undefined8 *)(puVar23 + 6) = uVar5;
      *(undefined8 *)(puVar23 + 8) = uVar13;
      *(undefined8 *)(puVar23 + 10) = uVar6;
      puVar23[0xc] = uVar38;
      plVar19 = (longlong *)
                FUN_1800dd870((longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x628),puVar23);
      plVar37 = *(longlong **)(param_1 + 0xfc88 + uVar25 * 8);
      if (plVar19 != plVar37) {
        if (plVar37 != (longlong *)0x0) {
          lVar15 = *(longlong *)(param_1 + 0xf6d8);
          (**(code **)(*plVar37 + 0x38))(plVar37,&local_80);
          lVar15 = FUN_1800dda84((longlong *)(lVar15 + 0x628),(uint *)&local_80);
          if (lVar15 != 0) {
            uVar30 = 0;
            do {
              if (*(longlong **)(lVar15 + 0x20 + uVar30 * 0x30) == plVar37) {
                *(undefined1 *)(lVar15 + 0x28 + uVar30 * 0x30) = 0;
                break;
              }
              uVar38 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar38;
            } while (uVar38 < 0x14);
          }
        }
        *(longlong **)(param_1 + 0xfc88 + uVar25 * 8) = plVar19;
      }
      uVar38 = 0;
      if (local_res10[0] != 0) {
        for (; (local_res10[0] >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
        }
      }
      if (local_res10[0] == 0) break;
      pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar38 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar38 & 7));
    } while( true );
  }
  lVar15 = local_res18;
  uVar38 = 0;
  lVar32 = *(longlong *)(param_1 + 0xf6d0);
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  bVar39 = *(longlong *)(uVar25 + 0x710 + lVar32) != *(longlong *)(param_1 + 0xfc88);
  if (bVar39) {
    *(longlong *)(uVar25 + 0x710 + lVar32) = *(longlong *)(param_1 + 0xfc88);
  }
  uVar26 = (uint)bVar39;
  if (*(longlong *)(uVar25 + 0x718 + lVar32) == *(longlong *)(param_1 + 0xfc90)) {
LAB_180037fc7:
    uVar11 = 3;
  }
  else {
    *(longlong *)(uVar25 + 0x718 + lVar32) = *(longlong *)(param_1 + 0xfc90);
    if (bVar39) {
      uVar26 = 2;
      goto LAB_180037fc7;
    }
    uVar38 = 1;
    uVar26 = 1;
    uVar11 = 2;
  }
  uVar34 = uVar26;
  if ((*(longlong *)(uVar25 + 0x720 + lVar32) != *(longlong *)(param_1 + 0xfc98)) &&
     (*(longlong *)(uVar25 + 0x720 + lVar32) = *(longlong *)(param_1 + 0xfc98), uVar34 = uVar11,
     uVar26 == 0)) {
    uVar38 = 2;
    uVar34 = 1;
  }
  if (*(longlong *)(uVar25 + 0x728 + lVar32) == *(longlong *)(param_1 + 0xfca0)) {
LAB_18003802b:
    if (uVar34 != 0) goto LAB_180038030;
  }
  else {
    *(longlong *)(uVar25 + 0x728 + lVar32) = *(longlong *)(param_1 + 0xfca0);
    if (uVar34 != 0) {
      uVar34 = 4 - uVar38;
      goto LAB_18003802b;
    }
    uVar38 = 3;
    uVar34 = 1;
LAB_180038030:
    plVar37 = *(longlong **)(uVar25 + 0x6b8 + lVar32);
    (**(code **)(*plVar37 + 0xd0))
              (plVar37,uVar38,uVar34,((ulonglong)uVar38 << 3 | uVar25) + 0x710 + lVar32);
  }
  *(undefined4 *)(param_1 + 0xf6bc) = 0;
LAB_180038069:
  lVar32 = local_res18;
  uVar25 = 0;
  if ((*(char *)(param_1 + 0xf68f) != '\0') || (lVar15 != param_1)) {
    lVar15 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + *(longlong *)(param_1 + 0xf6d0);
    uVar30 = uVar25;
    uVar35 = uVar25;
    do {
      iVar10 = (int)uVar25;
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar35 = uVar25;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 1);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 1U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 1U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 2);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 2U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 2U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 3);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 3U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 3U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 4);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 4U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 4U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 5);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 5U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 5U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 6);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 6U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 6U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 7);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 7U);
      lVar29 = *(longlong *)(param_1 + 0xfcd8 + uVar25 * 8);
      if (((*(longlong *)(lVar15 + 0xa70 + uVar25 * 8) != lVar29) ||
          (*(int *)(lVar15 + 0xaf0 + uVar25 * 4) != *(int *)(param_1 + 0xfe8 + uVar25 * 4))) ||
         (*(int *)(lVar15 + 0xb30 + uVar25 * 4) != *(int *)(param_1 + 0x102c + uVar25 * 4))) {
        *(longlong *)(lVar15 + 0xa70 + uVar25 * 8) = lVar29;
        *(undefined4 *)(lVar15 + 0xaf0 + uVar25 * 4) = *(undefined4 *)(param_1 + 0xfe8 + uVar25 * 4)
        ;
        *(undefined4 *)(lVar15 + 0xb30 + uVar25 * 4) =
             *(undefined4 *)(param_1 + 0x102c + uVar25 * 4);
        if ((int)uVar30 == 0) {
          uVar35 = (ulonglong)(iVar10 + 7U);
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)((iVar10 - (int)uVar35) + 8);
        }
      }
      uVar25 = (ulonglong)(iVar10 + 8U);
    } while (iVar10 + 8U < 0x10);
    if ((int)uVar30 != 0) {
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x90))
                (*(longlong **)(lVar15 + 0x6b8),uVar35,uVar30,lVar15 + (uVar35 + 0x14e) * 8,
                 lVar15 + 0xaf0 + uVar35 * 4,lVar15 + 0xb30 + uVar35 * 4);
    }
    *(undefined1 *)(param_1 + 0xf68f) = 0;
    lVar15 = lVar32;
  }
  if ((*(char *)(param_1 + 0xf690) != '\0') || (lVar15 != param_1)) {
    lVar15 = *(longlong *)(param_1 + 0xfd58);
    if (lVar15 == *(longlong *)(param_1 + 0xf710)) {
      iVar10 = 0x2a;
    }
    else {
      iVar10 = *(int *)(param_1 + 0xfd70);
    }
    lVar29 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    lVar32 = *(longlong *)(param_1 + 0xf6d0);
    if (((lVar15 != *(longlong *)(lVar29 + 0xb70 + lVar32)) ||
        (iVar10 != *(int *)(lVar29 + 0xb78 + lVar32))) || (*(int *)(lVar29 + 0xb7c + lVar32) != 0))
    {
      *(longlong *)(lVar29 + 0xb70 + lVar32) = lVar15;
      *(int *)(lVar29 + 0xb78 + lVar32) = iVar10;
      *(undefined4 *)(lVar29 + 0xb7c + lVar32) = 0;
      plVar37 = *(longlong **)(lVar29 + 0x6b8 + lVar32);
      (**(code **)(*plVar37 + 0x98))(plVar37,lVar15,iVar10,0);
    }
    *(undefined1 *)(param_1 + 0xf690) = 0;
  }
  plVar37 = *(longlong **)(param_1 + 0xf9b0);
  if (plVar37 != (longlong *)0x0) {
    local_98 = (undefined8 *)0x0;
    bVar20 = (byte)*(int *)(param_1 + 0xf9d8);
    bVar8 = bVar20 & 0x1f;
    uVar38 = *(uint *)((longlong)plVar37 + 0x24) >> bVar8;
    if (*(uint *)((longlong)plVar37 + 0x24) >> bVar8 == 0) {
      uVar38 = 1;
    }
    bVar20 = bVar20 & 0x1f;
    uVar26 = *(uint *)(plVar37 + 5) >> bVar20;
    if (*(uint *)(plVar37 + 5) >> bVar20 == 0) {
      uVar26 = 1;
    }
    local_90 = CONCAT44(uVar26,uVar38);
    (**(code **)(*plVar37 + 0x18))
              (plVar37,*(int *)(param_1 + 0xf9e8) * *(int *)((longlong)plVar37 + 0x3c) +
                       *(int *)(param_1 + 0xf9d8),&local_98);
  }
  plVar37 = *(longlong **)(param_1 + 0xf9b8);
  if (plVar37 != (longlong *)0x0) {
    local_98 = (undefined8 *)0x0;
    bVar20 = (byte)*(int *)(param_1 + 0xf9dc);
    bVar8 = bVar20 & 0x1f;
    uVar38 = *(uint *)((longlong)plVar37 + 0x24) >> bVar8;
    if (*(uint *)((longlong)plVar37 + 0x24) >> bVar8 == 0) {
      uVar38 = 1;
    }
    bVar20 = bVar20 & 0x1f;
    uVar26 = *(uint *)(plVar37 + 5) >> bVar20;
    if (*(uint *)(plVar37 + 5) >> bVar20 == 0) {
      uVar26 = 1;
    }
    local_90 = CONCAT44(uVar26,uVar38);
    (**(code **)(*plVar37 + 0x18))
              (plVar37,*(int *)(param_1 + 0xf9ec) * *(int *)((longlong)plVar37 + 0x3c) +
                       *(int *)(param_1 + 0xf9dc),&local_98);
  }
  plVar37 = *(longlong **)(param_1 + 0xf9c0);
  if (plVar37 != (longlong *)0x0) {
    local_98 = (undefined8 *)0x0;
    bVar20 = (byte)*(int *)(param_1 + 0xf9e0);
    bVar8 = bVar20 & 0x1f;
    uVar38 = *(uint *)((longlong)plVar37 + 0x24) >> bVar8;
    if (*(uint *)((longlong)plVar37 + 0x24) >> bVar8 == 0) {
      uVar38 = 1;
    }
    bVar20 = bVar20 & 0x1f;
    uVar26 = *(uint *)(plVar37 + 5) >> bVar20;
    if (*(uint *)(plVar37 + 5) >> bVar20 == 0) {
      uVar26 = 1;
    }
    local_90 = CONCAT44(uVar26,uVar38);
    (**(code **)(*plVar37 + 0x18))
              (plVar37,*(int *)(param_1 + 0xf9f0) * *(int *)((longlong)plVar37 + 0x3c) +
                       *(int *)(param_1 + 0xf9e0),&local_98);
  }
  plVar37 = *(longlong **)(param_1 + 0xf9c8);
  if (plVar37 != (longlong *)0x0) {
    local_98 = (undefined8 *)0x0;
    bVar20 = (byte)*(int *)(param_1 + 0xf9e4);
    bVar8 = bVar20 & 0x1f;
    uVar38 = *(uint *)((longlong)plVar37 + 0x24) >> bVar8;
    if (*(uint *)((longlong)plVar37 + 0x24) >> bVar8 == 0) {
      uVar38 = 1;
    }
    bVar20 = bVar20 & 0x1f;
    uVar26 = *(uint *)(plVar37 + 5) >> bVar20;
    if (*(uint *)(plVar37 + 5) >> bVar20 == 0) {
      uVar26 = 1;
    }
    local_90 = CONCAT44(uVar26,uVar38);
    (**(code **)(*plVar37 + 0x18))
              (plVar37,*(int *)(param_1 + 0xf9f4) * *(int *)((longlong)plVar37 + 0x3c) +
                       *(int *)(param_1 + 0xf9e4),&local_98);
  }
  plVar37 = *(longlong **)(param_1 + 0xf9d0);
  lVar15 = 0xbb4;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar15 = 0x7b0;
  }
  if ((plVar37 != (longlong *)0x0) && (*(int *)(lVar15 + param_1) != 0)) {
    lVar15 = 3000;
    if (*(char *)(param_1 + 0x7662) == '\0') {
      lVar15 = 0x7b4;
    }
    if (*(int *)(lVar15 + param_1) != 0) {
      local_98 = (undefined8 *)0x0;
      bVar20 = (byte)*(int *)(param_1 + 0xf9f8);
      bVar8 = bVar20 & 0x1f;
      uVar38 = *(uint *)((longlong)plVar37 + 0x24) >> bVar8;
      if (*(uint *)((longlong)plVar37 + 0x24) >> bVar8 == 0) {
        uVar38 = 1;
      }
      bVar20 = bVar20 & 0x1f;
      uVar26 = *(uint *)(plVar37 + 5) >> bVar20;
      if (*(uint *)(plVar37 + 5) >> bVar20 == 0) {
        uVar26 = 1;
      }
      local_90 = CONCAT44(uVar26,uVar38);
      (**(code **)(*plVar37 + 0x18))
                (plVar37,*(int *)((longlong)plVar37 + 0x3c) * *(int *)(param_1 + 0xf9fc) +
                         *(int *)(param_1 + 0xf9f8),&local_98);
    }
  }
  return (undefined1)local_res8[0];
}

