/*
 * FUN_10056f98 at 10056f98
 * undefined FUN_10056f98(void)
 * Address ranges: 10056f98-10057023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056f98(int param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 0xf8f8);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar5 = uVar6 + uVar7 >> 1;
      uVar4 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18);
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
       (plVar2 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18),
       puVar8 = (undefined1 *)((int)plVar2 + 0x13), *plVar2 == (longlong)param_2))
    goto LAB_10057018;
  }
  puVar8 = &DAT_00000007;
LAB_10057018:
  *puVar8 = 1;
  return;
}

