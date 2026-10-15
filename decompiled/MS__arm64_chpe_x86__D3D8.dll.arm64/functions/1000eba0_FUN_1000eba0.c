/*
 * FUN_1000eba0 at 1000eba0
 * undefined FUN_1000eba0(void)
 * Address ranges: 1000eba0-1000ec23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000eba0(int param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar6 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x10);
      uVar4 = uVar5;
      if (uVar6 <= uVar3) {
        if (uVar3 <= uVar6) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (uVar5 != uVar2) {
      puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x10);
      if (*puVar1 == (ulonglong)uVar3) {
        return (int)puVar1 + 0xc;
      }
      return 0;
    }
  }
  return 0;
}

