/*
 * FUN_180214e10 at 180214e10
 * undefined FUN_180214e10(void)
 * Address ranges: 180214e10-180214f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180214e10(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong local_220 [64];
  
  puVar2 = (undefined8 *)(param_5 + -8);
  *puVar2 = param_4;
  if (param_3 < 0) {
    puVar4 = (uint *)((-(longlong)puVar2 & 3U) + (longlong)puVar2);
    puVar2 = (undefined8 *)((-(longlong)puVar2 & 3U | 8) + (longlong)puVar2);
    local_220[0] = (ulonglong)*puVar4;
  }
  uVar3 = (ulonglong)(param_3 < 0);
  lVar1 = (-(longlong)puVar2 & 7U | 8) + (longlong)puVar2;
  uVar6 = 0xffffffff;
  puVar4 = *(uint **)((-(longlong)puVar2 & 7U) + (longlong)puVar2);
  while (puVar4 != (uint *)0x0) {
    if (puVar4 != (uint *)0xffffffffffffffff) {
      if (((ulonglong)puVar4 & 0xffffffffffff0000) == 0) {
        uVar6 = (ulonglong)puVar4 & 0xffff;
      }
      else {
        if (*puVar4 != 0) {
          local_220[uVar3] = (ulonglong)*puVar4;
          iVar5 = (int)uVar3;
          uVar3 = (ulonglong)(iVar5 + 1);
          if (*puVar4 != 0xffffffff) {
            if ((int)uVar6 == -1) {
              uVar6 = (ulonglong)(byte)puVar4[1];
            }
            local_220[uVar3] = uVar6;
            local_220[iVar5 + 2] = (ulonglong)puVar4[4];
            local_220[iVar5 + 3] = (ulonglong)puVar4[5];
            local_220[iVar5 + 4] = (ulonglong)puVar4[6];
            local_220[iVar5 + 5] = (ulonglong)puVar4[7];
            uVar3 = (ulonglong)(iVar5 + 6);
            if ((*puVar4 >> 0x1e & 1) != 0) {
              local_220[uVar3] = (ulonglong)puVar4[8];
              uVar3 = (ulonglong)(iVar5 + 8);
              local_220[iVar5 + 7] = (ulonglong)(byte)puVar4[9];
            }
          }
        }
        uVar6 = 0xffffffff;
      }
    }
    puVar2 = (undefined8 *)((-lVar1 & 7U) + lVar1);
    lVar1 = (-lVar1 & 7U | 8) + lVar1;
    puVar4 = (uint *)*puVar2;
  }
  local_220[uVar3] = 0;
  FUN_180213f50();
  return;
}

