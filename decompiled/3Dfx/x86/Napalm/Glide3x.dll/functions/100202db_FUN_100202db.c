/*
 * FUN_100202db at 100202db
 * undefined __fastcall FUN_100202db(uint * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, uint param_8, int param_9, byte param_10, uint param_11)
 * Address ranges: 100202db-10020382
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100202db(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            int param_7,uint param_8,int param_9,byte param_10,uint param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = -(uint)(param_2 < 0x12) & param_2;
  uVar2 = -(uint)(param_4 < 0x12) & param_4;
  uVar4 = -(uint)(param_6 < 0x12) & param_6;
  uVar3 = -(uint)(param_8 < 0x12) & param_8;
  if (uVar1 == 4) {
    uVar1 = uVar2;
  }
  if (uVar4 == 4) {
    uVar4 = uVar2;
  }
  if (uVar3 == 4) {
    uVar3 = uVar2;
  }
  *param_1 = (uint)*(ushort *)(&DAT_100592d0 + uVar1 * 2);
  param_1[1] = (uint)*(ushort *)(&DAT_100592d0 + uVar2 * 2);
  param_1[2] = (uint)*(ushort *)(&DAT_100592d0 + uVar4 * 2);
  param_1[3] = (uint)*(ushort *)(&DAT_100592d0 + uVar3 * 2);
  param_1[4] = param_3;
  param_1[5] = param_5;
  param_1[6] = (param_7 != 0) + 1;
  param_1[7] = (param_9 != 0) + 1;
  param_1[9] = param_11;
  param_1[8] = (uint)(float)(1 << (param_10 & 0x1f));
  return;
}

