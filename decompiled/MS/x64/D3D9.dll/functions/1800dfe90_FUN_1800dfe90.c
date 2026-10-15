/*
 * FUN_1800dfe90 at 1800dfe90
 * undefined8 * __fastcall FUN_1800dfe90(LARGE_INTEGER param_1, undefined8 * param_2)
 * Address ranges: 1800dfe90-1800e0559
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800dfe90(LARGE_INTEGER param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  int local_res8 [2];
  int local_res10;
  int local_res18;
  int local_res20;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  uint local_b4;
  int local_b0;
  longlong *local_a8;
  LPCRITICAL_SECTION local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_84;
  int local_80;
  
  local_a0 = (LPCRITICAL_SECTION)(param_1.QuadPart + 0x620);
  EnterCriticalSection(local_a0);
  puVar8 = (undefined8 *)0x0;
  iVar4 = 1;
  if (*(int *)(param_2 + 4) != 0) {
    iVar4 = *(int *)(param_2 + 4);
  }
  local_res18 = 1;
  if (*(int *)((longlong)param_2 + 0x24) != 0) {
    local_res18 = *(int *)((longlong)param_2 + 0x24);
  }
  local_res10 = *(int *)(param_2 + 3) * iVar4;
  iVar16 = *(int *)((longlong)param_2 + 0x1c) * local_res18;
  if (((*(int *)(param_2 + 3) != 0 || *(int *)((longlong)param_2 + 0x1c) != 0) ||
      (*(int *)(param_2 + 5) != 0)) || (bVar2 = true, *(int *)((longlong)param_2 + 0x2c) != 0)) {
    bVar2 = false;
  }
  iVar1 = *(int *)(param_2 + 6);
  if (((iVar1 - 3U & 0xfffffffa) == 0) && (iVar1 != 7)) {
    iVar17 = 1;
  }
  else {
    iVar17 = 2;
    if (2 < iVar1 - 5U) {
      iVar17 = *(int *)((longlong)param_2 + 0x34);
    }
  }
  uVar14 = *(uint *)(param_1.QuadPart + 0x650);
  local_res20 = *(int *)(&DAT_1801067a0 + (longlong)iVar1 * 4);
  puVar6 = puVar8;
  if (uVar14 != 0) {
    do {
      plVar13 = *(longlong **)(*(longlong *)(param_1.QuadPart + 0x648) + (longlong)puVar6 * 8);
      if ((*plVar13 == param_2[2]) && ((int)plVar13[2] == *(int *)(param_2 + 1))) break;
      uVar9 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar9;
    } while (uVar9 < uVar14);
  }
  local_res8[0] = iVar4;
  if ((uint)puVar6 == uVar14) {
    if (bVar2) goto LAB_1800e0539;
    FUN_1800dfa90(puVar6,(HWND)param_2[2]);
    puVar6 = (undefined8 *)(*(code *)**(undefined8 **)param_1)(param_1.QuadPart);
    if (puVar6 != (undefined8 *)0x0) {
      iVar1 = *(int *)(param_1.QuadPart + 0x654);
      if (*(int *)(param_1.QuadPart + 0x650) == iVar1) {
        uVar14 = 0x10;
        if (iVar1 != 0) {
          uVar14 = iVar1 * 2;
        }
        uVar7 = SUB168(ZEXT816(8) * ZEXT416(uVar14),0);
        if (SUB168(ZEXT816(8) * ZEXT416(uVar14),8) != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        puVar8 = (undefined8 *)thunk_FUN_1800fbccc(uVar7);
        if (puVar8 == (undefined8 *)0x0) goto LAB_1800e01f5;
        FUN_1800fbec0(puVar8,*(undefined8 **)(param_1.QuadPart + 0x648),
                      (ulonglong)*(uint *)(param_1.QuadPart + 0x654) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1.QuadPart + 0x648));
        *(uint *)(param_1.QuadPart + 0x654) = uVar14;
        *(undefined8 **)(param_1.QuadPart + 0x648) = puVar8;
        iVar4 = local_res8[0];
      }
      iVar1 = local_res10;
      local_c8 = local_res10;
      *(undefined8 **)
       (*(longlong *)(param_1.QuadPart + 0x648) + (ulonglong)*(uint *)(param_1.QuadPart + 0x650) * 8
       ) = puVar6;
      *(int *)(param_1.QuadPart + 0x650) = *(int *)(param_1.QuadPart + 0x650) + 1;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 1);
      local_c0 = *(int *)(param_2 + 5);
      local_bc = *(int *)((longlong)param_2 + 0x2c);
      local_b8 = *(undefined4 *)(&DAT_1801003d8 + (longlong)*(int *)(param_2 + 7) * 4);
      local_b4 = (uint)(*(char *)((longlong)param_2 + 0x45) != '\0');
      local_b0 = local_res20;
      LVar11 = param_1;
      local_c4 = iVar16;
      cVar3 = (**(code **)(*(longlong *)param_1 + 0x10))
                        (param_1.QuadPart,puVar6,&local_c8,*(undefined4 *)((longlong)param_2 + 0x3c)
                         ,param_2[2]);
      if (cVar3 != '\0') {
        *(int *)(puVar6 + 3) = iVar1;
        *(int *)((longlong)puVar6 + 0x24) = local_res18;
        *(int *)((longlong)puVar6 + 0x1c) = iVar16;
        *(int *)(puVar6 + 4) = iVar4;
        *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)(param_2 + 7);
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)((longlong)param_2 + 0x3c);
        *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
        *(undefined1 *)((longlong)puVar6 + 0xd6b) = 1;
        FUN_1800dfa3c(LVar11,(longlong)puVar6);
        cVar3 = (**(code **)(*(longlong *)param_1 + 0x18))
                          (param_1.QuadPart,puVar6,*(undefined4 *)(param_2 + 9));
        uVar15 = 0;
        if (cVar3 == '\0') {
          *(undefined1 *)((longlong)puVar6 + 0xd6b) = 0;
          goto LAB_1800e01e1;
        }
        (**(code **)(**(longlong **)(param_1.QuadPart + 0x688) + 0x40))();
        *puVar6 = param_2[2];
        puVar6[0x1ae] = *param_2;
        iVar4 = *(int *)(param_2 + 6);
        if ((iVar4 == 7) && (*(char *)(param_1.QuadPart + 0x67c) == '\0')) {
          iVar4 = 3;
        }
        *(int *)((longlong)puVar6 + 0x2c) = iVar4;
        *(int *)(puVar6 + 6) = iVar17;
        if ((*(char *)((longlong)param_2 + 0x44) != '\0') ||
           (*(char *)(param_1.QuadPart + 0x312) == '\0')) {
          uVar15 = 1;
        }
        *(undefined1 *)(puVar6 + 0x1ad) = uVar15;
        LVar10.s.HighPart = 0;
        LVar10.s.LowPart = *(uint *)((longlong)param_2 + 0x4c);
        if (*(uint *)((longlong)param_2 + 0x4c) == 0xffffffff) {
          LVar10.QuadPart = 0;
        }
        *(DWORD *)(puVar6 + 0x1aa) = LVar10.s.LowPart;
        uVar5 = 1;
        if (*(int *)(param_2 + 10) != -1) {
          uVar5 = *(undefined4 *)(param_2 + 10);
        }
        *(undefined4 *)((longlong)puVar6 + 0xd54) = uVar5;
        if (*(int *)(param_2 + 8) == 1) {
          *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
          LVar10 = param_1;
          FUN_1800df83c((longlong *)param_1,puVar6,(longlong *)0x0,'\0');
        }
        FUN_1800df604(LVar10,(longlong)puVar6,*(uint *)((longlong)param_2 + 0x4c),
                      *(uint *)(param_2 + 10));
        (**(code **)(*(longlong *)param_1 + 0x68))(param_1.QuadPart,puVar6);
        *(undefined1 *)((longlong)puVar6 + 0xd6b) = 0;
        goto LAB_1800e052f;
      }
LAB_1800e01e1:
      if (*(int *)(param_1.QuadPart + 0x650) != 0) {
        *(int *)(param_1.QuadPart + 0x650) = *(int *)(param_1.QuadPart + 0x650) + -1;
      }
    }
LAB_1800e01f5:
    FUN_1800fbcf0(puVar6);
LAB_1800e0202:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(*(longlong *)(param_1.QuadPart + 0x648) + (longlong)puVar6 * 8);
    puVar8 = (undefined8 *)0x0;
    if (*(char *)((longlong)puVar6 + 0xd6b) != '\0') goto LAB_1800e0539;
    *(undefined1 *)((longlong)puVar6 + 0xd6b) = 1;
    FUN_1800fbea0((undefined1 *)&local_98,0,0x48);
    LVar11 = *(LARGE_INTEGER *)(puVar6 + 1);
    if ((longlong *)LVar11.QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)LVar11 + 0x60))();
    }
    puVar6[0x1ae] = *param_2;
    iVar4 = *(int *)((longlong)param_2 + 0x4c);
    if ((*(int *)(puVar6 + 0x1aa) == iVar4) || (iVar4 == -1)) {
      uVar14 = *(uint *)(param_2 + 10);
      LVar11.s.HighPart = 0;
      LVar11.s.LowPart = uVar14;
      if ((*(uint *)((longlong)puVar6 + 0xd54) != uVar14) && (uVar14 != 0xffffffff))
      goto LAB_1800e0276;
    }
    else {
LAB_1800e0276:
      *(int *)(puVar6 + 0x1aa) = iVar4;
      *(undefined4 *)((longlong)puVar6 + 0xd54) = *(undefined4 *)(param_2 + 10);
      FUN_1800df604(LVar11,(longlong)puVar6,*(uint *)((longlong)param_2 + 0x4c),
                    *(uint *)(param_2 + 10));
    }
    iVar4 = local_res8[0];
    puVar8 = puVar6;
    if (bVar2) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_1800e0539;
    }
    else {
      uVar14 = (uint)(*(char *)((longlong)param_2 + 0x45) != '\0');
      if (((((((*(int *)(puVar6 + 3) == local_res10) &&
              (*(int *)((longlong)puVar6 + 0x1c) == iVar16)) &&
             (*(int *)(puVar6 + 4) == local_res8[0])) &&
            ((*(int *)((longlong)puVar6 + 0x24) == local_res18 &&
             (local_90 == *(int *)(param_2 + 5))))) &&
           ((local_8c == *(int *)((longlong)param_2 + 0x2c) &&
            ((local_80 == local_res20 && (*(int *)(puVar6 + 6) == iVar17)))))) &&
          (*(int *)((longlong)puVar6 + 0x34) == *(int *)(param_2 + 7))) &&
         ((local_84 == uVar14 && (puVar6[1] != 0)))) {
        (**(code **)(*(longlong *)param_1 + 0x28))(param_1.QuadPart,puVar6);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x20))(param_1.QuadPart,puVar6);
        plVar13 = (longlong *)puVar6[1];
        *(int *)(puVar6 + 4) = iVar4;
        plVar12 = (longlong *)0x0;
        *(int *)(puVar6 + 3) = local_res10;
        *(int *)((longlong)puVar6 + 0x24) = local_res18;
        *(int *)((longlong)puVar6 + 0x1c) = iVar16;
        *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)(param_2 + 7);
        local_res8[0] = 0;
        local_a8 = (longlong *)0x0;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x58))(plVar13,local_res8,&local_a8);
          plVar12 = (longlong *)puVar6[1];
        }
        local_c0 = *(int *)(param_2 + 5);
        local_bc = *(int *)((longlong)param_2 + 0x2c);
        local_c8 = local_res10;
        local_b8 = *(undefined4 *)(&DAT_1801003d8 + (longlong)*(int *)(param_2 + 7) * 4);
        local_b0 = local_res20;
        local_c4 = iVar16;
        if ((*(int *)((longlong)puVar6 + 0x3c) != 0) && (iVar17 - 1U < 2)) {
          local_c8 = local_98;
          local_c4 = local_94;
          local_b0 = 0;
        }
        local_b4 = uVar14;
        if ((local_90 == local_c0) && (local_8c == local_bc)) {
          FUN_1800df6d8(plVar12,puVar6,&local_c8,local_res8[0] != 0);
        }
        else {
          plVar13 = (longlong *)0x0;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x50))(plVar12,0,0);
            plVar13 = (longlong *)puVar6[1];
            (**(code **)(*plVar13 + 0x10))();
          }
          FUN_1800dfa90(plVar13,(HWND)param_2[2]);
          LVar11 = param_1;
          cVar3 = (**(code **)(*(longlong *)param_1 + 0x10))
                            (param_1.QuadPart,puVar6,&local_c8,
                             *(undefined4 *)((longlong)param_2 + 0x3c),param_2[2]);
          if (cVar3 != '\0') {
            FUN_1800dfa3c(LVar11,(longlong)puVar6);
            (**(code **)(*(longlong *)puVar6[1] + 0x50))
                      ((longlong *)puVar6[1],local_res8[0],local_a8);
          }
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        uVar15 = 0;
        if (puVar6[1] == 0) {
          (**(code **)(*(longlong *)param_1 + 0x30))(param_1.QuadPart,puVar6);
          (**(code **)(*(longlong *)param_1 + 0x40))(param_1.QuadPart,puVar6);
          FUN_1800df374(param_1.QuadPart,puVar6);
          *(undefined1 *)((longlong)puVar6 + 0xd6b) = 0;
          goto LAB_1800e0202;
        }
        (**(code **)(**(longlong **)(param_1.QuadPart + 0x688) + 0x40))
                  (*(longlong **)(param_1.QuadPart + 0x688),param_2[2],1);
        (**(code **)(*(longlong *)param_1 + 0x18))(param_1.QuadPart,puVar6);
        *(int *)(puVar6 + 6) = iVar17;
        if ((*(char *)((longlong)param_2 + 0x44) != '\0') ||
           (*(char *)(param_1.QuadPart + 0x312) == '\0')) {
          uVar15 = 1;
        }
        *(undefined1 *)(puVar6 + 0x1ad) = uVar15;
        (**(code **)(*(longlong *)param_1 + 0x70))(param_1.QuadPart,puVar6);
      }
      if (puVar6 == (undefined8 *)0x0) goto LAB_1800e0539;
      iVar4 = *(int *)(param_2 + 6);
      if ((iVar4 == 7) && (*(char *)(param_1.QuadPart + 0x67c) == '\0')) {
        iVar4 = 3;
      }
      *(int *)((longlong)puVar6 + 0x2c) = iVar4;
      if (((*(uint *)((longlong)puVar6 + 0x3c) < 2) && (uVar14 = *(uint *)(param_2 + 8), uVar14 < 2)
          ) && (uVar14 != *(uint *)((longlong)puVar6 + 0x3c))) {
        *(uint *)((longlong)puVar6 + 0x3c) = uVar14;
        FUN_1800df83c((longlong *)param_1,puVar6,(longlong *)0x0,'\0');
      }
    }
LAB_1800e052f:
    *(int *)((longlong)puVar6 + 0x14) = *(int *)((longlong)puVar6 + 0x14) + 1;
    *(undefined1 *)((longlong)puVar6 + 0xd6b) = 0;
    puVar8 = puVar6;
  }
LAB_1800e0539:
  LeaveCriticalSection(local_a0);
  return puVar8;
}

