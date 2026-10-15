/*
 * FUN_10072580 at 10072580
 * undefined __stdcall FUN_10072580(int param_1, int * param_2, uint param_3)
 * Address ranges: 10072580-10072759
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072580(int param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_a0 [12];
  uint local_70 [4];
  uint local_60;
  undefined1 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined1 local_3c;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_18;
  uint local_14;
  
  uVar2 = FUN_10068ce6(param_1);
  uVar3 = param_3;
  if ((char)uVar2 != '\0') {
    uVar3 = FUN_100c2e34(param_1 + 0x18,4,'\0');
    FUN_100c3be1((int *)(param_1 + 0x18),param_2,0xe);
    FUN_100c3be1((int *)(param_1 + 0x18),param_2,0);
    FUN_100c3be1((int *)(param_1 + 0x18),param_2,0x36);
  }
  FUN_10070652(param_1,*(uint *)(param_1 + 0x1ac),0xf,local_70);
  FUN_10070652(param_1,*(uint *)(param_1 + 0x1b0),0xf,local_a0);
  local_30 = -1;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_3c = 0xe4;
  local_40 = uVar3;
  FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x36);
  FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x36);
  local_14 = *(uint *)(param_1 + 8) & 0x3f;
  local_18 = 0;
  uVar3 = 0;
  bVar5 = local_14 == 0;
  if (!bVar5) {
    for (; (local_14 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while( true ) {
    if (bVar5) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar3 & 0xff;
      pbVar1 = (byte *)((int)&local_14 + ((int)uVar3 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    }
    if (uVar4 == 0xffffffff) break;
    FUN_10070652(param_1,*(uint *)(param_1 + 0x1e0 + (local_18 & 0xfffffffc)),
                 '\x01' << ((byte)local_18 & 3),local_a0);
    local_60 = param_3;
    local_40 = *(uint *)(param_1 + 0x2b8);
    local_30 = uVar4 * 0x10 + 0x20;
    local_5c = 0xe4;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_3c = 0xe4;
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x11);
    local_18 = local_18 + 1;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1 << (uVar4 & 0x1f);
    uVar3 = 0;
    bVar5 = local_14 == 0;
    if (!bVar5) {
      for (; (local_14 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  return;
}

