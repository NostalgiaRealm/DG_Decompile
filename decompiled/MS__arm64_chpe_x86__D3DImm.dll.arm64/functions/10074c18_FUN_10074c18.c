/*
 * FUN_10074c18 at 10074c18
 * undefined FUN_10074c18(void)
 * Address ranges: 10074c18-10074ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074c18(int param_1,uint param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((param_2 != 0xffffffff) && (uVar3 = *(uint *)(param_1 + 8), uVar3 != 0)) {
    uVar8 = 0;
    uVar5 = uVar3;
    do {
      uVar6 = uVar5 + uVar8 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x10);
      uVar4 = uVar6;
      if (uVar7 <= param_2) {
        if (param_2 <= uVar7) break;
        uVar8 = uVar6 + 1;
        uVar6 = uVar8;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar8);
    if (((uVar6 != uVar3) &&
        (puVar2 = (ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x10), *puVar2 == (ulonglong)param_2
        )) && (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
      *(undefined1 *)(*piVar1 + 0x20) = 0;
    }
  }
  return;
}

