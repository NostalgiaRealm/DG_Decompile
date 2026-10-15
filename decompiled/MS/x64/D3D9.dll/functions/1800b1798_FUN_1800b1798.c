/*
 * FUN_1800b1798 at 1800b1798
 * ulonglong __fastcall FUN_1800b1798(longlong param_1, uint param_2, ulonglong param_3, uint param_4)
 * Address ranges: 1800b1798-1800b1f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b1798(longlong param_1,uint param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  BOOL BVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  uint local_res20 [2];
  ulonglong local_50;
  uint local_48;
  
  if (((*(byte *)(param_1 + 0xe78) & 4) == 0) &&
     (param_3 = (ulonglong)(uint)DAT_1801123a8[1].LockCount, DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar10 = false;
  }
  else {
    BVar11 = TryEnterCriticalSection(DAT_1801123a8);
    bVar10 = true;
    if (BVar11 == 0) {
      FUN_1800044dc(0);
      bVar10 = true;
    }
  }
  FUN_1800fa780(local_res20);
  uVar12 = FUN_1800057dc(param_1,param_2,param_3,param_4);
  if ((int)uVar12 < 0) {
LAB_1800b1f4b:
    FUN_1800fa7bc();
    if (bVar10) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
    return uVar12 & 0xffffffff;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
  local_48 = 0;
  local_50 = *(ulonglong *)(lVar5 + 0xad00);
  while( true ) {
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xdf < local_48) goto LAB_1800b1902;
    local_50 = *(ulonglong *)(lVar5 + 0xad00 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
  *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
  iVar16 = (int)uVar17 + local_48;
  while (uVar18 = local_48, iVar16 != -1) {
    FUN_1800b09d8(param_1,iVar16 / 0xe,iVar16 % 0xe,
                  *(uint *)(lVar5 + 0x4ad0 +
                           ((ulonglong)(uint)(iVar16 / 0xe) * 0xe + (ulonglong)(uint)(iVar16 % 0xe))
                           * 4));
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar18 = uVar18 + 0x40;
        local_48 = uVar18;
        if (0xdf < uVar18) goto LAB_1800b1902;
        local_50 = ((ulonglong *)(lVar5 + 0xad00))[uVar18 >> 6];
        uVar17 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
    iVar16 = (int)uVar17 + local_48;
  }
LAB_1800b1902:
  local_50 = *(ulonglong *)(lVar5 + 0xad20);
  local_48 = 0;
  while( true ) {
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0x45 < local_48) goto LAB_1800b19c4;
    local_50 = *(ulonglong *)(lVar5 + 0xad20 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
  *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
  iVar16 = local_48 + (int)uVar17;
  while (uVar18 = local_48, iVar16 != -1) {
    FUN_1800b09d8(param_1,iVar16 / 0xe + 0x100,iVar16 % 0xe,
                  *(uint *)(lVar5 + 0x4ad0 +
                           ((ulonglong)(uint)(iVar16 / 0xe) * 0xe + (ulonglong)(uint)(iVar16 % 0xe))
                           * 4));
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar18 = uVar18 + 0x40;
        local_48 = uVar18;
        if (0x45 < uVar18) goto LAB_1800b19c4;
        local_50 = ((ulonglong *)(lVar5 + 0xad20))[uVar18 >> 6];
        uVar17 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
    iVar16 = (int)uVar17 + local_48;
  }
LAB_1800b19c4:
  local_50 = *(ulonglong *)(lVar5 + 0xad38);
  local_48 = 0;
  while( true ) {
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (4 < local_48) goto LAB_1800b1a8a;
    local_50 = *(ulonglong *)(lVar5 + 0xad38 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
  *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
  uVar18 = local_48 + (int)uVar17;
  while (uVar19 = local_48, uVar18 != 0xffffffff) {
    plVar21 = (longlong *)0x0;
    plVar6 = *(longlong **)(lVar5 + 0x4fc0 + (longlong)(int)uVar18 * 8);
    plVar20 = (longlong *)0x0;
    plVar22 = plVar21;
    if ((plVar6 != (longlong *)0x0) &&
       ((iVar16 = (int)plVar6[4], iVar16 == 3 ||
        ((plVar20 = (longlong *)0x0, plVar22 = plVar6, iVar16 != 4 &&
         (plVar20 = (longlong *)0x0, plVar22 = plVar21, iVar16 == 5)))))) {
      plVar20 = plVar6;
      plVar22 = plVar21;
    }
    FUN_1800b0868(param_1,uVar18,(longlong)plVar6,plVar20,plVar22);
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar19 = uVar19 + 0x40;
        local_48 = uVar19;
        if (4 < uVar19) goto LAB_1800b1a8a;
        local_50 = ((ulonglong *)(lVar5 + 0xad38))[uVar19 >> 6];
        uVar17 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
    uVar18 = local_48 + (int)uVar17;
  }
LAB_1800b1a8a:
  local_50 = *(ulonglong *)(lVar5 + 0xad30);
  local_48 = 0;
  while( true ) {
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xf < local_48) goto LAB_1800b1b2b;
    local_50 = *(ulonglong *)(lVar5 + 0xad30 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
  *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
  iVar16 = local_48 + (int)uVar17;
  while (iVar16 != -1) {
    *(undefined4 *)(param_1 + 0xc4a0 + (longlong)iVar16 * 4) =
         *(undefined4 *)(lVar5 + 0x4f68 + (longlong)iVar16 * 4);
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        local_48 = local_48 + 0x40;
        if (0xf < local_48) goto LAB_1800b1b2b;
        local_50 = ((ulonglong *)(lVar5 + 0xad30))[local_48 >> 6];
        uVar17 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
    iVar16 = local_48 + (int)uVar17;
  }
LAB_1800b1b2b:
  local_50 = *(ulonglong *)(lVar5 + 0xac68);
  local_48 = 0;
  while( true ) {
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 != 0) break;
    local_48 = local_48 + 0x40;
    if (0xd1 < local_48) goto LAB_1800b1bc9;
    local_50 = *(ulonglong *)(lVar5 + 0xac68 + (ulonglong)(local_48 >> 6) * 8);
  }
  pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
  *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
  uVar18 = local_48 + (int)uVar17;
  while (uVar19 = local_48, uVar18 != 0xffffffff) {
    FUN_1800b06c0(param_1,(ulonglong)uVar18,
                  (ulonglong)*(uint *)(lVar5 + 0x10 + (longlong)(int)uVar18 * 4));
    uVar17 = 0;
    if (local_50 != 0) {
      for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    if (local_50 == 0) {
      do {
        uVar19 = uVar19 + 0x40;
        local_48 = uVar19;
        if (0xd1 < uVar19) goto LAB_1800b1bc9;
        local_50 = ((ulonglong *)(lVar5 + 0xac68))[uVar19 >> 6];
        uVar17 = 0;
        if (local_50 != 0) {
          for (; (local_50 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
          }
        }
      } while (local_50 == 0);
    }
    pbVar7 = (byte *)((longlong)&local_50 + ((longlong)(uVar17 & 0xffffffff) >> 3));
    *pbVar7 = *pbVar7 & ~('\x01' << (uVar17 & 7));
    uVar18 = local_48 + (int)uVar17;
  }
LAB_1800b1bc9:
  if (*(char *)(lVar5 + 0xacfe) != '\0') {
    uVar8 = *(undefined8 *)(lVar5 + 0x4fec);
    uVar9 = *(undefined8 *)(lVar5 + 0x4ff4);
    *(undefined1 *)(param_1 + 0xc50c) = 1;
    *(undefined8 *)(param_1 + 0x6f68) = uVar8;
    *(undefined8 *)(param_1 + 0x6f70) = uVar9;
  }
  if (*(char *)(lVar5 + 0xacfd) != '\0') {
    FUN_1800b5f2c(param_1,*(float *)(lVar5 + 0x4fe8));
  }
  if (*(char *)(lVar5 + 0xacfc) != '\0') {
    FUN_1800b5f88(param_1,*(longlong *)(lVar5 + 0x4fb8));
  }
  lVar1 = param_1 + 0x68b8;
  if (*(char *)(lVar5 + 0xacf9) != '\0') {
    uVar17 = *(ulonglong *)(lVar5 + 0x4fb0);
    lVar13 = FUN_1800bed58(lVar1,uVar17);
    FUN_1800b6cd4(param_1,uVar17,lVar13);
  }
  iVar16 = 0;
  sVar2 = *(short *)(lVar5 + 0xa190);
  while (sVar2 != -1) {
    uVar18 = iVar16 * 2;
    uVar3 = *(ushort *)(lVar5 + 0xa190 + (ulonglong)uVar18 * 2);
    uVar4 = *(ushort *)(lVar5 + 0xa190 + (ulonglong)(uVar18 + 1) * 2);
    puVar23 = (undefined4 *)(lVar5 + ((ulonglong)((uint)uVar3 * 4) + 0x1864) * 4);
    lVar13 = FUN_1800bed58(lVar1,*(ulonglong *)(param_1 + 0xc490));
    FUN_1800b646c(param_1,lVar13,(uint)uVar3,puVar23,(uint)uVar4 - (uint)uVar3);
    iVar16 = iVar16 + 1;
    sVar2 = *(short *)(lVar5 + 0xa190 + (ulonglong)(uVar18 + 2) * 2);
  }
  iVar16 = 0;
  sVar2 = *(short *)(lVar5 + 0x52a0);
  while (sVar2 != -1) {
    uVar18 = iVar16 * 2;
    uVar3 = *(ushort *)(lVar5 + 0x52a0 + (ulonglong)uVar18 * 2);
    uVar4 = *(ushort *)(lVar5 + 0x52a0 + (ulonglong)(uVar18 + 1) * 2);
    puVar23 = (undefined4 *)(lVar5 + ((ulonglong)((uint)uVar3 * 4) + 0x140f) * 4);
    lVar13 = FUN_1800bed58(lVar1,*(ulonglong *)(param_1 + 0xc490));
    FUN_1800b663c(param_1,lVar13,(uint)uVar3,puVar23,(uint)uVar4 - (uint)uVar3);
    iVar16 = iVar16 + 1;
    sVar2 = *(short *)(lVar5 + 0x52a0 + (ulonglong)(uVar18 + 2) * 2);
  }
  iVar16 = 0;
  sVar2 = *(short *)(lVar5 + 0x527c);
  while (sVar2 != -1) {
    uVar18 = iVar16 * 2;
    uVar3 = *(ushort *)(lVar5 + 0x527c + (ulonglong)uVar18 * 2);
    uVar4 = *(ushort *)(lVar5 + 0x527c + (ulonglong)(uVar18 + 1) * 2);
    puVar23 = (undefined4 *)(lVar5 + 0x4ffc + (ulonglong)uVar3 * 4);
    lVar13 = FUN_1800bed58(lVar1,*(ulonglong *)(param_1 + 0xc490));
    FUN_1800b67a0(param_1,lVar13,(uint)uVar3,puVar23,(uint)uVar4 - (uint)uVar3);
    iVar16 = iVar16 + 1;
    sVar2 = *(short *)(lVar5 + 0x527c + (ulonglong)(uVar18 + 2) * 2);
  }
  iVar16 = 0;
  uVar17 = 0;
  lVar1 = param_1 + 0x6910;
  if (*(char *)(lVar5 + 0xacf8) != '\0') {
    uVar15 = *(ulonglong *)(lVar5 + 0x4fa8);
    lVar13 = FUN_1800bf32c(lVar1,uVar15);
    FUN_1800b5fe4(param_1,uVar15,lVar13);
  }
  sVar2 = *(short *)(lVar5 + 0xa994);
  uVar15 = uVar17;
  while (sVar2 != -1) {
    uVar18 = (int)uVar15 * 2;
    uVar3 = *(ushort *)(lVar5 + 0xa994 + (ulonglong)uVar18 * 2);
    uVar19 = (uint)uVar3;
    uVar4 = *(ushort *)(lVar5 + 0xa994 + (ulonglong)(uVar18 + 1) * 2);
    uVar14 = uVar17;
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar19 = (uint)uVar3;
      uVar14 = FUN_1800bf32c(lVar1,*(ulonglong *)(param_1 + 0xc488));
    }
    FUN_1800b68cc(param_1,uVar14,uVar19,
                  (undefined4 *)(lVar5 + ((ulonglong)(uVar19 * 4) + 0x14e4) * 4),uVar4 - uVar19);
    uVar15 = (ulonglong)((int)uVar15 + 1);
    sVar2 = *(short *)(lVar5 + 0xa994 + (ulonglong)(uVar18 + 2) * 2);
  }
  sVar2 = *(short *)(lVar5 + 0x52e8);
  while (sVar2 != -1) {
    uVar18 = iVar16 * 2;
    uVar3 = *(ushort *)(lVar5 + 0x52e8 + (ulonglong)uVar18 * 2);
    uVar19 = (uint)uVar3;
    uVar4 = *(ushort *)(lVar5 + 0x52e8 + (ulonglong)(uVar18 + 1) * 2);
    uVar15 = uVar17;
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar19 = (uint)uVar3;
      uVar15 = FUN_1800bf32c(lVar1,*(ulonglong *)(param_1 + 0xc488));
    }
    FUN_1800b6a30(param_1,uVar15,uVar19,
                  (undefined4 *)(lVar5 + ((ulonglong)(uVar19 * 4) + 0x145f) * 4),uVar4 - uVar19);
    iVar16 = iVar16 + 1;
    sVar2 = *(short *)(lVar5 + 0x52e8 + (ulonglong)(uVar18 + 2) * 2);
  }
  sVar2 = *(short *)(lVar5 + 0x52c4);
  while (sVar2 != -1) {
    uVar18 = (int)uVar17 * 2;
    uVar3 = *(ushort *)(lVar5 + 0x52c4 + (ulonglong)uVar18 * 2);
    uVar4 = *(ushort *)(lVar5 + 0x52c4 + (ulonglong)(uVar18 + 1) * 2);
    puVar23 = (undefined4 *)(lVar5 + 0x513c + (ulonglong)uVar3 * 4);
    lVar13 = FUN_1800bf32c(lVar1,*(ulonglong *)(param_1 + 0xc488));
    FUN_1800b6ba4(param_1,lVar13,(uint)uVar3,puVar23,(uint)uVar4 - (uint)uVar3);
    uVar17 = (ulonglong)((int)uVar17 + 1);
    sVar2 = *(short *)(lVar5 + 0x52c4 + (ulonglong)(uVar18 + 2) * 2);
  }
  goto LAB_1800b1f4b;
}

