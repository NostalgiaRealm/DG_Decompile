/*
 * FUN_180046a50 at 180046a50
 * undefined __fastcall FUN_180046a50(longlong param_1)
 * Address ranges: 180046a50-180046b74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046a50(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x70) == 0) {
      puVar4 = (undefined8 *)0x0;
      plVar9 = (longlong *)&DAT_00000008;
      goto LAB_180046a95;
    }
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + uVar6 * 0x18);
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x68) + 0x10 + uVar6 * 0x18);
LAB_180046a95:
      uVar2 = (**(code **)(*(longlong *)*puVar4 + 0x40))();
      plVar9 = (longlong *)*plVar9;
      uVar5 = *(uint *)(plVar9 + 2);
      uVar8 = 0xffffffff;
      while (uVar7 = uVar5, uVar7 != 0xffffffff) {
        lVar1 = *plVar9;
        uVar3 = (ulonglong)uVar7;
        uVar5 = *(uint *)(lVar1 + uVar3 * 0x18);
        if (uVar5 == 0xffffffff) break;
        if (uVar2 < *(ulonglong *)(lVar1 + 8 + uVar3 * 0x18)) {
          uVar5 = *(uint *)(lVar1 + 0x10 + uVar3 * 0x18);
          uVar8 = uVar7;
        }
        else {
          FUN_1800469e0(param_1,uVar5,*(int *)(lVar1 + 4 + uVar3 * 0x18));
          uVar5 = *(uint *)(lVar1 + 0x10 + uVar3 * 0x18);
          *(undefined4 *)(lVar1 + uVar3 * 0x18) = 0xffffffff;
          if ((uVar5 == 0xffffffff) || (*(int *)(*plVar9 + (ulonglong)uVar5 * 0x18) == -1)) {
            if (uVar8 != 0xffffffff) {
              *(uint *)((longlong)plVar9 + 0x14) = uVar8;
            }
          }
          else {
            if (uVar8 == 0xffffffff) {
              *(uint *)(plVar9 + 2) = uVar5;
            }
            else {
              *(uint *)(*plVar9 + 0x10 + (ulonglong)uVar8 * 0x18) = uVar5;
            }
            *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x18) =
                 *(undefined4 *)
                  (*plVar9 + 0x10 + (ulonglong)*(uint *)((longlong)plVar9 + 0x14) * 0x18);
            *(uint *)(*plVar9 + 0x10 + (ulonglong)*(uint *)((longlong)plVar9 + 0x14) * 0x18) = uVar7
            ;
          }
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  return;
}

