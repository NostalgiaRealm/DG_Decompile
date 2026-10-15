/*
 * FUN_100891bc at 100891bc
 * undefined4 __fastcall FUN_100891bc(undefined4 param_1, int param_2)
 * Address ranges: 100891bc-100892ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100891bc(void *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  byte *pbVar5;
  int local_74 [16];
  undefined4 local_34;
  undefined4 local_30;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_c;
  int local_8;
  
  local_2c = (byte *)0x4e475349;
  local_28 = 0;
  local_24 = 0;
  local_20 = 8;
  local_c = param_1;
  local_8 = param_2;
  FUN_10036e19(&local_1c,0x210);
  FUN_100c3d16(&local_1c,&local_2c,0x10);
  FUN_100cfed0(local_74,0,0x40);
  uVar4 = 0;
  do {
    pcVar2 = (char *)0x0;
    uVar3 = 0xf;
    if (uVar4 == 0) {
      pcVar2 = "SV_POSITION";
      pbVar5 = (byte *)0x1;
    }
    else {
      pbVar5 = (byte *)pcVar2;
      if (uVar4 == 1) {
        pbVar5 = (byte *)0x0;
        pcVar2 = "TEXCOORD";
        uVar3 = 3;
      }
    }
    local_34 = FUN_100c3da7(local_74,(byte *)pcVar2);
    local_30 = 0;
    local_28 = 3;
    local_20 = (uint)CONCAT11(*(undefined1 *)(local_8 + 0x73 + uVar4),uVar3);
    local_2c = pbVar5;
    local_24 = uVar4;
    FUN_100c3d16(&local_1c,&local_34,0x18);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_100c3ee5((int *)&local_1c,2,local_74);
  FUN_100c3d16(local_c,local_1c,local_18 - (int)local_1c);
  uVar1 = thunk_FUN_100cfd6c(local_1c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

