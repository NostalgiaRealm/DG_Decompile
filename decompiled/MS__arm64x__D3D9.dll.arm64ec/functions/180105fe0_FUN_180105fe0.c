/*
 * FUN_180105fe0 at 180105fe0
 * undefined FUN_180105fe0(void)
 * Address ranges: 180105fe0-180106033;180106050-1801060bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180105fe0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  uVar5 = (uint)param_3;
  if (param_1[1] + ((param_3 & 0xffffffff) - *param_1) <= (ulonglong)*(uint *)(param_1 + 2)) {
    puVar2 = (undefined8 *)param_1[1];
    puVar3 = param_2;
    for (uVar1 = uVar5 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if ((uVar5 >> 2 & 1) != 0) {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
    }
    uVar5 = uVar5 & 3;
    puVar6 = (undefined1 *)(param_1[1] + (param_3 & 0xfffffffc));
    puVar7 = (undefined1 *)((param_3 & 0xfffffffc) + (longlong)param_2);
    if ((param_3 & 3) != 0) {
      do {
        uVar5 = uVar5 - 1;
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    param_1[1] = param_1[1] + (param_3 & 0xffffffff);
    return;
  }
  uVar4 = FUN_1802229a8(uVar5 + *(uint *)(param_1 + 2) * 2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(param_1[1],uVar4,*param_1,(int)param_1[2]);
}

