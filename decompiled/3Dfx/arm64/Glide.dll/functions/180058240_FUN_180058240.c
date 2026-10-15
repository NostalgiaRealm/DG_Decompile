/*
 * FUN_180058240 at 180058240
 * undefined8 __cdecl FUN_180058240(longlong param_1)
 * Address ranges: 180058240-1800585f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180058240(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  SIZE_T SVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  uint local_350 [2];
  longlong *local_348;
  uint local_340;
  short asStack_338 [40];
  int local_2e8;
  undefined8 local_2e0;
  short asStack_2d8 [32];
  short asStack_298 [128];
  undefined8 local_198;
  undefined8 uStack_190;
  short asStack_188 [148];
  undefined8 local_60;
  
  uVar8 = FUN_1800544e8(*(longlong *)(param_1 + 0x10));
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    lVar13 = 0;
    uVar12 = 1;
    if (*(char *)(param_1 + 0x478) == '\0') {
      uVar12 = 0x10;
    }
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x698);
    if (uVar12 < uVar3) {
      uVar3 = uVar12;
    }
    do {
      lVar14 = lVar13 * 0x10;
      uVar8 = 0;
      if (*(int *)(param_1 + 0x28 + lVar14) != 0) {
        do {
          thunk_FUN_180060a18(*(LPVOID *)(*(longlong *)(param_1 + (lVar13 + 2) * 0x10) + uVar8 * 8))
          ;
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar14 + param_1 + 0x28));
      }
      lVar1 = param_1 + lVar14;
      thunk_FUN_180060a18(*(LPVOID *)(lVar1 + 0x20));
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28 + lVar14) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      thunk_FUN_180060a18(*(LPVOID *)(lVar1 + 0x120));
      *(undefined8 *)(lVar1 + 0x120) = 0;
      *(undefined8 *)(lVar1 + 0x128) = 0;
      thunk_FUN_180060a18(*(LPVOID *)(lVar1 + 0x220));
      lVar13 = lVar13 + 1;
      *(undefined8 *)(lVar1 + 0x220) = 0;
      *(undefined8 *)(lVar1 + 0x228) = 0;
    } while (lVar13 != 0x10);
    thunk_FUN_180060a18(*(LPVOID *)(param_1 + 800));
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    uVar8 = 0;
    local_340 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar12 = (uint)uVar8;
        if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == uVar12 + 1)) {
          lVar13 = *(longlong *)(param_1 + 0x10);
          if (uVar12 < *(uint *)(lVar13 + 0x698)) {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar13 + 0x690) + uVar8 * 4);
          }
          else {
            uVar8 = 0;
          }
          uVar16 = (ulonglong)*(uint *)(param_1 + 0x328);
          local_350[0] = (uint)uVar8;
          FUN_18000c780((longlong *)(param_1 + 800),local_350);
          lVar13 = lVar13 + uVar8 * 0x28;
          (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x50))
                    (*(longlong **)(lVar13 + 0x18),asStack_188);
          local_348 = (longlong *)0x0;
          iVar15 = 0;
          iVar7 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x38))
                            (*(longlong **)(lVar13 + 0x18),0,&local_348);
          while (iVar7 != -0x7785fffe) {
            local_350[0] = uVar12;
            (**(code **)(*local_348 + 0x38))(local_348,asStack_338);
            if (local_2e8 != 0) {
              FUN_180061000(asStack_2d8,asStack_188);
              FUN_180061000(asStack_298,asStack_338);
              local_198 = local_2e0;
              uStack_190 = local_60;
              plVar2 = (longlong *)(param_1 + (uVar16 + 0x22) * 0x10);
              iVar7 = *(int *)((longlong)plVar2 + 0xc);
              if ((int)plVar2[1] == iVar7) {
                uVar12 = iVar7 << 1;
                if (iVar7 == 0) {
                  uVar12 = 0x10;
                }
                auVar4._8_8_ = 0;
                auVar4._0_8_ = CONCAT44(0,uVar12);
                SVar11 = CONCAT44(0,uVar12) * 0x150;
                if (SUB168(auVar4 * ZEXT816(0x150),8) != 0) {
                  SVar11 = 0xffffffffffffffff;
                }
                puVar9 = (undefined8 *)thunk_FUN_1800609d8(SVar11);
                if (puVar9 != (undefined8 *)0x0) {
                  thunk_FUN_180001218(puVar9,(undefined8 *)*plVar2,
                                      (ulonglong)*(uint *)((longlong)plVar2 + 0xc) * 0x150);
                  thunk_FUN_180060a18((LPVOID)*plVar2);
                  *plVar2 = (longlong)puVar9;
                  *(uint *)((longlong)plVar2 + 0xc) = uVar12;
                  goto LAB_18005846c;
                }
              }
              else {
LAB_18005846c:
                thunk_FUN_180001218((undefined8 *)
                                    (*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 0x150),
                                    (undefined8 *)asStack_2d8,0x150);
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              }
              plVar2 = (longlong *)(param_1 + (uVar16 + 2) * 0x10);
              iVar7 = *(int *)((longlong)plVar2 + 0xc);
              if ((int)plVar2[1] == iVar7) {
                uVar12 = iVar7 << 1;
                if (iVar7 == 0) {
                  uVar12 = 0x10;
                }
                auVar5._8_8_ = 0;
                auVar5._0_8_ = CONCAT44(0,uVar12);
                SVar11 = CONCAT44(0,uVar12) << 3;
                if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
                  SVar11 = 0xffffffffffffffff;
                }
                puVar9 = (undefined8 *)thunk_FUN_1800609d8(SVar11);
                if (puVar9 != (undefined8 *)0x0) {
                  thunk_FUN_180001218(puVar9,(undefined8 *)*plVar2,
                                      (ulonglong)*(uint *)((longlong)plVar2 + 0xc) << 3);
                  thunk_FUN_180060a18((LPVOID)*plVar2);
                  *plVar2 = (longlong)puVar9;
                  *(uint *)((longlong)plVar2 + 0xc) = uVar12;
                  goto LAB_1800584ec;
                }
              }
              else {
LAB_1800584ec:
                *(undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8) = 0;
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              }
              plVar2 = (longlong *)(param_1 + (uVar16 + 0x12) * 0x10);
              iVar7 = *(int *)((longlong)plVar2 + 0xc);
              if ((int)plVar2[1] == iVar7) {
                uVar12 = iVar7 << 1;
                if (iVar7 == 0) {
                  uVar12 = 0x10;
                }
                auVar6._8_8_ = 0;
                auVar6._0_8_ = CONCAT44(0,uVar12);
                SVar11 = CONCAT44(0,uVar12) << 3;
                if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                  SVar11 = 0xffffffffffffffff;
                }
                puVar9 = (undefined8 *)thunk_FUN_1800609d8(SVar11);
                if (puVar9 == (undefined8 *)0x0) goto LAB_180058578;
                thunk_FUN_180001218(puVar9,(undefined8 *)*plVar2,
                                    (ulonglong)*(uint *)((longlong)plVar2 + 0xc) << 3);
                thunk_FUN_180060a18((LPVOID)*plVar2);
                *plVar2 = (longlong)puVar9;
                *(uint *)((longlong)plVar2 + 0xc) = uVar12;
              }
              *(undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 8) = 0;
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            }
LAB_180058578:
            (**(code **)(*local_348 + 0x10))();
            iVar15 = iVar15 + 1;
            iVar7 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x38))
                              (*(longlong **)(lVar13 + 0x18),iVar15,&local_348);
            uVar12 = local_350[0];
          }
        }
        uVar8 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < local_340);
    }
    uVar10 = 1;
  }
  return uVar10;
}

