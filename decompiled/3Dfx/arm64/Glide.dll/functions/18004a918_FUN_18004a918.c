/*
 * FUN_18004a918 at 18004a918
 * uint __cdecl FUN_18004a918(longlong param_1, uint param_2)
 * Address ranges: 18004a918-18004ad87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18004a918(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  uint uVar12;
  SIZE_T SVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  uVar19 = 0xffffffff;
  if (*(uint *)(param_1 + 0x18) < param_2) {
    return 0xffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar18 = 0;
    if (*(int *)(param_1 + 0x70) == 0) {
      puVar7 = (undefined8 *)0x0;
      plVar8 = (longlong *)&DAT_00000008;
      goto LAB_18004a994;
    }
    do {
      lVar14 = *(longlong *)(param_1 + 0x68) + uVar18 * 0x18;
      puVar7 = (undefined8 *)(lVar14 + 8);
      plVar8 = (longlong *)(lVar14 + 0x10);
LAB_18004a994:
      uVar5 = (**(code **)(*(longlong *)*puVar7 + 0x40))();
      plVar8 = (longlong *)*plVar8;
      uVar15 = *(uint *)(plVar8 + 2);
      uVar17 = 0xffffffff;
      while (uVar15 != 0xffffffff) {
        uVar9 = (ulonglong)uVar15;
        puVar1 = (uint *)(*plVar8 + uVar9 * 0x18);
        if (*puVar1 == 0xffffffff) break;
        if (uVar5 < *(ulonglong *)(puVar1 + 2)) {
          uVar15 = puVar1[4];
          uVar17 = uVar9;
        }
        else {
          param_1 = FUN_18004a7d8(param_1,*puVar1,puVar1[1]);
          uVar15 = puVar1[4];
          *puVar1 = 0xffffffff;
          iVar4 = (int)uVar17;
          if ((uVar15 == 0xffffffff) || (*(int *)(*plVar8 + (ulonglong)uVar15 * 0x18) == -1)) {
            if (iVar4 != -1) {
              *(int *)((longlong)plVar8 + 0x14) = iVar4;
            }
          }
          else {
            if (iVar4 == -1) {
              *(uint *)(plVar8 + 2) = uVar15;
            }
            else {
              *(uint *)(*plVar8 + (uVar17 & 0xffffffff) * 0x18 + 0x10) = uVar15;
            }
            puVar1[4] = *(uint *)(*plVar8 + (ulonglong)*(uint *)((longlong)plVar8 + 0x14) * 0x18 +
                                 0x10);
            *(int *)(*plVar8 + (ulonglong)*(uint *)((longlong)plVar8 + 0x14) * 0x18 + 0x10) =
                 (int)uVar9;
          }
        }
      }
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(param_1 + 0x70));
  }
  uVar15 = 0xffffffff;
  uVar18 = 0;
  if (*(int *)(param_1 + 0x58) < 1) {
LAB_18004abe0:
    uStack_54 = *(undefined4 *)(param_1 + 0x18);
    local_50 = *(undefined4 *)(param_1 + 0x1c);
    local_60 = (longlong *)0x0;
    local_58 = *(undefined4 *)(param_1 + 0x14);
    uStack_4c = 0;
    plVar8 = *(longlong **)
              (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
    iVar4 = (**(code **)(*plVar8 + 0x70))(plVar8,&local_58,&DAT_180066260,&local_60);
    if (iVar4 < 0) goto LAB_18004ad5c;
    puVar6 = (undefined1 *)thunk_FUN_1800609d8((ulonglong)(*(uint *)(param_1 + 0x18) >> 3));
    plVar8 = local_60;
    if (puVar6 == (undefined1 *)0x0) {
LAB_18004ad4c:
      (**(code **)(*local_60 + 0x10))();
      goto LAB_18004ad5c;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x58) == iVar4) {
      uVar15 = iVar4 << 1;
      if (iVar4 == 0) {
        uVar15 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar15);
      SVar13 = CONCAT44(0,uVar15) << 4;
      if (SUB168(auVar3 * ZEXT816(0x10),8) != 0) {
        SVar13 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_1800609d8(SVar13);
      if (puVar7 == (undefined8 *)0x0) {
        thunk_FUN_180060a18(puVar6);
        goto LAB_18004ad4c;
      }
      thunk_FUN_180001218(puVar7,*(undefined8 **)(param_1 + 0x50),
                          (ulonglong)*(uint *)(param_1 + 0x5c) << 4);
      thunk_FUN_180060a18(*(LPVOID *)(param_1 + 0x50));
      *(undefined8 **)(param_1 + 0x50) = puVar7;
      *(uint *)(param_1 + 0x5c) = uVar15;
    }
    puVar7 = (undefined8 *)
             (*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 0x10);
    *puVar7 = plVar8;
    puVar7[1] = puVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    FUN_1800611b0(puVar6,0,(ulonglong)(*(uint *)(param_1 + 0x18) >> 3));
    uVar12 = *(uint *)(param_1 + 0x58);
    if (uVar12 == 0) goto LAB_18004ad5c;
    uVar15 = 0;
  }
  else {
    do {
      uVar12 = (uint)uVar18;
      if (uVar15 != 0xffffffff) goto LAB_18004acdc;
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar17 = 0;
      pbVar11 = *(byte **)(*(longlong *)(param_1 + 0x50) + uVar18 * 0x10 + 8);
      uVar18 = (ulonglong)-(uint)((*pbVar11 & 1) != 0);
      uVar15 = 0xffffffff;
      if (uVar2 != 0) {
        do {
          uVar15 = (uint)uVar18;
          if (uVar15 == 0xffffffff) {
            uVar5 = -1L << (uVar17 & 0x3f);
            uVar15 = (uint)uVar17 & 0xffffffc0;
            puVar10 = (ulonglong *)(pbVar11 + (uVar17 >> 6) * 8);
            while (uVar18 = (ulonglong)uVar15, puVar10 < pbVar11 + (uVar2 >> 3)) {
              uVar5 = uVar5 & (*puVar10 ^ 0xffffffffffffffff);
              uVar18 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar16 = (uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
              if ((1 - (uVar16 >> 6) & 0xff) != 0) {
                uVar18 = (ulonglong)(uVar16 + uVar15);
                break;
              }
              uVar15 = uVar15 + 0x40;
              uVar5 = 0xffffffffffffffff;
              puVar10 = puVar10 + 1;
            }
          }
          else {
            uVar5 = -1L << (uVar18 & 0x3f);
            uVar17 = (ulonglong)(uVar15 & 0xffffffc0);
            puVar10 = (ulonglong *)(pbVar11 + (uVar18 >> 6) * 8);
            while (puVar10 < pbVar11 + (uVar2 >> 3)) {
              uVar18 = (uVar5 & *puVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uVar5 & *puVar10 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar16 = (uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
              if ((1 - (uVar16 >> 6) & 0xff) != 0) {
                uVar17 = (ulonglong)(uVar16 + (int)uVar17);
                break;
              }
              uVar16 = (int)uVar17 + 0x40;
              uVar17 = (ulonglong)uVar16;
              if (uVar2 < uVar16 - uVar15) break;
              uVar5 = 0xffffffffffffffff;
              puVar10 = puVar10 + 1;
            }
            if (param_2 <= (int)uVar17 - uVar15) break;
            uVar18 = 0xffffffff;
          }
          uVar15 = 0xffffffff;
        } while ((uint)uVar17 < uVar2);
      }
      uVar12 = uVar12 + 1;
      uVar18 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x58));
    if (uVar15 == 0xffffffff) goto LAB_18004abe0;
  }
LAB_18004acdc:
  uVar19 = uVar15 + param_2;
  if (uVar15 < uVar19) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar12 - 1) * 0x10 + 8);
    uVar2 = uVar15;
    do {
      uVar18 = -1L << ((ulonglong)uVar2 & 0x3f);
      uVar16 = (uVar2 & 0xffffffc0) + 0x40;
      if (uVar19 < uVar16) {
        uVar18 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar19 & 0x3f) & uVar18;
      }
      *(ulonglong *)(lVar14 + (ulonglong)(uVar2 >> 6) * 8) =
           *(ulonglong *)(lVar14 + (ulonglong)(uVar2 >> 6) * 8) | uVar18;
      uVar2 = uVar16;
    } while (uVar16 < uVar19);
  }
  uVar19 = uVar15 | (uVar12 - 1) * 0x10000;
LAB_18004ad5c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar19;
}

