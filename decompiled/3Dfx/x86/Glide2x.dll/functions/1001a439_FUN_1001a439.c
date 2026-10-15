/*
 * FUN_1001a439 at 1001a439
 * undefined __thiscall FUN_1001a439(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1001a439-1001a992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a439(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  float afStack_c44 [450];
  undefined4 local_53c [240];
  uint local_17c [16];
  undefined4 *local_13c [16];
  uint local_fc [16];
  undefined4 *local_bc [16];
  uint local_7c;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  float *local_34;
  undefined1 local_2e;
  undefined1 local_2d;
  void *local_2c;
  int local_28;
  uint local_24;
  uint *local_20;
  undefined4 **local_1c;
  uint local_18;
  undefined4 **local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_64 = (float)*(int *)((int)this + 0x2984);
  local_60 = (float)*(int *)((int)this + 0x2988);
  local_5c = (float)*(int *)((int)this + 0x298c);
  local_58 = (float)*(int *)((int)this + 0x2990);
  local_bc[3] = param_1;
  local_bc[0] = param_1;
  local_bc[1] = param_2;
  local_bc[2] = param_3;
  local_48 = 0;
  local_44 = 0xf;
  local_38 = 0;
  do {
    if (2 < local_38) {
LAB_1001a603:
      if (local_44 == 0) {
        local_2c = this;
        if (local_48 == 0) {
          FUN_1001a993(this,param_1,param_2,param_3,1);
        }
        else {
          local_28 = 0;
          local_1c = (undefined4 **)0x0;
          local_10 = (uint *)0x0;
          local_14 = (undefined4 **)0x0;
          local_20 = (uint *)0x0;
          local_3c = 3;
          local_8 = 0;
          local_24 = 1;
          local_4c = 0;
          while ((local_4c < 4 && (local_3c != 0))) {
            if ((local_48 & local_24) != 0) {
              if (local_1c == local_bc) {
                local_1c = local_13c;
                local_14 = local_bc;
                local_10 = local_17c;
                local_20 = local_fc;
              }
              else {
                local_1c = local_bc;
                local_14 = local_13c;
                local_10 = local_fc;
                local_20 = local_17c;
              }
              local_10[local_3c] = *local_10;
              bVar4 = (*local_10 & local_24) == 0;
              if (bVar4) {
                *local_20 = *local_10;
                *local_14 = *local_1c;
              }
              local_8 = (uint)bVar4;
              for (local_c = 0; local_c < local_3c; local_c = local_c + 1) {
                if ((local_10[local_c] & local_24) == 0) {
                  if ((local_10[local_c + 1] & local_24) == 0) {
                    local_20[local_8] = local_10[local_c + 1];
                    local_14[local_8] = local_1c[local_c + 1];
                  }
                  else {
                    local_78 = FUN_1001a1fa((float *)local_1c[local_c],
                                            (float *)local_1c[local_c + 1],
                                            afStack_c44 + local_28 * 0xf,local_24,
                                            local_10[local_c + 1],&local_64);
                    local_20[local_8] = local_78;
                    local_14[local_8] = afStack_c44 + local_28 * 0xf;
                    local_28 = local_28 + 1;
                  }
                  local_8 = local_8 + 1;
                }
                else if ((local_10[local_c + 1] & local_24) == 0) {
                  local_7c = FUN_1001a1fa((float *)local_1c[local_c + 1],(float *)local_1c[local_c],
                                          afStack_c44 + local_28 * 0xf,local_24,local_10[local_c],
                                          &local_64);
                  local_20[local_8] = local_7c;
                  local_20[local_8 + 1] = local_10[local_c + 1];
                  local_14[local_8] = afStack_c44 + local_28 * 0xf;
                  local_14[local_8 + 1] = local_1c[local_c + 1];
                  local_8 = local_8 + 2;
                  local_28 = local_28 + 1;
                }
              }
              if (local_8 == 0) {
                local_3c = 0;
              }
              else {
                if (*local_14 != local_14[local_8 - 1]) {
                  local_20[local_8] = *local_20;
                  local_14[local_8] = *local_14;
                  local_8 = local_8 + 1;
                }
                local_3c = local_8 - 1;
              }
            }
            local_24 = local_24 << 1;
            local_4c = local_4c + 1;
          }
          if (3 < local_8) {
            for (local_40 = 0; local_40 < local_8 - 1; local_40 = local_40 + 1) {
              puVar2 = local_14[local_40];
              puVar3 = local_53c + local_40 * 0xf;
              for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar3 = *puVar2;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
              }
            }
            FUN_1001aa23(local_2c,local_8 - 1,local_53c,1);
          }
        }
      }
      return;
    }
    local_34 = (float *)local_bc[local_38];
    local_18 = 0;
    local_6c = *local_34;
    local_2d = ABS(local_6c) != INFINITY;
    local_50 = (uint)(byte)local_2d;
    local_68 = local_6c;
    if (!(bool)local_2d) {
LAB_1001a569:
      local_44 = 0xffffffff;
      goto LAB_1001a603;
    }
    local_74 = local_34[1];
    local_2e = ABS(local_74) != INFINITY;
    local_54 = (uint)(byte)local_2e;
    local_70 = local_74;
    if (!(bool)local_2e) goto LAB_1001a569;
    if (local_5c < *local_34) {
      local_18 = 2;
    }
    if (*local_34 < local_64) {
      local_18 = local_18 | 1;
    }
    if (local_58 < local_34[1]) {
      local_18 = local_18 | 8;
    }
    if (local_34[1] < local_60) {
      local_18 = local_18 | 4;
    }
    local_fc[local_38] = local_18;
    local_48 = local_48 | local_18;
    local_44 = local_44 & local_18;
    local_38 = local_38 + 1;
  } while( true );
}

