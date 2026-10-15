/*
 * FUN_18005a110 at 18005a110
 * undefined __cdecl FUN_18005a110(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 18005a110-18005a123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a110(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
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
        plVar4 = (longlong *)(*plVar7 + (ulonglong)uVar2 * 0xa8);
        if (*plVar4 == param_3) {
          FUN_180045c28(*(longlong *)(lVar6 + 0x22d8),plVar4[0x14],&LAB_180044ca0,1);
          FUN_180044e78(plVar7,uVar2);
          *(int *)(lVar6 + 0x2300) = *(int *)(lVar6 + 0x2300) + -1;
        }
      }
      if ((int)plVar7[1] == 0) {
        FUN_180044cb0((longlong *)(lVar6 + 0x22f0),(ulonglong *)(lVar1 + 8));
      }
    } while (uVar3 != 0);
  }
  return;
}

