/*
 * FUN_18000e74c at 18000e74c
 * undefined8 __fastcall FUN_18000e74c(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000e74c-18000e89e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000e74c(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iStackX_c;
  
  uVar2 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar5 = (uint)uVar2;
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
  }
  uVar3 = FUN_18000ca0c(param_1,param_2,0xffff);
  FUN_1800019cc(param_2,0x10ae0200100000,param_1[1] | 0x80000000,-1,0x1c0,0);
  iStackX_c = (int)(uVar2 >> 0x20);
  FUN_1800019cc(param_2,0x5b0201400700,(uint)uVar3,uVar5,iStackX_c,0);
  FUN_1800019cc(param_2,0x10ae0200100000,param_1[1] | 0x80000000,-1,0x1b0,0);
  FUN_1800019cc(param_2,0x290200100100,*param_1 | 0x80000000,(uint)uVar3,0x4290,0);
  lVar4 = 0;
  do {
    if (param_1[lVar4 + 0x16] - 0x429 < 4) {
      param_1[lVar4 + 0x16] = 0xffffffff;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  return 0xffffffff;
}

