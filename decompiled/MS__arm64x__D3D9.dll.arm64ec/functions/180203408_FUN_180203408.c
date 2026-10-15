/*
 * FUN_180203408 at 180203408
 * undefined FUN_180203408(void)
 * Address ranges: 180203408-18020369f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180203408(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 0;
  thunk_FUN_1802236f8(param_1 + 0x620);
  if (*(uint *)(param_1 + 0x650) != 0) {
    uVar10 = 0;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x648) + uVar10 * 8);
      if ((*plVar4 == param_2) && (*(char *)((longlong)plVar4 + 0xd6b) == '\0')) {
        if ((param_3 != 0) && (plVar4[0x1ae] == param_3)) {
          plVar4[0x1ae] = 0;
        }
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x648) + uVar10 * 8);
        iVar8 = *(int *)(lVar7 + 0x14) + -1;
        *(int *)(lVar7 + 0x14) = iVar8;
        if (iVar8 == 0) {
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x648) + uVar10 * 8) + 0xd6b) = 1;
          puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x648) + uVar10 * 8);
          if (puVar9[1] != 0) {
            if (*(int *)((longlong)puVar9 + 0x3c) == 3) {
              if (*(short *)(puVar9 + 0x193) != 0) {
                thunk_FUN_180224058((longlong)puVar9 + 0xc54,(longlong)puVar9 + 0xc54,0,0,0);
              }
              thunk_FUN_180223d60(*puVar9,0xfffffff0,puVar9[0x1a8]);
              thunk_FUN_180223d60(*puVar9,0xffffffec,puVar9[0x1a9]);
              thunk_FUN_180224030(*puVar9,0,*(int *)(puVar9 + 0x1a6),
                                  *(int *)((longlong)puVar9 + 0xd34),
                                  *(int *)(puVar9 + 0x1a7) - *(int *)(puVar9 + 0x1a6),
                                  *(int *)((longlong)puVar9 + 0xd3c) -
                                  *(int *)((longlong)puVar9 + 0xd34),0x214);
            }
            puVar2 = __hybrid_os_arm64x_dispatch_icall;
            uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            (*extraout_x11)(uVar3,0,0);
            *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
            lVar7 = *(longlong *)(param_1 + 0x648);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_00)(param_1,*(undefined8 *)(lVar7 + uVar10 * 8));
            lVar7 = *(longlong *)(param_1 + 0x648);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_01)(param_1,*(undefined8 *)(lVar7 + uVar10 * 8));
            lVar7 = *(longlong *)(param_1 + 0x648);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_02)(param_1,*(undefined8 *)(lVar7 + uVar10 * 8));
            lVar7 = *(longlong *)(param_1 + 0x648);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_03)(param_1,*(undefined8 *)(lVar7 + uVar10 * 8));
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_04)();
          }
          uVar5 = 0;
          uVar6 = *(uint *)(param_1 + 0x650);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x648) + uVar10 * 8);
          if (uVar6 == 0) goto LAB_180203678;
          goto LAB_180203624;
        }
        break;
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x650));
  }
  goto LAB_180203680;
  while (uVar1 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar1, uVar1 < uVar6) {
LAB_180203624:
    if (*(longlong *)(*(longlong *)(param_1 + 0x648) + uVar5 * 8) == lVar7) {
      if ((int)uVar5 != -1) {
        while (uVar1 = (int)uVar5 + 1, uVar1 < uVar6) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x648) + uVar5 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x648) + (ulonglong)uVar1 * 8);
          uVar5 = (ulonglong)uVar1;
          uVar6 = *(uint *)(param_1 + 0x650);
        }
        *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + -1;
      }
      break;
    }
  }
LAB_180203678:
  FUN_1802229d8(lVar7,0xd78);
LAB_180203680:
  thunk_FUN_18022370c(param_1 + 0x620);
  return iVar8;
}

