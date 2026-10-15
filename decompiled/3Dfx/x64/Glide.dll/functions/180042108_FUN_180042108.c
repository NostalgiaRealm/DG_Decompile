/*
 * FUN_180042108 at 180042108
 * undefined __fastcall FUN_180042108(longlong * param_1, uint param_2)
 * Address ranges: 180042108-180042196
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042108(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar3 = *(longlong **)(*param_1 + 0x20 + (ulonglong)param_2 * 0x28);
  FUN_180043394(param_1[2],(ulonglong)plVar3,(undefined *)0x0,'\x01');
  (**(code **)(*plVar3 + 0x10))(plVar3);
  while( true ) {
    uVar7 = param_2 + 1;
    uVar8 = (ulonglong)uVar7;
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar7) break;
    lVar4 = *param_1;
    uVar6 = (ulonglong)param_2;
    puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x28);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + uVar6 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x28);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar6 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(lVar4 + 0x20 + uVar6 * 0x28) = *(undefined8 *)(lVar4 + 0x20 + uVar8 * 0x28);
    param_2 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
  return;
}

