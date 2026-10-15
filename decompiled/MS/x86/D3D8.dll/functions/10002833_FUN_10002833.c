/*
 * FUN_10002833 at 10002833
 * int __thiscall FUN_10002833(void * this, undefined4 param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, int param_7, byte param_8)
 * Address ranges: 10002833-10002b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10002833(void *this,undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,
            int param_6,int param_7,byte param_8)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int extraout_ECX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  bool bVar9;
  
  uVar4 = FUN_100025f2(this,param_2);
  if ((char)uVar4 == '\0') {
    return -0x7789f794;
  }
  if ((((((param_6 != 1) && (param_6 != 2)) && (param_6 != 3)) && ((param_6 != 4 && (param_6 != 5)))
       ) && (param_6 != 6)) && (param_6 != 7)) {
    return -0x7789f794;
  }
  cVar3 = FUN_10002652(param_5,param_6);
  if (cVar3 == '\0') {
    return -0x7789f794;
  }
  if (((param_4 != 0) && (param_4 != 1)) && ((param_4 != 2 && (param_4 != 3)))) {
    return -0x7789f794;
  }
  iVar1 = (uint)(param_8 ^ 1) * 2 + -0x7789f796;
  uVar5 = FUN_1000263b(param_3);
  if ((char)uVar5 == '\0') {
    return iVar1;
  }
  uVar5 = FUN_10002220(extraout_ECX);
  uVar5 = FUN_10002709((&PTR_DAT_100b73b0)[*(int *)((int)this + 8) * 0x4d],uVar5);
  if ((char)uVar5 == '\0') {
    return iVar1;
  }
  FUN_10002220(param_7);
  puVar6 = FUN_100031b7(this,param_2);
  if (param_6 == 1) {
    if (param_4 != 3) {
      iVar7 = 0xdc;
      if ((param_5 & 2) == 0) {
        iVar7 = 0xd4;
      }
      uVar5 = FUN_10002709(*(byte **)(puVar6 + iVar7),extraout_EDX);
      cVar3 = (char)uVar5;
      uVar5 = extraout_EDX_02;
      if (((cVar3 == '\0') && (param_4 == 2)) && ((param_5 & 2) == 0)) {
        uVar5 = FUN_10002709(*(byte **)(puVar6 + 0xd8),extraout_EDX_02);
        cVar3 = (char)uVar5;
        uVar5 = extraout_EDX_03;
      }
      if (cVar3 == '\0') {
        return iVar1;
      }
      if ((param_5 & 1) != 0) {
        uVar8 = 0;
        while (uVar5 != (&DAT_100b159c)[uVar8]) {
          uVar8 = uVar8 + 1;
          if (0xd < uVar8) {
            return iVar1;
          }
        }
      }
      if ((param_7 != 0x14) && (uVar5 != 0)) {
        return 0;
      }
      if (param_4 != 2) {
        return iVar1;
      }
      bVar9 = param_5 == 0;
      goto LAB_10002972;
    }
    if (param_5 != 0) {
      return iVar1;
    }
    iVar7 = FUN_10002344(param_7);
    if (0 < iVar7) {
      return 0;
    }
    goto LAB_10002b45;
  }
  if (param_6 == 2) {
LAB_10002a9a:
    if (param_4 != 3) {
      if (param_7 == 0x14) {
        return iVar1;
      }
      uVar5 = FUN_10002709(*(byte **)(puVar6 + 0xe0),extraout_EDX);
      if ((char)uVar5 == '\0') {
        return iVar1;
      }
      return 0;
    }
  }
  else {
    if (param_6 != 3) {
      if (param_6 == 4) goto LAB_10002a9a;
      if (param_6 != 5) {
        if (param_6 == 6) {
          if (param_7 != 100) {
            return iVar1;
          }
        }
        else {
          if (param_6 != 7) {
            return iVar1;
          }
          if ((param_7 != 0x65) && (param_7 != 0x66)) {
            return iVar1;
          }
        }
        if ((param_4 == 3) && (param_5 != 0)) {
          return iVar1;
        }
        if (param_4 != 1) {
          return 0;
        }
        bVar9 = (param_5 & 0x200) == 0;
        goto LAB_10002972;
      }
    }
    if (param_4 != 3) {
      if ((param_7 == 0x46) ||
         ((param_7 == 0x14 && (((param_4 != 2 && (param_4 != 1)) || (param_5 != 0)))))) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((param_5 & 0x202) == 0x202 || (param_5 & 0x201) == 0x201) {
        return iVar1;
      }
      if (!bVar9) {
        return iVar1;
      }
      uVar5 = FUN_10002709(*(byte **)(puVar6 + 0xd8),extraout_EDX);
      if (((char)uVar5 == '\0') || (bVar9 = true, (param_5 & 2) != 0)) {
        bVar9 = false;
      }
      uVar5 = FUN_10002709(*(byte **)(puVar6 + 0xe4),extraout_EDX_00);
      if (((char)uVar5 == '\0') || (bVar2 = true, (param_5 & 1) != 0)) {
        bVar2 = false;
      }
      if (!bVar9) {
        if (param_6 != 3) {
          return iVar1;
        }
        if (!bVar2) {
          return iVar1;
        }
      }
      if ((param_5 & 3) == 0) {
        return 0;
      }
      uVar5 = 0;
      while (extraout_EDX_01 != (&DAT_100b159c)[uVar5]) {
        uVar5 = uVar5 + 1;
        if (0xd < uVar5) {
          return iVar1;
        }
      }
      if (param_4 == 0) {
        return 0;
      }
      if (param_2 != 3) {
        return iVar1;
      }
      bVar9 = param_4 == 2;
LAB_10002972:
      if (bVar9) {
        return 0;
      }
      return iVar1;
    }
  }
  if (param_5 != 0) {
    return iVar1;
  }
  iVar7 = FUN_10002344(param_7);
  if (iVar7 != -1) {
    return 0;
  }
LAB_10002b45:
  iVar7 = FUN_1000245c(param_7);
  if (0 < iVar7) {
    return 0;
  }
  return iVar1;
}

