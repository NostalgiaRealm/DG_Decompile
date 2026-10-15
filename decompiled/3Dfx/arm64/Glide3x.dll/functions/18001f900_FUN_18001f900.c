/*
 * FUN_18001f900 at 18001f900
 * undefined __cdecl FUN_18001f900(longlong param_1, uint param_2, undefined4 param_3, int param_4, undefined8 * param_5, uint param_6)
 * Address ranges: 18001f900-18001fd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f900(longlong param_1,uint param_2,undefined4 param_3,int param_4,undefined8 *param_5,
                  uint param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  HANDLE hEvent;
  longlong *plVar8;
  longlong extraout_x1;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  undefined8 local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar15 = (ulonglong)param_6;
  FUN_18001bf90(param_1 + 0x3668);
  *(uint *)(param_1 + 0x4714) = param_2;
  iVar13 = 0;
  local_78._0_4_ = *(uint *)(param_1 + 0x4710) & param_2;
  uVar6 = ((uint)local_78 & 0xaaaaaaaa) >> 1 | ((uint)local_78 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  lVar14 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  uVar6 = (uint)lVar14;
  if ((1 - (uVar6 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)&local_78 + (longlong)((int)uVar6 >> 3)) =
         *(byte *)((longlong)&local_78 + (longlong)((int)uVar6 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    while( true ) {
      iVar13 = *(int *)(param_1 + 0x45c8 + lVar14 * 0x18) + iVar13;
      uVar6 = ((uint)local_78 & 0xaaaaaaaa) >> 1 | ((uint)local_78 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar14;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)&local_78 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)&local_78 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x3340);
  iVar2 = iVar13 * 4 * param_4;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar13 * 4);
  uVar6 = iVar2 + 4;
  local_70 = CONCAT44(local_70._4_4_,uVar6);
  FUN_180038440((uint *)(lVar14 + 0x12c0));
  cVar1 = *(char *)(lVar14 + 0x14c4);
  if (0x3eff < uVar6 || cVar1 == '\0') {
    uVar16 = 0;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    puVar7 = (undefined8 *)0x0;
    local_58 = 0;
    if ((cVar1 != '\0') &&
       (bVar5 = FUN_1800587e0((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3340) + 0x17f0),uVar6,
                              (longlong *)&local_68), puVar7 = local_68, bVar5)) {
      if (param_4 != 0) {
        lVar14 = 0x42a0;
        puVar9 = local_68;
        iVar13 = param_4;
        do {
          uVar6 = FUN_18001e900(param_1 + lVar14,(longlong)param_5,puVar9);
          param_5 = (undefined8 *)((longlong)param_5 + uVar15);
          iVar13 = iVar13 + -1;
          puVar9 = (undefined8 *)((longlong)puVar9 + (ulonglong)uVar6 * 4);
        } while (iVar13 != 0);
      }
      uVar16 = 1;
      param_5 = puVar7;
      param_6 = (uint)local_78;
    }
    uVar4 = local_58;
    uVar3 = local_60;
    lVar14 = *(longlong *)(param_1 + 0x3340);
    local_70 = lVar14;
    if (*(char *)(lVar14 + 0x14c4) != '\0') {
      local_78 = (undefined8 *)FUN_180038310(lVar14 + 0x12c0,0x38);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1800643e0((uint *)(lVar14 + 0x14c0));
        local_78[1] = 0x38;
        local_78[2] = param_1;
        *(undefined4 *)(local_78 + 3) = param_3;
        *(int *)((longlong)local_78 + 0x1c) = param_4;
        local_78[4] = param_5;
        *(uint *)(local_78 + 5) = param_6;
        *(undefined1 *)((longlong)local_78 + 0x2c) = uVar16;
        *(uint *)(local_78 + 6) = param_2;
        *(undefined8 **)((longlong)local_78 + 0x34) = puVar7;
        *(undefined8 *)((longlong)local_78 + 0x3c) = uVar3;
        puVar7 = (undefined8 *)((longlong)local_78 + 0x4fU & 0xfffffffffffffff8);
        *(undefined4 *)((longlong)local_78 + 0x44) = uVar4;
        *puVar7 = 0;
        *local_78 = FUN_18001fdf8;
        *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar7;
        if (*(char *)(lVar14 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar14 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar14 + 0x1340);
          goto LAB_18001fcd0;
        }
        goto LAB_18001fd34;
      }
      *(undefined4 *)(lVar14 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar14 + 0x12c0));
    }
    plVar8 = *(longlong **)(local_70 + 0x14a0);
    *plVar8 = param_1;
    *(undefined4 *)(plVar8 + 1) = param_3;
    *(int *)((longlong)plVar8 + 0xc) = param_4;
    plVar8[2] = (longlong)param_5;
    *(uint *)(plVar8 + 3) = param_6;
    *(undefined1 *)((longlong)plVar8 + 0x1c) = uVar16;
    *(uint *)(plVar8 + 4) = param_2;
    *(undefined8 **)((longlong)plVar8 + 0x24) = puVar7;
    *(undefined8 *)((longlong)plVar8 + 0x2c) = uVar3;
    *(undefined4 *)((longlong)plVar8 + 0x34) = uVar4;
    FUN_18001fdf8(plVar8);
LAB_18001fd34:
    *(undefined4 *)(local_70 + 0x12c0) = 0;
    return;
  }
  lVar14 = *(longlong *)(param_1 + 0x3340);
  if (*(char *)(lVar14 + 0x14c4) != '\0') {
    if (uVar6 == 0) {
      uVar6 = 0x18;
    }
    else {
      uVar6 = (iVar2 + 0xbU & 0xfffffff8) + 0x20;
    }
    puVar7 = (undefined8 *)FUN_180038310(lVar14 + 0x12c0,uVar6);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar14 + 0x14c0));
      puVar7[1] = (ulonglong)uVar6;
      lVar12 = 2;
      if ((int)local_70 != 0) {
        lVar12 = 3;
      }
      plVar8 = puVar7 + lVar12;
      *plVar8 = param_1;
      *(undefined4 *)(plVar8 + 1) = param_3;
      *(int *)((longlong)plVar8 + 0xc) = param_4;
      *(uint *)(plVar8 + 2) = (uint)local_78;
      *(uint *)((longlong)plVar8 + 0x14) = param_2;
      puVar9 = (undefined8 *)((longlong)plVar8 + 0x1fU & 0xfffffffffffffff8);
      if ((int)local_70 != 0) {
        puVar7[2] = puVar9;
        if (param_4 != 0) {
          lVar12 = 0x42a0;
          puVar11 = puVar9;
          do {
            uVar6 = FUN_18001e900(param_1 + lVar12,(longlong)param_5,puVar11);
            param_5 = (undefined8 *)((longlong)param_5 + uVar15);
            param_4 = param_4 + -1;
            puVar11 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar6 * 4);
          } while (param_4 != 0);
        }
        puVar9 = (undefined8 *)(((ulonglong)(iVar2 + 0xb) & 0xfffffff8) + (longlong)puVar9);
      }
      *puVar9 = 0;
      *puVar7 = FUN_18001fd58;
      *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      if (*(char *)(lVar14 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar14 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar14 + 0x1340);
LAB_18001fcd0:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18001fba4;
    }
    *(undefined4 *)(lVar14 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar14 + 0x12c0));
  }
  plVar10 = *(longlong **)(lVar14 + 0x14a0);
  plVar8 = plVar10 + ((int)local_70 != 0);
  *plVar8 = param_1;
  *(undefined4 *)(plVar8 + 1) = param_3;
  *(int *)((longlong)plVar8 + 0xc) = param_4;
  *(uint *)(plVar8 + 2) = (uint)local_78;
  *(uint *)((longlong)plVar8 + 0x14) = param_2;
  if ((int)local_70 != 0) {
    plVar8 = plVar8 + 3;
    *plVar10 = (longlong)plVar8;
    if (param_4 != 0) {
      lVar12 = 0x42a0;
      do {
        uVar6 = FUN_18001e900(param_1 + lVar12,(longlong)param_5,plVar8);
        param_5 = (undefined8 *)(extraout_x1 + uVar15);
        param_4 = param_4 + -1;
        plVar8 = (longlong *)((longlong)plVar8 + (ulonglong)uVar6 * 4);
      } while (param_4 != 0);
    }
  }
  FUN_18001fd58(plVar10);
LAB_18001fba4:
  *(undefined4 *)(lVar14 + 0x12c0) = 0;
  return;
}

