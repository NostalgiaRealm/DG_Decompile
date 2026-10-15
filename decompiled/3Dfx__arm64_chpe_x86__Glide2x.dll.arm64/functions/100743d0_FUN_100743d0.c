/*
 * FUN_100743d0 at 100743d0
 * undefined FUN_100743d0(void)
 * Address ranges: 100743d0-10074473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100743d0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_3 != 0xffffffff) {
    iVar4 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
    uVar3 = *(uint *)(iVar4 + 0x1d3c);
    if (uVar3 != 0) {
      uVar8 = 0;
      uVar6 = uVar3;
      do {
        uVar7 = uVar6 + uVar8 >> 1;
        uVar9 = *(ulonglong *)(*(int *)(iVar4 + 0x1d38) + uVar7 * 0x10);
        uVar5 = uVar7;
        if (uVar9 <= param_3) {
          if (param_3 <= uVar9) break;
          uVar8 = uVar7 + 1;
          uVar7 = uVar8;
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
      } while (uVar6 != uVar8);
      if (((uVar7 != uVar3) &&
          (puVar2 = (ulonglong *)(*(int *)(iVar4 + 0x1d38) + uVar7 * 0x10),
          *puVar2 == (ulonglong)param_3)) &&
         (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
        *(undefined1 *)(*piVar1 + 0x20) = 0;
      }
    }
  }
  return;
}

