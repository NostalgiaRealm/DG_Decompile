/*
 * FUN_10082e80 at 10082e80
 * undefined FUN_10082e80(void)
 * Address ranges: 10082e80-100830c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10082e80(undefined8 param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,
                   uint param_6,ushort param_7,uint param_8)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = (ulonglong)param_7;
  uVar2 = FUN_10082bd8(param_1,param_3);
  uVar3 = (uint)uVar4;
  param_8 = uVar3 >> 9 & 0xff ^ param_8;
  *param_2 = 0;
  uVar1 = uVar3 & 0xf0;
  puVar5 = param_2 + 4;
  *(char *)(param_2 + 1) = (char)uVar2;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  puVar5[0] = 0xffffffff;
  puVar5[1] = 0xffffffff;
  if (0x4f < uVar1) {
    if (uVar1 < 0x51) {
      local_40 = *(uint *)(param_3 + 0x60) | param_8 << 0x1f;
      uVar6 = CONCAT44(0xffffffff,param_5 * 0x40 + 0xe0);
LAB_10082f14:
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)uVar2);
      *(undefined8 *)(param_2 + 2) = uStack_38;
      *(ulonglong *)param_2 = CONCAT44(uStack_3c,local_40);
      param_2[6] = 0xffffffff;
      param_2[7] = 0xffffffff;
      *(undefined8 *)(param_2 + 4) = uVar6;
      return param_2;
    }
    if (uVar1 < 0x80) {
      if (uVar1 == 0x60) {
        local_40 = *(uint *)(param_3 + 0x60) | param_8 << 0x1f;
        uVar6 = 0xffffffff000000a0;
        goto LAB_10082f14;
      }
      if (uVar1 != 0x70) {
        return param_2;
      }
      param_6 = param_6 | param_8 << 0x1f;
    }
    else {
      if (uVar1 < 0x81) {
        iVar7 = 0xa4;
        if ((uVar4 & 0x100) != 0) {
          iVar7 = 0xa0;
        }
        uVar1 = *(uint *)(iVar7 + param_3);
        *puVar5 = 0;
        *(undefined1 *)(param_2 + 1) = 0xe4;
        *param_2 = uVar1 | param_8 << 0x1f;
        if ((uVar4 & 0x100) != 0) {
          return param_2;
        }
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[5] = 0;
        return param_2;
      }
      if (uVar1 != 0xb0) {
        return param_2;
      }
      param_6 = uVar3 >> 10 | param_8 << 0x1f | 0x410000;
    }
    goto LAB_100830ac;
  }
  if (uVar1 < 0x30) {
    if (uVar1 != 0x10) {
      if (uVar1 != 0x20) {
        return param_2;
      }
      puVar5 = (uint *)(param_3 + 0x20c);
      param_6 = *puVar5;
      if (param_6 == 0) {
        param_6 = FUN_10121590(param_3,4,1);
        *puVar5 = param_6;
      }
      param_6 = param_6 | param_8 << 0x1f;
      goto LAB_100830ac;
    }
    FUN_10082c40(uVar2,param_3,param_4);
    iVar7 = 0x208;
LAB_100830a4:
    param_6 = *(uint *)(param_3 + iVar7);
  }
  else {
    if (0x30 < uVar1) {
      if (uVar1 != 0x40) {
        return param_2;
      }
      FUN_10082ce0(uVar2,param_3,param_4);
      iVar7 = 0x218;
      goto LAB_100830a4;
    }
    puVar5 = (uint *)(param_3 + 0x214);
    if (*puVar5 == 0) {
      uStack_64 = FUN_10121590(param_3,4,1);
      *puVar5 = uStack_64;
      local_58 = (uint)*(byte *)(param_3 + 0x202);
      uStack_54 = 0;
      local_5c = 0x410102;
      local_60 = 0xf;
      local_68 = 0x2036;
      local_70 = param_3;
      uStack_6c = param_4;
      FUN_10122a88(&local_70,0x20);
    }
    param_6 = *puVar5;
  }
  param_6 = param_6 | param_8 << 0x1f;
LAB_100830ac:
  *param_2 = param_6;
  return param_2;
}

