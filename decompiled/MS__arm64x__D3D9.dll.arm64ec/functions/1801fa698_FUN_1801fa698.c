/*
 * FUN_1801fa698 at 1801fa698
 * undefined FUN_1801fa698(void)
 * Address ranges: 1801fa698-1801fa897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fa698(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *local_d0 [2];
  int local_b0;
  char local_ac [4];
  undefined1 auStack_a8 [136];
  
  local_b0 = 0;
  uVar2 = FUN_1801fa4b8(param_1,s_unforced_180237cd8,&DAT_180229fac,&local_b0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_1801fa4b8(param_1,&DAT_1802376d0,s_max__ux_180237e38,&local_b0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_1801fa4b8(param_1,s_max_isf_180237cd0,s_max_isf__ux_180237e28,&local_b0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_1801fa4b8(param_1,s_max_fhd_180237cf8,s_max_fhd__ux_180237e60,&local_b0);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_1801fa4b8(param_1,s_max_fhd_isf_180237ce8,s_max_fhd_isf__ux_180237e48,
                                &local_b0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_1801fa4b8(param_1,s_max_qhd_180237d10,s_max_qhd__ux_180237e88,&local_b0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_1801fa4b8(param_1,s_max_qhd_isf_180237d00,s_max_qhd_isf__ux_180237e70,
                                    &local_b0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_1801fa4b8(param_1,s_desktop_180237d18,s_desktop__ux_180237ea8,&local_b0)
                ;
                if ((uVar2 & 1) == 0) {
                  local_d0[0] = auStack_a8;
                  iVar1 = FUN_180223228(param_1,s__u_c_s_180237e98,&local_b0,local_ac,local_d0,8);
                  if (local_ac[0] != 'x' || iVar1 != 2) {
                    return 0;
                  }
                  *param_2 = -7;
                  *param_3 = local_b0;
                  if (0xfd < local_b0 - 2U) {
                    return 0;
                  }
                  goto LAB_1801fa874;
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
LAB_1801fa874:
  *param_3 = local_b0;
  return 1;
}

