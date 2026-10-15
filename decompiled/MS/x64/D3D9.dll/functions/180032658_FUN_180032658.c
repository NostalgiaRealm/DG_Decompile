/*
 * FUN_180032658 at 180032658
 * longlong __fastcall FUN_180032658(undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180032658-18003281a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180032658(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 7);
  if (((iVar1 - 3U < 2) || (lVar10 = 0, iVar1 == 5)) && (lVar10 = param_1[1], iVar1 - 3U < 2)) {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_2,lVar10);
    if (cVar3 == '\0') {
      uVar9 = 0;
      bVar11 = *(int *)(param_1 + 3) == 0;
      if (*(int *)(param_1 + 3) != 0) {
        do {
          cVar3 = (**(code **)(*(longlong *)*param_1 + 0x70))
                            ((longlong *)*param_1,param_2,*(undefined8 *)(param_1[2] + uVar9 * 8));
          if (cVar3 != '\0') break;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 3));
        bVar11 = (int)uVar9 == *(int *)(param_1 + 3);
      }
      if (bVar11) {
        lVar4 = (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2,param_3);
        if (lVar4 != 0) {
          if (*(int *)(param_1 + 4) < 0) {
            uVar5 = param_1[1];
          }
          else {
            uVar5 = *(undefined8 *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 8);
          }
          (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,lVar4,uVar5);
          uVar8 = *(uint *)(param_1 + 3);
          if (0xb < uVar8) {
            (**(code **)(**(longlong **)param_1[2] + 0x20))();
            uVar7 = *(uint *)(param_1 + 3);
            uVar8 = 0;
            if (uVar7 != 0) {
              uVar8 = 1;
              if (1 < uVar7) {
                do {
                  uVar7 = uVar8 - 1;
                  uVar9 = (ulonglong)uVar8;
                  uVar8 = uVar8 + 1;
                  *(undefined8 *)(param_1[2] + (ulonglong)uVar7 * 8) =
                       *(undefined8 *)(param_1[2] + uVar9 * 8);
                  uVar7 = *(uint *)(param_1 + 3);
                } while (uVar8 < uVar7);
              }
              uVar8 = uVar7 - 1;
              *(uint *)(param_1 + 3) = uVar8;
            }
          }
          *(uint *)(param_1 + 4) = uVar8;
          uVar7 = *(uint *)((longlong)param_1 + 0x1c);
          if (uVar8 == uVar7) {
            uVar9 = 0x10;
            if (uVar7 != 0) {
              uVar9 = (ulonglong)(uVar7 * 2);
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar9;
            uVar5 = SUB168(ZEXT816(8) * auVar2,0);
            if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
              uVar5 = 0xffffffffffffffff;
            }
            puVar6 = (undefined8 *)thunk_FUN_1800fbccc(uVar5);
            if (puVar6 == (undefined8 *)0x0) {
              return lVar4;
            }
            FUN_1800fbec0(puVar6,(undefined8 *)param_1[2],
                          (ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 3);
            FUN_1800fbcf0((LPVOID)param_1[2]);
            param_1[2] = puVar6;
            *(int *)((longlong)param_1 + 0x1c) = (int)uVar9;
          }
          *(longlong *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 8) = lVar4;
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          lVar10 = lVar4;
        }
      }
      else {
        lVar10 = *(longlong *)(param_1[2] + uVar9 * 8);
        if (*(int *)(param_1 + 4) < 0) {
          lVar4 = param_1[1];
        }
        else {
          lVar4 = *(longlong *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 8);
        }
        if (lVar10 != lVar4) {
          (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,lVar10);
        }
        *(int *)(param_1 + 4) = (int)uVar9;
      }
    }
    else {
      FUN_180032470(param_1);
    }
  }
  return lVar10;
}

