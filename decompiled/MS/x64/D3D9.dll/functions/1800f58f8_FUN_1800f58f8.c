/*
 * FUN_1800f58f8 at 1800f58f8
 * undefined __fastcall FUN_1800f58f8(longlong * param_1, undefined8 param_2)
 * Address ranges: 1800f58f8-1800f5def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f58f8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char cVar25;
  ulonglong local_res8;
  ulonglong local_res18;
  longlong local_res20;
  longlong *local_48;
  undefined4 local_3c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar16 = *(uint *)((longlong)param_1 + 0x74);
  plVar1 = param_1 + 0xc;
  cVar25 = '\0';
  local_res8 = local_res8 & 0xffffffffffffff00;
  if (uVar16 == 0xffffffff) {
LAB_1800f596a:
    uVar16 = *(uint *)(param_1 + 0xd);
    uVar24 = *(uint *)((longlong)param_1 + 0x6c);
    if (uVar16 == uVar24) {
      uVar21 = 0x10;
      if (uVar24 != 0) {
        uVar21 = (ulonglong)(uVar24 * 2);
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      uVar17 = SUB168(ZEXT816(0x10) * auVar8,0);
      if (SUB168(ZEXT816(0x10) * auVar8,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_1800fbccc(uVar17);
      if (puVar18 == (undefined8 *)0x0) goto LAB_1800f5daf;
      FUN_1800fbec0(puVar18,(undefined8 *)*plVar1,
                    (ulonglong)*(uint *)((longlong)param_1 + 0x6c) << 4);
      FUN_1800fbcf0((LPVOID)*plVar1);
      *plVar1 = (longlong)puVar18;
      *(int *)((longlong)param_1 + 0x6c) = (int)uVar21;
    }
    uVar21 = (ulonglong)*(uint *)(param_1 + 0xd);
    lVar20 = *plVar1;
    *(undefined8 *)(lVar20 + uVar21 * 0x10) = param_2;
    *(undefined4 *)(lVar20 + 8 + uVar21 * 0x10) = 0xffffffff;
    *(undefined4 *)(lVar20 + 0xc + uVar21 * 0x10) = 0xffffffff;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    if (*(int *)((longlong)param_1 + 0x74) != -1) {
      *(uint *)(*plVar1 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x74) * 0x10) = uVar16;
      *(undefined4 *)(*plVar1 + 8 + (ulonglong)uVar16 * 0x10) =
           *(undefined4 *)((longlong)param_1 + 0x74);
    }
    *(uint *)((longlong)param_1 + 0x74) = uVar16;
    if ((int)param_1[0xe] == -1) {
      *(uint *)(param_1 + 0xe) = uVar16;
    }
    if (uVar16 == 0xffffffff) goto LAB_1800f5daf;
  }
  else {
    lVar20 = *plVar1;
    if ((*(longlong *)(lVar20 + (ulonglong)uVar16 * 0x10) != 0) &&
       (uVar16 = *(uint *)(lVar20 + 0xc + (ulonglong)uVar16 * 0x10), uVar16 == 0xffffffff))
    goto LAB_1800f596a;
    *(undefined8 *)(lVar20 + (ulonglong)uVar16 * 0x10) = param_2;
    *(uint *)((longlong)param_1 + 0x74) = uVar16;
  }
  uVar21 = 0x10;
  local_res20 = 0;
  local_res18 = 0;
  (**(code **)*param_1)(param_1,param_2,&local_res20,&local_res18);
  uVar24 = *(uint *)(param_1 + 0xb);
  if (uVar24 == 0) {
LAB_1800f5b35:
    plVar19 = (longlong *)FUN_1800fbccc(0x10);
    if (plVar19 == (longlong *)0x0) goto LAB_1800f5daf;
    *plVar19 = 0;
    plVar19[1] = 0;
    iVar4 = *(int *)((longlong)plVar19 + 0xc);
    local_48 = plVar19;
    if ((int)plVar19[1] == iVar4) {
      if (iVar4 != 0) {
        uVar21 = (ulonglong)(uint)(iVar4 * 2);
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      uVar17 = SUB168(ZEXT816(0x10) * auVar10,0);
      if (SUB168(ZEXT816(0x10) * auVar10,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_1800fbccc(uVar17);
      if (puVar18 == (undefined8 *)0x0) {
        FUN_1800fbcf0((LPVOID)*plVar19);
        FUN_1800fbcf0(plVar19);
        goto LAB_1800f5c19;
      }
      FUN_1800fbec0(puVar18,(undefined8 *)*plVar19,
                    (ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
      FUN_1800fbcf0((LPVOID)*plVar19);
      *plVar19 = (longlong)puVar18;
      *(int *)((longlong)plVar19 + 0xc) = (int)uVar21;
    }
    uVar21 = (ulonglong)*(uint *)(plVar19 + 1);
    lVar20 = *plVar19;
    *(undefined8 *)(lVar20 + uVar21 * 0x10) = param_2;
    *(uint *)(lVar20 + 8 + uVar21 * 0x10) = uVar16;
    *(undefined4 *)(lVar20 + 0xc + uVar21 * 0x10) = local_3c;
    uVar24 = 0;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    param_1[2] = param_1[2] + local_res20;
    uVar16 = *(uint *)(param_1 + 0xb);
    if (uVar16 != 0) {
      lVar20 = param_1[10];
      uVar23 = 0;
      uVar22 = uVar16;
      do {
        uVar24 = uVar22 + uVar23 >> 1;
        uVar21 = *(ulonglong *)(lVar20 + (ulonglong)uVar24 * 0x18);
        uVar15 = uVar24;
        if (uVar21 <= local_res18) {
          if (local_res18 <= uVar21) break;
          uVar23 = uVar24 + 1;
          uVar15 = uVar22;
          uVar24 = uVar23;
        }
        uVar22 = uVar15;
      } while (uVar22 != uVar23);
      if ((uVar24 != uVar16) && (*(ulonglong *)(lVar20 + (ulonglong)uVar24 * 0x18) == local_res18))
      {
        *(longlong **)(lVar20 + 0x10 + (ulonglong)uVar24 * 0x18) = plVar19;
        goto LAB_1800f5b2d;
      }
    }
    FUN_1800bfa0c(param_1 + 9,uVar24,local_res18,&local_res18,&local_48);
  }
  else {
    uVar22 = 0;
    lVar20 = param_1[10];
    uVar23 = uVar24;
    do {
      uVar15 = uVar23 + uVar22 >> 1;
      uVar5 = *(ulonglong *)(lVar20 + (ulonglong)uVar15 * 0x18);
      uVar14 = uVar15;
      if (uVar5 <= local_res18) {
        if (local_res18 <= uVar5) break;
        uVar15 = uVar15 + 1;
        uVar14 = uVar23;
        uVar22 = uVar15;
      }
      uVar23 = uVar14;
    } while (uVar23 != uVar22);
    if (((uVar15 == uVar24) || (*(ulonglong *)(lVar20 + (ulonglong)uVar15 * 0x18) != local_res18))
       || (plVar19 = (longlong *)(lVar20 + 0x10 + (ulonglong)uVar15 * 0x18),
          plVar19 == (longlong *)0x0)) goto LAB_1800f5b35;
    plVar19 = (longlong *)*plVar19;
    iVar4 = *(int *)((longlong)plVar19 + 0xc);
    if ((int)plVar19[1] == iVar4) {
      if (iVar4 != 0) {
        uVar21 = (ulonglong)(uint)(iVar4 * 2);
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar21;
      uVar17 = SUB168(ZEXT816(0x10) * auVar9,0);
      if (SUB168(ZEXT816(0x10) * auVar9,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar18 = (undefined8 *)thunk_FUN_1800fbccc(uVar17);
      if (puVar18 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar18,(undefined8 *)*plVar19,
                      (ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
        FUN_1800fbcf0((LPVOID)*plVar19);
        *plVar19 = (longlong)puVar18;
        *(int *)((longlong)plVar19 + 0xc) = (int)uVar21;
        goto LAB_1800f5b0a;
      }
LAB_1800f5c19:
      cVar25 = (char)local_res8;
      goto LAB_1800f5daf;
    }
LAB_1800f5b0a:
    uVar21 = (ulonglong)*(uint *)(plVar19 + 1);
    lVar20 = *plVar19;
    *(undefined8 *)(lVar20 + uVar21 * 0x10) = param_2;
    *(uint *)(lVar20 + 8 + uVar21 * 0x10) = uVar16;
    *(undefined4 *)(lVar20 + 0xc + uVar21 * 0x10) = local_3c;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    param_1[2] = param_1[2] + local_res20;
  }
LAB_1800f5b2d:
  cVar25 = '\x01';
LAB_1800f5daf:
  do {
    if (((ulonglong)param_1[2] <= (ulonglong)param_1[1]) ||
       (lVar20 = FUN_1800f56b8(plVar1), lVar20 == 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      if (cVar25 == '\0') {
        (**(code **)(*param_1 + 8))(param_1,param_2);
      }
      return;
    }
    local_res18 = 0;
    local_res8 = 0;
    (**(code **)*param_1)(param_1,lVar20,&local_res18,&local_res8);
    uVar16 = *(uint *)(param_1 + 0xb);
    if (uVar16 != 0) {
      uVar24 = 0;
      lVar6 = param_1[10];
      uVar23 = uVar16;
      do {
        uVar15 = uVar23 + uVar24 >> 1;
        uVar21 = *(ulonglong *)(lVar6 + (ulonglong)uVar15 * 0x18);
        uVar22 = uVar15;
        if (uVar21 <= local_res8) {
          if (local_res8 <= uVar21) break;
          uVar24 = uVar15 + 1;
          uVar22 = uVar23;
          uVar15 = uVar24;
        }
        uVar23 = uVar22;
      } while (uVar23 != uVar24);
      if (((uVar15 != uVar16) && (*(ulonglong *)(lVar6 + (ulonglong)uVar15 * 0x18) == local_res8))
         && (plVar19 = (longlong *)(lVar6 + 0x10 + (ulonglong)uVar15 * 0x18),
            plVar19 != (longlong *)0x0)) {
        plVar7 = (longlong *)*plVar19;
        uVar16 = *(uint *)(plVar7 + 1);
        if (uVar16 != 0) {
          uVar21 = 0;
LAB_1800f5d1b:
          uVar24 = (int)uVar21 + 1;
          if (*(longlong *)(*plVar7 + uVar21 * 0x10) != lVar20) break;
          if (uVar24 < uVar16) {
            do {
              uVar16 = uVar24 - 1;
              uVar21 = (ulonglong)uVar24;
              uVar24 = uVar24 + 1;
              puVar2 = (undefined4 *)(*plVar7 + uVar21 * 0x10);
              uVar11 = puVar2[1];
              uVar12 = puVar2[2];
              uVar13 = puVar2[3];
              puVar3 = (undefined4 *)(*plVar7 + (ulonglong)uVar16 * 0x10);
              *puVar3 = *puVar2;
              puVar3[1] = uVar11;
              puVar3[2] = uVar12;
              puVar3[3] = uVar13;
              uVar16 = *(uint *)(plVar7 + 1);
            } while (uVar24 < uVar16);
          }
          *(uint *)(plVar7 + 1) = uVar16 - 1;
          puVar18 = (undefined8 *)*plVar19;
          if (*(int *)(puVar18 + 1) == 0) {
            if (puVar18 != (undefined8 *)0x0) {
              FUN_1800fbcf0((LPVOID)*puVar18);
              FUN_1800fbcf0(puVar18);
            }
            FUN_180057844((longlong)(param_1 + 9),&local_res8);
          }
          param_1[2] = param_1[2] - local_res18;
        }
      }
    }
LAB_1800f5da3:
    (**(code **)(*param_1 + 8))(param_1,lVar20);
  } while( true );
  uVar21 = (ulonglong)uVar24;
  if (uVar16 <= uVar24) goto LAB_1800f5da3;
  goto LAB_1800f5d1b;
}

