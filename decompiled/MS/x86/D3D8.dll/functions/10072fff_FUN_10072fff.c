/*
 * FUN_10072fff at 10072fff
 * undefined4 __fastcall FUN_10072fff(undefined4 param_1, int param_2)
 * Address ranges: 10072fff-100730ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10072fff(void *param_1,int param_2)

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
  FUN_1002d6f1(&local_1c,0x210);
  FUN_100a14c1(&local_1c,&local_2c,0x10);
  FUN_100ada8e(local_74,0,0x40);
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
    local_34 = FUN_100a1552(local_74,(byte *)pcVar2);
    local_30 = 0;
    local_28 = 3;
    local_20 = (uint)CONCAT11(*(undefined1 *)(local_8 + 0x73 + uVar4),uVar3);
    local_2c = pbVar5;
    local_24 = uVar4;
    FUN_100a14c1(&local_1c,&local_34,0x18);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_100a1690((int *)&local_1c,2,local_74);
  FUN_100a14c1(local_c,local_1c,local_18 - (int)local_1c);
  uVar1 = thunk_FUN_100ad48c(local_1c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

