/*
 * FUN_1006c0a8 at 1006c0a8
 * undefined FUN_1006c0a8(void)
 * Address ranges: 1006c0a8-1006c2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1006c0a8(undefined8 param_1,uint *param_2,int param_3,undefined4 param_4,
                   undefined8 param_5,uint param_6,ushort param_7,uint param_8)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = (ulonglong)param_7;
  uVar2 = FUN_1006be00(param_1,param_3);
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
  if (0x5f < uVar1) {
    if (uVar1 < 0x61) {
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)uVar2);
      uVar1 = *(uint *)(param_3 + 0x50);
      *(undefined8 *)(param_2 + 2) = uStack_38;
      *(ulonglong *)param_2 = CONCAT44(uStack_3c,uVar1 | param_8 << 0x1f);
      param_2[6] = 0xffffffff;
      param_2[7] = 0xffffffff;
      param_2[4] = 0xa0;
      param_2[5] = 0xffffffff;
      return param_2;
    }
    if (uVar1 == 0x70) {
      param_6 = param_6 | param_8 << 0x1f;
    }
    else {
      if (uVar1 == 0x80) {
        iVar6 = 0x94;
        if ((uVar4 & 0x100) != 0) {
          iVar6 = 0x90;
        }
        uVar1 = *(uint *)(iVar6 + param_3);
        *puVar5 = 0;
        *param_2 = uVar1 | param_8 << 0x1f;
        *(undefined1 *)(param_2 + 1) = 0xe4;
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
    goto LAB_1006c294;
  }
  if (uVar1 < 0x30) {
    if (uVar1 != 0x10) {
      if (uVar1 != 0x20) {
        return param_2;
      }
      puVar5 = (uint *)(param_3 + 0x1fc);
      param_6 = *puVar5;
      if (param_6 == 0) {
        param_6 = FUN_100ee580(param_3,4,1);
        *puVar5 = param_6;
      }
      param_6 = param_6 | param_8 << 0x1f;
      goto LAB_1006c294;
    }
    FUN_1006be68(uVar2,param_3,param_4);
    iVar6 = 0x1f8;
LAB_1006c28c:
    param_6 = *(uint *)(param_3 + iVar6);
  }
  else {
    if (0x30 < uVar1) {
      if (uVar1 != 0x40) {
        return param_2;
      }
      FUN_1006bf08(uVar2,param_3,param_4);
      iVar6 = 0x208;
      goto LAB_1006c28c;
    }
    puVar5 = (uint *)(param_3 + 0x204);
    if (*puVar5 == 0) {
      uStack_64 = FUN_100ee580(param_3,4,1);
      *puVar5 = uStack_64;
      local_58 = (uint)*(byte *)(param_3 + 0x1f2);
      uStack_54 = 0;
      local_5c = 0x410102;
      local_60 = 0xf;
      local_68 = 0x2036;
      local_70 = param_3;
      uStack_6c = param_4;
      FUN_100ef510(&local_70,0x20);
    }
    param_6 = *puVar5;
  }
  param_6 = param_6 | param_8 << 0x1f;
LAB_1006c294:
  *param_2 = param_6;
  return param_2;
}

