/*
 * FUN_140007178 at 140007178
 * undefined8 __cdecl FUN_140007178(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140007178-1400072ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140007178(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  LPCSTR pCVar5;
  undefined8 uVar6;
  CHAR aCStack_90 [128];
  
  if (param_2 == 0x3f3) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f3);
    uVar6 = 0;
    LVar3 = SendMessageW(pHVar2,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0xc) = (int)LVar3;
    FUN_140024880(aCStack_90,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xc),uVar6,
                  param_5,param_6,param_7,param_8);
    iVar4 = 0x3ff;
  }
  else if (param_2 == 0x3f4) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f4);
    uVar6 = 0;
    LVar3 = SendMessageW(pHVar2,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0x10) = (int)LVar3;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x10);
    if (uVar1 == 0) {
      pCVar5 = "B&&W";
LAB_140007264:
      FUN_140024880(aCStack_90,pCVar5,(ulonglong)uVar1,uVar6,param_5,param_6,param_7,param_8);
    }
    else {
      if (uVar1 == 100) {
        pCVar5 = "Norm";
        goto LAB_140007264;
      }
      if (uVar1 == 400) {
        pCVar5 = "Full";
        goto LAB_140007264;
      }
      FUN_140024880(aCStack_90,"%d%%",(ulonglong)uVar1,uVar6,param_5,param_6,param_7,param_8);
    }
    iVar4 = 0x400;
  }
  else {
    if (param_2 != 0x3f5) goto LAB_1400072dc;
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f5);
    uVar6 = 0;
    LVar3 = SendMessageW(pHVar2,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0x14) = (int)LVar3;
    FUN_140024880(aCStack_90,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x14),uVar6,
                  param_5,param_6,param_7,param_8);
    iVar4 = 0x405;
  }
  FUN_14000fc58(param_1 + -0x80,iVar4,aCStack_90);
LAB_1400072dc:
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}

