/*
 * FUN_18005cc80 at 18005cc80
 * undefined __fastcall FUN_18005cc80(longlong * param_1, undefined8 param_2)
 * Address ranges: 18005cc80-18005d234
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005cc80(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined4 local_3c;
  
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar23 = *(uint *)((longlong)param_1 + 0x74);
  plVar1 = param_1 + 0xc;
  bVar14 = false;
  if (uVar23 == 0xffffffff) {
LAB_18005cced:
    uVar23 = *(uint *)(param_1 + 0xd);
    uVar24 = *(uint *)((longlong)param_1 + 0x6c);
    if (uVar23 == uVar24) {
      uVar26 = 0x10;
      if (uVar24 != 0) {
        uVar26 = (ulonglong)(uVar24 * 2);
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar26;
      uVar17 = SUB168(ZEXT816(0x10) * auVar8,0);
      if (SUB168(ZEXT816(0x10) * auVar8,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_18005d6fc(uVar17);
      if (puVar18 == (undefined8 *)0x0) goto LAB_18005d1f3;
      FUN_18005ed10(puVar18,(undefined8 *)*plVar1,
                    (ulonglong)*(uint *)((longlong)param_1 + 0x6c) << 4);
      FUN_18005d720((LPVOID)*plVar1);
      *plVar1 = (longlong)puVar18;
      *(int *)((longlong)param_1 + 0x6c) = (int)uVar26;
    }
    uVar26 = (ulonglong)*(uint *)(param_1 + 0xd);
    lVar20 = *plVar1;
    *(undefined8 *)(lVar20 + uVar26 * 0x10) = param_2;
    *(undefined4 *)(lVar20 + 8 + uVar26 * 0x10) = 0xffffffff;
    *(undefined4 *)(lVar20 + 0xc + uVar26 * 0x10) = 0xffffffff;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    if (*(int *)((longlong)param_1 + 0x74) != -1) {
      *(uint *)(*plVar1 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x74) * 0x10) = uVar23;
      *(undefined4 *)(*plVar1 + 8 + (ulonglong)uVar23 * 0x10) =
           *(undefined4 *)((longlong)param_1 + 0x74);
    }
    *(uint *)((longlong)param_1 + 0x74) = uVar23;
    if ((int)param_1[0xe] == -1) {
      *(uint *)(param_1 + 0xe) = uVar23;
    }
    if (uVar23 == 0xffffffff) goto LAB_18005d1f3;
  }
  else {
    lVar20 = *plVar1;
    if ((*(longlong *)(lVar20 + (ulonglong)uVar23 * 0x10) != 0) &&
       (uVar23 = *(uint *)(lVar20 + 0xc + (ulonglong)uVar23 * 0x10), uVar23 == 0xffffffff))
    goto LAB_18005cced;
    *(undefined8 *)(lVar20 + (ulonglong)uVar23 * 0x10) = param_2;
    *(uint *)((longlong)param_1 + 0x74) = uVar23;
  }
  local_res18 = 0;
  local_res8 = 0;
  (**(code **)*param_1)(param_1,param_2,&local_res18,&local_res8);
  uVar24 = *(uint *)(param_1 + 0xb);
  if (uVar24 == 0) {
LAB_18005cebd:
    plVar19 = (longlong *)FUN_18005d6fc(0x10);
    if (plVar19 == (longlong *)0x0) goto LAB_18005d1f3;
    *plVar19 = 0;
    plVar19[1] = 0;
    iVar5 = *(int *)((longlong)plVar19 + 0xc);
    if ((int)plVar19[1] == iVar5) {
      uVar26 = 0x10;
      if (iVar5 != 0) {
        uVar26 = (ulonglong)(uint)(iVar5 * 2);
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar26;
      uVar17 = SUB168(ZEXT816(0x10) * auVar10,0);
      if (SUB168(ZEXT816(0x10) * auVar10,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_18005d6fc(uVar17);
      if (puVar18 == (undefined8 *)0x0) {
        FUN_18005d720((LPVOID)*plVar19);
        FUN_18005d720(plVar19);
        goto LAB_18005d1f3;
      }
      FUN_18005ed10(puVar18,(undefined8 *)*plVar19,
                    (ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
      FUN_18005d720((LPVOID)*plVar19);
      *plVar19 = (longlong)puVar18;
      *(int *)((longlong)plVar19 + 0xc) = (int)uVar26;
      param_2 = local_res10;
    }
    uVar26 = local_res8;
    uVar27 = (ulonglong)*(uint *)(plVar19 + 1);
    lVar20 = *plVar19;
    *(undefined8 *)(lVar20 + uVar27 * 0x10) = param_2;
    *(uint *)(lVar20 + 8 + uVar27 * 0x10) = uVar23;
    uVar24 = 0;
    *(undefined4 *)(lVar20 + 0xc + uVar27 * 0x10) = local_3c;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    param_1[2] = param_1[2] + local_res18;
    uVar23 = *(uint *)(param_1 + 0xb);
    if (uVar23 != 0) {
      lVar20 = param_1[10];
      uVar21 = 0;
      do {
        uVar24 = uVar23 + uVar21 >> 1;
        uVar27 = *(ulonglong *)(lVar20 + (ulonglong)uVar24 * 0x18);
        uVar22 = uVar24;
        if (uVar27 <= local_res8) {
          if (local_res8 <= uVar27) break;
          uVar21 = uVar24 + 1;
          uVar22 = uVar23;
          uVar24 = uVar21;
        }
        uVar23 = uVar22;
      } while (uVar23 != uVar21);
      if ((uVar24 != *(uint *)(param_1 + 0xb)) &&
         (*(ulonglong *)(lVar20 + (ulonglong)uVar24 * 0x18) == local_res8)) {
        *(longlong **)(lVar20 + 0x10 + (ulonglong)uVar24 * 0x18) = plVar19;
        goto LAB_18005d0a5;
      }
    }
    iVar5 = *(int *)((longlong)param_1 + 0x5c);
    if (iVar5 == (int)param_1[0xb]) {
      uVar27 = (ulonglong)(uint)(iVar5 * 2);
      if (iVar5 == 0) {
        uVar27 = 0x10;
      }
      lVar20 = thunk_FUN_18005d6fc(uVar27 * 0x18);
      if (lVar20 != 0) {
        uVar25 = 0;
        if ((int)param_1[0xb] != 0) {
          do {
            lVar6 = param_1[10];
            uVar23 = (int)uVar25 + 1;
            puVar18 = (undefined8 *)(lVar6 + uVar25 * 0x18);
            uVar17 = puVar18[1];
            puVar2 = (undefined8 *)(lVar20 + uVar25 * 0x18);
            *puVar2 = *puVar18;
            puVar2[1] = uVar17;
            *(undefined8 *)(lVar20 + 0x10 + uVar25 * 0x18) =
                 *(undefined8 *)(lVar6 + 0x10 + uVar25 * 0x18);
            uVar25 = (ulonglong)uVar23;
          } while (uVar23 < *(uint *)(param_1 + 0xb));
        }
        FUN_18005d720((LPVOID)param_1[9]);
        param_1[9] = lVar20;
        param_1[10] = lVar20;
        *(int *)((longlong)param_1 + 0x5c) = (int)uVar27;
      }
    }
    uVar23 = *(uint *)(param_1 + 0xb);
    uVar27 = (ulonglong)uVar23;
    if (*(uint *)((longlong)param_1 + 0x5c) != uVar23) {
      while (uVar24 < uVar23) {
        lVar20 = param_1[10];
        uVar23 = (int)uVar27 - 1;
        uVar25 = (ulonglong)uVar23;
        puVar18 = (undefined8 *)(lVar20 + uVar25 * 0x18);
        uVar17 = puVar18[1];
        puVar2 = (undefined8 *)(lVar20 + uVar27 * 0x18);
        *puVar2 = *puVar18;
        puVar2[1] = uVar17;
        *(undefined8 *)(lVar20 + 0x10 + uVar27 * 0x18) =
             *(undefined8 *)(lVar20 + 0x10 + uVar25 * 0x18);
        uVar27 = uVar25;
      }
      *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      uVar27 = (ulonglong)uVar24;
      *(ulonglong *)(param_1[10] + 8 + uVar27 * 0x18) = local_res8;
      *(longlong **)(param_1[10] + 0x10 + uVar27 * 0x18) = plVar19;
      *(ulonglong *)(param_1[10] + uVar27 * 0x18) = uVar26;
    }
  }
  else {
    uVar22 = 0;
    lVar20 = param_1[10];
    uVar21 = uVar24;
    do {
      uVar16 = uVar21 + uVar22 >> 1;
      uVar26 = *(ulonglong *)(lVar20 + (ulonglong)uVar16 * 0x18);
      uVar15 = uVar16;
      if (uVar26 <= local_res8) {
        if (local_res8 <= uVar26) break;
        uVar16 = uVar16 + 1;
        uVar15 = uVar21;
        uVar22 = uVar16;
      }
      uVar21 = uVar15;
    } while (uVar21 != uVar22);
    if (((uVar16 == uVar24) || (*(ulonglong *)(lVar20 + (ulonglong)uVar16 * 0x18) != local_res8)) ||
       (plVar19 = (longlong *)(lVar20 + 0x10 + (ulonglong)uVar16 * 0x18), plVar19 == (longlong *)0x0
       )) goto LAB_18005cebd;
    plVar19 = (longlong *)*plVar19;
    iVar5 = *(int *)((longlong)plVar19 + 0xc);
    if ((int)plVar19[1] == iVar5) {
      uVar26 = 0x10;
      if (iVar5 != 0) {
        uVar26 = (ulonglong)(uint)(iVar5 * 2);
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar26;
      uVar17 = SUB168(ZEXT816(0x10) * auVar9,0);
      if (SUB168(ZEXT816(0x10) * auVar9,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_18005d6fc(uVar17);
      if (puVar18 == (undefined8 *)0x0) goto LAB_18005d1f3;
      FUN_18005ed10(puVar18,(undefined8 *)*plVar19,
                    (ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
      FUN_18005d720((LPVOID)*plVar19);
      *plVar19 = (longlong)puVar18;
      *(int *)((longlong)plVar19 + 0xc) = (int)uVar26;
      param_2 = local_res10;
    }
    uVar26 = (ulonglong)*(uint *)(plVar19 + 1);
    lVar20 = *plVar19;
    *(undefined8 *)(lVar20 + uVar26 * 0x10) = param_2;
    *(uint *)(lVar20 + 8 + uVar26 * 0x10) = uVar23;
    *(undefined4 *)(lVar20 + 0xc + uVar26 * 0x10) = local_3c;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    param_1[2] = param_1[2] + local_res18;
  }
LAB_18005d0a5:
  bVar14 = true;
LAB_18005d1f3:
  do {
    if (((ulonglong)param_1[2] <= (ulonglong)param_1[1]) ||
       (lVar20 = FUN_18005ca40(plVar1), lVar20 == 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      if (!bVar14) {
        (**(code **)(*param_1 + 8))(param_1,local_res10);
      }
      return;
    }
    local_res18 = 0;
    local_res8 = 0;
    (**(code **)*param_1)(param_1,lVar20,&local_res18,&local_res8);
    uVar23 = *(uint *)(param_1 + 0xb);
    if (uVar23 != 0) {
      uVar24 = 0;
      lVar6 = param_1[10];
      uVar21 = uVar23;
      do {
        uVar16 = uVar21 + uVar24 >> 1;
        uVar26 = *(ulonglong *)(lVar6 + (ulonglong)uVar16 * 0x18);
        uVar22 = uVar16;
        if (uVar26 <= local_res8) {
          if (local_res8 <= uVar26) break;
          uVar24 = uVar16 + 1;
          uVar22 = uVar21;
          uVar16 = uVar24;
        }
        uVar21 = uVar22;
      } while (uVar21 != uVar24);
      if (((uVar16 != uVar23) && (*(ulonglong *)(lVar6 + (ulonglong)uVar16 * 0x18) == local_res8))
         && (plVar19 = (longlong *)(lVar6 + 0x10 + (ulonglong)uVar16 * 0x18),
            plVar19 != (longlong *)0x0)) {
        plVar7 = (longlong *)*plVar19;
        uVar23 = *(uint *)(plVar7 + 1);
        if (uVar23 != 0) {
          uVar26 = 0;
LAB_18005d15f:
          uVar24 = (int)uVar26 + 1;
          if (*(longlong *)(*plVar7 + uVar26 * 0x10) != lVar20) break;
          if (uVar24 < uVar23) {
            do {
              uVar23 = uVar24 - 1;
              uVar26 = (ulonglong)uVar24;
              uVar24 = uVar24 + 1;
              puVar3 = (undefined4 *)(*plVar7 + uVar26 * 0x10);
              uVar11 = puVar3[1];
              uVar12 = puVar3[2];
              uVar13 = puVar3[3];
              puVar4 = (undefined4 *)(*plVar7 + (ulonglong)uVar23 * 0x10);
              *puVar4 = *puVar3;
              puVar4[1] = uVar11;
              puVar4[2] = uVar12;
              puVar4[3] = uVar13;
              uVar23 = *(uint *)(plVar7 + 1);
            } while (uVar24 < uVar23);
          }
          *(uint *)(plVar7 + 1) = uVar23 - 1;
          puVar18 = (undefined8 *)*plVar19;
          if (*(int *)(puVar18 + 1) == 0) {
            if (puVar18 != (undefined8 *)0x0) {
              FUN_18005d720((LPVOID)*puVar18);
              FUN_18005d720(puVar18);
            }
            FUN_180058aac((longlong)(param_1 + 9),&local_res8);
          }
          param_1[2] = param_1[2] - local_res18;
        }
      }
    }
LAB_18005d1e7:
    (**(code **)(*param_1 + 8))(param_1,lVar20);
  } while( true );
  uVar26 = (ulonglong)uVar24;
  if (uVar23 <= uVar24) goto LAB_18005d1e7;
  goto LAB_18005d15f;
}

