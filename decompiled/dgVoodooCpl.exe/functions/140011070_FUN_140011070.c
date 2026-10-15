/*
 * FUN_140011070 at 140011070
 * ulonglong __fastcall FUN_140011070(longlong param_1, uint param_2)
 * Address ranges: 140011070-140011239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140011070(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res10 [2];
  ulonglong uVar10;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar10 = uVar8;
    while (*(uint *)(*(longlong *)(param_1 + 800) + uVar10 * 4) != param_2) {
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if (*(uint *)(param_1 + 0x328) <= uVar9) {
        return 0;
      }
    }
    if ((int)uVar10 != -1) {
      puVar1 = (uint *)(param_1 + 0x434 + uVar10 * 4);
      if (*(int *)(param_1 + 0x434 + uVar10 * 4) == -1) {
        *puVar1 = 0;
        bVar6 = FUN_140012e80(*(longlong *)(param_1 + 0x480),(ulonglong)param_2,
                              *(int *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                              *(undefined4 *)(param_1 + 0x48c),*(char *)(param_1 + 0x498));
        if (bVar6) {
          lVar2 = (ulonglong)param_2 * 0x28;
          lVar4 = *(longlong *)(param_1 + 0x480);
          uVar9 = 2;
          do {
            plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2);
            iVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x1c,uVar9,local_res10);
            if ((((iVar7 == 0) && (local_res10[0] != 0)) &&
                (plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2),
                iVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x39,uVar9,local_res10), iVar7 == 0))
               && (local_res10[0] != 0)) {
              *(char *)(param_1 + uVar10 + 0x334 + (ulonglong)*puVar1 * 0x10) = (char)uVar9;
              *puVar1 = *puVar1 + 1;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x21);
          lVar4 = *(longlong *)(param_1 + 0x480);
          piVar3 = (int *)(lVar4 + 0x18 + lVar2);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            plVar5 = *(longlong **)(lVar4 + 0x340 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x340 + lVar2) = 0;
            }
            plVar5 = *(longlong **)(lVar4 + 0x338 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x338 + lVar2) = 0;
            }
            plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x330 + lVar2) = 0;
            }
          }
        }
      }
      uVar8 = (ulonglong)*puVar1;
    }
  }
  return uVar8;
}

