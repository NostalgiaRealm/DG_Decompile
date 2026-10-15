/*
 * FUN_1003d680 at 1003d680
 * undefined FUN_1003d680(void)
 * Address ranges: 1003d680-1003d83f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1003d680(undefined8 param_1,uint *param_2,int param_3,undefined4 param_4,
                   undefined8 param_5,uint param_6,ushort param_7,uint param_8)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = (ulonglong)param_7;
  uVar2 = FUN_1003d4c8(param_1,param_3);
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
    goto LAB_1003d828;
  }
  if (uVar1 < 0x30) {
    if (uVar1 != 0x10) {
      if (uVar1 != 0x20) {
        return param_2;
      }
      puVar5 = (uint *)(param_3 + 0x1fc);
      param_6 = *puVar5;
      if (param_6 == 0) {
        param_6 = FUN_10079948(param_3,4,1);
        *puVar5 = param_6;
      }
      param_6 = param_6 | param_8 << 0x1f;
      goto LAB_1003d828;
    }
    FUN_1003d530(uVar2,param_3,param_4);
    param_6 = *(uint *)(param_3 + 0x1f8);
  }
  else if (uVar1 < 0x31) {
    puVar5 = (uint *)(param_3 + 0x204);
    param_6 = *puVar5;
    if (param_6 == 0) {
      param_6 = 0x410102;
LAB_1003d7ac:
      *puVar5 = param_6;
    }
  }
  else {
    if (uVar1 != 0x40) {
      return param_2;
    }
    puVar5 = (uint *)(param_3 + 0x208);
    param_6 = *puVar5;
    if (param_6 == 0) {
      param_6 = 0x410103;
      goto LAB_1003d7ac;
    }
  }
  param_6 = param_6 | param_8 << 0x1f;
LAB_1003d828:
  *param_2 = param_6;
  return param_2;
}

