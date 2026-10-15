/*
 * FUN_1800edc00 at 1800edc00
 * undefined __fastcall FUN_1800edc00(uint * param_1, longlong * param_2, uint param_3, uint * param_4)
 * Address ranges: 1800edc00-1800edd0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800edc00(uint *param_1,longlong *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong local_228 [64];
  
  if ((int)param_3 < 0) {
    local_228[0] = (ulonglong)*param_4;
    param_4 = param_4 + 2;
  }
  uVar3 = (ulonglong)((int)param_3 < 0);
  puVar5 = *(uint **)param_4;
  uVar4 = 0xffffffff;
  while( true ) {
    param_4 = param_4 + 2;
    iVar6 = (int)uVar3;
    if (puVar5 == (uint *)0x0) break;
    if (puVar5 != (uint *)0xffffffffffffffff) {
      if (((ulonglong)puVar5 & 0xffffffffffff0000) == 0) {
        uVar4 = (ulonglong)puVar5 & 0xffff;
      }
      else {
        if (*puVar5 != 0) {
          uVar7 = *puVar5;
          local_228[uVar3] = (ulonglong)*puVar5;
          uVar3 = (ulonglong)(iVar6 + 1);
          if (uVar7 != 0xffffffff) {
            if ((int)uVar4 == -1) {
              uVar4 = (ulonglong)(byte)puVar5[1];
            }
            local_228[uVar3] = uVar4;
            uVar3 = 0;
            do {
              lVar2 = uVar3 + 4;
              iVar1 = (int)uVar3;
              uVar7 = iVar1 + 1;
              uVar3 = (ulonglong)uVar7;
              local_228[(uint)(iVar1 + iVar6 + 2)] = (ulonglong)puVar5[lVar2];
            } while ((int)uVar7 < 4);
            uVar3 = (ulonglong)(iVar6 + 6);
            if ((*puVar5 & 0x40000000) != 0) {
              uVar7 = puVar5[9];
              local_228[uVar3] = (ulonglong)puVar5[8];
              local_228[iVar6 + 7] = (ulonglong)(byte)uVar7;
              uVar3 = (ulonglong)(iVar6 + 8);
            }
          }
        }
        uVar4 = 0xffffffff;
      }
    }
    puVar5 = *(uint **)param_4;
  }
  local_228[uVar3] = 0;
  FUN_1800ed6f8(param_1,param_2,param_3,(uint *)local_228);
  return;
}

