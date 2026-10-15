/*
 * FUN_10122ab8 at 10122ab8
 * undefined FUN_10122ab8(void)
 * Address ranges: 10122ab8-10122c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10122ab8(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_100 [64];
  
  if (param_3 < 0) {
    local_100[0] = *param_4;
    param_4 = param_4 + 1;
  }
  uVar3 = (uint)(param_3 < 0);
  uVar5 = 0xffffffff;
  puVar1 = (uint *)*param_4;
  while (puVar1 != (uint *)0x0) {
    if (puVar1 != (uint *)0xffffffff) {
      if (((uint)puVar1 & 0xffff0000) == 0) {
        uVar5 = (uint)puVar1 & 0xffff;
      }
      else {
        uVar2 = *puVar1;
        uVar4 = uVar3;
        if (uVar2 != 0) {
          uVar4 = uVar3 + 1;
          local_100[uVar3] = uVar2;
          if (uVar2 != 0xffffffff) {
            if (uVar5 == 0xffffffff) {
              uVar5 = (uint)(byte)puVar1[1];
            }
            local_100[uVar4] = uVar5;
            local_100[uVar3 + 2] = puVar1[4];
            local_100[uVar3 + 3] = puVar1[5];
            local_100[uVar3 + 4] = puVar1[6];
            uVar4 = uVar3 + 6;
            local_100[uVar3 + 5] = puVar1[7];
            if ((uVar2 >> 0x1e & 1) != 0) {
              local_100[uVar4] = puVar1[8];
              uVar4 = uVar3 + 8;
              local_100[uVar3 + 7] = (uint)(byte)puVar1[9];
            }
          }
        }
        uVar5 = 0xffffffff;
        uVar3 = uVar4;
      }
    }
    param_4 = param_4 + 1;
    puVar1 = (uint *)*param_4;
  }
  local_100[uVar3] = 0;
  FUN_10121e78(param_1,param_2,param_3,local_100);
  return;
}

