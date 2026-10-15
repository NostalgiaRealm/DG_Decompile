/*
 * FUN_1801e09b0 at 1801e09b0
 * undefined FUN_1801e09b0(void)
 * Address ranges: 1801e09b0-1801e0abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e09b0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *extraout_x11;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  lVar10 = *(longlong *)(param_1 + 0x170);
  uVar9 = 0;
  if (*(int *)(lVar10 + 0xe38) != 0) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0xe30) + uVar9 * 8);
      lVar8 = 0;
      if (lVar6 != 0) {
        lVar8 = lVar6 + -8;
      }
      if (lVar8 != param_1 + -8) {
        plVar2 = (longlong *)&DAT_00000178;
        if (lVar6 != 0) {
          plVar2 = (longlong *)(lVar6 + 0x170);
        }
        uVar3 = *(uint *)(*plVar2 + 0xe38);
        if (1 < uVar3) {
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = 8;
            if (lVar6 != 0) {
              lVar8 = lVar6;
            }
          }
          uVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(*plVar2 + 0xe30) + uVar7 * 8) == lVar8) {
              uVar11 = 0;
              if ((int)uVar7 != -1) goto LAB_1801e0a68;
              break;
            }
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < uVar3);
        }
        uVar11 = 1;
LAB_1801e0a68:
        (*(code *)puVar4)(0x180224000);
        uVar5 = (*extraout_x11)();
        thunk_FUN_180223d88(uVar5,0x400,0x44454745,uVar11);
      }
      uVar3 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(lVar10 + 0xe38));
  }
  return;
}

