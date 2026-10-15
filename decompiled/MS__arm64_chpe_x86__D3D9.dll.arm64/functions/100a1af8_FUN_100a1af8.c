/*
 * FUN_100a1af8 at 100a1af8
 * undefined FUN_100a1af8(void)
 * Address ranges: 100a1af8-100a1be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a1af8(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 *local_94;
  undefined4 *local_90;
  undefined4 uStack_8c;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 auStack_50 [48];
  
  puVar1 = (uint *)(param_2 + 0x1e8);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x10) + 0x441);
  if ((bVar2 & 0xc) != 0xc) {
    FUN_1009f358(param_1,param_2,*puVar1,~bVar2 & 0xc,auStack_50);
    local_70 = *(undefined4 *)(param_2 + 0xac);
    local_a0 = param_2 + 0x18;
    local_60 = 0;
    local_5c = 0;
    local_54 = 0x3f800000;
    local_6c = 0xe4;
    local_90 = &local_70;
    uStack_8c = 0;
    local_94 = auStack_50;
    local_98 = 0x36;
    uStack_9c = param_3;
    param_1 = FUN_10122c20(&local_a0,0x18);
  }
  FUN_100a17d8(param_1,param_2,param_3,*puVar1);
  if ((*puVar1 & 0x3f00) == 0) {
    FUN_10121648(param_2 + 0x18,*puVar1);
    *puVar1 = 0;
  }
  return;
}

