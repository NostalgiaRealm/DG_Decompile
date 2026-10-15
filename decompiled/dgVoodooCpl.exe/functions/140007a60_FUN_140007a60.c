/*
 * FUN_140007a60 at 140007a60
 * undefined8 __fastcall FUN_140007a60(longlong param_1, int param_2)
 * Address ranges: 140007a60-140007b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140007a60(longlong param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CHAR local_88 [128];
  
  if (param_2 == 0x3f3) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f3);
    uVar3 = 0;
    LVar2 = SendMessageW(pHVar1,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0xc) = (int)LVar2;
    FUN_140024290(local_88,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xc),uVar3);
    iVar4 = 0x3ff;
  }
  else {
    if (param_2 == 0x3f4) {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f4);
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = 0x400;
      LVar2 = SendMessageW(pHVar1,0x400,0,0);
      *(int *)(*(longlong *)(param_1 + 8) + 0x10) = (int)LVar2;
      FUN_140007c14(param_1 + -0x80,uVar3,uVar5,uVar6);
      goto LAB_140007b57;
    }
    if (param_2 != 0x3f5) goto LAB_140007b57;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f5);
    uVar3 = 0;
    LVar2 = SendMessageW(pHVar1,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0x14) = (int)LVar2;
    FUN_140024290(local_88,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x14),uVar3);
    iVar4 = 0x405;
  }
  FUN_14000e180(param_1 + -0x80,iVar4,local_88);
LAB_140007b57:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

