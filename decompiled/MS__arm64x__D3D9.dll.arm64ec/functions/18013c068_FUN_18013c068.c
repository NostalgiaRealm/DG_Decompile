/*
 * FUN_18013c068 at 18013c068
 * undefined FUN_18013c068(void)
 * Address ranges: 18013c068-18013c127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013c068(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  code *extraout_x11;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = *param_2;
  uVar4 = *(uint *)(param_1 + 0xf75c);
  uVar8 = (ulonglong)uVar4;
  while (uVar7 = uVar8, uVar4 != 0) {
    uVar4 = (int)uVar7 - 1;
    uVar8 = (ulonglong)uVar4;
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0xf750) + uVar8 * 0x20) & 0x7fffffff) ==
        ((ulonglong)uVar3 & 0x7fffffff)) {
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11)();
      while( true ) {
        uVar6 = (uint)uVar7;
        if (*(uint *)(param_1 + 0xf75c) <= uVar6) break;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xf750) + (ulonglong)(uVar6 - 1) * 0x20);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xf750) + uVar7 * 0x20);
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = *puVar2;
        uVar11 = puVar2[3];
        uVar10 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar9;
        puVar1[3] = uVar11;
        puVar1[2] = uVar10;
      }
      *(uint *)(param_1 + 0xf75c) = *(uint *)(param_1 + 0xf75c) - 1;
    }
  }
  return;
}

