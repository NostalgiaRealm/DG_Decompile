/*
 * FUN_1400144f0 at 1400144f0
 * ulonglong __cdecl FUN_1400144f0(longlong param_1, uint param_2)
 * Address ranges: 1400144f0-140014657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1400144f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong extraout_x1;
  longlong lVar8;
  ulonglong extraout_x12;
  uint uVar9;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  
  uVar7 = (ulonglong)param_2;
  uVar4 = FUN_140013388(param_1,param_2);
  uVar5 = extraout_x12;
  if ((int)uVar4 != -1) {
    lVar1 = param_1 + (uVar4 & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar5 = FUN_140014c38(*(longlong *)(param_1 + 0x480),extraout_x1,*(int *)(param_1 + 0x488));
      if ((uVar5 & 1) != 0) {
        uVar9 = 2;
        lVar2 = *(longlong *)(param_1 + 0x480) + uVar7 * 0x20;
        do {
          plVar6 = *(longlong **)(lVar2 + 0x330);
          local_50 = 0x1c;
          local_48 = 0;
          uStack_4c = uVar9;
          iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6,4,&local_50,0x10);
          if ((((iVar3 == 0) && (local_50 = 0x39, local_48._4_4_ != 0)) &&
              (plVar6 = *(longlong **)(lVar2 + 0x330),
              iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6,4,&local_50,0x10), iVar3 == 0)) &&
             (local_48._4_4_ != 0)) {
            *(char *)(param_1 + (uVar4 & 0xffffffff) + (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 +
                     0x334) = (char)uVar9;
            *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x11);
        lVar8 = *(longlong *)(param_1 + 0x480);
        lVar2 = lVar8 + uVar7 * 0x28;
        iVar3 = *(int *)(lVar2 + 0x18) + -1;
        *(int *)(lVar2 + 0x18) = iVar3;
        if ((iVar3 == 0) && (lVar8 = lVar8 + uVar7 * 0x20, *(longlong *)(lVar8 + 0x330) != 0)) {
          (**(code **)(**(longlong **)(lVar8 + 0x338) + 0x10))();
          *(undefined8 *)(lVar8 + 0x338) = 0;
          (**(code **)(**(longlong **)(lVar8 + 0x330) + 0x10))();
          *(undefined8 *)(lVar8 + 0x330) = 0;
        }
      }
    }
    uVar5 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar5 & 0xffffffff;
}

