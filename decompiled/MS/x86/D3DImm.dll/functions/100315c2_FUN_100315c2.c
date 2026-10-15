/*
 * FUN_100315c2 at 100315c2
 * undefined __stdcall FUN_100315c2(uint * param_1, int * param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100315c2-100316ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100315c2(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint local_54 [17];
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  local_c = 0;
  local_10 = (uint *)param_1[0x27];
  uVar3 = 0;
  if (local_10 != (uint *)0x0) {
    for (; ((uint)local_10 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  local_8 = local_10;
  if (local_10 != (uint *)0x0) {
    pbVar1 = (byte *)((int)&local_8 + ((int)uVar3 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    uVar4 = uVar3;
    while( true ) {
      uVar8 = __aullshr((char)uVar4 * '\x03',0);
      uVar3 = (uint)uVar8 & 7;
      if ((uVar3 == 5) || (uVar3 == 6)) {
        pbVar1 = (byte *)((int)&local_c + ((int)(uVar4 & 0xff) >> 3));
        *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
      }
      uVar4 = 0;
      if (local_8 != (uint *)0x0) {
        for (; ((uint)local_8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar3 = extraout_ECX;
      if (local_8 == (uint *)0x0) break;
      pbVar1 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
    }
  }
  puVar2 = param_1;
  FUN_100577d6(param_1,param_2,local_10,uVar3,local_c);
  param_1 = (uint *)puVar2[0x27];
  uVar3 = 0;
  bVar7 = param_1 == (uint *)0x0;
  uVar5 = extraout_ECX_00;
  if (!bVar7) {
    for (; ((uint)param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while (!bVar7) {
    uVar6 = uVar3 & 0xff;
    pbVar1 = (byte *)((int)&param_1 + ((int)uVar3 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    local_54[uVar6 * 2 + 1] = 5;
    uVar4 = FUN_10031989(param_3,param_4,(char)uVar3);
    local_54[uVar6 * 2] = uVar4 & 0xff;
    uVar5 = FUN_10031989(param_3,param_4,(char)uVar3);
    FUN_100583a6((int)(puVar2 + 2),uVar6,'\x01' << ((byte)uVar5 & 0x1f));
    uVar3 = 0;
    bVar7 = param_1 == (uint *)0x0;
    uVar5 = extraout_ECX_01;
    if (!bVar7) {
      for (; ((uint)param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  FUN_100576cf(puVar2,param_2,puVar2[0x27],uVar5,(int)local_54);
  return;
}

