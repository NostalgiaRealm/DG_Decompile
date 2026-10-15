/*
 * FUN_18021c670 at 18021c670
 * undefined FUN_18021c670(void)
 * Address ranges: 18021c670-18021c757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021c670(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  code *extraout_x11;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  lVar8 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uVar4 = *(uint *)(lVar8 + 0x2314);
  uVar9 = (ulonglong)uVar4;
  while (uVar7 = uVar9, uVar4 != 0) {
    uVar4 = (int)uVar7 - 1;
    uVar9 = (ulonglong)uVar4;
    lVar1 = *(longlong *)(lVar8 + 0x2308) + uVar9 * 0x28;
    if (*(longlong *)(lVar1 + 0x10) == param_3) {
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      FUN_18020d9f8(*(undefined8 *)(lVar8 + 0x2318),uVar10,0,1);
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11)(uVar10);
      while( true ) {
        uVar6 = (uint)uVar7;
        if (*(uint *)(lVar8 + 0x2314) <= uVar6) break;
        puVar2 = (undefined8 *)(*(longlong *)(lVar8 + 0x2308) + (ulonglong)(uVar6 - 1) * 0x28);
        puVar3 = (undefined8 *)(*(longlong *)(lVar8 + 0x2308) + uVar7 * 0x28);
        uVar10 = *puVar3;
        uVar12 = puVar3[3];
        uVar11 = puVar3[2];
        puVar2[1] = puVar3[1];
        *puVar2 = uVar10;
        puVar2[3] = uVar12;
        puVar2[2] = uVar11;
        puVar2[4] = puVar3[4];
        uVar7 = (ulonglong)(uVar6 + 1);
      }
      *(uint *)(lVar8 + 0x2314) = *(uint *)(lVar8 + 0x2314) - 1;
    }
  }
  return;
}

