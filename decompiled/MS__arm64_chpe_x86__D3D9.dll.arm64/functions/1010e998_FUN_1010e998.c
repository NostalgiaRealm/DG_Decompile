/*
 * FUN_1010e998 at 1010e998
 * undefined FUN_1010e998(void)
 * Address ranges: 1010e998-1010eaff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1010e998(undefined8 param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,int param_8,uint param_9)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  (*(code *)PTR_FUN_1016c26c)(param_2,0,0,param_8,param_9);
  switch(param_3) {
  default:
    goto switchD_1010ea08_caseD_0;
  case 1:
  case 4:
    iVar4 = (int)(param_8 - param_4) / 2;
    *param_2 = iVar4;
    param_2[2] = iVar4 + param_4;
    iVar4 = (int)(param_9 - param_5) / 2;
    param_2[1] = iVar4;
    iVar4 = iVar4 + param_5;
    goto LAB_1010ead8;
  case 2:
  case 3:
  case 8:
    goto switchD_1010ea08_caseD_2;
  case 5:
  case 6:
  case 7:
    if (param_6 == 0) {
                    /* WARNING: Does not return */
      uVar3 = SoftwareBreakpoint(0xf004,0x1010ea14);
      (*(code *)uVar3)();
    }
    uVar2 = 0;
    if (param_6 != 0) {
      uVar2 = param_4 / param_6;
    }
    if (uVar2 < 0x501) {
      if (param_7 == 0) {
                    /* WARNING: Does not return */
        uVar3 = SoftwareBreakpoint(0xf004,0x1010ea28);
        (*(code *)uVar3)();
      }
      uVar2 = 0;
      if (param_7 != 0) {
        uVar2 = param_5 / param_7;
      }
      if (uVar2 < 0x401) {
        param_4 = (param_5 << 2) / 3;
      }
    }
switchD_1010ea08_caseD_2:
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      uVar3 = SoftwareBreakpoint(0xf004,0x1010ea50);
      (*(code *)uVar3)();
    }
    uVar2 = 0;
    if (param_4 != 0) {
      uVar2 = (param_5 * param_8) / param_4;
    }
    if (param_9 < uVar2) {
      if (param_5 == 0) {
                    /* WARNING: Does not return */
        uVar3 = SoftwareBreakpoint(0xf004,0x1010ea84);
        (*(code *)uVar3)();
      }
      uVar2 = 0;
      if (param_5 != 0) {
        uVar2 = (param_4 * param_9) / param_5;
      }
      iVar4 = (int)(param_8 - uVar2) / 2;
      *param_2 = iVar4;
      iVar4 = iVar4 + uVar2;
      piVar1 = param_2 + 2;
    }
    else {
      iVar4 = (int)(param_9 - uVar2) / 2;
      param_2[1] = iVar4;
      iVar4 = iVar4 + uVar2;
LAB_1010ead8:
      piVar1 = param_2 + 3;
    }
    *piVar1 = iVar4;
switchD_1010ea08_caseD_0:
    return param_2;
  }
}

