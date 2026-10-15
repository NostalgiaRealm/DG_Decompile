/*
 * FUN_1800f5760 at 1800f5760
 * undefined FUN_1800f5760(void)
 * Address ranges: 1800f5760-1800f58b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5760(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong local_200 [64];
  
  if (param_3 < 0) {
    puVar2 = (uint *)((-param_4 & 3U) + param_4);
    param_4 = (-param_4 & 3U | 8) + param_4;
    local_200[0] = (ulonglong)*puVar2;
  }
  uVar4 = (ulonglong)(param_3 < 0);
  lVar1 = (-param_4 & 7U | 8) + param_4;
  puVar2 = *(uint **)((-param_4 & 7U) + param_4);
  uVar5 = 0xffffffff;
  do {
    if (puVar2 == (uint *)0x0) {
      local_200[uVar4] = 0;
      FUN_1800f4a38();
      return;
    }
    if (puVar2 != (uint *)0xffffffffffffffff) {
      if (((ulonglong)puVar2 & 0xffffffffffff0000) == 0) {
        uVar5 = (ulonglong)puVar2 & 0xffff;
      }
      else {
        if (*puVar2 != 0) {
          local_200[uVar4] = (ulonglong)*puVar2;
          iVar3 = (int)uVar4;
          uVar6 = iVar3 + 1;
          if (*puVar2 != 0xffffffff) {
            if ((int)uVar5 == -1) {
              uVar5 = (ulonglong)(byte)puVar2[1];
            }
            local_200[uVar6] = uVar5;
            local_200[iVar3 + 2] = (ulonglong)puVar2[4];
            local_200[iVar3 + 3] = (ulonglong)puVar2[5];
            local_200[iVar3 + 4] = (ulonglong)puVar2[6];
            local_200[iVar3 + 5] = (ulonglong)puVar2[7];
            uVar6 = iVar3 + 6;
            if ((*puVar2 >> 0x1e & 1) != 0) {
              local_200[uVar6] = (ulonglong)puVar2[8];
              uVar4 = (ulonglong)(iVar3 + 8);
              local_200[iVar3 + 7] = (ulonglong)(byte)puVar2[9];
              goto LAB_1800f5870;
            }
          }
          uVar4 = (ulonglong)uVar6;
        }
LAB_1800f5870:
        uVar5 = 0xffffffff;
      }
    }
    puVar2 = *(uint **)((-lVar1 & 7U) + lVar1);
    lVar1 = (-lVar1 & 7U | 8) + lVar1;
  } while( true );
}

