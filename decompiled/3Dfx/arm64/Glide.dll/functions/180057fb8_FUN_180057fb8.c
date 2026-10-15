/*
 * FUN_180057fb8 at 180057fb8
 * bool __cdecl FUN_180057fb8(longlong param_1, uint param_2, ulonglong param_3, undefined4 param_4)
 * Address ranges: 180057fb8-18005823b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180057fb8(longlong param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  LPVOID pvVar11;
  SIZE_T SVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint local_50 [2];
  longlong *local_48;
  
  uVar9 = FUN_180057f80(param_1,param_2);
  if ((int)uVar9 == -1) {
    bVar7 = false;
  }
  else {
    lVar17 = ((uVar9 & 0xffffffff) + 2) * 0x10;
    lVar5 = (param_3 & 0xffffffff) * 8;
    thunk_FUN_180060a18(*(LPVOID *)(*(longlong *)(param_1 + lVar17) + lVar5));
    *(undefined8 *)(*(longlong *)(param_1 + lVar17) + lVar5) = 0;
    lVar16 = ((uVar9 & 0xffffffff) + 0x12) * 0x10;
    *(undefined4 *)(lVar5 + *(longlong *)(param_1 + lVar16)) = 0;
    local_50[0] = 0;
    local_48 = (longlong *)0x0;
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 0x28 + 0x18);
    iVar8 = (**(code **)(*plVar10 + 0x38))(plVar10,param_3 & 0xffffffff,&local_48);
    if (-1 < iVar8) {
      (**(code **)(*local_48 + 0x40))(local_48,0x1c,param_4,local_50,0);
      SVar12 = CONCAT44(0,local_50[0]) * 0x1c;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,local_50[0]);
      if (SUB168(auVar6 * ZEXT816(0x1c),8) != 0) {
        SVar12 = 0xffffffffffffffff;
      }
      pvVar11 = (LPVOID)thunk_FUN_1800609d8(SVar12);
      if (pvVar11 != (LPVOID)0x0) {
        *(LPVOID *)(*(longlong *)(param_1 + lVar17) + lVar5) = pvVar11;
        iVar8 = (**(code **)(*local_48 + 0x40))(local_48,0x1c,2,local_50,pvVar11);
        if (iVar8 < 0) {
          thunk_FUN_180060a18(pvVar11);
          *(undefined8 *)(*(longlong *)(param_1 + lVar17) + lVar5) = 0;
        }
        else {
          *(uint *)(lVar5 + *(longlong *)(param_1 + lVar16)) = local_50[0];
          *(undefined4 *)(*(longlong *)(param_1 + lVar16) + lVar5 + 4) = param_4;
          lVar17 = *(longlong *)(param_1 + lVar16);
          uVar9 = 1;
          if (1 < *(uint *)(lVar5 + lVar17)) {
            do {
              uVar14 = (uint)uVar9;
              if (uVar14 != 0) {
                piVar1 = (int *)((longlong)pvVar11 + uVar9 * 0x1c);
                uVar15 = uVar9;
LAB_18005811c:
                uVar4 = (int)uVar15 - 1;
                uVar15 = (ulonglong)uVar4;
                if ((((*(int *)((longlong)pvVar11 + uVar15 * 0x1c) != *piVar1) ||
                     (*(int *)((longlong)pvVar11 + uVar15 * 0x1c + 4) !=
                      *(int *)((longlong)pvVar11 + uVar9 * 0x1c + 4))) ||
                    (*(int *)((longlong)pvVar11 + uVar15 * 0x1c + 8) !=
                     *(int *)((longlong)pvVar11 + uVar9 * 0x1c + 8))) ||
                   (*(int *)((longlong)pvVar11 + uVar15 * 0x1c + 0xc) != piVar1[3]))
                goto LAB_180058164;
                *(int *)(lVar5 + lVar17) = *(int *)(lVar5 + lVar17) + -1;
                lVar17 = *(longlong *)(param_1 + lVar16);
                if (uVar14 < *(uint *)(lVar5 + lVar17)) {
                  do {
                    uVar4 = (int)uVar9 + 1;
                    puVar2 = (undefined8 *)((longlong)pvVar11 + (ulonglong)uVar4 * 0x1c);
                    uVar18 = *puVar2;
                    puVar3 = (undefined8 *)((longlong)pvVar11 + uVar9 * 0x1c);
                    uVar13 = puVar2[2];
                    puVar3[1] = puVar2[1];
                    *puVar3 = uVar18;
                    puVar3[2] = uVar13;
                    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
                    lVar17 = *(longlong *)(param_1 + lVar16);
                    uVar9 = (ulonglong)uVar4;
                  } while (uVar4 < *(uint *)(lVar5 + lVar17));
                }
                uVar9 = (ulonglong)(uVar14 - 1);
              }
LAB_1800581d8:
              uVar14 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar5 + lVar17));
          }
        }
      }
      (**(code **)(*local_48 + 0x10))();
    }
    bVar7 = *(int *)(lVar5 + *(longlong *)(param_1 + lVar16)) != 0;
  }
  return bVar7;
LAB_180058164:
  if (uVar4 == 0) goto LAB_1800581d8;
  goto LAB_18005811c;
}

