/*
 * FUN_18001e140 at 18001e140
 * undefined __cdecl FUN_18001e140(longlong param_1, undefined4 param_2, uint param_3, longlong * param_4, int param_5, int param_6)
 * Address ranges: 18001e140-18001e3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e140(longlong param_1,undefined4 param_2,uint param_3,longlong *param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  HANDLE hEvent;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  
  FUN_18001bf90(param_1 + 0x3668);
  if (1 < param_3) {
    if (1 < param_3 - 2) {
      return;
    }
    lVar8 = *(longlong *)(param_1 + 0x3340);
    FUN_180038440((uint *)(lVar8 + 0x12c0));
    puVar6 = (undefined8 *)((longlong)param_4 + (longlong)param_5 * 4);
    if (*(char *)(lVar8 + 0x14c4) != '\0') {
      uVar3 = (param_6 - param_5) * 4;
      uVar1 = uVar3 + 7;
      uVar2 = (uVar1 & 0xfffffff8) + 0x20;
      puVar4 = (undefined8 *)FUN_180038310(lVar8 + 0x12c0,uVar2);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1800643e0((uint *)(lVar8 + 0x14c0));
        puVar4[1] = (ulonglong)uVar2;
        puVar4[3] = param_1;
        *(undefined4 *)(puVar4 + 4) = param_2;
        *(uint *)((longlong)puVar4 + 0x24) = param_3;
        *(int *)(puVar4 + 5) = param_5;
        *(int *)((longlong)puVar4 + 0x2c) = param_6;
        puVar9 = (undefined8 *)((longlong)puVar4 + 0x37U & 0xfffffffffffffff8);
        puVar4[2] = puVar9;
        thunk_FUN_1800010d8(puVar9,puVar6,(ulonglong)uVar3);
        uVar7 = (ulonglong)uVar1 & 0xfffffff8;
        *(undefined8 *)(uVar7 + (longlong)puVar9) = 0;
        *puVar4 = FUN_18001e400;
        *(ulonglong *)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28 + 0x1350) =
             uVar7 + (longlong)puVar9;
        if (*(char *)(lVar8 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar8 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar8 + 0x1340);
          goto LAB_18001e258;
        }
        goto LAB_18001e29c;
      }
      *(undefined4 *)(lVar8 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar8 + 0x12c0));
    }
    plVar5 = *(longlong **)(lVar8 + 0x14a0);
    *plVar5 = (longlong)puVar6;
    plVar5[1] = param_1;
    *(undefined4 *)(plVar5 + 2) = param_2;
    *(uint *)((longlong)plVar5 + 0x14) = param_3;
    *(int *)(plVar5 + 3) = param_5;
    *(int *)((longlong)plVar5 + 0x1c) = param_6;
    FUN_18001e400(plVar5);
LAB_18001e29c:
    *(undefined4 *)(lVar8 + 0x12c0) = 0;
    return;
  }
  lVar21 = param_4[1];
  lVar18 = *param_4;
  lVar14 = param_4[3];
  lVar10 = param_4[2];
  lVar8 = *(longlong *)(param_1 + 0x3340);
  lVar22 = param_4[5];
  lVar19 = param_4[4];
  lVar15 = param_4[7];
  lVar11 = param_4[6];
  lVar23 = param_4[9];
  lVar20 = param_4[8];
  lVar16 = param_4[0xb];
  lVar12 = param_4[10];
  lVar17 = param_4[0xd];
  lVar13 = param_4[0xc];
  FUN_180038440((uint *)(lVar8 + 0x12c0));
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_180038310(lVar8 + 0x12c0,0x88);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar8 + 0x14c0));
      puVar6[1] = 0x88;
      puVar6[2] = param_1;
      *(undefined4 *)(puVar6 + 3) = param_2;
      *(uint *)((longlong)puVar6 + 0x1c) = param_3;
      *(int *)(puVar6 + 4) = param_5;
      *(int *)((longlong)puVar6 + 0x24) = param_6;
      puVar6[6] = lVar21;
      puVar6[5] = lVar18;
      puVar6[8] = lVar14;
      puVar6[7] = lVar10;
      puVar6[10] = lVar22;
      puVar6[9] = lVar19;
      puVar6[0xc] = lVar15;
      puVar6[0xb] = lVar11;
      puVar6[0xe] = lVar23;
      puVar6[0xd] = lVar20;
      puVar6[0x10] = lVar16;
      puVar6[0xf] = lVar12;
      puVar6[0x12] = lVar17;
      puVar6[0x11] = lVar13;
      puVar4 = (undefined8 *)((longlong)puVar6 + 0x9fU & 0xfffffffffffffff8);
      *puVar4 = 0;
      *puVar6 = FUN_18001e3e8;
      *(undefined8 **)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar8 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar8 + 0x1340);
LAB_18001e258:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18001e3c4;
    }
    *(undefined4 *)(lVar8 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar8 + 0x12c0));
  }
  plVar5 = *(longlong **)(lVar8 + 0x14a0);
  *plVar5 = param_1;
  *(undefined4 *)(plVar5 + 1) = param_2;
  *(uint *)((longlong)plVar5 + 0xc) = param_3;
  *(int *)(plVar5 + 2) = param_5;
  *(int *)((longlong)plVar5 + 0x14) = param_6;
  plVar5[4] = lVar21;
  plVar5[3] = lVar18;
  plVar5[6] = lVar14;
  plVar5[5] = lVar10;
  plVar5[8] = lVar22;
  plVar5[7] = lVar19;
  plVar5[10] = lVar15;
  plVar5[9] = lVar11;
  plVar5[0xc] = lVar23;
  plVar5[0xb] = lVar20;
  plVar5[0xe] = lVar16;
  plVar5[0xd] = lVar12;
  plVar5[0x10] = lVar17;
  plVar5[0xf] = lVar13;
  FUN_18001e3e8(plVar5);
LAB_18001e3c4:
  *(undefined4 *)(lVar8 + 0x12c0) = 0;
  return;
}

