/*
 * FUN_180170208 at 180170208
 * undefined FUN_180170208(void)
 * Address ranges: 180170208-1801704f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180170208(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4,
                    int param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_70 [2];
  undefined4 local_68;
  uint local_60;
  undefined8 local_58;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar1 = param_7 & 0xf0;
  uVar6 = param_7 & 0xffff;
  if (uVar1 == 0x30) {
    bVar4 = *(byte *)(param_3 + 0x20e);
LAB_180170260:
    if ((uVar6 >> 8 & 1) != 0) {
      bVar4 = bVar4 >> 6;
      bVar4 = bVar4 | (bVar4 | (bVar4 | bVar4 << 2) << 2) << 2;
    }
  }
  else {
    if (uVar1 == 0x40) {
      bVar4 = *(byte *)(param_3 + 0x20f);
      goto LAB_180170260;
    }
    bVar4 = 0xff;
    if ((param_7 & 0x100) == 0) {
      bVar4 = 0xe4;
    }
  }
  *param_2 = 0;
  *(byte *)(param_2 + 1) = bVar4;
  param_8 = param_7 >> 9 & 0xffff ^ param_8;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  if (uVar1 == 0x10) {
    if (*(int *)(param_3 + 0x218) == 0) {
      uVar3 = FUN_180213760(param_3,4,1);
      *(undefined4 *)(param_3 + 0x218) = uVar3;
      if (*(byte *)(param_3 + 0x20a) != 0xf) {
        local_70[0] = *(byte *)(param_3 + 0x20a) ^ 0xf;
        local_60 = FUN_180213268(*(undefined1 *)(param_3 + 0x20e),local_70[0]);
        local_58 = 0;
        local_60 = local_60 & 0xff;
        local_68 = 0x410102;
        FUN_180214c88(param_3,param_4,0x2036);
      }
    }
    param_6 = *(uint *)(param_3 + 0x218);
  }
  else {
    if (uVar1 == 0x20) {
      param_6 = *(uint *)(param_3 + 0x21c);
      if (param_6 == 0) {
        param_6 = FUN_180213760(param_3,4,1);
        *(uint *)(param_3 + 0x21c) = param_6;
      }
      param_6 = param_6 | param_8 << 0x1f;
      goto LAB_1801704dc;
    }
    if (uVar1 == 0x30) {
      if (*(int *)(param_3 + 0x224) == 0) {
        uVar3 = FUN_180213760(param_3,4,1);
        *(undefined4 *)(param_3 + 0x224) = uVar3;
        local_58 = 0;
        local_60 = (uint)*(byte *)(param_3 + 0x20e);
        local_68 = 0x410102;
        local_70[0] = 0xf;
        FUN_180214c88(param_3,param_4,0x2036,uVar3,local_70,0x20);
      }
      param_6 = *(uint *)(param_3 + 0x224);
    }
    else {
      if (uVar1 != 0x40) {
        if (uVar1 == 0x50) {
          local_40 = *(uint *)(param_3 + 0x68) | param_8 << 0x1f;
          uVar5 = CONCAT44(0xffffffff,param_5 * 0x40 + 0xe0);
        }
        else {
          if (uVar1 != 0x60) {
            if (uVar1 == 0x70) {
              param_6 = param_6 | param_8 << 0x1f;
            }
            else {
              if (uVar1 == 0x80) {
                lVar2 = 0xac;
                if ((param_7 & 0x100) != 0) {
                  lVar2 = 0xa8;
                }
                uVar1 = *(uint *)(param_3 + lVar2);
                param_2[4] = 0;
                *(undefined1 *)(param_2 + 1) = 0xe4;
                *param_2 = uVar1 | param_8 << 0x1f;
                if ((uVar6 >> 8 & 1) != 0) {
                  return param_2;
                }
                param_2[7] = 0;
                param_2[5] = 0;
                param_2[6] = 0;
                return param_2;
              }
              if (uVar1 != 0xb0) {
                return param_2;
              }
              param_6 = (param_8 ^ 1) * -0x80000000 + 0x80000000 | (int)uVar6 >> 10 | 0x410000;
            }
            goto LAB_1801704dc;
          }
          local_40 = *(uint *)(param_3 + 0x68) | param_8 << 0x1f;
          uVar5 = 0xffffffff000000a0;
        }
        uStack_3c = CONCAT31(uStack_3c._1_3_,bVar4);
        *(undefined8 *)(param_2 + 2) = uStack_38;
        *(ulonglong *)param_2 = CONCAT44(uStack_3c,local_40);
        param_2[6] = 0xffffffff;
        param_2[7] = 0xffffffff;
        *(undefined8 *)(param_2 + 4) = uVar5;
        return param_2;
      }
      if (*(int *)(param_3 + 0x228) == 0) {
        uVar3 = FUN_180213760(param_3,4,1);
        *(undefined4 *)(param_3 + 0x228) = uVar3;
        local_58 = 0;
        local_60 = (uint)*(byte *)(param_3 + 0x20f);
        local_68 = 0x410103;
        local_70[0] = 0xf;
        FUN_180214c88(param_3,param_4,0x2036,uVar3,local_70,0x20);
      }
      param_6 = *(uint *)(param_3 + 0x228);
    }
  }
  param_6 = param_6 | param_8 << 0x1f;
LAB_1801704dc:
  *param_2 = param_6;
  return param_2;
}

