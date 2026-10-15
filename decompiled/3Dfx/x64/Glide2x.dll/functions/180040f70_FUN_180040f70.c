/*
 * FUN_180040f70 at 180040f70
 * uint __fastcall FUN_180040f70(longlong * param_1, uint * param_2)
 * Address ranges: 180040f70-18004128b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180040f70(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong local_res8;
  uint *local_res10;
  
  plVar17 = param_1 + 3;
  uVar11 = *(uint *)((longlong)param_1 + 0x24);
  uVar15 = (ulonglong)
           ((((((param_2[6] - 1) * 0x10 | param_2[5] - 1) << 3 | param_2[3]) << 3 | param_2[2]) << 3
            | param_2[1]) << 8 | *param_2);
  uVar13 = 0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar9 = uVar11 + uVar10 >> 1;
      uVar13 = (ulonglong)uVar9;
      uVar5 = *(ulonglong *)(*plVar17 + (ulonglong)uVar9 * 0x48);
      if (uVar5 <= uVar15) {
        if (uVar15 <= uVar5) break;
        uVar10 = uVar9 + 1;
        uVar13 = (ulonglong)uVar10;
        uVar9 = uVar11;
      }
      uVar11 = uVar9;
    } while (uVar11 != uVar10);
  }
  if (((uint)uVar13 == *(uint *)((longlong)param_1 + 0x24)) ||
     (*(ulonglong *)(uVar13 * 0x48 + *plVar17) != uVar15)) {
    FUN_1800420a0(plVar17,(uint)uVar13,uVar15,(undefined8 *)param_2);
  }
  plVar17 = (longlong *)(*plVar17 + 0x40 + uVar13 * 0x48);
  if (plVar17 == (longlong *)0x0) {
    return 0xffffffff;
  }
  lVar14 = *plVar17;
  uVar15 = 0xffffffff;
  uVar13 = 0;
  do {
    if (*(int *)(lVar14 + 0x1c + uVar13 * 0x24) == -1) {
      uVar11 = (uint)uVar13;
      if ((uint)uVar15 != 0xffffffff) {
        uVar11 = (uint)uVar15;
      }
      uVar15 = (ulonglong)uVar11;
    }
    else if ((((param_2[4] == *(uint *)(lVar14 + uVar13 * 0x24)) &&
              (param_2[7] == *(uint *)(lVar14 + 4 + uVar13 * 0x24))) &&
             (param_2[9] == *(uint *)(lVar14 + 0xc + uVar13 * 0x24))) &&
            (param_2[0xc] == *(uint *)(lVar14 + 0x14 + uVar13 * 0x24))) goto LAB_18004108e;
    uVar11 = (uint)uVar13 + 1;
    uVar13 = (ulonglong)uVar11;
  } while (uVar11 < 0x14);
  if (uVar11 != 0x14) {
LAB_18004108e:
    *(undefined1 *)(lVar14 + 0x20 + uVar13 * 0x24) = 1;
    return *(uint *)(lVar14 + 0x1c + uVar13 * 0x24);
  }
  if ((int)uVar15 == -1) {
    uVar15 = 0;
    while (*(char *)(lVar14 + 0x20 + uVar15 * 0x24) != '\0') {
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
      if (0x13 < uVar11) {
        return 0xffffffff;
      }
    }
  }
  puVar2 = (uint *)(lVar14 + (longlong)(int)uVar15 * 0x24);
  lVar14 = 0;
  *puVar2 = param_2[4];
  do {
    puVar2[lVar14 + 1] = param_2[lVar14 + 7];
    lVar14 = lVar14 + 1;
  } while (lVar14 != 4);
  puVar1 = puVar2 + 7;
  uVar11 = *puVar1;
  puVar2[5] = param_2[0xc];
  puVar2[6] = param_2[0xb];
  if (uVar11 != 0xffffffff) {
    lVar14 = param_1[5];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x28));
    FUN_180046538(lVar14,uVar11,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x28));
    uVar11 = *(uint *)(param_1 + 2);
    if (uVar11 != 0) {
      uVar13 = (ulonglong)*puVar1;
      uVar10 = 0;
      do {
        uVar9 = uVar11 + uVar10 >> 1;
        uVar15 = *(ulonglong *)(param_1[1] + (ulonglong)uVar9 * 0x18);
        uVar12 = uVar9;
        if (uVar15 <= uVar13) {
          if (uVar13 <= uVar15) break;
          uVar10 = uVar9 + 1;
          uVar12 = uVar11;
          uVar9 = uVar10;
        }
        uVar11 = uVar12;
      } while (uVar11 != uVar10);
      if ((uVar9 != *(uint *)(param_1 + 2)) &&
         (*(ulonglong *)(param_1[1] + (ulonglong)uVar9 * 0x18) == uVar13)) {
        while( true ) {
          uVar11 = uVar9 + 1;
          if (*(uint *)(param_1 + 2) <= uVar11) break;
          lVar14 = param_1[1];
          puVar3 = (undefined8 *)(lVar14 + (ulonglong)uVar11 * 0x18);
          uVar7 = puVar3[1];
          puVar4 = (undefined8 *)(lVar14 + (ulonglong)uVar9 * 0x18);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          *(undefined8 *)(lVar14 + 0x10 + (ulonglong)uVar9 * 0x18) =
               *(undefined8 *)(lVar14 + 0x10 + (ulonglong)uVar11 * 0x18);
          uVar9 = uVar11;
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      }
    }
  }
  uVar11 = FUN_1800467a0(param_1[5],1);
  *puVar1 = uVar11;
  if (uVar11 != 0xffffffff) {
    lVar14 = param_1[5];
    lVar6 = *(longlong *)(lVar14 + 8);
    uVar10 = *(uint *)(lVar14 + 0x10);
    FUN_180046da0(lVar14,&local_res8,uVar11,0);
    plVar17 = *(longlong **)((ulonglong)uVar10 * 0x20 + lVar6);
    (**(code **)(*plVar17 + 0xb0))(plVar17,param_2,local_res8);
    uVar10 = *(uint *)(param_1 + 2);
    uVar9 = 0;
    uVar13 = (ulonglong)*puVar1;
    if (uVar10 != 0) {
      lVar14 = param_1[1];
      uVar12 = 0;
      uVar16 = uVar10;
      do {
        uVar9 = uVar16 + uVar12 >> 1;
        uVar15 = *(ulonglong *)(lVar14 + (ulonglong)uVar9 * 0x18);
        uVar8 = uVar9;
        if (uVar15 <= uVar13) {
          if (uVar13 <= uVar15) break;
          uVar12 = uVar9 + 1;
          uVar8 = uVar16;
          uVar9 = uVar12;
        }
        uVar16 = uVar8;
      } while (uVar16 != uVar12);
      if ((uVar9 != uVar10) && (*(ulonglong *)(lVar14 + (ulonglong)uVar9 * 0x18) == uVar13)) {
        *(uint **)(lVar14 + 0x10 + (ulonglong)uVar9 * 0x18) = puVar2;
        goto LAB_18004126d;
      }
    }
    local_res10 = puVar2;
    FUN_180042254(param_1,uVar9,uVar13,puVar1,&local_res10);
  }
LAB_18004126d:
  *(undefined1 *)(puVar2 + 8) = 1;
  return uVar11;
}

