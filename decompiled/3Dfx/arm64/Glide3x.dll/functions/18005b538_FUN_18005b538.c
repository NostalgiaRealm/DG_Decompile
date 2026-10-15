/*
 * FUN_18005b538 at 18005b538
 * undefined4 __cdecl FUN_18005b538(longlong param_1, int param_2, undefined8 param_3, int param_4)
 * Address ranges: 18005b538-18005b5c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18005b538(longlong param_1,int param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint extraout_w1;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = 2;
  if (param_4 != 1) {
    iVar4 = 3;
  }
  uVar3 = FUN_18005aa00(param_1,param_2);
  if (((int)uVar3 == -1) ||
     (*(uint *)(param_1 + (uVar3 & 0xffffffff) * 0x10 + 0x128) <= (uint)param_3)) {
    uVar2 = 0;
  }
  else {
    lVar6 = ((uVar3 & 0xffffffff) + 0x12) * 0x10;
    lVar5 = *(longlong *)(param_1 + lVar6);
    lVar1 = (param_3 & 0xffffffff) * 8;
    if ((*(int *)(lVar1 + lVar5) == 0) || (*(int *)(lVar1 + lVar5 + 4) != iVar4)) {
      FUN_18005aa38(param_1,extraout_w1,param_3,iVar4);
    }
    uVar2 = *(undefined4 *)(lVar1 + *(longlong *)(param_1 + lVar6));
  }
  return uVar2;
}

