/*
 * FUN_1800d9068 at 1800d9068
 * undefined FUN_1800d9068(void)
 * Address ranges: 1800d9068-1800d9253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800d9068(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int local_b0;
  char local_ac [4];
  undefined1 auStack_a8 [136];
  
  local_b0 = 0;
  uVar2 = FUN_1800d8ee8(param_1,s_unforced_18023aee8,&DAT_18023383c,&local_b0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_1800d8ee8(param_1,&DAT_18023a8e0,s_max__ux_18023b010,&local_b0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_1800d8ee8(param_1,s_max_isf_18023aee0,s_max_isf__ux_18023b048,&local_b0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_1800d8ee8(param_1,s_max_fhd_18023af08,s_max_fhd__ux_18023b038,&local_b0);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_1800d8ee8(param_1,s_max_fhd_isf_18023aef8,s_max_fhd_isf__ux_18023b068,
                                &local_b0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_1800d8ee8(param_1,s_max_qhd_18023af20,s_max_qhd__ux_18023b058,&local_b0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_1800d8ee8(param_1,s_max_qhd_isf_18023af10,s_max_qhd_isf__ux_18023b090,
                                    &local_b0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_1800d8ee8(param_1,s_desktop_18023af28,s_desktop__ux_18023b080,&local_b0)
                ;
                if ((uVar2 & 1) == 0) {
                  iVar1 = FUN_180103688(param_1,s__u_c_s_18023b0b0,&local_b0,local_ac,auStack_a8);
                  if (local_ac[0] != 'x' || iVar1 != 2) {
                    return 0;
                  }
                  *param_2 = -7;
                  *param_3 = local_b0;
                  if (0xfd < local_b0 - 2U) {
                    return 0;
                  }
                  goto LAB_1800d9234;
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
LAB_1800d9234:
  *param_3 = local_b0;
  return 1;
}

