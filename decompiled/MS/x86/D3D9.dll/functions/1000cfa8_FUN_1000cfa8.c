/*
 * FUN_1000cfa8 at 1000cfa8
 * undefined4 __fastcall FUN_1000cfa8(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000cfa8-1000d0bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000cfa8(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  ulonglong uVar4;
  
  uVar4 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                       *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = (uint)uVar4;
  FUN_1000b9b4((int)param_1,uVar2);
  uVar3 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_10001877(param_2,param_1[1] | 0x80000000,0x100000,0x10ae02,0xffffffff,0x1c0,0);
  FUN_10001877(param_2,uVar3,0x1400700,0x5b02,uVar2,(int)(uVar4 >> 0x20),0);
  FUN_10001877(param_2,param_1[1] | 0x80000000,0x100000,0x10ae02,0xffffffff,0x1b0,0);
  FUN_10001877(param_2,*param_1 | 0x80000000,0x100100,0x2902,uVar3,0x4290,0);
  uVar3 = 0;
  do {
    if ((0x428 < param_1[uVar3 + 0x16]) && (param_1[uVar3 + 0x16] < 0x42d)) {
      param_1[uVar3 + 0x16] = 0xffffffff;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if ((uVar4 & 0x80000000) == 0) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar2 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  return 0xffffffff;
}

