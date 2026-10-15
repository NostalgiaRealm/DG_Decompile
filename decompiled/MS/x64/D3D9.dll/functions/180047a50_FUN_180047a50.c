/*
 * FUN_180047a50 at 180047a50
 * byte __fastcall FUN_180047a50(longlong param_1)
 * Address ranges: 180047a50-180048caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180047a50(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  undefined4 *puVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  uint local_res8 [2];
  ulonglong *local_res10;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  longlong local_138;
  int aiStack_130 [62];
  
  uVar15 = 0;
  if (*(uint *)(param_1 + 0xf70) != 0) {
    for (; (*(uint *)(param_1 + 0xf70) >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
    }
  }
  local_res8[0] = 0;
  FUN_180044340(param_1,0);
  lVar10 = *(longlong *)(param_1 + 0xf6e0);
  if (0xfff < *(uint *)(lVar10 + 0x1a00)) {
    iVar20 = 0x20;
    do {
      iVar30 = *(int *)(lVar10 + 0x19fc);
      fVar28 = FUN_1800fa8b0();
      uVar16 = 0;
      uVar11 = (longlong)(fVar28 * (float)(iVar30 - 1)) & 0xffffffff;
      plVar12 = *(longlong **)(*(longlong *)(lVar10 + 0x19f0) + 0x10 + uVar11 * 0x18);
      local_res10 = (ulonglong *)(*(longlong *)(lVar10 + 0x19f0) + 8 + uVar11 * 0x18);
      uVar14 = 0;
      if ((int)plVar12[1] != 0) {
        do {
          FUN_1800ea030(*(longlong *)(lVar10 + 0x19d8),
                        *(ulonglong *)(*plVar12 + 0xa0 + uVar16 * 0xa8),(undefined *)0x0,'\x01');
          (**(code **)(**(longlong **)(*plVar12 + 0xa0 + uVar16 * 0xa8) + 0x10))();
          uVar14 = *(uint *)(plVar12 + 1);
          uVar13 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar13;
        } while (uVar13 < uVar14);
      }
      *(int *)(lVar10 + 0x1a00) = *(int *)(lVar10 + 0x1a00) - uVar14;
      FUN_1800e79ec((longlong *)(lVar10 + 0x19f0),local_res10);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  local_res10 = *(ulonglong **)(lVar10 + 0xb88);
  *(longlong *)(lVar10 + 0xb88) = param_1;
  bVar21 = (ulonglong *)param_1 != local_res10;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0x684);
  *piVar1 = *piVar1 + 1;
  if ((ulonglong *)param_1 != local_res10) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    FUN_1800ea3f8(*(longlong *)(lVar10 + 0xb18),*(ulonglong *)(param_1 + 0xf8e8),
                  *(longlong *)(lVar10 + 0xb10),lVar10,*(undefined8 *)(lVar10 + 0xb78));
    lVar10 = *(longlong *)(param_1 + 0xf8e8);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    if (lVar10 != *(longlong *)(lVar3 + 0x20)) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if (((iVar20 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
         (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar14 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar3 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0xf0))();
      *(undefined1 *)(lVar3 + 0x674) = 1;
      *(longlong *)(lVar3 + 0x20) = lVar10;
      FUN_1800fbea0((undefined1 *)(lVar3 + 0x68),0,0x100);
    }
  }
  bVar5 = FUN_1800449a0(param_1,uVar15,0,bVar21);
  if ((*(byte *)(param_1 + 0xf694) & 1) != 0) {
    FUN_18002d088((float *)(param_1 + 0x7670),(undefined8 *)(param_1 + 0xb670),'\x01');
    puVar17 = (undefined8 *)(param_1 + 0xb670);
    puVar19 = (undefined4 *)(param_1 + 0x6a60);
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar19 = *(undefined4 *)puVar17;
      puVar17 = (undefined8 *)((longlong)puVar17 + 4);
      puVar19 = puVar19 + 1;
    }
    *(uint *)(param_1 + 0xf694) = *(uint *)(param_1 + 0xf694) & 0xfffffffe;
  }
  *(byte *)(param_1 + 0x10193) = *(byte *)(param_1 + 0x10193) | bVar21;
  bVar22 = true;
  if (((*(byte *)(param_1 + 0xf691) != 0) || (*(char *)(param_1 + 0x10193) != '\0')) &&
     (local_res8[0] =
           *(uint *)(param_1 + 0x10158) | *(uint *)(param_1 + 0x10130) |
           *(uint *)(param_1 + 0x10108), (local_res8[0] & 1) != 0)) {
    lVar10 = FUN_180043440(param_1,*(longlong *)(param_1 + 0xf728),(undefined8 *)(param_1 + 0x6930),
                           0xc20,*(byte *)(param_1 + 0xf691));
    bVar22 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf988) = lVar10;
    *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) & lVar10 == 0;
    *(byte *)(param_1 + 0x10193) = *(byte *)(param_1 + 0x10193) & lVar10 == 0;
    if ((lVar10 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar10 != *(longlong *)(lVar3 + 0x68))) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if ((iVar20 == 0) &&
         ((*(longlong *)(lVar3 + 0xb10) != 0 && (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)))) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),0,lVar10);
      *(longlong *)(lVar3 + 0x68) = lVar10;
    }
  }
  if ((ulonglong *)param_1 != local_res10) {
    lVar10 = *(longlong *)(param_1 + 0xf990);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    if (lVar10 != *(longlong *)(lVar3 + 0x70)) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if (((iVar20 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
         (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),1,lVar10);
      *(longlong *)(lVar3 + 0x70) = lVar10;
    }
  }
  uVar11 = (ulonglong)bVar21;
  bVar6 = FUN_180044ed0(param_1,bVar21);
  *(byte *)(param_1 + 0x10194) = *(byte *)(param_1 + 0x10194) | bVar21;
  bVar23 = true;
  if (((*(byte *)(param_1 + 0xf6c3) != 0) || (*(char *)(param_1 + 0x10194) != '\0')) &&
     (local_res8[0] = *(uint *)(param_1 + 0x10158), (local_res8[0] >> 3 & 1) != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0xf740);
    lVar10 = FUN_180043440(param_1,uVar11,(undefined8 *)(param_1 + 0x6460),0x4d0,
                           *(byte *)(param_1 + 0xf6c3));
    bVar23 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf9b8) = lVar10;
    *(byte *)(param_1 + 0xf6c3) = *(byte *)(param_1 + 0xf6c3) & lVar10 == 0;
    *(byte *)(param_1 + 0x10194) = *(byte *)(param_1 + 0x10194) & lVar10 == 0;
    if ((lVar10 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar10 != *(longlong *)(lVar3 + 0x90))) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if ((iVar20 == 0) &&
         ((*(longlong *)(lVar3 + 0xb10) != 0 && (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)))) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      uVar11 = 5;
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),5,lVar10);
      *(longlong *)(lVar3 + 0x90) = lVar10;
    }
  }
  *(byte *)(param_1 + 0x10196) = *(byte *)(param_1 + 0x10196) | bVar21;
  bVar24 = true;
  if (((*(byte *)(param_1 + 0xf6b6) != 0) || (*(char *)(param_1 + 0x10196) != '\0')) &&
     ((*(byte *)(param_1 + 0x10158) & 0x10) != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0xf7f8);
    lVar10 = FUN_180043440(param_1,uVar11,(undefined8 *)(param_1 + 0x54a0),0xec0,
                           *(byte *)(param_1 + 0xf6b6));
    bVar24 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf9c0) = lVar10;
    *(byte *)(param_1 + 0xf6b6) = *(byte *)(param_1 + 0xf6b6) & lVar10 == 0;
    *(byte *)(param_1 + 0x10196) = *(byte *)(param_1 + 0x10196) & lVar10 == 0;
    if ((lVar10 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar10 != *(longlong *)(lVar3 + 0x98))) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if ((iVar20 == 0) &&
         ((*(longlong *)(lVar3 + 0xb10) != 0 && (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)))) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      uVar11 = 6;
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),6,lVar10);
      *(longlong *)(lVar3 + 0x98) = lVar10;
    }
  }
  *(byte *)(param_1 + 0x10197) = *(byte *)(param_1 + 0x10197) | bVar21;
  bVar25 = true;
  if (((*(byte *)(param_1 + 0xf6b4) != 0) || (*(char *)(param_1 + 0x10197) != '\0')) &&
     (((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) & 8) != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0xf7e8);
    lVar10 = FUN_180043440(param_1,uVar11,(undefined8 *)(param_1 + 0x51b0),0x2f0,
                           *(byte *)(param_1 + 0xf6b4));
    bVar25 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf9a0) = lVar10;
    *(byte *)(param_1 + 0xf6b4) = *(byte *)(param_1 + 0xf6b4) & lVar10 == 0;
    *(byte *)(param_1 + 0x10197) = *(byte *)(param_1 + 0x10197) & lVar10 == 0;
    if ((lVar10 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar10 != *(longlong *)(lVar3 + 0x80))) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if ((iVar20 == 0) &&
         ((*(longlong *)(lVar3 + 0xb10) != 0 && (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)))) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      uVar11 = 3;
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),3,lVar10);
      *(longlong *)(lVar3 + 0x80) = lVar10;
    }
  }
  *(byte *)(param_1 + 0x10198) = *(byte *)(param_1 + 0x10198) | bVar21;
  bVar26 = true;
  if (((*(byte *)(param_1 + 0xf6b5) != 0) || (*(char *)(param_1 + 0x10198) != '\0')) &&
     (((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) & 0x10) != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0xf7f0);
    lVar10 = FUN_180043440(param_1,uVar11,(undefined8 *)(param_1 + 0x1070),*(uint *)(param_1 + 0xa4)
                           ,*(byte *)(param_1 + 0xf6b5));
    bVar26 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf9a8) = lVar10;
    *(byte *)(param_1 + 0xf6b5) = *(byte *)(param_1 + 0xf6b5) & lVar10 == 0;
    *(byte *)(param_1 + 0x10198) = *(byte *)(param_1 + 0x10198) & lVar10 == 0;
    if (lVar10 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) == '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar10 != *(longlong *)(lVar3 + 0x88)) {
          iVar20 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar20 + 1;
          if (((iVar20 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
              uVar15 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar3 + 0xba8));
          }
          uVar11 = 4;
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))
                    (*(longlong **)(lVar3 + 0x688),4,lVar10);
          *(longlong *)(lVar3 + 0x88) = lVar10;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1018e) = 1;
      }
    }
  }
  *(byte *)(param_1 + 0x10199) = *(byte *)(param_1 + 0x10199) | bVar21;
  bVar27 = true;
  if (((*(byte *)(param_1 + 0xf6b7) != 0) || (*(char *)(param_1 + 0x10199) != '\0')) &&
     ((*(byte *)(param_1 + 0x10158) & 0x20) != 0)) {
    uVar11 = *(ulonglong *)(param_1 + 0xf800);
    lVar10 = FUN_180043440(param_1,uVar11,(undefined8 *)(param_1 + 0x6360),0x100,
                           *(byte *)(param_1 + 0xf6b7));
    bVar27 = lVar10 != 0;
    *(longlong *)(param_1 + 0xf9c8) = lVar10;
    *(byte *)(param_1 + 0xf6b7) = *(byte *)(param_1 + 0xf6b7) & lVar10 == 0;
    *(byte *)(param_1 + 0x10199) = *(byte *)(param_1 + 0x10199) & lVar10 == 0;
    if ((lVar10 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
       lVar10 != *(longlong *)(lVar3 + 0xa0))) {
      iVar20 = *(int *)(lVar3 + 0x67c);
      *(int *)(lVar3 + 0x67c) = iVar20 + 1;
      if ((iVar20 == 0) &&
         ((*(longlong *)(lVar3 + 0xb10) != 0 && (uVar11 = 0, *(int *)(lVar3 + 0xba8) != 0)))) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar11 * 8))();
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar3 + 0xba8));
      }
      uVar11 = 7;
      (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x130))(*(longlong **)(lVar3 + 0x688),7,lVar10);
      *(longlong *)(lVar3 + 0xa0) = lVar10;
    }
  }
  bVar7 = FUN_180045070(param_1,(char)uVar11,bVar21);
  bVar7 = bVar7 & bVar27 & bVar5 & bVar22 & bVar6 & bVar23 & bVar24 & bVar25 & bVar26;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    uVar11 = (ulonglong)bVar21;
    uVar9 = FUN_1800453f0(param_1,bVar21);
    bVar7 = (byte)uVar9 & bVar7;
  }
  FUN_180045ac0(param_1,uVar11,bVar21);
  FUN_1800465b0(param_1,bVar21);
  FUN_1800469a0(param_1,bVar21);
  FUN_180046c60(param_1,bVar21);
  uVar11 = 0;
  uVar15 = 0;
  iVar20 = 0;
  if (*(char *)(param_1 + 0xf68d) != '\0') {
    *(undefined4 *)(param_1 + 0xe3c) = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
    if (*(longlong *)(param_1 + 0xfce0) != 0) {
      if (*(int *)(&DAT_1800ff000 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xfce0) + 0x2c) * 4
                  ) != 0x20) {
        iVar20 = (int)((float)((1 << ((byte)*(int *)(&DAT_1800ff000 +
                                                    (ulonglong)
                                                    *(uint *)(*(longlong *)(param_1 + 0xfce0) + 0x2c
                                                             ) * 4) & 0x1f)) + -1) *
                      *(float *)(param_1 + 0xe90));
      }
      *(int *)(param_1 + 0xe3c) = iVar20;
      *(int *)(param_1 + 0xe14) = iVar20;
    }
    if (*(char *)(param_1 + 0x7662) == '\0') {
      lVar10 = 0xe30;
      if (*(char *)(param_1 + 0x7668) == '\0') {
        lVar10 = 0xe08;
      }
      plVar12 = (longlong *)(lVar10 + param_1);
    }
    else {
      plVar12 = (longlong *)&DAT_18010f408;
    }
    iVar20 = *(int *)((longlong)plVar12 + 0x1c);
    iVar30 = *(int *)(param_1 + 0xfca8);
    local_158 = plVar12[2];
    local_168 = *plVar12;
    uStack_160 = plVar12[1];
    local_150 = (undefined4)plVar12[3];
    local_14c = (undefined4)plVar12[4];
    local_148 = *(undefined4 *)((longlong)plVar12 + 0x24);
    *(int *)(param_1 + 0xfca8) = iVar20;
    *(byte *)(param_1 + 0xf6c1) = *(byte *)(param_1 + 0xf6c1) | iVar30 != iVar20;
    local_144 = 0;
    uVar9 = FUN_18004bf30((longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x19a8),(uint *)&local_168)
    ;
    *(undefined8 *)(param_1 + 0xf930) = uVar9;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    *(undefined1 *)(param_1 + 0xf68d) = 0;
  }
  if ((*(char *)(param_1 + 0xf68e) != '\0') || ((ulonglong *)param_1 != local_res10)) {
    if ((*(char *)(param_1 + 0x7662) == '\0') &&
       ((*(int *)(param_1 + 0x763c) != 0 || ((*(byte *)(param_1 + 0x7654) & 1) != 0)))) {
      local_168 = *(longlong *)(param_1 + 0xee0);
      uStack_160 = *(longlong *)(param_1 + 0xee8);
      local_158 = *(longlong *)(param_1 + 0xef0);
LAB_18004857b:
      fVar28 = (float)local_168 + *(float *)(param_1 + 0xf10);
      fVar29 = local_168._4_4_ + *(float *)(param_1 + 0xf14);
      local_168 = CONCAT44(fVar29,fVar28);
      iVar20 = (int)uStack_160;
      iVar30 = uStack_160._4_4_;
    }
    else {
      local_158 = *(longlong *)(param_1 + 0xf08);
      fVar28 = *(float *)(param_1 + 0xef8);
      fVar29 = *(float *)(param_1 + 0xefc);
      local_168 = *(longlong *)(param_1 + 0xef8);
      iVar20 = *(int *)(param_1 + 0xf00);
      iVar30 = *(int *)(param_1 + 0xf04);
      uStack_160 = *(longlong *)(param_1 + 0xf00);
      if (*(char *)(param_1 + 0x7662) == '\0') goto LAB_18004857b;
    }
    if (*(int *)(param_1 + 0x763c) == 0) {
      local_158 = 0x3f80000000000000;
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    if (((((*(float *)(lVar10 + 0x520) != fVar28) || (*(float *)(lVar10 + 0x524) != fVar29)) ||
         (*(int *)(lVar10 + 0x528) != iVar20)) ||
        ((*(int *)(lVar10 + 0x52c) != iVar30 || (*(int *)(lVar10 + 0x530) != (int)local_158)))) ||
       (*(int *)(lVar10 + 0x534) != local_158._4_4_)) {
      *(float *)(lVar10 + 0x520) = fVar28;
      *(float *)(lVar10 + 0x524) = fVar29;
      *(int *)(lVar10 + 0x528) = iVar20;
      *(int *)(lVar10 + 0x52c) = iVar30;
      *(longlong *)(lVar10 + 0x530) = local_158;
      iVar20 = *(int *)(lVar10 + 0x67c);
      *(int *)(lVar10 + 0x67c) = iVar20 + 1;
      if (((iVar20 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
         (uVar16 = uVar11, *(int *)(lVar10 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar16 * 8))();
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar10 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xa8))
                (*(longlong **)(lVar10 + 0x688),1,&local_168);
      *(undefined1 *)(lVar10 + 0x674) = 1;
    }
    *(undefined1 *)(param_1 + 0xf68e) = 0;
  }
  puVar18 = local_res10;
  FUN_18004dc24(param_1,bVar21);
  if (*(char *)(param_1 + 0x10189) == '\0') {
LAB_180048727:
    if ((ulonglong *)param_1 == puVar18) goto LAB_180048803;
  }
  else {
    lVar10 = 0xfca4;
    if (*(char *)(param_1 + 0x765d) == '\0') {
      lVar10 = 0xfca0;
    }
    *(undefined4 *)(param_1 + 0xf954) = *(undefined4 *)(param_1 + lVar10);
    lVar10 = FUN_1800e7278(*(longlong *)(param_1 + 0xf6e0) + 0x19d8,(byte *)(param_1 + 0xf8e8));
    *(longlong *)(param_1 + 0xff10) = lVar10;
    if (*(char *)(param_1 + 0x10189) == '\0') goto LAB_180048727;
  }
  lVar10 = *(longlong *)(param_1 + 0xff10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  if (lVar10 != *(longlong *)(lVar3 + 0x30)) {
    iVar20 = *(int *)(lVar3 + 0x67c);
    *(int *)(lVar3 + 0x67c) = iVar20 + 1;
    if (((iVar20 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
       (uVar16 = uVar11, *(int *)(lVar3 + 0xba8) != 0)) {
      do {
        (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar16 * 8))();
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(lVar3 + 0xba8));
    }
    (**(code **)(**(longlong **)(lVar3 + 0x688) + 200))(*(longlong **)(lVar3 + 0x688),lVar10);
    *(undefined1 *)(lVar3 + 0x674) = 1;
    *(longlong *)(lVar3 + 0x30) = lVar10;
    *(undefined8 *)(lVar3 + 0x38) = 0;
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  FUN_1800ea3f8(*(longlong *)(lVar10 + 0xb18),*(ulonglong *)(param_1 + 0xff10),
                *(longlong *)(lVar10 + 0xb10),lVar10,*(undefined8 *)(lVar10 + 0xb78));
  *(undefined1 *)(param_1 + 0x10189) = 0;
  puVar18 = local_res10;
LAB_180048803:
  if ((*(char *)(param_1 + 0x10188) != '\0') || ((ulonglong *)param_1 != puVar18)) {
    iVar20 = *(int *)(param_1 + 0xffc4);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    if (iVar20 != *(int *)(lVar10 + 0x40)) {
      iVar30 = *(int *)(lVar10 + 0x67c);
      *(int *)(lVar10 + 0x67c) = iVar30 + 1;
      if (((iVar30 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0xba8) != 0)
         ) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar11 * 8))();
          uVar14 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar10 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xa0))(*(longlong **)(lVar10 + 0x688),iVar20);
      *(int *)(lVar10 + 0x40) = iVar20;
    }
    *(undefined1 *)(param_1 + 0x10188) = 0;
    puVar18 = local_res10;
  }
  FUN_180047100(param_1,bVar21);
  if ((*(char *)(param_1 + 0xf68f) == '\0') && ((ulonglong *)param_1 == puVar18)) {
    local_res8[0] = *(uint *)(param_1 + 0x10180);
    uVar15 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
      }
    }
    if (local_res8[0] != 0) {
      pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar15 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar15 & 7));
      while( true ) {
        lVar10 = *(longlong *)(param_1 + 0xff38 + (ulonglong)(uVar15 & 0xff) * 8);
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_1 + 0xffd8);
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 0xff38 + (ulonglong)(uVar15 & 0xff) * 8) + 0x38);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        uVar15 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
        if (local_res8[0] == 0) break;
        pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar15 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar15 & 7));
      }
    }
  }
  else {
    FUN_1800fbea0((undefined1 *)&local_138,0,0x100);
    local_res8[0] = *(uint *)(param_1 + 0x10180);
    uVar14 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
      }
    }
    if (local_res8[0] != 0) {
      pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar14 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar14 & 7));
      while( true ) {
        uVar15 = uVar14 & 0xff;
        uVar11 = (ulonglong)uVar15;
        plVar12 = *(longlong **)(param_1 + 0xff38 + uVar11 * 8);
        if (plVar12 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar12 + 8))();
          if (lVar10 != 0) {
            uVar14 = *(uint *)(param_1 + 0x102c + uVar11 * 4);
            lVar3 = *(longlong *)(param_1 + 0xff38 + uVar11 * 8);
            (&local_138)[uVar11 * 2] = lVar10 + (ulonglong)uVar14;
            uVar13 = *(uint *)(lVar3 + 0x30);
            iVar20 = 0;
            if (uVar14 <= uVar13) {
              iVar20 = uVar13 - uVar14;
            }
            aiStack_130[uVar11 * 4] = iVar20;
            aiStack_130[uVar11 * 4 + 1] = *(int *)(param_1 + 0xfe8 + uVar11 * 4);
          }
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0xff38 + uVar11 * 8) + 0x40);
          (**(code **)(*plVar12 + 0x10))(plVar12,uVar11);
          lVar10 = *(longlong *)(param_1 + 0xff38 + uVar11 * 8);
          uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78);
          *(undefined8 *)(lVar10 + 0x18) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18);
          *(undefined8 *)(lVar10 + 0x20) = uVar9;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
          FUN_1800ea3f8(*(longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x1b500),
                        *(ulonglong *)(param_1 + 0xff38 + uVar11 * 8),
                        *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500),lVar10,
                        *(undefined8 *)(lVar10 + 0xb78));
          *(undefined8 *)(*(longlong *)(param_1 + 0xff38 + uVar11 * 8) + 0x28) =
               *(undefined8 *)(param_1 + 0xffd8);
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 0xff38 + uVar11 * 8) + 0x38);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        uVar14 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        uVar15 = uVar15 + 1;
        if (local_res8[0] == 0) break;
        pbVar4 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar14 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar14 & 7));
      }
    }
    FUN_1800e384c(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),0,uVar15,
                  (longlong)&local_138);
    *(undefined1 *)(param_1 + 0xf68f) = 0;
    puVar18 = local_res10;
  }
  uVar11 = 0;
  bVar2 = *(byte *)(param_1 + 0xf690);
  if (*(char *)(param_1 + 0x10184) == '\0') {
    *(byte *)(param_1 + 0xf690) = bVar2 | bVar21;
  }
  else {
    bVar8 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0xffb8) + 0x40))();
    bVar8 = bVar8 | bVar2;
    *(byte *)(param_1 + 0xf690) = bVar8;
    if ((bVar8 != 0) || ((ulonglong *)param_1 != puVar18)) {
      local_168 = (**(code **)(**(longlong **)(param_1 + 0xffb8) + 8))();
      iVar20 = *(int *)(*(longlong *)(param_1 + 0xffb8) + 0x30);
      if (*(longlong *)(param_1 + 0xffb8) == *(longlong *)(param_1 + 0xf710)) {
        iVar30 = 0x2a;
      }
      else {
        iVar30 = *(int *)(param_1 + 0xffc0);
      }
      uStack_160 = CONCAT44(iVar30,iVar20);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (((*(longlong *)(lVar10 + 0x468) != local_168) || (*(int *)(lVar10 + 0x474) != iVar30)) ||
         (*(int *)(lVar10 + 0x470) != iVar20)) {
        iVar20 = *(int *)(lVar10 + 0x67c);
        *(int *)(lVar10 + 0x67c) = iVar20 + 1;
        if (((iVar20 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar11 * 8))();
            uVar15 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar10 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar10 + 0x688) + 0x158))
                  (*(longlong **)(lVar10 + 0x688),&local_168);
        *(undefined1 *)(lVar10 + 0x674) = 1;
        *(longlong *)(lVar10 + 0x468) = local_168;
        *(longlong *)(lVar10 + 0x470) = uStack_160;
      }
      lVar10 = *(longlong *)(param_1 + 0xffb8);
      uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78);
      *(undefined8 *)(lVar10 + 0x18) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18);
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      FUN_1800ea3f8(*(longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x1b500),
                    *(ulonglong *)(param_1 + 0xffb8),
                    *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500),lVar10,
                    *(undefined8 *)(lVar10 + 0xb78));
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xffb8) + 0x40) + 8))();
      *(undefined1 *)(param_1 + 0xf690) = 0;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xffb8) + 0x28) = *(undefined8 *)(param_1 + 0xffd8);
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xffb8) + 0x38);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0xf6c4) != '\0') {
    FUN_180046f20(param_1);
  }
  return bVar7;
}

