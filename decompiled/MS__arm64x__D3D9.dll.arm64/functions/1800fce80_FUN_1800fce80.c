/*
 * FUN_1800fce80 at 1800fce80
 * undefined FUN_1800fce80(void)
 * Address ranges: 1800fce80-1800fcf5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fce80(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(uint *)(lVar6 + 0x22fc) != 0) {
    uVar5 = (ulonglong)*(uint *)(lVar6 + 0x22fc);
    do {
      uVar3 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar3;
      lVar1 = *(longlong *)(lVar6 + 0x22f0) + uVar5 * 0x18;
      plVar7 = *(longlong **)(lVar1 + 0x10);
      uVar2 = *(uint *)(plVar7 + 1);
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        lVar4 = *plVar7 + (ulonglong)uVar2 * 0xa8;
        if (*(longlong *)(lVar4 + 0x30) == param_3) {
          FUN_1800f1380(*(undefined8 *)(lVar6 + 0x22d8),*(undefined8 *)(lVar4 + 0xa0),&LAB_1800ee9e0
                        ,1);
          FUN_1800eebb8(plVar7,uVar2);
          *(int *)(lVar6 + 0x2300) = *(int *)(lVar6 + 0x2300) + -1;
        }
      }
      if ((int)plVar7[1] == 0) {
        FUN_1800ee9f0(lVar6 + 0x22f0,lVar1 + 8);
      }
    } while (uVar3 != 0);
  }
  return;
}

