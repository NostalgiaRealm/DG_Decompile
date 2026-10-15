/*
 * FUN_180147a60 at 180147a60
 * undefined FUN_180147a60(void)
 * Address ranges: 180147a60-180147adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147a60(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = uVar1;
    do {
      uVar4 = uVar5 + uVar6 >> 1;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar4 * 0x18);
      uVar2 = uVar4;
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) break;
        uVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar6);
    if ((uVar4 != uVar1) &&
       (puVar7 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar4 * 0x18),
       puVar8 = (undefined1 *)((longlong)puVar7 + 0x17), *puVar7 == param_2)) goto LAB_180147ad4;
  }
  puVar8 = &DAT_00000007;
LAB_180147ad4:
  *puVar8 = 1;
  return;
}

