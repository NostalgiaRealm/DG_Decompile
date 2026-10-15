/*
 * FUN_1800ee910 at 1800ee910
 * undefined FUN_1800ee910(void)
 * Address ranges: 1800ee910-1800ee9db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ee910(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)uVar4;
  while (uVar6 = uVar7, uVar4 != 0) {
    uVar4 = (int)uVar6 - 1;
    uVar7 = (ulonglong)uVar4;
    lVar1 = *param_1 + uVar7 * 0x28;
    if (*(longlong *)(lVar1 + 8) == param_2) {
      plVar8 = *(longlong **)(lVar1 + 0x20);
      FUN_1800f1380(param_1[2],plVar8,0,1);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      while( true ) {
        uVar5 = (uint)uVar6;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar5) break;
        puVar2 = (undefined8 *)(*param_1 + (ulonglong)(uVar5 - 1) * 0x28);
        puVar3 = (undefined8 *)(*param_1 + uVar6 * 0x28);
        uVar11 = *puVar3;
        uVar10 = puVar3[3];
        uVar9 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar11;
        puVar2[3] = uVar10;
        puVar2[2] = uVar9;
        puVar2[4] = puVar3[4];
        uVar6 = (ulonglong)(uVar5 + 1);
      }
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
    }
  }
  return;
}

