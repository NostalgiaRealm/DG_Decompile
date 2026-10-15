/*
 * FUN_100c3bfa at 100c3bfa
 * undefined __fastcall FUN_100c3bfa(int * param_1, int * param_2, uint param_3, uint * param_4)
 * Address ranges: 100c3bfa-100c3cfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3bfa(int *param_1,int *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_110 [64];
  int *local_10;
  int *local_c;
  uint local_8;
  
  if ((int)param_3 < 0) {
    local_110[0] = *param_4;
    param_4 = param_4 + 1;
  }
  uVar5 = (uint)((int)param_3 < 0);
  uVar6 = 0xffffffff;
  puVar1 = (uint *)*param_4;
  local_c = param_2;
  while (local_10 = param_1, puVar1 != (uint *)0x0) {
    param_4 = param_4 + 1;
    local_8 = uVar5;
    if (puVar1 != (uint *)0xffffffff) {
      if (((uint)puVar1 & 0xffff0000) == 0) {
        uVar6 = (uint)puVar1 & 0xffff;
      }
      else {
        uVar2 = *puVar1;
        uVar4 = uVar5;
        if (uVar2 != 0) {
          local_110[uVar5] = uVar2;
          uVar4 = uVar5 + 1;
          if (uVar2 != 0xffffffff) {
            if (uVar6 == 0xffffffff) {
              uVar6 = (uint)(byte)puVar1[1];
            }
            local_110[uVar5 + 2] = puVar1[4];
            uVar3 = puVar1[5];
            local_110[uVar4] = uVar6;
            uVar6 = local_8;
            local_110[uVar5 + 3] = uVar3;
            local_110[uVar5 + 4] = puVar1[6];
            local_110[uVar5 + 5] = puVar1[7];
            uVar4 = uVar6 + 6;
            if ((uVar2 >> 0x1e & 1) != 0) {
              local_110[uVar4] = puVar1[8];
              local_110[uVar6 + 7] = (uint)(byte)puVar1[9];
              uVar4 = uVar6 + 8;
            }
          }
        }
        uVar6 = 0xffffffff;
        uVar5 = uVar4;
      }
    }
    param_1 = local_10;
    puVar1 = (uint *)*param_4;
  }
  local_110[uVar5] = 0;
  FUN_100c37c8(param_1,local_c,param_3,local_110);
  return;
}

