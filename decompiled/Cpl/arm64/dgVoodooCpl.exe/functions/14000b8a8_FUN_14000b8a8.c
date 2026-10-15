/*
 * FUN_14000b8a8 at 14000b8a8
 * undefined8 __cdecl FUN_14000b8a8(longlong param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 14000b8a8-14000b9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000b8a8(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5
             )

{
  uint uVar1;
  LRESULT LVar2;
  HWND pHVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_3 == 0x4e) && (*(int *)(param_5 + 2) == -0x227)) {
    LVar2 = SendMessageW((HWND)*param_5,0x130b,0,0);
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),(int)param_5[1]);
    plVar4 = (longlong *)GetWindowLongPtrW(pHVar3,-0x15);
    uVar7 = 0;
    if (*(uint *)((longlong)plVar4 + 0x10c) != 0) {
      uVar6 = 0;
      do {
        if ((uint)LVar2 < uVar6) break;
        uVar1 = uVar7 & 0x1f;
        uVar7 = uVar7 + 1;
        if ((1 << (ulonglong)uVar1 & *(uint *)(plVar4 + 0x21)) != 0) {
          uVar6 = uVar6 + 1;
        }
      } while (uVar7 < *(uint *)((longlong)plVar4 + 0x10c));
    }
    uVar7 = uVar7 - 1;
    if (*(uint *)(plVar4 + 0x22) != uVar7) {
      pHVar3 = (HWND)FUN_1400108c8(plVar4[(ulonglong)*(uint *)(plVar4 + 0x22) + 1]);
      ShowWindow(pHVar3,0);
      pHVar3 = (HWND)FUN_1400108c8(plVar4[(ulonglong)uVar7 + 1]);
      ShowWindow(pHVar3,1);
      *(uint *)(plVar4 + 0x22) = uVar7;
      if (*plVar4 != 0) {
        FUN_140010940(plVar4);
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

