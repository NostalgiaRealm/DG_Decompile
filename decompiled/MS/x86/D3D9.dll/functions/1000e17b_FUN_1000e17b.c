/*
 * FUN_1000e17b at 1000e17b
 * uint __fastcall FUN_1000e17b(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000e17b-1000e330
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000e17b(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  ulonglong uVar4;
  
  uVar4 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  uVar2 = (uint)uVar4;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar3 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_10001877(param_2,0x80000004,0x1300100,0x1102,uVar2,-4,0);
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_10001877(param_2,0x80000004,0,0xd902,0xffffffff,-4,0);
  }
  if ((*(byte *)(param_3 + 0x10) & 2) != 0) {
    FUN_10001877(param_2,0x80000004,0,0xd902,0xffffffff,-4,0);
    FUN_10001877(param_2,0xffffffff,0,0xfed902,0xffffffff,0,0);
    FUN_10001877(param_2,0x80000004,0,0x18d902,0xffffffff,-4,0);
    FUN_10001877(param_2,uVar2,0x1300100,0x1102,0x80000004,-4,0);
    FUN_10001877(param_2,uVar2,0x130700,0xc602,uVar2,0,0xe0);
  }
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_10001877(param_2,0xffffffff,0,0xffd902,0xffffffff,0,0);
    FUN_10001877(param_2,0x80000004,0,0x18d902,0xffffffff,-4,0);
    FUN_10001877(param_2,uVar3,0x1300100,0x1102,0x80000004,-4,0);
    FUN_10001877(param_2,uVar2,0x1300100,0x1102,uVar3,0,0);
  }
  if (-1 < (int)uVar2) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return uVar2;
}

