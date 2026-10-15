/*
 * FUN_18007e5fc at 18007e5fc
 * undefined __fastcall FUN_18007e5fc(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, uint param_5, byte param_6, uint param_7)
 * Address ranges: 18007e5fc-18007e6d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e5fc(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,uint param_5,
                  byte param_6,uint param_7)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  ulonglong local_128 [33];
  
  if (*(uint *)(param_2 + 0xe4) == 0) {
    puVar2 = local_128 + 2;
    iVar3 = 2;
    local_128[0] = (ulonglong)param_5 | 0x410200;
    iVar6 = 3;
  }
  else {
    iVar3 = 4;
    local_128[0] = (ulonglong)(*(int *)(param_2 + 0xe8) << 0xe | param_5) | 0x40420300;
    local_128[3] = 0;
    puVar2 = local_128 + 4;
    iVar6 = 5;
    local_128[2] = (ulonglong)*(uint *)(param_2 + 0xe4);
  }
  puVar5 = (uint *)&stack0x00000040;
  local_128[1] = (ulonglong)param_6;
  iVar4 = 0;
  *puVar2 = (ulonglong)param_7;
  while (param_7 != 0x12345678) {
    param_7 = *puVar5;
    uVar1 = iVar6 + iVar4;
    iVar4 = iVar4 + 1;
    local_128[uVar1] = (ulonglong)param_7;
    puVar5 = puVar5 + 2;
  }
  local_128[(uint)(iVar4 + iVar3)] = 0;
  FUN_1800ed6f8((uint *)(param_2 + 0x20),param_3,param_4,(uint *)local_128);
  return;
}

