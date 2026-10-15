/*
 * FUN_1800e5d98 at 1800e5d98
 * ulonglong __fastcall FUN_1800e5d98(undefined8 param_1, undefined8 param_2, int * param_3, longlong * param_4)
 * Address ranges: 1800e5d98-1800e5e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800e5d98(undefined8 param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [32];
  int local_28;
  
  (**(code **)(*param_4 + 0x50))(param_4,local_48);
  iVar1 = local_28;
  uVar2 = FUN_1800e1ee0(local_28);
  iVar5 = (int)uVar2;
  uVar3 = FUN_1800e1f30(iVar1);
  iVar4 = param_3[3] - *param_3;
  uVar3 = uVar3 & 0xffffffff;
  uVar2 = FUN_1800e1d60(iVar1);
  iVar1 = (int)uVar2;
  if (iVar5 != 0) {
    iVar1 = iVar5;
  }
  return 0x1000000 /
         (ulonglong)
         ((int)((ulonglong)(uint)(iVar1 * iVar4) / (uVar3 & 0xffffffff)) + 0xffU & 0xffffff00);
}

