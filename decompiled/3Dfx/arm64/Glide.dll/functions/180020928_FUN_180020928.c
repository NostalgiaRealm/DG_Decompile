/*
 * FUN_180020928 at 180020928
 * undefined __cdecl FUN_180020928(longlong param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 180020928-18002138b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020928(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  float *pfVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint local_d40;
  uint local_d3c;
  uint local_d38;
  uint local_d34;
  uint local_d30;
  uint *local_d28;
  undefined4 **local_d20;
  uint local_d18;
  uint local_d14;
  uint local_d10;
  undefined4 **local_d08;
  uint local_d00;
  uint local_cfc;
  uint *local_cf8;
  uint local_ce8;
  float local_cd0;
  float local_ccc;
  float local_cc8;
  float local_cc4;
  float local_cc0;
  float local_cbc;
  float local_cb8;
  uint local_cb4;
  uint local_cb0;
  undefined4 *local_ca8;
  float local_ca0;
  undefined4 *local_c98;
  undefined4 *local_c90;
  undefined4 *local_c88 [16];
  uint local_c08 [16];
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined4 local_b90;
  uint local_b88 [16];
  undefined4 *local_b48 [16];
  undefined8 auStack_ac8 [7];
  undefined4 auStack_a90 [226];
  float afStack_708 [450];
  
  local_cd0 = (float)*(int *)(param_1 + 0x29a4);
  local_ccc = (float)*(int *)(param_1 + 0x29a8);
  local_cc8 = (float)*(int *)(param_1 + 0x29ac);
  local_cc4 = (float)*(int *)(param_1 + 0x29b0);
  local_c88[0] = param_2;
  local_c88[1] = param_3;
  local_c88[2] = param_4;
  local_cfc = 0;
  local_d00 = 0xf;
  local_d18 = 0;
  do {
    if (2 < local_d18) {
LAB_180020c20:
      if (local_d00 == 0) {
        local_ca8 = param_2;
        local_c98 = param_3;
        local_c90 = param_4;
        local_c88[3] = param_2;
        if (local_cfc == 0) {
          FUN_180021390(param_1,param_2,param_3,param_4,1);
        }
        else {
          local_d30 = 0;
          local_d08 = (undefined4 **)0x0;
          local_d20 = (undefined4 **)0x0;
          local_d14 = 3;
          local_d40 = 0;
          local_d34 = 1;
          local_ce8 = 0;
          while ((local_ce8 < 4 && (local_d14 != 0))) {
            if ((local_cfc & local_d34) != 0) {
              if (local_d08 == local_c88) {
                local_d08 = local_b48;
                local_d20 = local_c88;
                local_d28 = local_b88;
                local_cf8 = local_c08;
              }
              else {
                local_d08 = local_c88;
                local_d20 = local_b48;
                local_d28 = local_c08;
                local_cf8 = local_b88;
              }
              local_d28[local_d14] = *local_d28;
              bVar1 = (*local_d28 & local_d34) == 0;
              if (bVar1) {
                *local_cf8 = *local_d28;
                *local_d20 = *local_d08;
              }
              local_d40 = (uint)bVar1;
              for (local_d3c = 0; local_d3c < local_d14; local_d3c = local_d3c + 1) {
                if ((local_d28[local_d3c] & local_d34) == 0) {
                  if ((local_d28[local_d3c + 1] & local_d34) == 0) {
                    local_cf8[local_d40] = local_d28[local_d3c + 1];
                    local_d20[local_d40] = local_d08[local_d3c + 1];
                  }
                  else {
                    local_cb4 = FUN_1800206f0(param_1,(float *)local_d08[local_d3c],
                                              (float *)local_d08[local_d3c + 1],
                                              afStack_708 + (ulonglong)local_d30 * 0xf,local_d34,
                                              local_d28[local_d3c + 1],&local_cd0);
                    local_cf8[local_d40] = local_cb4;
                    local_d20[local_d40] = afStack_708 + (ulonglong)local_d30 * 0xf;
                    local_d30 = local_d30 + 1;
                  }
                  local_d40 = local_d40 + 1;
                }
                else if ((local_d28[local_d3c + 1] & local_d34) == 0) {
                  local_cb0 = FUN_1800206f0(param_1,(float *)local_d08[local_d3c + 1],
                                            (float *)local_d08[local_d3c],
                                            afStack_708 + (ulonglong)local_d30 * 0xf,local_d34,
                                            local_d28[local_d3c],&local_cd0);
                  local_cf8[local_d40] = local_cb0;
                  local_cf8[local_d40 + 1] = local_d28[local_d3c + 1];
                  local_d20[local_d40] = afStack_708 + (ulonglong)local_d30 * 0xf;
                  local_d20[local_d40 + 1] = local_d08[local_d3c + 1];
                  local_d40 = local_d40 + 2;
                  local_d30 = local_d30 + 1;
                }
              }
              if (local_d40 == 0) {
                local_d14 = 0;
              }
              else {
                if (*local_d20 != local_d20[local_d40 - 1]) {
                  local_cf8[local_d40] = *local_cf8;
                  local_d20[local_d40] = *local_d20;
                  local_d40 = local_d40 + 1;
                }
                local_d14 = local_d40 - 1;
              }
            }
            local_d34 = local_d34 << 1;
            local_ce8 = local_ce8 + 1;
          }
          if (3 < local_d40) {
            for (local_d10 = 0; local_d10 < local_d40 - 1; local_d10 = local_d10 + 1) {
              puVar3 = (undefined8 *)local_d20[local_d10];
              uStack_bc0 = puVar3[1];
              local_bc8 = *puVar3;
              uStack_bb0 = puVar3[3];
              uStack_bb8 = puVar3[2];
              uStack_ba0 = puVar3[5];
              local_ba8 = puVar3[4];
              local_b98 = puVar3[6];
              local_b90 = *(undefined4 *)(puVar3 + 7);
              lVar4 = (ulonglong)local_d10 * 0x3c;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 8) = uStack_bc0;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4) = local_bc8;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 0x18) = uStack_bb0;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 0x10) = uStack_bb8;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 0x28) = uStack_ba0;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 0x20) = local_ba8;
              *(undefined8 *)((longlong)auStack_ac8 + lVar4 + 0x30) = local_b98;
              auStack_a90[(ulonglong)local_d10 * 0xf] = local_b90;
            }
            FUN_180021460(param_1,local_d40 - 1,(undefined4 *)auStack_ac8,1);
          }
        }
      }
      return;
    }
    pfVar2 = (float *)local_c88[local_d18];
    local_d38 = 0;
    local_cc0 = *pfVar2;
    local_ca0 = local_cc0;
    if ((ABS(local_cc0) == INFINITY) ||
       (local_cbc = pfVar2[1], local_cb8 = local_cbc, ABS(local_cbc) == INFINITY)) {
      local_d00 = 0xffffffff;
      goto LAB_180020c20;
    }
    if (local_cc8 < *pfVar2) {
      local_d38 = 2;
    }
    if (*pfVar2 < local_cd0) {
      local_d38 = local_d38 | 1;
    }
    if (local_cc4 < pfVar2[1]) {
      local_d38 = local_d38 | 8;
    }
    if (pfVar2[1] < local_ccc) {
      local_d38 = local_d38 | 4;
    }
    local_c08[local_d18] = local_d38;
    local_cfc = local_cfc | local_d38;
    local_d00 = local_d00 & local_d38;
    local_d18 = local_d18 + 1;
  } while( true );
}

