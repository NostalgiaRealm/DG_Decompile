/*
 * FUN_10059830 at 10059830
 * undefined FUN_10059830(void)
 * Address ranges: 10059830-100598fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10059830(int param_1,uint *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)*param_2;
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar8 = uVar5 + uVar6 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar8 * 0x10);
      uVar3 = uVar8;
      if (uVar7 <= uVar4) {
        if (uVar4 <= uVar7) break;
        uVar6 = uVar8 + 1;
        uVar8 = uVar6;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
  }
  if ((uVar8 == uVar2) ||
     (puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar8 * 0x10), *puVar1 != uVar4)) {
    FUN_100599a0(param_1,uVar8,uVar4,param_2,param_3);
  }
  else {
    *(undefined4 *)((int)puVar1 + 0xc) = *param_3;
  }
  return *(int *)(param_1 + 4) + uVar8 * 0x10 + 8;
}

