/*
 * FUN_10049f42 at 10049f42
 * undefined __stdcall FUN_10049f42(uint * param_1, int * param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10049f42-1004a056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049f42(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar7;
  bool bVar8;
  ulonglong uVar9;
  uint local_54 [17];
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  local_c = 0;
  local_10 = (uint *)param_1[0x27];
  uVar4 = 0;
  if (local_10 != (uint *)0x0) {
    for (; ((uint)local_10 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  local_8 = local_10;
  if (local_10 != (uint *)0x0) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar4 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
    uVar5 = uVar4;
    while( true ) {
      uVar9 = __aullshr((char)uVar5 * '\x03',0);
      uVar4 = (uint)uVar9 & 7;
      if ((uVar4 == 5) || (uVar4 == 6)) {
        pbVar2 = (byte *)((int)&local_c + ((int)(uVar5 & 0xff) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
      }
      uVar5 = 0;
      if (local_8 != (uint *)0x0) {
        for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar4 = extraout_ECX;
      if (local_8 == (uint *)0x0) break;
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    }
  }
  puVar3 = param_1;
  FUN_100a0ed8(param_1,param_2,local_10,uVar4,local_c);
  puVar1 = (uint *)puVar3[0x27];
  param_1 = puVar1;
  uVar4 = 0;
  bVar8 = puVar1 == (uint *)0x0;
  uVar6 = extraout_ECX_00;
  if (!bVar8) {
    for (; ((uint)puVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (!bVar8) {
    pbVar2 = (byte *)((int)&param_1 + ((int)uVar4 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
    local_54[(uVar4 & 0xff) * 2 + 1] = 5;
    uVar5 = FUN_1004a63b(param_3,param_4,(char)uVar4);
    local_54[(uVar4 & 0xff) * 2] = uVar5 & 0xff;
    uVar6 = FUN_1004a63b(param_3,param_4,(char)uVar4);
    cVar7 = '\x01' << ((byte)uVar6 & 0x1f);
    if (cVar7 == '\x01') {
      puVar3[7] = puVar3[7] | 1 << (uVar4 & 0x1f);
    }
    else if (cVar7 == '\x02') {
      puVar3[8] = puVar3[8] | 1 << (uVar4 & 0x1f);
    }
    else if (cVar7 == '\x04') {
      puVar3[9] = puVar3[9] | 1 << (uVar4 & 0x1f);
    }
    uVar4 = 0;
    bVar8 = param_1 == (uint *)0x0;
    if (!bVar8) {
      for (; ((uint)param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  FUN_100a0dd1(puVar3,param_2,(uint)puVar1,uVar6,(int)local_54);
  return;
}

