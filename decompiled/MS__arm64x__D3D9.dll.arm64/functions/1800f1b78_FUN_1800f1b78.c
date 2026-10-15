/*
 * FUN_1800f1b78 at 1800f1b78
 * undefined FUN_1800f1b78(void)
 * Address ranges: 1800f1b78-1800f1f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800f1b78(longlong *param_1,ulonglong param_2,uint param_3,undefined4 param_4,ulonglong param_5,
             ulonglong param_6,undefined4 param_7,ulonglong param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_80 [2];
  ulonglong local_78 [3];
  uint local_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  
  uVar8 = (ulonglong)param_3;
  local_80[0] = param_3;
  local_78[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 5);
  uVar16 = 0;
  if ((char)param_1[10] == '\0') {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar4 == 0) goto LAB_1800f1f70;
    uVar11 = 0;
    uVar10 = uVar4;
    do {
      uVar5 = uVar10 + uVar11 >> 1;
      uVar13 = (ulonglong)uVar5;
      uVar15 = *(ulonglong *)(*param_1 + uVar13 * 0x18);
      if (uVar15 <= param_2) {
        if (param_2 <= uVar15) break;
        uVar11 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar10;
      }
      uVar10 = uVar5;
    } while (uVar10 != uVar11);
    if (((uint)uVar13 == uVar4) || (*(ulonglong *)(*param_1 + uVar13 * 0x18) != param_2))
    goto LAB_1800f1f70;
  }
  puVar6 = (undefined4 *)FUN_1800f2540(param_1,local_78);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = param_4;
    puVar7 = (ulonglong *)FUN_1800f2718(puVar6 + 2,local_80);
    if (puVar7 == (ulonglong *)0x0) {
      local_80[0] = 0xffffffff;
      puVar7 = (ulonglong *)FUN_1800f2718(puVar6 + 2,local_80);
      if (puVar7 != (ulonglong *)0x0) {
        uVar16 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uVar13 = (**(code **)(**(longlong **)(*puVar7 + 0x18) + 0x40))();
        if (uVar13 < puVar7[3]) {
          uVar13 = puVar7[1];
          if (param_5 == *puVar7) {
            if (param_6 == uVar13) {
              uVar16 = *(undefined4 *)((longlong)puVar7 + 0x14);
            }
            else if (uVar13 != 0xffffffffffffffff) {
              FUN_1800e8548(uVar13 + 8,0);
            }
          }
          else {
            if (uVar13 != 0xffffffffffffffff) {
              FUN_1800e8548(uVar13 + 8,0);
            }
            if (param_6 != 0xffffffffffffffff) {
              FUN_1800e8548(param_6 + 8,0);
            }
            (**(code **)(**(longlong **)(param_5 + 0x10) + 0x78))
                      (*(longlong **)(param_5 + 0x10),*(undefined8 *)(*puVar7 + 0x18),puVar7[3]);
          }
        }
      }
      uVar4 = puVar6[6];
      uVar13 = 0;
      local_60 = param_3;
      uStack_5c = param_7;
      uStack_58 = param_8;
      if (uVar4 != 0) {
        uVar11 = 0;
        uVar10 = uVar4;
        do {
          uVar5 = uVar10 + uVar11 >> 1;
          uVar13 = (ulonglong)uVar5;
          uVar15 = *(ulonglong *)(*(longlong *)(puVar6 + 4) + uVar13 * 0x30);
          if (uVar15 <= uVar8) {
            if (uVar8 <= uVar15) break;
            uVar11 = uVar5 + 1;
            uVar13 = (ulonglong)(uVar5 + 1);
            uVar5 = uVar10;
          }
          uVar10 = uVar5;
        } while (uVar10 != uVar11);
        if (((uint)uVar13 != uVar4) &&
           (puVar7 = (ulonglong *)(*(longlong *)(puVar6 + 4) + uVar13 * 0x30), *puVar7 == uVar8)) {
          puVar7[3] = param_6;
          puVar7[2] = param_5;
          puVar7[5] = param_8;
          puVar7[4] = CONCAT44(param_7,param_3);
          goto LAB_1800f1f70;
        }
      }
      uVar11 = puVar6[7];
      plVar1 = (longlong *)(puVar6 + 4);
      if (uVar11 == uVar4) {
        local_80[0] = 0x10;
        if (uVar11 != 0) {
          local_80[0] = uVar11 << 1;
        }
        lVar9 = thunk_FUN_180102f80((ulonglong)local_80[0] * 0x30);
        if (lVar9 != 0) {
          uVar15 = 0;
          if (puVar6[6] != 0) {
            do {
              uVar4 = (int)uVar15 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(puVar6 + 4) + uVar15 * 0x30);
              puVar3 = (undefined8 *)(lVar9 + uVar15 * 0x30);
              uVar19 = *puVar2;
              uVar18 = puVar2[3];
              uVar17 = puVar2[2];
              puVar3[1] = puVar2[1];
              *puVar3 = uVar19;
              puVar3[3] = uVar18;
              puVar3[2] = uVar17;
              uVar17 = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[4] = uVar17;
              uVar15 = (ulonglong)uVar4;
            } while (uVar4 < (uint)puVar6[6]);
          }
          thunk_FUN_180102fc0(*(undefined8 *)(puVar6 + 2));
          *(longlong *)(puVar6 + 2) = lVar9;
          *(longlong *)(puVar6 + 4) = lVar9;
          puVar6[7] = local_80[0];
        }
      }
      uVar15 = (ulonglong)(uint)puVar6[6];
      if (puVar6[7] != puVar6[6]) {
        while ((uint)uVar13 < (uint)uVar15) {
          uVar14 = (ulonglong)((uint)uVar15 - 1);
          puVar2 = (undefined8 *)(*(longlong *)(puVar6 + 4) + uVar15 * 0x30);
          puVar3 = (undefined8 *)(*(longlong *)(puVar6 + 4) + uVar14 * 0x30);
          uVar19 = *puVar3;
          uVar18 = puVar3[3];
          uVar17 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar19;
          puVar2[3] = uVar18;
          puVar2[2] = uVar17;
          uVar17 = puVar3[4];
          puVar2[5] = puVar3[5];
          puVar2[4] = uVar17;
          uVar15 = uVar14;
        }
        puVar6[6] = puVar6[6] + 1;
        lVar12 = uVar13 * 0x30;
        *(uint *)(lVar12 + *plVar1 + 8) = param_3;
        lVar9 = lVar12 + *plVar1;
        *(ulonglong *)(lVar9 + 0x18) = param_6;
        *(ulonglong *)(lVar9 + 0x10) = param_5;
        *(ulonglong *)(lVar9 + 0x28) = uStack_58;
        *(ulonglong *)(lVar9 + 0x20) = CONCAT44(uStack_5c,local_60);
        *(ulonglong *)(*plVar1 + lVar12) = uVar8;
      }
    }
    else {
      uVar16 = *(undefined4 *)((longlong)puVar7 + 0x14);
      uVar8 = (**(code **)(**(longlong **)(*puVar7 + 0x18) + 0x40))();
      if (uVar8 < puVar7[3]) {
        uVar8 = puVar7[1];
        if (param_5 == *puVar7) {
          if (param_6 == uVar8) {
            uVar16 = *(undefined4 *)((longlong)puVar7 + 0x14);
          }
          else if (uVar8 != 0xffffffffffffffff) {
            FUN_1800e8548(uVar8 + 8,0);
          }
        }
        else {
          if (uVar8 != 0xffffffffffffffff) {
            FUN_1800e8548(uVar8 + 8,0);
          }
          if (param_6 != 0xffffffffffffffff) {
            FUN_1800e8548(param_6 + 8,0);
          }
          (**(code **)(**(longlong **)(param_5 + 0x10) + 0x78))
                    (*(longlong **)(param_5 + 0x10),*(undefined8 *)(*puVar7 + 0x18),puVar7[3]);
        }
      }
      *puVar7 = param_5;
      puVar7[1] = param_6;
      *(uint *)(puVar7 + 2) = param_3;
      *(undefined4 *)((longlong)puVar7 + 0x14) = param_7;
      puVar7[3] = param_8;
    }
  }
LAB_1800f1f70:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 5);
  return uVar16;
}

