/*
 * FUN_100702e0 at 100702e0
 * undefined FUN_100702e0(void)
 * Address ranges: 100702e0-1007038b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100702e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      uVar2 = uVar6 + uVar7 >> 1;
      iVar1 = *(int *)(param_1 + 4) + uVar2 * 0x40;
      uVar4 = 0;
      do {
        uVar5 = *(ulonglong *)(iVar1 + uVar4 * 8);
        uVar3 = *(ulonglong *)(param_2 + uVar4 * 8);
        if (uVar5 != uVar3) {
          uVar4 = uVar2;
          if (uVar3 < uVar5) goto LAB_1007037c;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 7);
      uVar7 = 0;
      while (uVar5 = *(ulonglong *)(iVar1 + uVar7 * 8), uVar3 = *(ulonglong *)(param_2 + uVar7 * 8),
            uVar5 == uVar3) {
        uVar7 = uVar7 + 1;
        if (6 < uVar7) {
          return uVar2;
        }
      }
      if (uVar3 <= uVar5) {
        return uVar2;
      }
      uVar7 = uVar2 + 1;
      uVar4 = uVar6;
      uVar2 = uVar7;
LAB_1007037c:
      uVar6 = uVar4;
    } while (uVar6 != uVar7);
  }
  return uVar2;
}

