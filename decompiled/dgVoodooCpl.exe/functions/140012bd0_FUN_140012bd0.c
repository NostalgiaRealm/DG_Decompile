/*
 * FUN_140012bd0 at 140012bd0
 * ulonglong __fastcall FUN_140012bd0(longlong param_1, uint param_2)
 * Address ranges: 140012bd0-140012d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140012bd0(longlong param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  ulonglong uVar9;
  
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar9 = uVar6;
    while (*(uint *)(*(longlong *)(param_1 + 800) + uVar9 * 4) != param_2) {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 0x328) <= uVar8) {
        return 0;
      }
    }
    if ((int)uVar9 != -1) {
      puVar1 = (uint *)(param_1 + 0x434 + uVar9 * 4);
      if (*(int *)(param_1 + 0x434 + uVar9 * 4) == -1) {
        *puVar1 = 0;
        uVar6 = FUN_140013910(*(longlong *)(param_1 + 0x480),param_2,*(int *)(param_1 + 0x488));
        if ((char)uVar6 != '\0') {
          uVar8 = 2;
          lVar3 = *(longlong *)(param_1 + 0x480);
          lVar7 = (ulonglong)param_2 * 0x20;
          do {
            plVar4 = *(longlong **)(lVar3 + 0x330 + lVar7);
            local_38 = 0x1c;
            local_30 = 0;
            local_34 = uVar8;
            iVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,4,&local_38,0x10);
            if (iVar5 == 0) {
              local_38 = 0x39;
              if (((local_30._4_4_ != 0) &&
                  (plVar4 = *(longlong **)(lVar3 + 0x330 + lVar7),
                  iVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,4,&local_38,0x10), iVar5 == 0)) &&
                 (local_30._4_4_ != 0)) {
                *(char *)(param_1 + uVar9 + 0x334 + (ulonglong)*puVar1 * 0x10) = (char)uVar8;
                *puVar1 = *puVar1 + 1;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x11);
          lVar3 = *(longlong *)(param_1 + 0x480);
          piVar2 = (int *)(lVar3 + 0x18 + (ulonglong)param_2 * 0x28);
          *piVar2 = *piVar2 + -1;
          if ((*piVar2 == 0) && (*(longlong *)(lVar3 + 0x330 + lVar7) != 0)) {
            (**(code **)(**(longlong **)(lVar3 + 0x338 + lVar7) + 0x10))();
            *(undefined8 *)(lVar3 + 0x338 + lVar7) = 0;
            (**(code **)(**(longlong **)(lVar3 + 0x330 + lVar7) + 0x10))();
            *(undefined8 *)(lVar3 + 0x330 + lVar7) = 0;
          }
        }
      }
      uVar6 = (ulonglong)*puVar1;
    }
  }
  return uVar6;
}

