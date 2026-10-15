/*
 * FUN_1800aa578 at 1800aa578
 * undefined FUN_1800aa578(void)
 * Address ranges: 1800aa578-1800aa687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa578(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = *(int *)(&DAT_18022e450 + (longlong)param_3 * 4);
  if (iVar3 == -1) {
    return;
  }
  if (0xff < (uint)param_2) {
    plVar5 = *(longlong **)(param_1 + 0x28);
    param_2 = (ulonglong)((uint)param_2 - 0x100);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x1a0);
    goto LAB_1800aa680;
  }
  if ((iVar3 == 5) || (iVar3 == 6)) {
    if (((uint)param_4 != 1) || (*(char *)(*(longlong *)(param_1 + 0x18) + 0x887) == '\0')) {
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
      if ((uVar6 - 0x200 & 0xfffffdff) == 0) {
LAB_1800aa608:
        param_4 = 2;
      }
      else if ((uVar6 - 0x300 & 0xfffffdff) != 0) {
        if (uVar6 == 0x100) goto LAB_1800aa61c;
        bVar4 = 0x10 < (uVar6 & 0xff) || uVar6 == 0;
        uVar6 = 3;
        goto LAB_1800aa5cc;
      }
    }
  }
  else if (iVar3 == 7) {
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x87c) == 1) {
      param_4 = 0;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x878);
      if ((iVar2 - 0x100U & 0xfffffbff) == 0) {
LAB_1800aa61c:
        param_4 = 1;
      }
      else if ((iVar2 - 0x300U & 0xfffffeff) == 0) goto LAB_1800aa608;
    }
  }
  else if (iVar3 == 10) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
    uVar6 = uVar1 & 0xff;
    if (uVar6 < 0x11) {
      bVar4 = uVar1 == 0;
LAB_1800aa5cc:
      if (bVar4) {
        uVar6 = (uint)param_4;
      }
      param_4 = (ulonglong)uVar6;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0xa0);
LAB_1800aa680:
                    /* WARNING: Could not recover jumptable at 0x0001800aa680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar5,param_2,iVar3,param_4);
  return;
}

