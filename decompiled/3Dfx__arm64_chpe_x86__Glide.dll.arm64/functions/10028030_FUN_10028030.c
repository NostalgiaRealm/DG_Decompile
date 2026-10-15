/*
 * FUN_10028030 at 10028030
 * undefined FUN_10028030(void)
 * Address ranges: 10028030-10028a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  uint local_c90;
  uint local_c8c;
  uint *local_c88;
  int *local_c84;
  uint local_c80;
  int *local_c7c;
  uint *local_c78;
  uint local_c74;
  int local_c70;
  uint local_c60;
  uint local_c5c;
  uint local_c58;
  uint local_c54;
  uint local_c50;
  uint local_c4c;
  float local_c30;
  float local_c2c;
  float local_c28;
  float local_c24;
  float local_c20;
  float local_c1c;
  float local_c18;
  float local_c14;
  uint local_c10;
  uint local_c0c;
  int aiStack_c08 [16];
  uint auStack_bc8 [16];
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined4 uStack_b50;
  int aiStack_b48 [16];
  uint auStack_b08 [16];
  undefined8 auStack_ac8 [7];
  undefined4 auStack_a90 [226];
  undefined1 auStack_708 [1800];
  
  local_c30 = (float)*(int *)(param_1 + 0x2984);
  local_c2c = (float)*(int *)(param_1 + 0x2988);
  local_c28 = (float)*(int *)(param_1 + 0x298c);
  local_c24 = (float)*(int *)(param_1 + 0x2990);
  aiStack_c08[0] = param_2;
  aiStack_c08[1] = param_3;
  aiStack_c08[2] = param_4;
  local_c50 = 0;
  local_c54 = 0xf;
  local_c60 = 0;
  do {
    if (2 < local_c60) {
LAB_10028330:
      if (local_c54 == 0) {
        aiStack_c08[3] = param_2;
        if (local_c50 == 0) {
          FUN_10028a40(param_1,param_2,param_3,param_4,1);
        }
        else {
          local_c70 = 0;
          local_c7c = (int *)0x0;
          local_c84 = (int *)0x0;
          local_c5c = 3;
          local_c90 = 0;
          local_c74 = 1;
          local_c4c = 0;
          while ((local_c4c < 4 && (local_c5c != 0))) {
            if ((local_c50 & local_c74) != 0) {
              if (local_c7c == aiStack_c08) {
                local_c7c = aiStack_b48;
                local_c84 = aiStack_c08;
                local_c88 = auStack_b08;
                local_c78 = auStack_bc8;
              }
              else {
                local_c7c = aiStack_c08;
                local_c84 = aiStack_b48;
                local_c88 = auStack_bc8;
                local_c78 = auStack_b08;
              }
              local_c88[local_c5c] = *local_c88;
              bVar4 = (*local_c88 & local_c74) == 0;
              if (bVar4) {
                *local_c78 = *local_c88;
                *local_c84 = *local_c7c;
              }
              local_c90 = (uint)bVar4;
              for (local_c8c = 0; local_c8c < local_c5c; local_c8c = local_c8c + 1) {
                if ((local_c88[local_c8c] & local_c74) == 0) {
                  if ((local_c88[local_c8c + 1] & local_c74) == 0) {
                    local_c78[local_c90] = local_c88[local_c8c + 1];
                    local_c84[local_c90] = local_c7c[local_c8c + 1];
                  }
                  else {
                    local_c10 = FUN_10027d30(param_1,local_c7c[local_c8c],local_c7c[local_c8c + 1],
                                             auStack_708 + local_c70 * 0x3c,local_c74,
                                             local_c88[local_c8c + 1],&local_c30);
                    local_c78[local_c90] = local_c10;
                    local_c84[local_c90] = (int)(auStack_708 + local_c70 * 0x3c);
                    local_c70 = local_c70 + 1;
                  }
                  local_c90 = local_c90 + 1;
                }
                else if ((local_c88[local_c8c + 1] & local_c74) == 0) {
                  local_c0c = FUN_10027d30(param_1,local_c7c[local_c8c + 1],local_c7c[local_c8c],
                                           auStack_708 + local_c70 * 0x3c,local_c74,
                                           local_c88[local_c8c],&local_c30);
                  local_c78[local_c90] = local_c0c;
                  local_c78[local_c90 + 1] = local_c88[local_c8c + 1];
                  local_c84[local_c90] = (int)(auStack_708 + local_c70 * 0x3c);
                  local_c84[local_c90 + 1] = local_c7c[local_c8c + 1];
                  local_c90 = local_c90 + 2;
                  local_c70 = local_c70 + 1;
                }
              }
              if (local_c90 == 0) {
                local_c5c = 0;
              }
              else {
                if (*local_c84 != local_c84[local_c90 - 1]) {
                  local_c78[local_c90] = *local_c78;
                  local_c84[local_c90] = *local_c84;
                  local_c90 = local_c90 + 1;
                }
                local_c5c = local_c90 - 1;
              }
            }
            local_c74 = local_c74 << 1;
            local_c4c = local_c4c + 1;
          }
          if (3 < local_c90) {
            for (local_c58 = 0; local_c58 < local_c90 - 1; local_c58 = local_c58 + 1) {
              puVar2 = (undefined8 *)local_c84[local_c58];
              uStack_b80 = puVar2[1];
              uStack_b88 = *puVar2;
              uStack_b70 = puVar2[3];
              uStack_b78 = puVar2[2];
              uStack_b60 = puVar2[5];
              uStack_b68 = puVar2[4];
              uStack_b58 = puVar2[6];
              uStack_b50 = *(undefined4 *)(puVar2 + 7);
              iVar3 = local_c58 * 0x3c;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 8) = uStack_b80;
              *(undefined8 *)((int)auStack_ac8 + iVar3) = uStack_b88;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 0x18) = uStack_b70;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 0x10) = uStack_b78;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 0x28) = uStack_b60;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 0x20) = uStack_b68;
              *(undefined8 *)((int)auStack_ac8 + iVar3 + 0x30) = uStack_b58;
              auStack_a90[local_c58 * 0xf] = uStack_b50;
            }
            FUN_10028b40(param_1,local_c90 - 1,auStack_ac8,1);
          }
        }
      }
      return;
    }
    pfVar1 = (float *)aiStack_c08[local_c60];
    local_c80 = 0;
    local_c20 = *pfVar1;
    local_c1c = local_c20;
    if ((ABS(local_c20) == INFINITY) ||
       (local_c18 = pfVar1[1], local_c14 = local_c18, ABS(local_c18) == INFINITY)) {
      local_c54 = 0xffffffff;
      goto LAB_10028330;
    }
    if (local_c28 < *pfVar1) {
      local_c80 = 2;
    }
    if (*pfVar1 < local_c30) {
      local_c80 = local_c80 | 1;
    }
    if (local_c24 < pfVar1[1]) {
      local_c80 = local_c80 | 8;
    }
    if (pfVar1[1] < local_c2c) {
      local_c80 = local_c80 | 4;
    }
    auStack_bc8[local_c60] = local_c80;
    local_c50 = local_c50 | local_c80;
    local_c54 = local_c54 & local_c80;
    local_c60 = local_c60 + 1;
  } while( true );
}

