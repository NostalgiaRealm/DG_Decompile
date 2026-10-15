/*
 * FUN_100029a5 at 100029a5
 * int __thiscall FUN_100029a5(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, int param_7, undefined * param_8)
 * Address ranges: 100029a5-10002e5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100029a5(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7,undefined *param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  int iVar8;
  undefined *puVar9;
  
  uVar4 = param_5 & 0xffc07fff;
  if ((byte)param_8 == '\0') {
    uVar4 = param_5;
  }
  uVar3 = FUN_100026d2(this,param_2);
  if ((char)uVar3 == '\0') {
    return -0x7789f794;
  }
  if ((((((param_6 != 1) && (param_6 != 2)) && (param_6 != 3)) && ((param_6 != 4 && (param_6 != 5)))
       ) && (param_6 != 6)) && (param_6 != 7)) {
    return -0x7789f794;
  }
  cVar2 = FUN_10002732(uVar4,param_6);
  if (cVar2 == '\0') {
    return -0x7789f794;
  }
  if (((param_4 != 0) && (param_4 != 1)) && ((param_4 != 2 && (param_4 != 3)))) {
    return -0x7789f794;
  }
  iVar8 = (uint)((byte)param_8 ^ 1) * 2 + -0x7789f796;
  uVar4 = FUN_1000271b(param_3);
  if ((char)uVar4 == '\0') {
    return iVar8;
  }
  cVar2 = FUN_1000347d(this,extraout_ECX);
  if (cVar2 == '\0') {
    return iVar8;
  }
  FUN_100020ae(param_7);
  puVar5 = FUN_100035d8(this,param_2);
  param_8 = puVar5;
  if (param_6 == 1) {
    if (param_4 != 3) {
      iVar6 = 0x138;
      if ((param_5 & 2) == 0) {
        iVar6 = 0x130;
      }
      uVar4 = FUN_1000285a(*(byte **)(puVar5 + iVar6),extraout_EDX);
      cVar2 = (char)uVar4;
      uVar4 = extraout_EDX_03;
      if (((cVar2 == '\0') && (param_4 == 2)) && ((param_5 & 2) == 0)) {
        uVar4 = FUN_1000285a(*(byte **)(puVar5 + 0x134),extraout_EDX_03);
        cVar2 = (char)uVar4;
        uVar4 = extraout_EDX_04;
      }
      param_6 = iVar8;
      if (cVar2 != '\0') {
        if ((param_5 & 1) == 0) {
LAB_10002d7c:
          if (((param_7 != 0x14) && (uVar4 != 0)) || ((param_4 == 2 && (param_5 == 0)))) {
            param_6 = 0;
          }
        }
        else {
          uVar7 = 0;
          do {
            if (uVar4 == (&DAT_100d48b0)[uVar7]) goto LAB_10002d7c;
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x1c);
        }
      }
      if (((param_5 & 0x3f8000) != 0) && ((param_5 & 0x3f8000) != 0x80000)) {
        param_6 = -0x7789f796;
      }
      puVar9 = puVar5;
      if ((*(int *)(puVar5 + 0x160) != 0) && (puVar9 = param_8, *(int *)(puVar5 + 0x160) != 0x10de))
      {
        return param_6;
      }
      if ((param_7 == 0x434f5441) && (puVar9[0x15d] != '\0')) {
        return 0;
      }
      if (param_7 != 0x41415353) {
        return param_6;
      }
      if (param_8[0x15e] != '\0') {
        if ((int *)(&DAT_100df2f0)[param_1 * 0x8a] == (int *)0x0) {
          iVar8 = (**(code **)(*DAT_100dea70 + 0x28))((&DAT_100df2f8)[param_1 * 0x8a]);
          cVar2 = 1 < iVar8;
        }
        else {
          iVar8 = (**(code **)(*(int *)(&DAT_100df2f0)[param_1 * 0x8a] + 0xc))((int)&param_8 + 2);
          cVar2 = *(char *)(iVar8 + 1);
        }
        if (cVar2 != '\0') {
          return 0;
        }
        return param_6;
      }
      return param_6;
    }
    if (param_5 != 0) {
      return iVar8;
    }
    iVar6 = FUN_10002297(param_7);
    if (0 < iVar6) {
      return 0;
    }
    goto LAB_10002e48;
  }
  if (param_6 == 2) {
LAB_10002c80:
    if (param_4 == 3) goto LAB_10002c62;
    uVar4 = extraout_EDX;
    iVar6 = iVar8;
    if (param_7 != 0x14) {
      uVar7 = FUN_1000285a(*(byte **)(puVar5 + 0x13c),extraout_EDX);
      uVar4 = extraout_EDX_02;
      iVar6 = 0;
      if ((char)uVar7 == '\0') {
        iVar6 = iVar8;
      }
    }
    iVar8 = iVar6;
    if (iVar8 < 0) {
      return iVar8;
    }
    if ((param_5 & 0x400) != 0) {
      return 0x876086f;
    }
    uVar7 = param_5 & 0x3f8000;
    if (uVar7 == 0x8000) {
      return -0x7789f796;
    }
    if (uVar7 == 0x10000) goto LAB_10002d06;
    if (uVar7 == 0x40000) goto LAB_10002c4e;
    if (uVar7 == 0x80000) {
      return -0x7789f796;
    }
  }
  else {
    if (param_6 != 3) {
      if (param_6 == 4) goto LAB_10002c80;
      if (param_6 != 5) {
        if (param_6 == 6) {
          if (param_7 != 100) {
            return iVar8;
          }
          if (((param_4 != 3) || (param_5 == 0)) && ((param_4 != 1 || ((param_5 & 0x200) == 0)))) {
            iVar8 = 0;
          }
          if ((param_5 & 0x3f8000) != 0) {
            return -0x7789f796;
          }
          return iVar8;
        }
        if (param_6 != 7) {
          return iVar8;
        }
        if ((param_7 != 0x65) && (param_7 != 0x66)) {
          return iVar8;
        }
        if (((param_4 != 3) || (param_5 == 0)) && ((param_4 != 1 || ((param_5 & 0x200) == 0)))) {
          iVar8 = 0;
        }
        if ((param_5 & 0x3f8000) != 0) {
          return -0x7789f796;
        }
        return iVar8;
      }
    }
    if (param_4 == 3) {
LAB_10002c62:
      if (param_5 != 0) {
        return iVar8;
      }
      iVar6 = FUN_10002297(param_7);
      if (iVar6 != -1) {
        return 0;
      }
LAB_10002e48:
      iVar6 = FUN_10002447(param_7);
      if (0 < iVar6) {
        return 0;
      }
      return iVar8;
    }
    if ((param_7 == 0x46) ||
       ((param_7 == 0x14 && (((param_4 != 2 && (param_4 != 1)) || (param_5 != 0)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_5 & 0x201) == 0x201 || (param_5 & 0x202) == 0x202) {
      return iVar8;
    }
    if (!bVar1) {
      return iVar8;
    }
    uVar4 = FUN_1000285a(*(byte **)(puVar5 + 0x134),extraout_EDX);
    if ((char)uVar4 == '\0') {
LAB_10002ba9:
      param_8 = (undefined *)((uint)param_8 & 0xffffff);
    }
    else {
      param_8 = (undefined *)CONCAT13(1,param_8._0_3_);
      if ((param_5 & 2) != 0) goto LAB_10002ba9;
    }
    uVar4 = FUN_1000285a(*(byte **)(puVar5 + 0x140),extraout_EDX_00);
    if (((char)uVar4 == '\0') || (bVar1 = true, (param_5 & 1) != 0)) {
      bVar1 = false;
    }
    if ((param_8._3_1_ != '\0') || ((param_6 == 3 && (bVar1)))) {
      if ((param_5 & 3) != 0) {
        uVar4 = 0;
        do {
          if (extraout_EDX_01 == (&DAT_100d48b0)[uVar4]) {
            if ((param_4 == 0) || ((param_2 == 3 && (param_4 == 2)))) {
              iVar8 = 0;
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x1c);
        goto LAB_10002c07;
      }
      iVar8 = 0;
    }
    else {
LAB_10002c07:
      if (iVar8 < 0) {
        return iVar8;
      }
    }
    if ((param_5 & 0x400) != 0) {
      return iVar8;
    }
    uVar4 = extraout_EDX_01;
    if ((param_5 & 0x3f8000) == 0x10000) {
LAB_10002d06:
      uVar3 = FUN_1000266b(uVar4);
      cVar2 = (char)uVar3;
      goto LAB_10002c55;
    }
    if ((param_5 & 0x3f8000) == 0x40000) {
LAB_10002c4e:
      uVar3 = FUN_10002685(uVar4);
      cVar2 = (char)uVar3;
      goto LAB_10002c55;
    }
  }
  if ((param_5 & 0x3f8000) != 0x100000) {
    return iVar8;
  }
  uVar3 = FUN_1000269f(uVar4);
  cVar2 = (char)uVar3;
LAB_10002c55:
  if (cVar2 == '\0') {
    return -0x7789f796;
  }
  return iVar8;
}

