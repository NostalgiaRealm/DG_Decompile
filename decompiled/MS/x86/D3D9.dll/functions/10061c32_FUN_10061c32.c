/*
 * FUN_10061c32 at 10061c32
 * uint * __fastcall FUN_10061c32(undefined4 param_1, undefined4 param_2, uint param_3, uint * param_4, int * param_5, int * param_6)
 * Address ranges: 10061c32-10061d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_10061c32(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,int *param_5,
            int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_EDX;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = *param_4;
  uVar3 = uVar7 & 0x7ff;
  bVar1 = (byte)(uVar7 >> 0x10);
  bVar2 = bVar1 & 7;
  uVar4 = FUN_100c40de(CONCAT31((int3)((uint)param_1 >> 8),0xe4),
                       CONCAT31((int3)((uint)param_2 >> 8),bVar1) & 0xffffff07);
  if ((uVar7 & 0x2000) != 0) {
    param_4 = param_4 + 1;
  }
  uVar5 = FUN_1005da5e(uVar7);
  uVar7 = 0xffffffff;
  if (uVar5 == 0) {
    uVar3 = FUN_1005e39a((int)param_5,uVar3);
  }
  else {
    if (uVar5 == 1) {
      FUN_10061603(param_5,param_6,uVar3,(byte)uVar4,extraout_EDX,(uint *)(param_5 + 0xf8));
      goto LAB_10061cff;
    }
    if (uVar5 != 3) {
      bVar2 = 0;
      goto LAB_10061cff;
    }
    uVar3 = uVar3 + 5 | 0x410100;
  }
  param_5[0xf8] = uVar3;
  *(byte *)(param_5 + 0xf9) = (byte)uVar4;
  param_5[0xfd] = -1;
  param_5[0xfe] = -1;
  param_5[0xff] = -1;
  param_5[0xfc] = -1;
LAB_10061cff:
  if ((param_3 & 0x10000000) != 0) {
    uVar7 = param_4[2];
  }
  param_5[0x138] = uVar7;
  puVar6 = param_4 + 1;
  if ((param_3 & 0x10000000) == 0) {
    puVar6 = param_4;
  }
  *(byte *)(param_5 + 0xcd) = bVar2;
  return puVar6 + 1;
}

