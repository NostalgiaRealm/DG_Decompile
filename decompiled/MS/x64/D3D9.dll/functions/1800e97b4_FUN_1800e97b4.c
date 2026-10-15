/*
 * FUN_1800e97b4 at 1800e97b4
 * undefined __fastcall FUN_1800e97b4(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4, longlong * param_5, ulonglong param_6)
 * Address ranges: 1800e97b4-1800e9a4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e97b4(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5,ulonglong param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong *local_res8 [4];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  plVar6 = param_5;
  if ((param_5 == (longlong *)0x0) ||
     (uVar11 = (**(code **)(*param_5 + 0x40))(param_5), uVar7 = param_6, param_6 <= uVar11)) {
    FUN_1800e9054(param_1,param_2,(int)param_3,param_4);
    goto LAB_1800e9a2f;
  }
  uVar16 = *(uint *)(param_1 + 0x80);
  uVar18 = 0;
  if (uVar16 == 0) {
LAB_1800e9872:
    plVar12 = (longlong *)FUN_1800fbccc(0x18);
    if (plVar12 == (longlong *)0x0) goto LAB_1800e9a2f;
    *plVar12 = 0;
    *(undefined4 *)(plVar12 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)plVar12 + 0x14) = 0xffffffff;
    plVar12[1] = 0;
    uVar16 = *(uint *)(param_1 + 0x80);
    local_res8[0] = plVar12;
    if (uVar16 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
      uVar17 = uVar16;
      do {
        uVar10 = uVar17 + uVar18 >> 1;
        uVar11 = (ulonglong)uVar10;
        plVar4 = *(longlong **)(lVar3 + (ulonglong)uVar10 * 0x18);
        if (plVar4 <= plVar6) {
          if (plVar6 <= plVar4) break;
          uVar18 = uVar10 + 1;
          uVar11 = (ulonglong)uVar18;
          uVar10 = uVar17;
        }
        uVar17 = uVar10;
      } while (uVar17 != uVar18);
      uVar18 = (uint)uVar11;
      if ((uVar18 != uVar16) && (*(longlong **)(lVar3 + uVar11 * 0x18) == plVar6)) {
        *(longlong **)(lVar3 + 0x10 + uVar11 * 0x18) = plVar12;
        goto LAB_1800e9922;
      }
    }
    FUN_1800bfa0c((longlong *)(param_1 + 0x70),uVar18,plVar6,&param_5,local_res8);
    plVar12 = local_res8[0];
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x78);
    uVar10 = uVar16;
    uVar17 = uVar18;
    do {
      uVar9 = uVar10 + uVar17 >> 1;
      plVar12 = *(longlong **)(lVar3 + (ulonglong)uVar9 * 0x18);
      uVar8 = uVar9;
      if (plVar12 <= plVar6) {
        if (plVar6 <= plVar12) break;
        uVar17 = uVar9 + 1;
        uVar8 = uVar10;
        uVar9 = uVar17;
      }
      uVar10 = uVar8;
    } while (uVar10 != uVar17);
    if (((uVar9 == uVar16) || (*(longlong **)(lVar3 + (ulonglong)uVar9 * 0x18) != plVar6)) ||
       (puVar14 = (undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar9 * 0x18),
       puVar14 == (undefined8 *)0x0)) goto LAB_1800e9872;
    plVar12 = (longlong *)*puVar14;
  }
LAB_1800e9922:
  if (plVar12 != (longlong *)0x0) {
    uVar16 = *(uint *)((longlong)plVar12 + 0x14);
    if (uVar16 != 0xffffffff) {
      lVar3 = *plVar12;
      if ((*(int *)((ulonglong)uVar16 * 0x20 + 0x18 + lVar3) == 0) ||
         (uVar16 = *(uint *)((ulonglong)uVar16 * 0x20 + 0x1c + lVar3), uVar16 != 0xffffffff)) {
        lVar15 = (ulonglong)uVar16 * 0x20;
        *(int *)(lVar15 + 0x18 + lVar3) = param_2;
        *(undefined8 *)(lVar15 + *plVar12) = param_3;
        *(ulonglong *)(lVar15 + 8 + *plVar12) = param_4;
        *(ulonglong *)(lVar15 + 0x10 + *plVar12) = uVar7;
        *(uint *)((longlong)plVar12 + 0x14) = uVar16;
        goto LAB_1800e9a2f;
      }
    }
    iVar1 = (int)plVar12[1];
    iVar2 = *(int *)((longlong)plVar12 + 0xc);
    if (iVar1 == iVar2) {
      uVar11 = 0x10;
      if (iVar2 != 0) {
        uVar11 = (ulonglong)(uint)(iVar2 * 2);
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar11;
      uVar13 = SUB168(ZEXT816(0x20) * auVar5,0);
      if (SUB168(ZEXT816(0x20) * auVar5,8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      puVar14 = (undefined8 *)thunk_FUN_1800fbccc(uVar13);
      if (puVar14 == (undefined8 *)0x0) goto LAB_1800e9a2f;
      FUN_1800fbec0(puVar14,(undefined8 *)*plVar12,
                    (ulonglong)*(uint *)((longlong)plVar12 + 0xc) << 5);
      FUN_1800fbcf0((LPVOID)*plVar12);
      *plVar12 = (longlong)puVar14;
      *(int *)((longlong)plVar12 + 0xc) = (int)uVar11;
    }
    lVar3 = *plVar12;
    lVar15 = (ulonglong)*(uint *)(plVar12 + 1) * 0x20;
    *(undefined8 *)(lVar15 + lVar3) = param_3;
    *(ulonglong *)(lVar15 + 8 + lVar3) = param_4;
    *(ulonglong *)(lVar15 + 0x10 + lVar3) = uVar7;
    *(int *)(lVar15 + 0x18 + lVar3) = param_2;
    *(undefined4 *)(lVar15 + 0x1c + lVar3) = 0xffffffff;
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    if (*(int *)((longlong)plVar12 + 0x14) != -1) {
      *(int *)((ulonglong)*(uint *)((longlong)plVar12 + 0x14) * 0x20 + 0x1c + *plVar12) = iVar1;
    }
    *(int *)((longlong)plVar12 + 0x14) = iVar1;
    if ((int)plVar12[2] == -1) {
      *(int *)(plVar12 + 2) = iVar1;
    }
  }
LAB_1800e9a2f:
                    /* WARNING: Could not recover jumptable at 0x0001800e9a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}

