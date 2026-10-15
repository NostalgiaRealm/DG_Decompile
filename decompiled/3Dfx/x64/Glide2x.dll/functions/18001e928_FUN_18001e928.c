/*
 * FUN_18001e928 at 18001e928
 * undefined __fastcall FUN_18001e928(longlong param_1, float * param_2, undefined4 * param_3, float * param_4)
 * Address ranges: 18001e928-18001f19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e928(longlong param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint local_d18;
  uint local_d14;
  uint local_d10;
  uint local_d0c;
  uint local_d08;
  uint *local_d00;
  float **local_cf8;
  uint local_cf0;
  uint local_cec;
  uint local_ce8;
  float **local_ce0;
  uint local_cd8;
  uint local_cd4;
  uint *local_cd0;
  uint local_cc8;
  float local_cb0;
  float local_cac;
  float local_ca8;
  float local_ca4;
  float local_ca0;
  float local_c98;
  float local_c90;
  float local_c88;
  uint local_c84;
  uint local_c80;
  ulonglong local_c78;
  ulonglong local_c70;
  float *local_c68 [16];
  uint local_be8 [16];
  uint local_ba8 [16];
  float *local_b68 [16];
  undefined4 local_ae8 [240];
  float afStack_728 [454];
  
  local_cb0 = (float)*(int *)(param_1 + 0x29a4);
  local_cac = (float)*(int *)(param_1 + 0x29a8);
  local_ca8 = (float)*(int *)(param_1 + 0x29ac);
  local_ca4 = (float)*(int *)(param_1 + 0x29b0);
  local_c68[0] = param_2;
  local_c68[1] = (float *)param_3;
  local_c68[2] = param_4;
  local_cd4 = 0;
  local_cd8 = 0xf;
  local_cf0 = 0;
  do {
    if (2 < local_cf0) {
LAB_18001ebff:
      if (local_cd8 == 0) {
        local_c68[3] = param_2;
        if (local_cd4 == 0) {
          FUN_18001f1a0(param_1,param_2,param_3,param_4,1);
        }
        else {
          local_d08 = 0;
          local_ce0 = (float **)0x0;
          local_cf8 = (float **)0x0;
          local_cec = 3;
          local_d18 = 0;
          local_d0c = 1;
          local_cc8 = 0;
          while ((local_cc8 < 4 && (local_cec != 0))) {
            if ((local_cd4 & local_d0c) != 0) {
              if (local_ce0 == local_c68) {
                local_ce0 = local_b68;
                local_cf8 = local_c68;
                local_d00 = local_ba8;
                local_cd0 = local_be8;
              }
              else {
                local_ce0 = local_c68;
                local_cf8 = local_b68;
                local_d00 = local_be8;
                local_cd0 = local_ba8;
              }
              local_d00[local_cec] = *local_d00;
              bVar4 = (*local_d00 & local_d0c) == 0;
              if (bVar4) {
                *local_cd0 = *local_d00;
                *local_cf8 = *local_ce0;
              }
              local_d18 = (uint)bVar4;
              for (local_d14 = 0; local_d14 < local_cec; local_d14 = local_d14 + 1) {
                if ((local_d00[local_d14] & local_d0c) == 0) {
                  if ((local_d00[local_d14 + 1] & local_d0c) == 0) {
                    local_cd0[local_d18] = local_d00[local_d14 + 1];
                    local_cf8[local_d18] = local_ce0[local_d14 + 1];
                  }
                  else {
                    param_4 = afStack_728 + (ulonglong)local_d08 * 0xf;
                    local_c70 = (ulonglong)local_d14;
                    local_c84 = FUN_18001e698(param_1,local_ce0[local_c70],local_ce0[local_d14 + 1],
                                              param_4,local_d0c,local_d00[local_d14 + 1],&local_cb0)
                    ;
                    local_cd0[local_d18] = local_c84;
                    local_cf8[local_d18] = afStack_728 + (ulonglong)local_d08 * 0xf;
                    local_d08 = local_d08 + 1;
                  }
                  local_d18 = local_d18 + 1;
                }
                else if ((local_d00[local_d14 + 1] & local_d0c) == 0) {
                  param_4 = afStack_728 + (ulonglong)local_d08 * 0xf;
                  local_c78 = (ulonglong)(local_d14 + 1);
                  local_c80 = FUN_18001e698(param_1,local_ce0[local_c78],local_ce0[local_d14],
                                            param_4,local_d0c,local_d00[local_d14],&local_cb0);
                  local_cd0[local_d18] = local_c80;
                  local_cd0[local_d18 + 1] = local_d00[local_d14 + 1];
                  local_cf8[local_d18] = afStack_728 + (ulonglong)local_d08 * 0xf;
                  local_cf8[local_d18 + 1] = local_ce0[local_d14 + 1];
                  local_d18 = local_d18 + 2;
                  local_d08 = local_d08 + 1;
                }
              }
              if (local_d18 == 0) {
                local_cec = 0;
              }
              else {
                if (*local_cf8 != local_cf8[local_d18 - 1]) {
                  local_cd0[local_d18] = *local_cd0;
                  local_cf8[local_d18] = *local_cf8;
                  local_d18 = local_d18 + 1;
                }
                local_cec = local_d18 - 1;
              }
            }
            local_d0c = local_d0c << 1;
            local_cc8 = local_cc8 + 1;
          }
          if (3 < local_d18) {
            for (local_ce8 = 0; local_ce8 < local_d18 - 1; local_ce8 = local_ce8 + 1) {
              pfVar2 = local_cf8[local_ce8];
              puVar3 = local_ae8 + (ulonglong)local_ce8 * 0xf;
              for (lVar1 = 0x3c; lVar1 != 0; lVar1 = lVar1 + -1) {
                *(undefined1 *)puVar3 = *(undefined1 *)pfVar2;
                pfVar2 = (float *)((longlong)pfVar2 + 1);
                puVar3 = (undefined4 *)((longlong)puVar3 + 1);
              }
            }
            FUN_18001f268(param_1,local_d18 - 1,local_ae8,
                          CONCAT71((int7)((ulonglong)param_4 >> 8),1));
          }
        }
      }
      return;
    }
    pfVar2 = local_c68[local_cf0];
    local_d10 = 0;
    local_ca0 = *pfVar2;
    local_c98 = local_ca0;
    if ((ABS(local_ca0) == INFINITY) ||
       (local_c90 = pfVar2[1], local_c88 = local_c90, ABS(local_c90) == INFINITY)) {
      local_cd8 = 0xffffffff;
      goto LAB_18001ebff;
    }
    if (local_ca8 < *pfVar2) {
      local_d10 = 2;
    }
    if (*pfVar2 <= local_cb0 && local_cb0 != *pfVar2) {
      local_d10 = local_d10 | 1;
    }
    if (local_ca4 < pfVar2[1]) {
      local_d10 = local_d10 | 8;
    }
    if (pfVar2[1] <= local_cac && local_cac != pfVar2[1]) {
      local_d10 = local_d10 | 4;
    }
    local_be8[local_cf0] = local_d10;
    local_cd4 = local_cd4 | local_d10;
    local_cd8 = local_cd8 & local_d10;
    local_cf0 = local_cf0 + 1;
  } while( true );
}

