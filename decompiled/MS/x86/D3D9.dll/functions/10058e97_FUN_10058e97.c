/*
 * FUN_10058e97 at 10058e97
 * undefined __stdcall FUN_10058e97(uint * param_1, int * param_2, undefined4 param_3, uint param_4)
 * Address ranges: 10058e97-10058f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058e97(uint *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  uint local_8c [32];
  uint local_c;
  int *local_8;
  
  local_c = 0;
  piVar1 = (int *)param_1[0x2b];
  uVar5 = 0;
  if (piVar1 != (int *)0x0) {
    for (; ((uint)piVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  local_8 = piVar1;
  if (piVar1 != (int *)0x0) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    uVar7 = param_4 & 0xffff;
    while( true ) {
      uVar9 = __aullshr((char)uVar5 * '\x03',uVar7);
      uVar4 = (uint)uVar9 & 7;
      if ((uVar4 == 5) || (uVar4 == 6)) {
        pbVar2 = (byte *)((int)&local_c + ((int)(uVar5 & 0xff) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
      }
      uVar5 = 0;
      if (local_8 != (int *)0x0) {
        for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (local_8 == (int *)0x0) break;
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    }
  }
  puVar3 = param_1;
  FUN_100c3719(param_1,param_2,piVar1,&DAT_100d5ce0,local_c);
  param_1 = (uint *)puVar3[0x2b];
  uVar5 = 0;
  bVar8 = param_1 == (uint *)0x0;
  if (!bVar8) {
    for (; ((uint)param_1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar8) {
    uVar4 = uVar5 & 0xff;
    pbVar2 = (byte *)((int)&param_1 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    local_8c[uVar4 * 2 + 1] = 5;
    uVar7 = FUN_1005957f(param_3,(ushort)param_4,(char)uVar5);
    local_8c[uVar4 * 2] = uVar7 & 0xff;
    uVar6 = FUN_1005957f(param_3,(ushort)param_4,(char)uVar5);
    FUN_100c44e9((int)(puVar3 + 2),uVar4,'\x01' << ((byte)uVar6 & 0x1f));
    uVar5 = 0;
    bVar8 = param_1 == (uint *)0x0;
    if (!bVar8) {
      for (; ((uint)param_1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  FUN_100c3618(puVar3,param_2,puVar3[0x2b],&DAT_100d5c98,(int)local_8c);
  return;
}

