/*
 * FUN_1800453f0 at 1800453f0
 * undefined8 __fastcall FUN_1800453f0(longlong param_1, char param_2)
 * Address ranges: 1800453f0-180045abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800453f0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  uint7 extraout_var;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  uint local_res8 [2];
  char local_res10;
  longlong local_res18;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_res10 = param_2;
  local_res8[0] =
       (1 << ((byte)*(undefined4 *)(param_1 + 0x10168) & 0x1f)) - 1U & *(uint *)(param_1 + 0xf684);
  uVar16 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
    }
  }
  if (local_res8[0] == 0) {
    uVar22 = 0xffffffff;
  }
  else {
    uVar22 = uVar16 & 0xff;
    pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar16 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar16 & 7));
  }
  if (uVar22 == 0xffffffff) {
    cVar7 = *(char *)(param_1 + 0x10190);
  }
  else {
    do {
      lVar19 = (longlong)(int)uVar22;
      bVar2 = *(byte *)(param_1 + 0x733 + lVar19 * 8);
      uVar16 = *(uint *)(param_1 + 0x734 + lVar19 * 8);
      if (uVar16 < bVar2) {
        fVar23 = (float)bVar2;
      }
      else {
        fVar23 = (float)uVar16;
      }
      lVar18 = lVar19 * 0x34;
      *(float *)(param_1 + 0xdc + lVar18) = fVar23;
      bVar2 = *(byte *)(param_1 + 0x730 + lVar19 * 8);
      bVar3 = *(byte *)(param_1 + 0x731 + lVar19 * 8);
      bVar4 = *(byte *)(param_1 + 0x732 + lVar19 * 8);
      if (bVar2 != 2) {
        fVar23 = 3.4028235e+38;
      }
      *(float *)(param_1 + 0xe0 + lVar18) = fVar23;
      uVar15 = 0;
      if (bVar2 != 2) {
        uVar15 = (ulonglong)bVar2;
      }
      if ((bVar3 == 2) || (bVar4 == 2)) {
        *(float *)(param_1 + 0x420 + lVar18) = fVar23;
        *(undefined4 *)(param_1 + 0xb0 + lVar18) = 0x55;
        if ((bVar3 != 2) && (bVar4 != 2)) goto LAB_180045549;
        uVar8 = 0xd5;
      }
      else {
        *(float *)(param_1 + 0x420 + lVar18) = fVar23;
        *(undefined4 *)(param_1 + 0xb0 + lVar18) =
             *(undefined4 *)
              (&DAT_1800fe660 + (((ulonglong)bVar4 * 2 | (ulonglong)bVar3) * 2 | uVar15) * 4);
LAB_180045549:
        uVar8 = *(undefined4 *)
                 (&DAT_1800fe640 + (((ulonglong)bVar4 * 2 | (ulonglong)bVar3) * 2 | uVar15) * 4);
      }
      *(undefined4 *)(param_1 + 0x3f0 + lVar18) = uVar8;
      lVar18 = lVar19 + 0x10;
      if (1 < (byte)(*(char *)(param_1 + 0x7550 + lVar19 * 4) - 5U)) {
        lVar18 = lVar19;
      }
      lVar18 = lVar18 * 0x34;
      plVar13 = (longlong *)(lVar18 + 0xb0 + param_1);
      local_88 = *plVar13;
      lStack_80 = plVar13[1];
      plVar13 = (longlong *)(lVar18 + 0xc0 + param_1);
      local_78 = *plVar13;
      lStack_70 = plVar13[1];
      puVar1 = (undefined8 *)(lVar18 + 0xd0 + param_1);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      local_58 = *(undefined4 *)(lVar18 + 0xe0 + param_1);
      uVar9 = FUN_1800e6a70((longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a30),(uint *)&local_88
                           );
      uVar16 = *(uint *)(param_1 + 0xfa18 + lVar19 * 4);
      if (uVar16 != uVar9) {
        if (uVar16 != 0xffffffff) {
          uVar11 = *(uint *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a40);
          if (uVar11 != 0) {
            lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a38);
            uVar15 = (ulonglong)uVar16;
            uVar16 = 0;
            uVar20 = uVar11;
            do {
              uVar10 = uVar20 + uVar16 >> 1;
              uVar5 = *(ulonglong *)(lVar18 + (ulonglong)uVar10 * 0x18);
              uVar21 = uVar10;
              if (uVar5 <= uVar15) {
                if (uVar15 <= uVar5) break;
                uVar16 = uVar10 + 1;
                uVar21 = uVar20;
                uVar10 = uVar16;
              }
              uVar20 = uVar21;
            } while (uVar20 != uVar16);
            if (((uVar10 != uVar11) && (*(ulonglong *)(lVar18 + (ulonglong)uVar10 * 0x18) == uVar15)
                ) && (plVar13 = (longlong *)(lVar18 + (ulonglong)uVar10 * 0x18 + 0x10),
                     plVar13 != (longlong *)0x0)) {
              *(undefined1 *)(*plVar13 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfa18 + lVar19 * 4) = uVar9;
      }
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      plVar13 = *(longlong **)(*(longlong *)(lVar18 + 0x50) + (ulonglong)(uVar9 >> 0x10) * 0x10);
      (**(code **)(*plVar13 + 0x48))(plVar13,&local_res18);
      local_res18 = local_res18 + (ulonglong)((uVar9 & 0xffff) * *(int *)(lVar18 + 0x20));
      *(longlong *)(param_1 + 0xfb20 + lVar19 * 8) = local_res18;
      pbVar6 = (byte *)(param_1 + 0xf684 + ((longlong)(int)uVar22 >> 3));
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar22 & 7));
      uVar16 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      *(undefined1 *)(param_1 + 0x10190) = 1;
      if (local_res8[0] == 0) {
        uVar22 = 0xffffffff;
      }
      else {
        uVar22 = uVar16 & 0xff;
        pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar16 >> 3));
        *pbVar6 = *pbVar6 & ~('\x01' << (uVar16 & 7));
      }
    } while (uVar22 != 0xffffffff);
    cVar7 = '\x01';
    param_2 = local_res10;
  }
  lVar19 = 0x10118;
  if (*(int *)(param_1 + 0x10118) == 0) {
    lVar19 = 0x10140;
  }
  uVar16 = *(uint *)(param_1 + lVar19);
  local_res8[0] = (1 << ((byte)uVar16 & 0x1f)) - 1U & *(uint *)(param_1 + 0xf6bc);
  uVar22 = 0;
  if (local_res8[0] != 0) {
    for (; (local_res8[0] >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
    }
  }
  if (local_res8[0] == 0) {
    uVar9 = 0xffffffff;
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = local_res8;
    uVar9 = uVar22 & 0xff;
    pbVar6 = (byte *)((longlong)puVar14 + ((longlong)(int)uVar22 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar22 & 7));
  }
  if (uVar9 == 0xffffffff) {
    if ((cVar7 == '\0') && (param_2 == '\0')) {
      return 1;
    }
  }
  else {
    do {
      lVar19 = (longlong)(int)uVar9;
      bVar2 = *(byte *)(param_1 + 0x81b + lVar19 * 8);
      uVar22 = *(uint *)(param_1 + 0x81c + lVar19 * 8);
      if (uVar22 < bVar2) {
        fVar23 = (float)bVar2;
      }
      else {
        fVar23 = (float)uVar22;
      }
      lVar18 = lVar19 * 0x34;
      *(float *)(param_1 + 0x86c + lVar18) = fVar23;
      bVar2 = *(byte *)(param_1 + 0x819 + lVar19 * 8);
      bVar3 = *(byte *)(param_1 + 0x818 + lVar19 * 8);
      bVar4 = *(byte *)(param_1 + 0x81a + lVar19 * 8);
      *(undefined4 *)(param_1 + 0x870 + lVar18) = 0x7f7fffff;
      if ((bVar2 == 2) || (bVar4 == 2)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)
                 (&DAT_1800fe660 +
                 (((ulonglong)bVar4 * 2 | (ulonglong)bVar2) * 2 | (ulonglong)bVar3) * 4);
      }
      *(undefined4 *)(param_1 + 0x840 + lVar18) = uVar8;
      plVar13 = (longlong *)(lVar18 + 0x840 + param_1);
      local_88 = *plVar13;
      lStack_80 = plVar13[1];
      local_58 = *(undefined4 *)(lVar18 + 0x870 + param_1);
      plVar13 = (longlong *)(lVar18 + 0x850 + param_1);
      local_78 = *plVar13;
      lStack_70 = plVar13[1];
      puVar1 = (undefined8 *)(lVar18 + 0x860 + param_1);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      uVar11 = FUN_1800e6a70((longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a30),
                             (uint *)&local_88);
      uVar22 = *(uint *)(param_1 + 0xfbc0 + lVar19 * 4);
      if (uVar22 != uVar11) {
        if (uVar22 != 0xffffffff) {
          uVar20 = *(uint *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a40);
          if (uVar20 != 0) {
            lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1a38);
            uVar15 = (ulonglong)uVar22;
            uVar22 = 0;
            uVar21 = uVar20;
            do {
              uVar12 = uVar21 + uVar22 >> 1;
              uVar5 = *(ulonglong *)(lVar18 + (ulonglong)uVar12 * 0x18);
              uVar10 = uVar12;
              if (uVar5 <= uVar15) {
                if (uVar15 <= uVar5) break;
                uVar22 = uVar12 + 1;
                uVar10 = uVar21;
                uVar12 = uVar22;
              }
              uVar21 = uVar10;
            } while (uVar21 != uVar22);
            if (((uVar12 != uVar20) && (*(ulonglong *)(lVar18 + (ulonglong)uVar12 * 0x18) == uVar15)
                ) && (plVar13 = (longlong *)(lVar18 + (ulonglong)uVar12 * 0x18 + 0x10),
                     plVar13 != (longlong *)0x0)) {
              *(undefined1 *)(*plVar13 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfbc0 + lVar19 * 4) = uVar11;
      }
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      plVar13 = *(longlong **)(*(longlong *)(lVar18 + 0x50) + (ulonglong)(uVar11 >> 0x10) * 0x10);
      (**(code **)(*plVar13 + 0x48))(plVar13,&local_res18);
      local_res18 = local_res18 + (ulonglong)((uVar11 & 0xffff) * *(int *)(lVar18 + 0x20));
      *(longlong *)(param_1 + 0xfc00 + lVar19 * 8) = local_res18;
      pbVar6 = (byte *)(param_1 + 0xf6bc + ((longlong)(int)uVar9 >> 3));
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar9 & 7));
      uVar22 = 0;
      if (local_res8[0] != 0) {
        for (; (local_res8[0] >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
        }
      }
      puVar14 = (uint *)(ulonglong)uVar22;
      *(undefined1 *)(param_1 + 0x10190) = 1;
      if (local_res8[0] == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = uVar22 & 0xff;
        pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar22 >> 3));
        *pbVar6 = *pbVar6 & ~('\x01' << (uVar22 & 7));
      }
    } while (uVar9 != 0xffffffff);
  }
  iVar17 = *(int *)(param_1 + 0x10168) + uVar16;
  if (iVar17 == 0) {
    lVar19 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
  }
  else {
    cVar7 = FUN_1800eb61c(*(longlong *)(param_1 + 0xf708),iVar17,
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78),
                          &local_88);
    if (cVar7 == '\0') {
      lVar19 = (ulonglong)extraout_var << 8;
      *(undefined1 *)(param_1 + 0x10192) = 1;
    }
    else {
      local_res8[0] = *(uint *)(param_1 + 0x10168);
      if (local_res8[0] != 0) {
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                  ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&lStack_80,local_res8,
                   local_res8[0],param_1 + 0xfb20,&DAT_180102000,1);
        *(longlong *)(param_1 + 0xf9d8) = local_88;
      }
      if (uVar16 != 0) {
        uVar15 = (ulonglong)(uint)((int)lStack_70 * *(int *)(param_1 + 0x10168));
        lStack_80 = lStack_80 + uVar15;
        local_88 = local_88 + uVar15;
        local_res8[0] = uVar16;
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                  ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&lStack_80,local_res8,uVar16,
                   param_1 + 0xfc00,&DAT_180102000,1);
        *(longlong *)(param_1 + 0xf9f0) = local_88;
      }
      lVar19 = *(longlong *)(param_1 + 0xff20);
      *(longlong *)(param_1 + 0xff20) = local_78;
      *(undefined1 *)(param_1 + 0x1018a) = 1;
      *(byte *)(param_1 + 0x10191) = *(byte *)(param_1 + 0x10191) | local_78 != lVar19;
      lVar19 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
      *(undefined1 *)(param_1 + 0x10192) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x10190) = 0;
  return lVar19;
}

