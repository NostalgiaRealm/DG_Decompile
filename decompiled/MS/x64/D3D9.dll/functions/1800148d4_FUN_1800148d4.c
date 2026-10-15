/*
 * FUN_1800148d4 at 1800148d4
 * char __fastcall FUN_1800148d4(longlong param_1, ulonglong * param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 1800148d4-180014d39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800148d4(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined1 local_4d;
  
  uVar14 = *(uint *)(param_1 + 0x50) & 2;
  uVar17 = -(uint)(uVar14 != 0) & 3;
  uVar18 = 1;
  if (*(int *)(param_1 + 0x4c) == 3) {
    uVar17 = (-(uint)(uVar14 != 0) & 3) + 1;
  }
  else if (*(int *)(param_1 + 0x4c) == 5) {
    uVar17 = (-(uint)(uVar14 != 0) & 3) + 2;
  }
  iVar9 = *(int *)(param_1 + 0x60);
  uVar14 = *(uint *)(param_1 + 0x50) & 3;
  iVar1 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x74) = iVar9;
  *(int *)(param_1 + 0x78) = iVar1;
  if (uVar14 != 0) {
    FUN_1800083fc(*(longlong *)(param_1 + 0x28),(undefined4 *)&local_68);
    if (param_2 != (ulonglong *)0x0) {
      local_68 = *param_2;
      uStack_60 = param_2[1];
    }
    *(int *)(param_1 + 0x74) = (int)((ulonglong)(uint)(iVar9 * (int)local_68) / (local_68 >> 0x20));
    uVar7 = (ulonglong)(uint)(iVar1 * (int)uStack_60);
    param_2 = (ulonglong *)(uVar7 % (uStack_60 >> 0x20));
    *(int *)(param_1 + 0x78) = (int)(uVar7 / (uStack_60 >> 0x20));
  }
  if (((*(int *)(param_1 + 0x48) - 0x14U < 6) || (*(int *)(param_1 + 0x48) == 0x20)) &&
     (*(int *)(param_1 + 0x54) != 1)) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = 0;
  }
  piVar20 = (int *)(param_1 + 0x54);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8) = uVar11;
  lVar12 = *(longlong *)(param_1 + 8);
  plVar6 = *(longlong **)(lVar12 + 0x68);
  if (*piVar20 == 3) {
    FUN_180015690(param_1);
    uVar18 = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + 0x16) *
             *(int *)(*(longlong *)(param_1 + 8) + 0x18);
    lVar12 = FUN_1800fbccc((ulonglong)(uVar18 + 0x20) + 8);
    puVar16 = (undefined1 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar16 + -8) = lVar12;
    *(undefined1 **)(param_1 + 0x40) = puVar16;
    FUN_1800fbea0(puVar16,0,(ulonglong)uVar18);
    cVar8 = *(longlong *)(param_1 + 0x40) != 0;
  }
  else {
    if (*(longlong *)(lVar12 + 0x70) == 0) {
      uVar19 = 0;
      uVar15 = *piVar20 - 1;
      if (uVar15 == 0) {
        uVar19 = 2;
      }
      else if (uVar15 == 1) {
        uVar19 = 1;
      }
      if (uVar14 == 0) {
        param_4 = (ulonglong)*(uint *)(param_1 + 0x70);
        param_3 = (ulonglong)*(uint *)(param_1 + 100);
        param_2 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x60);
        uVar11 = (**(code **)(*plVar6 + 0x58))(plVar6,param_2,param_3,param_4,1,uVar17,uVar19);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = uVar11;
      }
      else {
        iVar9 = FUN_180003a20((ulonglong)uVar15,
                              (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0xea8),
                              *(int *)(*(longlong *)(param_1 + 0x28) + 0xe68),
                              *(int *)(param_1 + 0x58),*(uint *)(param_1 + 0x5c));
        if (((*(char *)(DAT_180111f20 + 0x9f4) == '\0') &&
            ((uVar15 = *(uint *)(param_1 + 0x60), uVar15 == 1 || ((uVar15 & uVar15 - 1) == 0)))) &&
           ((uVar15 = *(uint *)(param_1 + 100), uVar15 == 1 || ((uVar15 & uVar15 - 1) == 0)))) {
          uVar18 = 0;
        }
        *(uint *)(lVar12 + 0x100) = *(uint *)(lVar12 + 0x100) & 0xfffffffe;
        *(uint *)(lVar12 + 0x100) = *(uint *)(lVar12 + 0x100) | uVar18;
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x100) & 1) == 0) {
          *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x60);
          iVar9 = 1;
          if (*(int *)(param_1 + 0x58) != 0) {
            iVar9 = *(int *)(param_1 + 0x58);
          }
          *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 100);
        }
        param_4 = (ulonglong)*(uint *)(param_1 + 0x60);
        param_2 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x74);
        param_3 = (ulonglong)*(uint *)(param_1 + 0x78);
        puVar10 = (ulonglong *)
                  (**(code **)(*plVar6 + 0x50))
                            (plVar6,param_2,param_3,param_4,*(undefined4 *)(param_1 + 100),iVar9,
                             *(undefined4 *)(param_1 + 0x70),1,uVar17,uVar19);
        *(ulonglong **)(*(longlong *)(param_1 + 8) + 0x70) = puVar10;
        if ((puVar10 != (ulonglong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
          param_2 = (ulonglong *)*puVar10;
          (*(code *)param_2[0x11])(puVar10);
        }
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) == 0) {
      return '\0';
    }
    FUN_180015690(param_1);
    lVar12 = *(longlong *)(param_1 + 8);
    cVar8 = '\x01';
    if (((*(uint *)(lVar12 + 0x100) >> 10 & 1) != 0) && (*piVar20 != 1)) {
      if ((*piVar20 == 0) &&
         ((*(int *)(*(longlong *)(param_1 + 0x28) + 0xe68) == 1 &&
          (*(longlong *)(lVar12 + 0x28) == 0)))) {
        *(uint *)(lVar12 + 0x48) = *(uint *)(lVar12 + 0x48) | 0x10;
      }
      else {
        cVar8 = FUN_180032f30(lVar12,param_2,param_3,param_4);
      }
    }
    if (((*(uint *)(param_1 + 0x50) & 0x400) == 0) || (*(int *)(param_1 + 0x68) == 0)) {
      if ((*(int *)(*(longlong *)(param_1 + 8) + 0x20) == 0) && (*(int *)(param_1 + 0x48) != 0x51))
      {
        bVar13 = (byte)*(undefined4 *)(param_1 + 0x68);
        uVar18 = 1 << (bVar13 & 0x1f);
        if (uVar18 < *(uint *)(param_1 + 0x60)) {
          uVar15 = *(uint *)(param_1 + 0x60) >> (bVar13 & 0x1f);
        }
        else {
          uVar15 = 1;
        }
        if (uVar18 < *(uint *)(param_1 + 100)) {
          uVar18 = *(uint *)(param_1 + 100) >> (bVar13 & 0x1f);
        }
        else {
          uVar18 = 1;
        }
        (**(code **)(*plVar6 + 0x100))
                  (plVar6,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                   *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),0,0,0,(float)uVar15,
                   (float)uVar18);
      }
    }
    lVar12 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar12 + 0x60) != '\0') {
      *(undefined4 *)(lVar12 + 0x50) = 0x102;
      *(undefined4 *)(lVar12 + 0x54) = 3;
      *(undefined4 *)(lVar12 + 0x58) = 0x102;
      *(undefined4 *)(lVar12 + 0x5c) = 4;
    }
  }
  if (cVar8 != '\0') {
    uVar19 = 1;
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar19 = *(undefined4 *)(param_1 + 0x58);
    }
    lVar12 = *(longlong *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    uVar3 = *(undefined4 *)(param_1 + 100);
    uVar4 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = *(undefined4 *)(param_1 + 0x6c);
    *(bool *)(lVar12 + 0xa5) = (*(int *)(param_1 + 0x70) - 0x24U & 0xfffffffa) == 0;
    *(undefined4 *)(lVar12 + 0x8c) = uVar2;
    *(undefined4 *)(lVar12 + 0x90) = uVar3;
    *(undefined4 *)(lVar12 + 0x94) = uVar4;
    *(undefined4 *)(lVar12 + 0x98) = uVar5;
    *(undefined4 *)(lVar12 + 0x9c) = uVar19;
    *(uint *)(lVar12 + 0xa0) = uVar17;
    *(bool *)(lVar12 + 0xa4) = uVar14 != 0;
    *(undefined1 *)(lVar12 + 0xa6) = 0;
    *(undefined1 *)(lVar12 + 0xa7) = local_4d;
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_68,*(undefined4 *)(param_1 + 0x70));
    lVar12 = *(longlong *)(param_1 + 8);
    *(uint *)(lVar12 + 0xa8) = (uint)*(byte *)(lVar12 + 0x26) << 3;
    *(undefined4 *)(lVar12 + 0xac) = (undefined4)local_68;
    *(undefined4 *)(lVar12 + 0xb0) = local_68._4_4_;
    *(undefined4 *)(lVar12 + 0xb4) = (undefined4)uStack_60;
  }
  return cVar8;
}

