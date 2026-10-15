/*
 * FUN_1400088fc at 1400088fc
 * undefined __fastcall FUN_1400088fc(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1400088fc-140008aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400088fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  LRESULT LVar3;
  HWND pHVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  BOOL bEnable;
  CHAR local_48 [32];
  
  bEnable = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29c) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40c);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar2 = FUN_14000e270(param_1,0x40c,uVar7);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb)) goto LAB_14000895e;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      iVar5 = -1;
LAB_14000895e:
      FUN_14000e4a0(param_1,0x40c,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x28a) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29d) != '\0') {
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40d);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000e270(param_1,0x40d,(ulonglong)uVar6);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xe7)) goto LAB_1400089ca;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      uVar6 = 0xffffffff;
LAB_1400089ca:
      FUN_14000e4a0(param_1,0x40d,uVar6);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
    EnableWindow(pHVar4,(uint)(iVar2 == 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29e) != '\0') {
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40e);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000e270(param_1,0x40e,(ulonglong)uVar6);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xef)) {
          FUN_14000e4a0(param_1,0x40e,uVar6);
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      FUN_140024290(local_48,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + 0xef),param_4
                   );
      FUN_14000e180(param_1,0x40e,local_48);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    if ((iVar2 != 1) && ((iVar2 != 2 || (*(int *)(*(longlong *)(param_1 + 0x78) + 0xe7) == 0)))) {
      bEnable = 0;
    }
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
    EnableWindow(pHVar4,bEnable);
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29e) = 0;
  }
  return;
}

