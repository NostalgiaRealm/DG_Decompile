/*
 * FUN_1800c5560 at 1800c5560
 * undefined FUN_1800c5560(void)
 * Address ranges: 1800c5560-1800c5667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c5560(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x170);
  uVar8 = 0;
  if (*(int *)(lVar9 + 0xe38) != 0) {
    do {
      plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0xe30) + uVar8 * 8);
      plVar7 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        plVar7 = plVar5 + -1;
      }
      if (plVar7 != (longlong *)(param_1 + -8)) {
        plVar2 = (longlong *)&DAT_00000178;
        if (plVar5 != (longlong *)0x0) {
          plVar2 = plVar5 + 0x2e;
        }
        uVar3 = *(uint *)(*plVar2 + 0xe38);
        if (1 < uVar3) {
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)&DAT_00000008;
            if (plVar5 != (longlong *)0x0) {
              plVar7 = plVar5;
            }
          }
          uVar6 = 0;
          do {
            if (*(longlong **)(*(longlong *)(*plVar2 + 0xe30) + uVar6 * 8) == plVar7) {
              uVar10 = 0;
              if ((int)uVar6 != -1) goto LAB_1800c5618;
              break;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < uVar3);
        }
        uVar10 = 1;
LAB_1800c5618:
        plVar7 = (longlong *)&DAT_00000008;
        if (plVar5 != (longlong *)0x0) {
          plVar7 = plVar5;
        }
        uVar4 = (**(code **)(*plVar7 + 0x28))();
        (*__imp_USER32_dll_PostMessageW)(uVar4,0x400,0x44454745,uVar10);
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(lVar9 + 0xe38));
  }
  return;
}

