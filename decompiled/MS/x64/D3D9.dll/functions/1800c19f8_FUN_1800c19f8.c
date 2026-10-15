/*
 * FUN_1800c19f8 at 1800c19f8
 * undefined __fastcall FUN_1800c19f8(longlong param_1)
 * Address ranges: 1800c19f8-1800c1ad5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c19f8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  HWND hWnd;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  LPARAM lParam;
  ulonglong uVar7;
  longlong *plVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  uVar6 = 0;
  if (*(int *)(lVar1 + 0xe38) != 0) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xe30) + uVar6 * 8);
      uVar7 = -(ulonglong)(plVar4 != (longlong *)0x0) & (ulonglong)(plVar4 + -1);
      if (uVar7 != param_1 - 8U) {
        plVar2 = plVar4 + 0x2e;
        if (plVar4 == (longlong *)0x0) {
          plVar2 = (longlong *)&DAT_00000178;
        }
        uVar5 = *(uint *)(*plVar2 + 0xe38);
        if (1 < uVar5) {
          plVar8 = (longlong *)0x0;
          if ((uVar7 != 0) && (plVar8 = plVar4, plVar4 == (longlong *)0x0)) {
            plVar8 = (longlong *)&DAT_00000008;
          }
          uVar7 = 0;
          do {
            if (*(longlong **)(*(longlong *)(*plVar2 + 0xe30) + uVar7 * 8) == plVar8) {
              if ((int)uVar7 != -1) {
                lParam = 0;
                goto LAB_1800c1a8d;
              }
              break;
            }
            uVar3 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar3;
          } while (uVar3 < uVar5);
        }
        lParam = 1;
LAB_1800c1a8d:
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)&DAT_00000008;
        }
        hWnd = (HWND)(**(code **)(*plVar4 + 0x28))(plVar4);
        PostMessageW(hWnd,0x400,0x44454745,lParam);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar1 + 0xe38));
  }
  return;
}

