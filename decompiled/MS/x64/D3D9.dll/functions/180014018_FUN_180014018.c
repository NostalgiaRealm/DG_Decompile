/*
 * FUN_180014018 at 180014018
 * undefined8 __fastcall FUN_180014018(longlong * param_1, longlong * param_2)
 * Address ranges: 180014018-1800140ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180014018(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] != 0) {
    lVar3 = *param_1;
    uVar10 = 0;
    do {
      uVar8 = (uint)uVar10;
      if ((*(longlong *)(lVar3 + uVar10 * 0x28) == *param_2) &&
         (*(longlong *)(lVar3 + 8 + uVar10 * 0x28) == param_2[1])) {
        plVar4 = *(longlong **)(lVar3 + 0x10 + uVar10 * 0x28);
        if ((*(byte *)(lVar3 + 0x1c + uVar10 * 0x28) & 1) == 0) {
          FUN_1800fbcf0(plVar4);
        }
        else {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(undefined8 *)(lVar3 + 0x10 + uVar10 * 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x18 + uVar10 * 0x28) = 0;
        puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar6 = *(uint *)(param_1 + 1);
        if (uVar8 < uVar6) {
          while( true ) {
            uVar9 = uVar8 + 1;
            uVar10 = (ulonglong)uVar9;
            if (uVar6 <= uVar9) break;
            lVar3 = *param_1;
            uVar7 = (ulonglong)uVar8;
            puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x28);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar3 + uVar7 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 0x28);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar7 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            *(undefined8 *)(lVar3 + 0x20 + uVar7 * 0x28) =
                 *(undefined8 *)(lVar3 + 0x20 + uVar10 * 0x28);
            uVar6 = *(uint *)(param_1 + 1);
            uVar8 = uVar9;
          }
          *(uint *)(param_1 + 1) = uVar6 - 1;
        }
        return 0;
      }
      uVar10 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < *(uint *)(param_1 + 1));
  }
  return 0x88760866;
}

