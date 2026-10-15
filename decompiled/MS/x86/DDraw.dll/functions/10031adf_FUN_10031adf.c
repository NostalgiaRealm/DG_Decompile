/*
 * FUN_10031adf at 10031adf
 * uint __fastcall FUN_10031adf(void * param_1, int param_2)
 * Address ranges: 10031adf-10031b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10031adf(void *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 local_2c [3];
  int local_20;
  void *local_c;
  int local_8;
  
  iVar3 = *(int *)((int)param_1 + 0x40);
  iVar5 = 0;
  pbVar4 = (&PTR_DAT_1006b5c0)[iVar3 * 0x6a];
  bVar2 = *pbVar4;
  local_c = param_1;
  local_8 = param_2;
  while( true ) {
    if (bVar2 == 0xff) {
      return 0xffffffff;
    }
    FUN_10024c76(local_c,local_2c,(uint)pbVar4[iVar5]);
    pbVar4 = (&PTR_DAT_1006b5c0)[iVar3 * 0x6a];
    pbVar1 = pbVar4 + iVar5;
    if (local_20 == local_8) break;
    iVar5 = iVar5 + 1;
    bVar2 = pbVar1[1];
  }
  return (uint)*pbVar1;
}

