/*
 * FUN_10026120 at 10026120
 * byte __fastcall FUN_10026120(undefined4 param_1, undefined4 param_2, int * param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7, uint param_8, int param_9, int param_10, int * param_11, int param_12, int param_13, undefined4 param_14, int param_15, int param_16, int param_17, int param_18)
 * Address ranges: 10026120-1002627d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall
FUN_10026120(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,uint param_8,int param_9,int param_10,
            int *param_11,int param_12,int param_13,undefined4 param_14,int param_15,int param_16,
            int param_17,int param_18)

{
  byte bVar1;
  BOOL BVar2;
  byte bVar3;
  uint uVar4;
  tagRECT local_44;
  tagRECT local_34 [2];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = 0;
  bVar3 = 1;
  if (param_8 != 0) {
    local_8 = ~(param_12 - 1U);
    local_c = ~(param_13 - 1U);
    local_14 = param_1;
    local_10 = param_2;
    do {
      if (bVar3 == 0) {
        return 0;
      }
      FUN_1000e186(&local_44);
      bVar1 = (byte)uVar4;
      SetRect(local_34,*param_11 >> (bVar1 & 0x1f),param_11[1] >> (bVar1 & 0x1f),
              param_11[2] >> (bVar1 & 0x1f),param_11[3] >> (bVar1 & 0x1f));
      SetRect(&local_44,param_15 >> (bVar1 & 0x1f),param_16 >> (bVar1 & 0x1f),
              param_17 >> (bVar1 & 0x1f),param_18 >> (bVar1 & 0x1f));
      if ((param_9 == param_10) &&
         (((((param_9 == 0xe || (param_9 == 0xf)) || (param_9 == 0x10)) ||
           ((param_9 == 0x11 || (param_9 == 0x12)))) || ((param_9 == 0x13 || (param_9 == 0x14))))))
      {
        local_34[0].right = local_34[0].right + param_12 + -1 & local_8;
        local_34[0].left = local_34[0].left & local_8;
        local_44.left = local_44.left & local_8;
        local_34[0].top = local_34[0].top & local_c;
        local_44.top = local_44.top & local_c;
        local_34[0].bottom = local_34[0].bottom + param_13 + -1 & local_c;
        local_44.right = local_44.right + param_12 + -1 & local_8;
        local_44.bottom = (local_44.bottom - 1U) + param_13 & local_c;
      }
      BVar2 = IsRectEmpty(local_34);
      if ((BVar2 == 0) && (BVar2 = IsRectEmpty(&local_44), BVar2 == 0)) {
        bVar1 = (**(code **)(*param_3 + 0x84))
                          (param_7 + uVar4,param_5,param_6 + uVar4,param_4,local_14,local_10,
                           &local_44);
        bVar3 = bVar3 & bVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_8);
  }
  return bVar3;
}

