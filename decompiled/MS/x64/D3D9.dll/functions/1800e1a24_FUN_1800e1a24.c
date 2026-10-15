/*
 * FUN_1800e1a24 at 1800e1a24
 * undefined __fastcall FUN_1800e1a24(longlong param_1, uint param_2, int param_3, longlong * param_4, ulonglong param_5)
 * Address ranges: 1800e1a24-1800e1ca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e1a24(longlong param_1,uint param_2,int param_3,longlong *param_4,ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  longlong *local_res20;
  longlong *local_68 [3];
  undefined4 local_4c;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  local_res20 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((param_4 == (longlong *)0x0) ||
     (uVar10 = (**(code **)(*param_4 + 0x40))(param_4), param_5 <= uVar10)) {
    FUN_1800e149c(param_1,param_2,param_3);
    goto LAB_1800e1c88;
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar15 = 0;
  if (uVar1 == 0) {
LAB_1800e1adb:
    plVar11 = (longlong *)FUN_1800fbccc(0x18);
    if (plVar11 == (longlong *)0x0) goto LAB_1800e1c88;
    *plVar11 = 0;
    *(undefined4 *)(plVar11 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)plVar11 + 0x14) = 0xffffffff;
    plVar11[1] = 0;
    uVar1 = *(uint *)(param_1 + 0x70);
    local_68[0] = plVar11;
    if (uVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      uVar14 = uVar1;
      do {
        uVar9 = uVar14 + uVar15 >> 1;
        uVar10 = (ulonglong)uVar9;
        plVar5 = *(longlong **)(lVar4 + (ulonglong)uVar9 * 0x18);
        if (plVar5 <= param_4) {
          if (param_4 <= plVar5) break;
          uVar15 = uVar9 + 1;
          uVar10 = (ulonglong)uVar15;
          uVar9 = uVar14;
        }
        uVar14 = uVar9;
      } while (uVar14 != uVar15);
      uVar15 = (uint)uVar10;
      if ((uVar15 != uVar1) && (*(longlong **)(lVar4 + uVar10 * 0x18) == param_4)) {
        *(longlong **)(lVar4 + 0x10 + uVar10 * 0x18) = plVar11;
        goto LAB_1800e1b7f;
      }
    }
    FUN_1800bfa0c((longlong *)(param_1 + 0x60),uVar15,param_4,&local_res20,local_68);
    plVar11 = local_68[0];
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x68);
    uVar9 = uVar1;
    uVar14 = uVar15;
    do {
      uVar8 = uVar9 + uVar14 >> 1;
      plVar11 = *(longlong **)(lVar4 + (ulonglong)uVar8 * 0x18);
      uVar7 = uVar8;
      if (plVar11 <= param_4) {
        if (param_4 <= plVar11) break;
        uVar14 = uVar8 + 1;
        uVar7 = uVar9;
        uVar8 = uVar14;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar14);
    if (((uVar8 == uVar1) || (*(longlong **)(lVar4 + (ulonglong)uVar8 * 0x18) != param_4)) ||
       (puVar13 = (undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar8 * 0x18),
       puVar13 == (undefined8 *)0x0)) goto LAB_1800e1adb;
    plVar11 = (longlong *)*puVar13;
  }
LAB_1800e1b7f:
  if (plVar11 != (longlong *)0x0) {
    uVar10 = (ulonglong)*(uint *)((longlong)plVar11 + 0x14);
    if ((*(uint *)((longlong)plVar11 + 0x14) == 0xffffffff) ||
       ((lVar4 = *plVar11, *(int *)(lVar4 + uVar10 * 0x18) != -1 &&
        (uVar1 = *(uint *)(lVar4 + 0x10 + uVar10 * 0x18), uVar10 = (ulonglong)uVar1,
        uVar1 == 0xffffffff)))) {
      iVar2 = (int)plVar11[1];
      iVar3 = *(int *)((longlong)plVar11 + 0xc);
      if (iVar2 == iVar3) {
        uVar10 = 0x10;
        if (iVar3 != 0) {
          uVar10 = (ulonglong)(uint)(iVar3 * 2);
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar10;
        uVar12 = SUB168(ZEXT816(0x18) * auVar6,0);
        if (SUB168(ZEXT816(0x18) * auVar6,8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        puVar13 = (undefined8 *)thunk_FUN_1800fbccc(uVar12);
        if (puVar13 == (undefined8 *)0x0) goto LAB_1800e1c88;
        FUN_1800fbec0(puVar13,(undefined8 *)*plVar11,
                      (ulonglong)*(uint *)((longlong)plVar11 + 0xc) * 0x18);
        FUN_1800fbcf0((LPVOID)*plVar11);
        *plVar11 = (longlong)puVar13;
        *(int *)((longlong)plVar11 + 0xc) = (int)uVar10;
      }
      uVar10 = (ulonglong)*(uint *)(plVar11 + 1);
      lVar4 = *plVar11;
      *(uint *)(lVar4 + uVar10 * 0x18) = param_2;
      *(int *)(lVar4 + 4 + uVar10 * 0x18) = param_3;
      *(ulonglong *)(lVar4 + 8 + uVar10 * 0x18) = param_5;
      *(undefined4 *)(lVar4 + 0x10 + uVar10 * 0x18) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x14 + uVar10 * 0x18) = local_4c;
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      if (*(int *)((longlong)plVar11 + 0x14) != -1) {
        *(int *)(*plVar11 + 0x10 + (ulonglong)*(uint *)((longlong)plVar11 + 0x14) * 0x18) = iVar2;
      }
      *(int *)((longlong)plVar11 + 0x14) = iVar2;
      if ((int)plVar11[2] == -1) {
        *(int *)(plVar11 + 2) = iVar2;
      }
    }
    else {
      *(uint *)(lVar4 + uVar10 * 0x18) = param_2;
      *(int *)(*plVar11 + 4 + uVar10 * 0x18) = param_3;
      *(ulonglong *)(*plVar11 + 8 + uVar10 * 0x18) = param_5;
      *(int *)((longlong)plVar11 + 0x14) = (int)uVar10;
    }
  }
LAB_1800e1c88:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}

