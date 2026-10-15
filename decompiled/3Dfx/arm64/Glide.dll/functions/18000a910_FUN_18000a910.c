/*
 * FUN_18000a910 at 18000a910
 * undefined8 __cdecl FUN_18000a910(byte * param_1, int * param_2, int * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 18000a910-18000aafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000a910(byte *param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulonglong uVar2;
  int local_b0;
  char local_ac [4];
  undefined1 auStack_a8 [136];
  
  local_b0 = 0;
  uVar2 = FUN_18000a790(param_1,(byte *)"unforced",&DAT_1800625a5,&local_b0,param_5,param_6,param_7,
                        param_8);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_18000a790(param_1,&DAT_180063b5c,(byte *)" max_%ux ",&local_b0,param_5,param_6,
                          param_7,param_8);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_18000a790(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ",&local_b0,param_5,
                            param_6,param_7,param_8);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_18000a790(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ",&local_b0,param_5,
                              param_6,param_7,param_8);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_18000a790(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ",&local_b0,
                                param_5,param_6,param_7,param_8);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_18000a790(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ",&local_b0,
                                  param_5,param_6,param_7,param_8);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_18000a790(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ",
                                    &local_b0,param_5,param_6,param_7,param_8);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_18000a790(param_1,(byte *)"desktop",(byte *)" desktop_%ux ",&local_b0,
                                      param_5,param_6,param_7,param_8);
                if ((uVar2 & 1) == 0) {
                  iVar1 = FUN_1800611e0(param_1,(byte *)" %u%c%s ",&local_b0,local_ac,auStack_a8,
                                        param_6,param_7,param_8);
                  if (local_ac[0] != 'x' || iVar1 != 2) {
                    return 0;
                  }
                  *param_2 = -7;
                  *param_3 = local_b0;
                  if (0xfd < local_b0 - 2U) {
                    return 0;
                  }
                  goto LAB_18000aadc;
                }
                iVar1 = -8;
              }
              else {
                iVar1 = -6;
              }
            }
            else {
              iVar1 = -5;
            }
          }
          else {
            iVar1 = -4;
          }
        }
        else {
          iVar1 = -3;
        }
      }
      else {
        iVar1 = -2;
      }
    }
    else {
      iVar1 = -1;
    }
    *param_3 = iVar1;
    *param_2 = iVar1;
  }
  else {
    *param_3 = 0;
    *param_2 = 0;
  }
  if (0xfd < local_b0 - 2U) {
    return 1;
  }
LAB_18000aadc:
  *param_3 = local_b0;
  return 1;
}

