/*
 * FUN_1800e6a70 at 1800e6a70
 * uint __fastcall FUN_1800e6a70(longlong * param_1, uint * param_2)
 * Address ranges: 1800e6a70-1800e6f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800e6a70(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_res8;
  
  plVar3 = param_1 + 3;
  uVar9 = 0;
  uVar14 = (ulonglong)
           ((((((param_2[6] - 1) * 0x10 | param_2[5] - 1) << 3 | param_2[3]) << 3 | param_2[2]) << 3
            | param_2[1]) << 8 | *param_2);
  uVar15 = *(uint *)((longlong)param_1 + 0x24);
  if (uVar15 == 0) {
LAB_1800e6b10:
    if (*(int *)((longlong)param_1 + 0x24) == (int)param_1[4]) {
      auVar7 = ZEXT816(0x48) * ZEXT416((uint)((int)param_1[4] * 2));
      uVar11 = auVar7._0_8_;
      if (auVar7._8_8_ != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      lVar12 = thunk_FUN_1800fbccc(uVar11);
      if (lVar12 != 0) {
        uVar16 = 0;
        if ((int)param_1[4] != 0) {
          do {
            lVar6 = *plVar3;
            uVar15 = (int)uVar16 + 1;
            puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x48);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)(lVar12 + uVar16 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar16 * 0x48);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)(lVar12 + 0x10 + uVar16 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar16 * 0x48);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)(lVar12 + 0x20 + uVar16 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            puVar1 = (undefined8 *)(lVar6 + 0x30 + uVar16 * 0x48);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)(lVar12 + 0x30 + uVar16 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            *(undefined8 *)(lVar12 + 0x40 + uVar16 * 0x48) =
                 *(undefined8 *)(lVar6 + 0x40 + uVar16 * 0x48);
            uVar16 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(param_1 + 4));
        }
        FUN_1800fbcf0((LPVOID)*plVar3);
        *(int *)(param_1 + 4) = (int)param_1[4] << 1;
        *plVar3 = lVar12;
      }
    }
    uVar15 = *(uint *)((longlong)param_1 + 0x24);
    uVar16 = (ulonglong)uVar15;
    while (uVar9 < uVar15) {
      lVar12 = *plVar3;
      uVar15 = (int)uVar16 - 1;
      uVar17 = (ulonglong)uVar15;
      puVar1 = (undefined8 *)(lVar12 + uVar17 * 0x48);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + uVar16 * 0x48);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar1 = (undefined8 *)(lVar12 + 0x10 + uVar17 * 0x48);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + 0x10 + uVar16 * 0x48);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar1 = (undefined8 *)(lVar12 + 0x20 + uVar17 * 0x48);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + 0x20 + uVar16 * 0x48);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar1 = (undefined8 *)(lVar12 + 0x30 + uVar17 * 0x48);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + 0x30 + uVar16 * 0x48);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar12 + 0x40 + uVar16 * 0x48) =
           *(undefined8 *)(lVar12 + 0x40 + uVar17 * 0x48);
      uVar16 = uVar17;
    }
    FUN_1800e7d9c(plVar3,(ulonglong)uVar9,uVar14,(undefined8 *)param_2);
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  }
  else {
    uVar10 = 0;
    do {
      uVar9 = uVar15 + uVar10 >> 1;
      uVar16 = *(ulonglong *)(*plVar3 + (ulonglong)uVar9 * 0x48);
      uVar13 = uVar9;
      if (uVar16 <= uVar14) {
        if (uVar14 <= uVar16) break;
        uVar10 = uVar9 + 1;
        uVar13 = uVar15;
        uVar9 = uVar10;
      }
      uVar15 = uVar13;
    } while (uVar15 != uVar10);
    if ((uVar9 == *(uint *)((longlong)param_1 + 0x24)) ||
       (*(ulonglong *)(*plVar3 + (ulonglong)uVar9 * 0x48) != uVar14)) goto LAB_1800e6b10;
  }
  plVar3 = (longlong *)(*plVar3 + ((ulonglong)uVar9 * 9 + 8) * 8);
  if (plVar3 == (longlong *)0x0) {
    return 0xffffffff;
  }
  lVar12 = *plVar3;
  uVar16 = 0xffffffff;
  uVar14 = 0;
  do {
    if (*(int *)(lVar12 + 0x1c + uVar14 * 0x24) == -1) {
      uVar15 = (uint)uVar14;
      if ((uint)uVar16 != 0xffffffff) {
        uVar15 = (uint)uVar16;
      }
      uVar16 = (ulonglong)uVar15;
    }
    else if ((((param_2[4] == *(uint *)(lVar12 + uVar14 * 0x24)) &&
              (param_2[7] == *(uint *)(lVar12 + 4 + uVar14 * 0x24))) &&
             (param_2[9] == *(uint *)(lVar12 + 0xc + uVar14 * 0x24))) &&
            (param_2[0xc] == *(uint *)(lVar12 + 0x14 + uVar14 * 0x24))) goto LAB_1800e6c6f;
    uVar15 = (uint)uVar14 + 1;
    uVar14 = (ulonglong)uVar15;
  } while (uVar15 < 0x14);
  if (uVar15 != 0x14) {
LAB_1800e6c6f:
    *(undefined1 *)(lVar12 + 0x20 + uVar14 * 0x24) = 1;
    return *(uint *)(lVar12 + 0x1c + uVar14 * 0x24);
  }
  if ((int)uVar16 == -1) {
    uVar16 = 0;
    while (*(char *)(lVar12 + 0x20 + uVar16 * 0x24) != '\0') {
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      if (0x13 < uVar15) {
        return 0xffffffff;
      }
    }
  }
  puVar4 = (uint *)(lVar12 + (longlong)(int)uVar16 * 0x24);
  lVar12 = 0;
  *puVar4 = param_2[4];
  do {
    puVar4[lVar12 + 1] = param_2[lVar12 + 7];
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  uVar15 = puVar4[7];
  puVar4[5] = param_2[0xc];
  puVar4[6] = param_2[0xb];
  if (uVar15 != 0xffffffff) {
    lVar12 = param_1[5];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x28));
    FUN_1800e149c(lVar12,uVar15,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x28));
    uVar15 = *(uint *)(param_1 + 2);
    if (uVar15 != 0) {
      uVar14 = (ulonglong)puVar4[7];
      uVar9 = 0;
      do {
        uVar10 = uVar15 + uVar9 >> 1;
        uVar16 = *(ulonglong *)(param_1[1] + (ulonglong)uVar10 * 0x18);
        uVar13 = uVar10;
        if (uVar16 <= uVar14) {
          if (uVar14 <= uVar16) break;
          uVar9 = uVar10 + 1;
          uVar13 = uVar15;
          uVar10 = uVar9;
        }
        uVar15 = uVar13;
      } while (uVar15 != uVar9);
      if ((uVar10 != *(uint *)(param_1 + 2)) &&
         (*(ulonglong *)(param_1[1] + (ulonglong)uVar10 * 0x18) == uVar14)) {
        while( true ) {
          uVar15 = uVar10 + 1;
          if (*(uint *)(param_1 + 2) <= uVar15) break;
          lVar12 = param_1[1];
          puVar1 = (undefined8 *)(lVar12 + (ulonglong)uVar15 * 0x18);
          uVar11 = puVar1[1];
          puVar2 = (undefined8 *)(lVar12 + (ulonglong)uVar10 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          *(undefined8 *)(lVar12 + 0x10 + (ulonglong)uVar10 * 0x18) =
               *(undefined8 *)(lVar12 + 0x10 + (ulonglong)uVar15 * 0x18);
          uVar10 = uVar15;
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      }
    }
  }
  uVar15 = FUN_1800e1704(param_1[5],1);
  puVar4[7] = uVar15;
  if (uVar15 != 0xffffffff) {
    lVar12 = param_1[5];
    lVar6 = *(longlong *)(lVar12 + 8);
    uVar9 = *(uint *)(lVar12 + 0x10);
    FUN_1800e1d04(lVar12,&local_res8,uVar15,0);
    plVar3 = *(longlong **)((ulonglong)uVar9 * 0x20 + lVar6);
    (**(code **)(*plVar3 + 0xb0))(plVar3,param_2);
    uVar9 = *(uint *)(param_1 + 2);
    uVar10 = 0;
    uVar14 = (ulonglong)puVar4[7];
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uVar10 = uVar9 + uVar13 >> 1;
        uVar16 = *(ulonglong *)(param_1[1] + (ulonglong)uVar10 * 0x18);
        uVar8 = uVar10;
        if (uVar16 <= uVar14) {
          if (uVar14 <= uVar16) break;
          uVar13 = uVar10 + 1;
          uVar8 = uVar9;
          uVar10 = uVar13;
        }
        uVar9 = uVar8;
      } while (uVar9 != uVar13);
    }
    if (uVar10 != *(uint *)(param_1 + 2)) {
      if (*(ulonglong *)(param_1[1] + (ulonglong)uVar10 * 0x18) == uVar14) {
        *(uint **)(param_1[1] + 0x10 + (ulonglong)uVar10 * 0x18) = puVar4;
        goto LAB_1800e6efd;
      }
    }
    iVar5 = *(int *)((longlong)param_1 + 0x14);
    if (iVar5 == (int)param_1[2]) {
      uVar16 = (ulonglong)(uint)(iVar5 * 2);
      if (iVar5 == 0) {
        uVar16 = 0x10;
      }
      lVar12 = thunk_FUN_1800fbccc(uVar16 * 0x18);
      if (lVar12 != 0) {
        uVar17 = 0;
        if ((int)param_1[2] != 0) {
          do {
            lVar6 = param_1[1];
            uVar9 = (int)uVar17 + 1;
            puVar1 = (undefined8 *)(lVar6 + uVar17 * 0x18);
            uVar11 = puVar1[1];
            puVar2 = (undefined8 *)(lVar12 + uVar17 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            *(undefined8 *)(lVar12 + 0x10 + uVar17 * 0x18) =
                 *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18);
            uVar17 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(param_1 + 2));
        }
        FUN_1800fbcf0((LPVOID)*param_1);
        *param_1 = lVar12;
        param_1[1] = lVar12;
        *(int *)((longlong)param_1 + 0x14) = (int)uVar16;
      }
    }
    uVar9 = *(uint *)(param_1 + 2);
    uVar16 = (ulonglong)uVar9;
    if (*(uint *)((longlong)param_1 + 0x14) != uVar9) {
      while (uVar10 < uVar9) {
        lVar12 = param_1[1];
        uVar9 = (int)uVar16 - 1;
        uVar17 = (ulonglong)uVar9;
        puVar1 = (undefined8 *)(lVar12 + uVar17 * 0x18);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)(lVar12 + uVar16 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        *(undefined8 *)(lVar12 + 0x10 + uVar16 * 0x18) =
             *(undefined8 *)(lVar12 + 0x10 + uVar17 * 0x18);
        uVar16 = uVar17;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar16 = (ulonglong)uVar10;
      *(uint *)(param_1[1] + 8 + uVar16 * 0x18) = puVar4[7];
      *(uint **)(param_1[1] + 0x10 + uVar16 * 0x18) = puVar4;
      *(ulonglong *)(param_1[1] + uVar16 * 0x18) = uVar14;
    }
  }
LAB_1800e6efd:
  *(undefined1 *)(puVar4 + 8) = 1;
  return uVar15;
}

