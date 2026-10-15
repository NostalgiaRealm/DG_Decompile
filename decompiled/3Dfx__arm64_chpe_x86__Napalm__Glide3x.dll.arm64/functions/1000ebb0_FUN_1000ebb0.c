/*
 * FUN_1000ebb0 at 1000ebb0
 * undefined FUN_1000ebb0(void)
 * Address ranges: 1000ebb0-1000ec3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ebb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int extraout_w14;
  int extraout_w14_00;
  int iVar4;
  int *extraout_w15;
  int *extraout_w15_00;
  int *piVar5;
  
  uVar3 = (ulonglong)param_5;
  uVar1 = FUN_1000e970(param_2,*(int *)(param_1 + 0x1b0) + 0x35d0,param_3,param_4);
  if ((uVar3 & 1) != 0) {
    if (param_3 == 5) {
      uVar1 = FUN_1000e970(uVar1,*extraout_w15 + extraout_w14,3,0,0);
      uVar2 = 4;
      iVar4 = extraout_w14_00;
      piVar5 = extraout_w15_00;
    }
    else {
      if (1 < param_3 - 3U) {
        return;
      }
      uVar2 = 5;
      iVar4 = extraout_w14;
      piVar5 = extraout_w15;
    }
    FUN_1000e970(uVar1,*piVar5 + iVar4,uVar2,0,0);
  }
  return;
}

