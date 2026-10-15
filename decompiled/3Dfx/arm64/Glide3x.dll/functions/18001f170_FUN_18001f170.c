/*
 * FUN_18001f170 at 18001f170
 * undefined __cdecl FUN_18001f170(longlong param_1, uint param_2, undefined4 param_3, uint param_4, longlong param_5)
 * Address ranges: 18001f170-18001f5bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f170(longlong param_1,uint param_2,undefined4 param_3,uint param_4,longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  HANDLE hEvent;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  uint local_80 [2];
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  
  FUN_18001bf90(param_1 + 0x3668);
  *(uint *)(param_1 + 0x4714) = param_2;
  iVar12 = 0;
  local_80[0] = *(uint *)(param_1 + 0x4710) & param_2;
  uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar13 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar13;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      iVar12 = *(int *)(param_1 + 0x45c8 + lVar13 * 0x18) + iVar12;
      uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar13 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar13;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  local_80[0] = param_4 * 8;
  lVar13 = *(longlong *)(param_1 + 0x3340);
  iVar12 = local_80[0] + iVar12 * param_4 * 4;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar12);
  FUN_180038440((uint *)(lVar13 + 0x12c0));
  cVar1 = *(char *)(lVar13 + 0x14c4);
  if ((cVar1 == '\0') || (0x3eff < iVar12 + 4U)) {
    uVar15 = 0;
    local_70 = 0;
    local_68 = 0;
    lVar13 = 0;
    local_60 = 0;
    if (cVar1 != '\0') {
      bVar3 = FUN_1800587e0((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3340) + 0x17f0),
                            (int)local_78 + 0x24,&local_70);
      lVar13 = local_70;
      if (bVar3) {
        uVar7 = 0;
        puVar5 = (undefined8 *)(local_70 + (ulonglong)local_80[0]);
        if (param_4 != 0) {
          lVar11 = 0x42a0;
          do {
            iVar12 = (int)uVar7;
            *(undefined8 **)(lVar13 + uVar7 * 8) = puVar5;
            uVar4 = FUN_18001e900(param_1 + lVar11,*(longlong *)(param_5 + uVar7 * 8),puVar5);
            uVar7 = (ulonglong)(iVar12 + 1U);
            puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)uVar4 * 4);
          } while (iVar12 + 1U < param_4);
        }
        uVar15 = 1;
        param_5 = lVar13;
      }
    }
    uVar2 = local_60;
    lVar11 = local_68;
    lVar14 = *(longlong *)(param_1 + 0x3340);
    if (*(char *)(lVar14 + 0x14c4) != '\0') {
      local_78 = (undefined8 *)FUN_180038310(lVar14 + 0x12c0,0x38);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1800643e0((uint *)(lVar14 + 0x14c0));
        local_78[1] = 0x38;
        local_78[2] = param_1;
        *(undefined4 *)(local_78 + 3) = param_3;
        *(uint *)((longlong)local_78 + 0x1c) = param_4;
        puVar5 = (undefined8 *)((longlong)local_78 + 0x4bU & 0xfffffffffffffff8);
        local_78[4] = param_5;
        *(undefined1 *)(local_78 + 5) = uVar15;
        *(uint *)((longlong)local_78 + 0x2c) = param_2;
        local_78[6] = lVar13;
        local_78[7] = lVar11;
        *(undefined4 *)(local_78 + 8) = uVar2;
        *puVar5 = 0;
        *local_78 = FUN_18001f658;
        *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar5;
        if (*(char *)(lVar14 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar14 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar14 + 0x1340);
          goto LAB_18001f54c;
        }
        goto LAB_18001f5a0;
      }
      *(undefined4 *)(lVar14 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar14 + 0x12c0));
    }
    plVar6 = *(longlong **)(lVar14 + 0x14a0);
    *plVar6 = param_1;
    *(undefined4 *)(plVar6 + 1) = param_3;
    *(uint *)((longlong)plVar6 + 0xc) = param_4;
    plVar6[2] = param_5;
    *(undefined1 *)(plVar6 + 3) = uVar15;
    *(uint *)((longlong)plVar6 + 0x1c) = param_2;
    plVar6[4] = lVar13;
    plVar6[5] = lVar11;
    *(undefined4 *)(plVar6 + 6) = uVar2;
    FUN_18001f658(plVar6);
LAB_18001f5a0:
    *(undefined4 *)(lVar14 + 0x12c0) = 0;
    return;
  }
  lVar13 = *(longlong *)(param_1 + 0x3340);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    if (iVar12 == -4) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = (iVar12 + 0xbU & 0xfffffff8) + 0x20;
    }
    puVar5 = (undefined8 *)FUN_180038310(lVar13 + 0x12c0,uVar4);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar13 + 0x14c0));
      puVar5[1] = (ulonglong)uVar4;
      lVar11 = 2;
      if (iVar12 != -4) {
        lVar11 = 3;
      }
      plVar6 = puVar5 + lVar11;
      *plVar6 = param_1;
      *(undefined4 *)(plVar6 + 1) = param_3;
      *(uint *)((longlong)plVar6 + 0xc) = param_4;
      *(uint *)(plVar6 + 2) = param_2;
      puVar10 = (undefined8 *)((longlong)plVar6 + 0x1bU & 0xfffffffffffffff8);
      if (iVar12 != -4) {
        puVar5[2] = puVar10;
        uVar7 = 0;
        puVar9 = (undefined8 *)((longlong)puVar10 + (ulonglong)local_80[0]);
        if (param_4 != 0) {
          lVar11 = 0x42a0;
          do {
            iVar12 = (int)uVar7;
            puVar10[uVar7] = puVar9;
            uVar4 = FUN_18001e900(param_1 + lVar11,*(longlong *)(param_5 + uVar7 * 8),puVar9);
            uVar7 = (ulonglong)(iVar12 + 1U);
            puVar9 = (undefined8 *)((longlong)puVar9 + (ulonglong)uVar4 * 4);
          } while (iVar12 + 1U < param_4);
        }
        puVar10 = (undefined8 *)
                  (((ulonglong)((int)local_78 + 0xb) & 0xfffffff8) + (longlong)puVar10);
      }
      *puVar10 = 0;
      *puVar5 = FUN_18001f5c0;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar10;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar13 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar13 + 0x1340);
LAB_18001f54c:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18001f428;
    }
    *(undefined4 *)(lVar13 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar13 + 0x12c0));
  }
  plVar8 = *(longlong **)(lVar13 + 0x14a0);
  plVar6 = plVar8 + (iVar12 != -4);
  *plVar6 = param_1;
  *(undefined4 *)(plVar6 + 1) = param_3;
  *(uint *)((longlong)plVar6 + 0xc) = param_4;
  *(uint *)(plVar6 + 2) = param_2;
  if (iVar12 != -4) {
    lVar11 = (longlong)plVar6 + 0x14;
    *plVar8 = lVar11;
    uVar7 = 0;
    puVar5 = (undefined8 *)
             ((longlong)plVar8 + (ulonglong)local_80[0] + ((ulonglong)(iVar12 != -4) << 3 | 0x14));
    if (param_4 != 0) {
      do {
        iVar12 = (int)uVar7;
        *(undefined8 **)(lVar11 + uVar7 * 8) = puVar5;
        uVar4 = FUN_18001e900(param_1 + 0x42a0,*(longlong *)(param_5 + uVar7 * 8),puVar5);
        uVar7 = (ulonglong)(iVar12 + 1U);
        puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)uVar4 * 4);
      } while (iVar12 + 1U < param_4);
    }
  }
  FUN_18001f5c0(plVar8);
LAB_18001f428:
  *(undefined4 *)(lVar13 + 0x12c0) = 0;
  return;
}

