/*
 * FUN_100567c1 at 100567c1
 * undefined __cdecl FUN_100567c1(undefined4 param_1, int param_2, int * param_3, uint param_4, uint param_5, byte param_6, uint param_7)
 * Address ranges: 100567c1-10056861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_100567c1(undefined4 param_1,int param_2,int *param_3,uint param_4,uint param_5,byte param_6,
            uint param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint local_84 [32];
  
  if (*(int *)(param_2 + 0xd4) == 0) {
    local_84[0] = param_5 | 0x410200;
    iVar3 = 2;
  }
  else {
    local_84[0] = *(int *)(param_2 + 0xd8) << 0xe | param_5 | 0x40420300;
    local_84[3] = 0;
    iVar3 = 4;
    local_84[2] = *(int *)(param_2 + 0xd4);
  }
  puVar1 = (uint *)&stack0x00000020;
  local_84[1] = (uint)param_6;
  iVar2 = 0;
  local_84[iVar3] = param_7;
  while (param_7 != 0x12345678) {
    param_7 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
    local_84[iVar2 + iVar3] = param_7;
  }
  local_84[iVar2 + iVar3] = 0;
  FUN_100a0f73((int *)(param_2 + 0x18),param_3,param_4,local_84);
  return;
}

