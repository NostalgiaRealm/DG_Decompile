/*
 * FUN_1001fb90 at 1001fb90
 * undefined FUN_1001fb90(void)
 * Address ranges: 1001fb90-1001fc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fb90(int param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 0x1ec8);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar5 = uVar6 + uVar7 >> 1;
      uVar4 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar5 * 0x18);
      uVar3 = uVar5;
      if (uVar4 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar4) break;
        uVar7 = uVar5 + 1;
        uVar5 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
    if ((uVar5 != uVar1) &&
       (plVar2 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar5 * 0x18),
       puVar8 = (undefined1 *)((int)plVar2 + 0x12), *plVar2 == (longlong)param_2))
    goto LAB_1001fc10;
  }
  puVar8 = &DAT_00000006;
LAB_1001fc10:
  *puVar8 = 1;
  return;
}

