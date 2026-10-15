/*
 * FUN_1801bbae0 at 1801bbae0
 * undefined FUN_1801bbae0(void)
 * Address ranges: 1801bbae0-1801bbd9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801bbae0(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + 0x88;
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      uVar3 = (*(code *)puVar1)();
      (*extraout_x11)(uVar3,lVar8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x98));
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar7 * 4);
      FUN_1802229d8((&DAT_18024e338)[uVar5 * 5]);
      (&DAT_18024e338)[uVar5 * 5] = 0;
      (&DAT_18024e340)[uVar5 * 5] = 0;
      FUN_1802229d8((&DAT_18024e348)[uVar5 * 5]);
      (&DAT_18024e348)[uVar5 * 5] = 0;
      (&DAT_18024e350)[uVar5 * 5] = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x70));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x20));
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x18));
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x28));
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x30));
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      if (((*(char *)(param_1 + 0x46 + uVar7) != '\0') && ((&DAT_18024e858)[uVar7 * 0x96] != 0)) &&
         (iVar2 = FUN_1801042d0(&DAT_18024e858 + uVar7 * 0x96), iVar2 == 0)) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)();
        if ((&DAT_18024e850)[uVar7 * 0x4b] != 0) {
          uVar3 = (*(code *)puVar1)(0x180224000);
          (*extraout_x11_01)(uVar3,1);
        }
        (&DAT_18024e850)[uVar7 * 0x4b] = 0;
      }
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar7 * 4);
      iVar2 = FUN_1801042d0(&DAT_18024e848 + uVar5 * 0x96);
      if (iVar2 == 0) {
        lVar8 = *(longlong *)(&DAT_18024ea30 + uVar5 * 600);
        if (lVar8 != 0) {
          FUN_18012d388(lVar8);
          FUN_1802229d8(lVar8,0xb8);
        }
        lVar4 = (&DAT_18024e840)[uVar5 * 0x4b];
        *(undefined8 *)(&DAT_18024ea30 + uVar5 * 600) = 0;
        iVar2 = 0;
        lVar8 = 0;
        do {
          if ((&DAT_18024e840)[lVar8 * 0x4b] == lVar4) {
            iVar2 = (&DAT_18024e848)[lVar8 * 0x96] + iVar2;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x20);
        if (iVar2 == 0) {
          (*(code *)puVar1)(0x180224000);
          (*extraout_x11_02)();
          (*(code *)puVar1)(0x180224000);
          (*extraout_x11_03)();
        }
        (&DAT_18024e840)[uVar5 * 0x4b] = 0;
        FUN_1802229d8((&DAT_18024ea68)[uVar5 * 0x4b]);
        (&DAT_18024ea68)[uVar5 * 0x4b] = 0;
        (&DAT_18024ea70)[uVar5 * 0x4b] = 0;
        FUN_1802229d8((&DAT_18024ea78)[uVar5 * 0x4b]);
        (&DAT_18024ea78)[uVar5 * 0x4b] = 0;
        (&DAT_18024ea80)[uVar5 * 0x4b] = 0;
        FUN_1802229d8((&DAT_18024ea88)[uVar5 * 0x4b]);
        (&DAT_18024ea88)[uVar5 * 0x4b] = 0;
        (&DAT_18024ea90)[uVar5 * 0x4b] = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x70));
  }
  iVar2 = FUN_1801042d0(&DAT_18024d938);
  if ((iVar2 == 0) && (DAT_18024d930 != 0)) {
    thunk_FUN_180223784();
    thunk_FUN_1802237ac(DAT_18024d948);
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

