/*
 * FUN_180058f14 at 180058f14
 * undefined __fastcall FUN_180058f14(longlong param_1, int param_2, int param_3, longlong * param_4)
 * Address ranges: 180058f14-180059137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058f14(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res8;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar19 = 0;
    local_res8 = 0;
    if (*(int *)(param_1 + 0x80) == 0) {
      puVar10 = (undefined8 *)0x0;
      plVar12 = (longlong *)&DAT_00000008;
      goto LAB_180058f74;
    }
    do {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + 8 + uVar19 * 0x18);
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x10 + uVar19 * 0x18);
LAB_180058f74:
      uVar7 = (**(code **)(*(longlong *)*puVar10 + 0x40))();
      plVar12 = (longlong *)*plVar12;
      uVar15 = 0xffffffff;
      uVar4 = *(uint *)(plVar12 + 2);
      iVar16 = param_2;
      uVar18 = (uint)uVar19;
      while (uVar4 != 0xffffffff) {
        lVar2 = *plVar12;
        lVar11 = (ulonglong)uVar4 * 0x20;
        iVar14 = *(int *)(lVar2 + 0x18 + lVar11);
        uVar18 = local_res8;
        if ((iVar14 == 0) || (iVar16 == 0)) break;
        if (uVar7 < *(ulonglong *)(lVar2 + 0x10 + lVar11)) {
          uVar15 = (ulonglong)uVar4;
          uVar17 = *(uint *)(lVar2 + 0x1c + lVar11);
        }
        else {
          if ((iVar14 == param_3) && (param_4[1] == 0)) {
            uVar17 = *(uint *)(param_1 + 0x68);
            if (uVar17 != 0) {
              uVar19 = *(ulonglong *)(lVar2 + 8 + lVar11);
              uVar13 = 0;
              lVar3 = *(longlong *)(param_1 + 0x60);
              uVar9 = uVar17;
              do {
                uVar6 = uVar9 + uVar13 >> 1;
                uVar8 = *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 0x48);
                uVar5 = uVar6;
                if (uVar8 <= uVar19) {
                  if (uVar19 <= uVar8) break;
                  uVar6 = uVar6 + 1;
                  uVar5 = uVar9;
                  uVar13 = uVar6;
                }
                uVar9 = uVar5;
              } while (uVar9 != uVar13);
              if (((uVar6 != uVar17) &&
                  (uVar8 = (ulonglong)uVar6, *(ulonglong *)(lVar3 + uVar8 * 0x48) == uVar19)) &&
                 (plVar1 = (longlong *)(lVar3 + 0x10 + uVar8 * 0x48), plVar1 != (longlong *)0x0)) {
                *param_4 = (*(longlong *)(lVar3 + 0x18 + uVar8 * 0x48) - uVar19) +
                           *(longlong *)(lVar2 + lVar11);
                param_4[1] = *plVar1;
                param_4[2] = *(longlong *)(lVar2 + lVar11);
                param_4[3] = *(longlong *)(lVar2 + 8 + lVar11);
              }
            }
          }
          else {
            FUN_180058d64(param_1,iVar14,(int)*(undefined8 *)(lVar2 + lVar11),
                          *(ulonglong *)(lVar2 + 8 + lVar11));
          }
          uVar17 = *(uint *)(lVar2 + 0x1c + lVar11);
          *(undefined4 *)(lVar2 + 0x18 + lVar11) = 0;
          iVar14 = (int)uVar15;
          if ((uVar17 == 0xffffffff) || (*(int *)(*plVar12 + 0x18 + (ulonglong)uVar17 * 0x20) == 0))
          {
            if (iVar14 != -1) {
              *(int *)((longlong)plVar12 + 0x14) = iVar14;
            }
          }
          else {
            if (iVar14 == -1) {
              *(uint *)(plVar12 + 2) = uVar17;
            }
            else {
              *(uint *)(*plVar12 + 0x1c + uVar15 * 0x20) = uVar17;
            }
            *(undefined4 *)(lVar2 + 0x1c + lVar11) =
                 *(undefined4 *)
                  (*plVar12 + 0x1c + (ulonglong)*(uint *)((longlong)plVar12 + 0x14) * 0x20);
            *(uint *)(*plVar12 + 0x1c + (ulonglong)*(uint *)((longlong)plVar12 + 0x14) * 0x20) =
                 uVar4;
          }
        }
        iVar16 = iVar16 + -1;
        uVar4 = uVar17;
      }
      local_res8 = uVar18 + 1;
      uVar19 = (ulonglong)local_res8;
    } while (local_res8 < *(uint *)(param_1 + 0x80));
  }
  return;
}

