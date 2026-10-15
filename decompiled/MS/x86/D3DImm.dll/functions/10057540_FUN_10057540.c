/*
 * FUN_10057540 at 10057540
 * undefined __fastcall FUN_10057540(uint param_1, byte param_2, uint param_3, int param_4, uint param_5, uint param_6)
 * Address ranges: 10057540-100575da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10057540(uint param_1,byte param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  bVar1 = (byte)(param_1 >> 0x12) & 3;
  bVar3 = (byte)(param_1 >> 0x14) & 7;
  uVar6 = 0;
  bVar2 = (bVar1 - 1) + bVar3;
  bVar5 = bVar2;
  if (1 < bVar3) {
    bVar5 = bVar1 + 1;
  }
  bVar4 = bVar2;
  if (2 < bVar3) {
    bVar4 = bVar1 + 2;
  }
  if (3 < bVar3) {
    bVar2 = bVar1 + 3;
  }
  bVar1 = FUN_10058073(((bVar2 << 2 | bVar4) << 2 | bVar5) << 2 | bVar1,param_2);
  FUN_10057fbd(param_1 >> 8 & 0x3f,bVar1,param_3,param_4,param_5,param_6,uVar6);
  return;
}

