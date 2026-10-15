/*
 * FUN_1800e2ae8 at 1800e2ae8
 * undefined8 __fastcall FUN_1800e2ae8(longlong param_1, char param_2)
 * Address ranges: 1800e2ae8-1800e2c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e2ae8(longlong param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined8 local_res8 [4];
  
  lVar3 = *(longlong *)(param_1 + 0xb08);
  uVar8 = 0;
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x67c) == 0)) {
    uVar8 = 1;
    uVar7 = 0;
    *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x674) + 1;
    if (*(int *)(param_1 + 0xba0) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb98) + uVar7 * 8) + 8))();
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0xba0));
    }
    piVar2 = (int *)(param_1 + 0x674);
    *piVar2 = *piVar2 + -1;
    lVar1 = param_1 + -8;
    if ((*piVar2 == 0) && (*(int *)(param_1 + 0xb20) == 0)) {
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x70))
                (*(longlong **)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                 *(undefined8 *)(param_1 + 0xb70));
    }
    else {
      *(int *)(param_1 + 0xba8) = *(int *)(param_1 + 0xba8) + 1;
      FUN_1800e24c4(lVar1);
      (**(code **)(**(longlong **)(param_1 + 0x680) + 0x48))();
      local_res8[0] = *(undefined8 *)(param_1 + 0x680);
      uVar4 = *(undefined8 *)(param_1 + 0xb70);
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x50))(*(longlong **)(lVar3 + 0x10),1,local_res8)
      ;
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x70))
                (*(longlong **)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),uVar4);
      *(undefined8 *)(param_1 + 0x748 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8) =
           *(undefined8 *)(param_1 + 0xb70);
      plVar5 = (longlong *)FUN_1800e2660(lVar1);
      (**(code **)(*plVar5 + 0x40))(plVar5);
      (**(code **)(**(longlong **)(param_1 + 0x680) + 0x50))
                (*(longlong **)(param_1 + 0x680),plVar5,0);
      *(undefined4 *)(param_1 + 0xb60) = 0;
      FUN_1800fbea0((undefined1 *)(param_1 + 0x18),0,0x660);
      *(undefined4 *)(param_1 + 0x668) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x65c) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x658) = 0x7ff00000;
    }
    in_RAX = FUN_1800e251c(lVar1);
    if (param_2 != '\0') {
      in_RAX = FUN_1800e7ff0(lVar3,*(ulonglong *)(param_1 + 0xb70));
    }
    *(undefined8 *)(param_1 + 0xb78) = *(undefined8 *)(param_1 + 0xb70);
    LOCK();
    plVar5 = (longlong *)(lVar3 + 0x28);
    lVar3 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xb80) = 0;
    *(longlong *)(param_1 + 0xb70) = lVar3 + 1;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar8);
}

