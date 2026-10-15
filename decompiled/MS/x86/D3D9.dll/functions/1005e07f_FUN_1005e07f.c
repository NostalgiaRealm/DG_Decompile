/*
 * FUN_1005e07f at 1005e07f
 * undefined4 __stdcall FUN_1005e07f(uint param_1, byte * param_2, int param_3, uint param_4, uint param_5, int * param_6, undefined4 * param_7, undefined4 param_8, char param_9, undefined1 param_10, undefined4 param_11, uint param_12)
 * Address ranges: 1005e07f-1005e1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005e07f(uint param_1,byte *param_2,int param_3,uint param_4,uint param_5,int *param_6,
                 undefined4 *param_7,undefined4 param_8,char param_9,undefined1 param_10,
                 undefined4 param_11,uint param_12)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_580 [12];
  undefined1 *local_550;
  undefined2 local_54c;
  uint local_548;
  undefined4 local_544;
  undefined1 local_4d0 [64];
  undefined1 local_490;
  undefined1 local_48f;
  undefined1 local_48e;
  byte *local_48c;
  byte local_37 [35];
  void *local_14;
  
  FUN_100cfed0(&local_544,0,0x504);
  FUN_100cfed0((int *)local_580,0,0x38);
  local_580[0] = param_5;
  local_550 = local_4d0;
  local_54c = 0x40;
  FUN_1005810d((int)local_580);
  local_548 = (uint)CONCAT11(param_2[0x126d],param_2[0x126e]);
  pbVar1 = FUN_1005da7d(local_37,param_2,param_3,param_4,param_11,param_12);
  puVar5 = &local_544;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *(undefined4 *)pbVar1;
    pbVar1 = pbVar1 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pbVar1;
  *(byte *)((int)puVar5 + 2) = pbVar1[2];
  local_48c = param_2;
  local_490 = 1;
  if ((param_9 != '\0') || (local_48f = 0, param_3 == 0 && param_4 == 0)) {
    local_48f = 1;
  }
  local_48e = param_10;
  uVar2 = FUN_10058745(param_6,(int)local_580);
  if (((char)uVar2 != '\0') &&
     (uVar2 = FUN_1005dc3b(local_14,param_6,local_580,param_3,param_4,param_1,param_11,param_12),
     (char)uVar2 != '\0')) {
    if (*(int *)((int)local_14 + 8) != 0) {
      pbVar1 = (byte *)(((uint)(param_6[1] - *param_6) >> 1) + *param_6);
      *pbVar1 = *pbVar1 ^ 0x2a;
    }
    FUN_100c3dfb(param_6);
    uVar3 = FUN_100595cc((int)local_580,param_7);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

