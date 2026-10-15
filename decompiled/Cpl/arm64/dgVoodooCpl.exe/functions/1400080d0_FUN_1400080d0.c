/*
 * FUN_1400080d0 at 1400080d0
 * undefined __cdecl FUN_1400080d0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1400080d0-1400082ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400080d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  LRESULT LVar3;
  HWND pHVar4;
  BOOL bEnable;
  uint uVar5;
  int iVar6;
  CHAR aCStack_40 [32];
  ulonglong uVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29c) != '\0') {
    uVar7 = 0;
    uVar5 = 0;
    LVar3 = FUN_14000fd38(param_1,0x40c);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000fd78(param_1,0x40c,uVar7);
        iVar6 = (int)uVar7;
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb)) goto LAB_14000813c;
        uVar5 = iVar6 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < uVar1);
    }
    if (uVar5 == uVar1) {
      iVar6 = -1;
LAB_14000813c:
      FUN_14000fff0(param_1,0x40c,iVar6);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x28a) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29d) != '\0') {
    uVar7 = 0;
    uVar5 = 0;
    LVar3 = FUN_14000fd38(param_1,0x40d);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000fd78(param_1,0x40d,uVar7);
        iVar6 = (int)uVar7;
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xe7)) goto LAB_1400081ac;
        uVar5 = iVar6 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < uVar1);
    }
    if (uVar5 == uVar1) {
      iVar6 = -1;
LAB_1400081ac:
      FUN_14000fff0(param_1,0x40d,iVar6);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
    EnableWindow(pHVar4,SUB14(iVar2 == 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29e) != '\0') {
    uVar7 = 0;
    uVar5 = 0;
    LVar3 = FUN_14000fd38(param_1,0x40e);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000fd78(param_1,0x40e,uVar7);
        uVar5 = (uint)uVar7;
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xef)) {
          FUN_14000fff0(param_1,0x40e,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < uVar1);
    }
    if (uVar5 == uVar1) {
      FUN_140024880(aCStack_40,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + 0xef),
                    param_4,param_5,param_6,param_7,param_8);
      FUN_14000fc58(param_1,0x40e,aCStack_40);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    if ((iVar2 == 1) || ((iVar2 == 2 && (*(int *)(*(longlong *)(param_1 + 0x78) + 0xe7) != 0)))) {
      bEnable = 1;
    }
    else {
      bEnable = 0;
    }
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
    EnableWindow(pHVar4,bEnable);
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29e) = 0;
  }
  return;
}

