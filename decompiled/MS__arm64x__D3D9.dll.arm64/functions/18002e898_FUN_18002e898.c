/*
 * FUN_18002e898 at 18002e898
 * undefined FUN_18002e898(void)
 * Address ranges: 18002e898-18002e943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e898(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *param_2;
  uVar5 = *(uint *)(param_1 + 0xf75c);
  uVar8 = (ulonglong)uVar5;
  while (uVar7 = uVar8, uVar5 != 0) {
    uVar5 = (int)uVar7 - 1;
    uVar8 = (ulonglong)uVar5;
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf750) + uVar8 * 0x20);
    if ((*puVar1 & 0x7fffffff) == ((ulonglong)uVar4 & 0x7fffffff)) {
      (**(code **)(*(longlong *)puVar1[3] + 0x10))();
      while( true ) {
        uVar6 = (uint)uVar7;
        if (*(uint *)(param_1 + 0xf75c) <= uVar6) break;
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xf750) + (ulonglong)(uVar6 - 1) * 0x20);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xf750) + uVar7 * 0x20);
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar11 = *puVar3;
        uVar10 = puVar3[3];
        uVar9 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar11;
        puVar2[3] = uVar10;
        puVar2[2] = uVar9;
      }
      *(uint *)(param_1 + 0xf75c) = *(uint *)(param_1 + 0xf75c) - 1;
    }
  }
  return;
}

