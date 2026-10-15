/*
 * FUN_18021c1a0 at 18021c1a0
 * undefined FUN_18021c1a0(void)
 * Address ranges: 18021c1a0-18021c287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021c1a0(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar7 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(uint *)(lVar7 + 0x22fc) != 0) {
    uVar5 = (ulonglong)*(uint *)(lVar7 + 0x22fc);
    do {
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar2;
      lVar1 = *(longlong *)(lVar7 + 0x22f0) + uVar5 * 0x18;
      plVar8 = *(longlong **)(lVar1 + 0x10);
      if (*(uint *)(plVar8 + 1) != 0) {
        uVar6 = (ulonglong)*(uint *)(plVar8 + 1);
        do {
          uVar3 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar3;
          lVar4 = *plVar8 + uVar6 * 0xa8;
          if (*(longlong *)(lVar4 + 0x30) == param_3) {
            FUN_18020d9f8(*(undefined8 *)(lVar7 + 0x22d8),*(undefined8 *)(lVar4 + 0xa0),
                          FUN_180205c50,1);
            FUN_180205f08(plVar8,uVar6);
            *(int *)(lVar7 + 0x2300) = *(int *)(lVar7 + 0x2300) + -1;
          }
        } while (uVar3 != 0);
      }
      if ((int)plVar8[1] == 0) {
        FUN_180205d40(lVar7 + 0x22f0,lVar1 + 8);
      }
    } while (uVar2 != 0);
  }
  return;
}

