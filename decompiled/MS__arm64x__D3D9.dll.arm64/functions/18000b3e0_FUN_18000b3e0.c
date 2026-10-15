/*
 * FUN_18000b3e0 at 18000b3e0
 * undefined FUN_18000b3e0(void)
 * Address ranges: 18000b3e0-18000b4e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000b3e0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    lVar8 = *param_1;
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)(lVar8 + uVar7 * 0x28);
      iVar4 = func_0x000180222c00(puVar2,param_2,0x10);
      uVar6 = (uint)uVar7;
      if (iVar4 == 0) {
        if ((*(uint *)((longlong)puVar2 + 0x1c) & 1) == 0) {
          thunk_FUN_180102fc0();
        }
        else {
          (**(code **)(*(longlong *)puVar2[2] + 0x10))();
        }
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        uVar5 = *(uint *)(param_1 + 1);
        if (uVar6 < uVar5) {
          while( true ) {
            uVar1 = uVar6 + 1;
            if (uVar5 <= uVar1) break;
            puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar6 * 0x28);
            puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 0x28);
            uVar11 = *puVar3;
            uVar10 = puVar3[3];
            uVar9 = puVar3[2];
            puVar2[1] = puVar3[1];
            *puVar2 = uVar11;
            puVar2[3] = uVar10;
            puVar2[2] = uVar9;
            puVar2[4] = puVar3[4];
            uVar5 = *(uint *)(param_1 + 1);
            uVar6 = uVar1;
          }
          *(uint *)(param_1 + 1) = uVar5 - 1;
        }
        return 0;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < uVar5);
  }
  return 0x88760866;
}

