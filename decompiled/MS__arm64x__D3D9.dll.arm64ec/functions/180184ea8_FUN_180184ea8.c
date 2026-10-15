/*
 * FUN_180184ea8 at 180184ea8
 * undefined FUN_180184ea8(void)
 * Address ranges: 180184ea8-180184f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180184ea8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong local_110 [32];
  
  puVar1 = param_5 + 4;
  if (*(uint *)(param_2 + 0xe4) == 0) {
    puVar9 = local_110 + 2;
    local_110[0] = (ulonglong)*param_5 | 0x410200;
    bVar4 = (byte)param_5[2];
    iVar8 = 2;
    iVar7 = 3;
  }
  else {
    local_110[3] = 0;
    puVar9 = local_110 + 4;
    local_110[0] = (ulonglong)(*param_5 | *(int *)(param_2 + 0xe8) << 0xe) | 0x40420300;
    bVar4 = (byte)param_5[2];
    iVar8 = 4;
    iVar7 = 5;
    local_110[2] = (ulonglong)*(uint *)(param_2 + 0xe4);
  }
  local_110[1] = (ulonglong)bVar4;
  uVar2 = *(uint *)((-(longlong)puVar1 & 3U) + (longlong)puVar1);
  iVar5 = 0;
  *puVar9 = (ulonglong)uVar2;
  if (uVar2 != 0x12345678) {
    lVar6 = (longlong)puVar1 + (-(longlong)puVar1 & 3U) + 8;
    iVar5 = 0;
    do {
      uVar3 = *(uint *)((-lVar6 & 3U) + lVar6);
      uVar2 = iVar7 + iVar5;
      iVar5 = iVar5 + 1;
      local_110[uVar2] = (ulonglong)uVar3;
      lVar6 = (-lVar6 & 3U | 8) + lVar6;
    } while (uVar3 != 0x12345678);
  }
  local_110[(uint)(iVar5 + iVar8)] = 0;
  FUN_180213f50(param_2 + 0x20,param_3,param_4,local_110);
  return;
}

