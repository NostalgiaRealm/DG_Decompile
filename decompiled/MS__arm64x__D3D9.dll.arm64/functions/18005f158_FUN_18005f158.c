/*
 * FUN_18005f158 at 18005f158
 * undefined FUN_18005f158(void)
 * Address ranges: 18005f158-18005f403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18005f158(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4,
                    int param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar1 = param_7 & 0xf0;
  uVar6 = param_7 & 0xffff;
  if (uVar1 == 0x30) {
    bVar4 = *(byte *)(param_3 + 0x20e);
LAB_18005f1ac:
    if ((uVar6 >> 8 & 1) != 0) {
      bVar4 = bVar4 >> 6;
      bVar4 = bVar4 | (bVar4 | (bVar4 | bVar4 << 2) << 2) << 2;
    }
  }
  else {
    if (uVar1 == 0x40) {
      bVar4 = *(byte *)(param_3 + 0x20f);
      goto LAB_18005f1ac;
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
      uVar3 = FUN_1800f42d0(param_3,4,1);
      *(undefined4 *)(param_3 + 0x218) = uVar3;
      if (*(byte *)(param_3 + 0x20a) != 0xf) {
        FUN_1800f5ea8(*(undefined1 *)(param_3 + 0x20e),*(byte *)(param_3 + 0x20a) ^ 0xf);
        FUN_1800f5730(param_3,param_4,0x2036);
      }
    }
    param_6 = *(uint *)(param_3 + 0x218);
  }
  else {
    if (uVar1 == 0x20) {
      param_6 = *(uint *)(param_3 + 0x21c);
      if (param_6 == 0) {
        param_6 = FUN_1800f42d0(param_3,4,1);
        *(uint *)(param_3 + 0x21c) = param_6;
      }
      param_6 = param_6 | param_8 << 0x1f;
      goto LAB_18005f3ec;
    }
    if (uVar1 == 0x30) {
      if (*(int *)(param_3 + 0x224) == 0) {
        uVar3 = FUN_1800f42d0(param_3,4,1);
        *(undefined4 *)(param_3 + 0x224) = uVar3;
        FUN_1800f5730(param_3,param_4,0x2036,uVar3,0xf,0x410102,*(undefined1 *)(param_3 + 0x20e),0);
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
            goto LAB_18005f3ec;
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
        uVar3 = FUN_1800f42d0(param_3,4,1);
        *(undefined4 *)(param_3 + 0x228) = uVar3;
        FUN_1800f5730(param_3,param_4,0x2036,uVar3,0xf,0x410103,*(undefined1 *)(param_3 + 0x20f),0);
      }
      param_6 = *(uint *)(param_3 + 0x228);
    }
  }
  param_6 = param_6 | param_8 << 0x1f;
LAB_18005f3ec:
  *param_2 = param_6;
  return param_2;
}

