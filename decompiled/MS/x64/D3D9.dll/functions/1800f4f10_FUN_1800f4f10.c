/*
 * FUN_1800f4f10 at 1800f4f10
 * undefined __fastcall FUN_1800f4f10(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 1800f4f10-1800f4feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f4f10(longlong param_1,ulonglong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar7 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar6 = *(uint *)(lVar7 + 0x22fc + lVar2);
  if (uVar6 != 0) {
    do {
      lVar3 = *(longlong *)(lVar7 + lVar2 + 0x22f0);
      uVar6 = uVar6 - 1;
      plVar4 = *(longlong **)(lVar3 + 0x10 + (ulonglong)uVar6 * 0x18);
      uVar5 = *(uint *)(plVar4 + 1);
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (*(longlong *)(*plVar4 + 0x30 + (ulonglong)uVar5 * 0xa8) == param_3) {
          FUN_1800ea030(*(longlong *)(lVar7 + 0x22d8 + lVar2),
                        *(ulonglong *)(*plVar4 + 0xa0 + (ulonglong)uVar5 * 0xa8),&LAB_1800e7954,
                        '\x01');
          FUN_1800e7cbc(plVar4,uVar5);
          piVar1 = (int *)(lVar7 + 0x2300 + lVar2);
          *piVar1 = *piVar1 + -1;
        }
      }
      if ((int)plVar4[1] == 0) {
        FUN_1800e79ec((longlong *)(lVar7 + lVar2 + 0x22f0),
                      (ulonglong *)(lVar3 + 8 + (ulonglong)uVar6 * 0x18));
      }
    } while (uVar6 != 0);
  }
  return;
}

