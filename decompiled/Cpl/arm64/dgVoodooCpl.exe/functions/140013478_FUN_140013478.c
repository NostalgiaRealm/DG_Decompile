/*
 * FUN_140013478 at 140013478
 * undefined8 __cdecl FUN_140013478(longlong param_1)
 * Address ranges: 140013478-1400137b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140013478(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  SIZE_T SVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
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
  
  uVar7 = FUN_1400149f0(*(longlong *)(param_1 + 0x10));
  if ((uVar7 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar11 = 1;
    if (*(char *)(param_1 + 0x478) == '\0') {
      uVar11 = 0x10;
    }
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 800);
    if (uVar11 < uVar2) {
      uVar2 = uVar11;
    }
    FUN_1400133c0(param_1);
    thunk_FUN_140024830(*(LPVOID *)(param_1 + 800));
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    uVar7 = 0;
    local_340 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar11 = (uint)uVar7;
        if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == uVar11 + 1)) {
          lVar13 = *(longlong *)(param_1 + 0x10);
          if (uVar11 < *(uint *)(lVar13 + 800)) {
            uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar13 + 0x318) + uVar7 * 4);
          }
          else {
            uVar7 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(param_1 + 0x328);
          local_350[0] = (uint)uVar7;
          FUN_140013ed0((longlong *)(param_1 + 800),local_350);
          lVar13 = lVar13 + uVar7 * 0x28;
          (**(code **)(**(longlong **)(lVar13 + 8) + 0x50))(*(longlong **)(lVar13 + 8),asStack_188);
          local_348 = (longlong *)0x0;
          iVar12 = 0;
          iVar6 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x38))
                            (*(longlong **)(lVar13 + 8),0,&local_348);
          while (iVar6 != -0x7785fffe) {
            local_350[0] = uVar11;
            (**(code **)(*local_348 + 0x38))(local_348,asStack_338);
            if (local_2e8 != 0) {
              FUN_1400251e8(asStack_2d8,asStack_188);
              FUN_1400251e8(asStack_298,asStack_338);
              local_198 = local_2e0;
              uStack_190 = local_60;
              plVar1 = (longlong *)(param_1 + (uVar14 + 0x22) * 0x10);
              iVar6 = *(int *)((longlong)plVar1 + 0xc);
              if ((int)plVar1[1] == iVar6) {
                uVar11 = iVar6 << 1;
                if (iVar6 == 0) {
                  uVar11 = 0x10;
                }
                auVar3._8_8_ = 0;
                auVar3._0_8_ = CONCAT44(0,uVar11);
                SVar10 = CONCAT44(0,uVar11) * 0x150;
                if (SUB168(auVar3 * ZEXT816(0x150),8) != 0) {
                  SVar10 = 0xffffffffffffffff;
                }
                puVar8 = (undefined8 *)thunk_FUN_1400247f0(SVar10);
                if (puVar8 != (undefined8 *)0x0) {
                  thunk_FUN_140001000(puVar8,(undefined8 *)*plVar1,
                                      (ulonglong)*(uint *)((longlong)plVar1 + 0xc) * 0x150);
                  thunk_FUN_140024830((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar8;
                  *(uint *)((longlong)plVar1 + 0xc) = uVar11;
                  goto LAB_14001362c;
                }
              }
              else {
LAB_14001362c:
                thunk_FUN_140001000((undefined8 *)
                                    (*plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 0x150),
                                    (undefined8 *)asStack_2d8,0x150);
                *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              }
              plVar1 = (longlong *)(param_1 + (uVar14 + 2) * 0x10);
              iVar6 = *(int *)((longlong)plVar1 + 0xc);
              if ((int)plVar1[1] == iVar6) {
                uVar11 = iVar6 << 1;
                if (iVar6 == 0) {
                  uVar11 = 0x10;
                }
                auVar4._8_8_ = 0;
                auVar4._0_8_ = CONCAT44(0,uVar11);
                SVar10 = CONCAT44(0,uVar11) << 3;
                if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
                  SVar10 = 0xffffffffffffffff;
                }
                puVar8 = (undefined8 *)thunk_FUN_1400247f0(SVar10);
                if (puVar8 != (undefined8 *)0x0) {
                  thunk_FUN_140001000(puVar8,(undefined8 *)*plVar1,
                                      (ulonglong)*(uint *)((longlong)plVar1 + 0xc) << 3);
                  thunk_FUN_140024830((LPVOID)*plVar1);
                  *plVar1 = (longlong)puVar8;
                  *(uint *)((longlong)plVar1 + 0xc) = uVar11;
                  goto LAB_1400136ac;
                }
              }
              else {
LAB_1400136ac:
                *(undefined8 *)(*plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 8) = 0;
                *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              }
              plVar1 = (longlong *)(param_1 + (uVar14 + 0x12) * 0x10);
              iVar6 = *(int *)((longlong)plVar1 + 0xc);
              if ((int)plVar1[1] == iVar6) {
                uVar11 = iVar6 << 1;
                if (iVar6 == 0) {
                  uVar11 = 0x10;
                }
                auVar5._8_8_ = 0;
                auVar5._0_8_ = CONCAT44(0,uVar11);
                SVar10 = CONCAT44(0,uVar11) << 3;
                if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
                  SVar10 = 0xffffffffffffffff;
                }
                puVar8 = (undefined8 *)thunk_FUN_1400247f0(SVar10);
                if (puVar8 == (undefined8 *)0x0) goto LAB_140013738;
                thunk_FUN_140001000(puVar8,(undefined8 *)*plVar1,
                                    (ulonglong)*(uint *)((longlong)plVar1 + 0xc) << 3);
                thunk_FUN_140024830((LPVOID)*plVar1);
                *plVar1 = (longlong)puVar8;
                *(uint *)((longlong)plVar1 + 0xc) = uVar11;
              }
              *(undefined8 *)(*plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 8) = 0;
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            }
LAB_140013738:
            (**(code **)(*local_348 + 0x10))();
            iVar12 = iVar12 + 1;
            iVar6 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x38))
                              (*(longlong **)(lVar13 + 8),iVar12,&local_348);
            uVar11 = local_350[0];
          }
        }
        uVar7 = (ulonglong)(uVar11 + 1);
      } while (uVar11 + 1 < local_340);
    }
    uVar9 = 1;
  }
  return uVar9;
}

