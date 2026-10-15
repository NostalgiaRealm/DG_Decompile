/*
 * FUN_18005df40 at 18005df40
 * undefined __cdecl FUN_18005df40(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 18005df40-18005df4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005df40(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uVar4 = *(uint *)(lVar7 + 0x2314);
  uVar8 = (ulonglong)uVar4;
  while (uVar6 = uVar8, uVar4 != 0) {
    uVar4 = (int)uVar6 - 1;
    uVar8 = (ulonglong)uVar4;
    lVar1 = *(longlong *)(lVar7 + 0x2308) + uVar8 * 0x28;
    if (*(longlong *)(lVar1 + 8) == param_3) {
      plVar9 = *(longlong **)(lVar1 + 0x20);
      FUN_1800497b8(*(longlong *)(lVar7 + 0x2318),(ulonglong)plVar9,(undefined *)0x0,1);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      while( true ) {
        uVar5 = (uint)uVar6;
        if (*(uint *)(lVar7 + 0x2314) <= uVar5) break;
        puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x2308) + (ulonglong)(uVar5 - 1) * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x2308) + uVar6 * 0x28);
        uVar12 = *puVar3;
        uVar11 = puVar3[3];
        uVar10 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar12;
        puVar2[3] = uVar11;
        puVar2[2] = uVar10;
        puVar2[4] = puVar3[4];
        uVar6 = (ulonglong)(uVar5 + 1);
      }
      *(uint *)(lVar7 + 0x2314) = *(uint *)(lVar7 + 0x2314) - 1;
    }
  }
  return;
}

