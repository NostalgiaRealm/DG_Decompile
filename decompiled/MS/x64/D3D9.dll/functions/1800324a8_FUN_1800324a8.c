/*
 * FUN_1800324a8 at 1800324a8
 * byte __fastcall FUN_1800324a8(undefined8 param_1, undefined8 param_2, longlong * param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7, uint param_8, int param_9, int param_10, int * param_11, int * param_12, int param_13, int param_14, undefined1 param_15)
 * Address ranges: 1800324a8-180032654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800324a8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,int param_7,uint param_8,int param_9,int param_10,
                  int *param_11,int *param_12,int param_13,int param_14,undefined1 param_15)

{
  byte bVar1;
  BOOL BVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  tagRECT local_68;
  tagRECT local_58;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined2 local_3d;
  
  bVar3 = 1;
  if (param_8 != 0) {
    uVar5 = 0;
    uVar4 = -param_13;
    uVar6 = -param_14;
    do {
      if (bVar3 == 0) {
        return 0;
      }
      local_3f = param_15;
      local_3e = param_15;
      bVar1 = (byte)uVar5;
      local_48 = 0;
      local_40 = 0;
      local_3d = 0x100;
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      local_58.left = 0;
      local_58.top = 0;
      local_58.right = 0;
      local_58.bottom = 0;
      SetRect(&local_58,*param_11 >> (bVar1 & 0x1f),param_11[1] >> (bVar1 & 0x1f),
              param_11[2] >> (bVar1 & 0x1f),param_11[3] >> (bVar1 & 0x1f));
      SetRect(&local_68,*param_12 >> (bVar1 & 0x1f),param_12[1] >> (bVar1 & 0x1f),
              param_12[2] >> (bVar1 & 0x1f),param_12[3] >> (bVar1 & 0x1f));
      if ((param_9 == param_10) && (param_9 - 0xeU < 7)) {
        local_58.top = local_58.top & uVar6;
        local_58.left = local_58.left & uVar4;
        local_68.top = local_68.top & uVar6;
        local_68.left = local_68.left & uVar4;
        local_58.bottom = local_58.bottom + -1 + param_14 & uVar6;
        local_58.right = local_58.right + -1 + param_13 & uVar4;
        local_68.bottom = local_68.bottom + -1 + param_14 & uVar6;
        local_68.right = local_68.right + -1 + param_13 & uVar4;
      }
      BVar2 = IsRectEmpty(&local_58);
      if ((BVar2 == 0) && (BVar2 = IsRectEmpty(&local_68), BVar2 == 0)) {
        bVar1 = (**(code **)(*param_3 + 0x108))
                          (param_3,param_7 + uVar5,param_5,param_6 + uVar5,param_4,param_1,param_2,
                           &local_68);
        bVar3 = bVar3 & bVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_8);
  }
  return bVar3;
}

