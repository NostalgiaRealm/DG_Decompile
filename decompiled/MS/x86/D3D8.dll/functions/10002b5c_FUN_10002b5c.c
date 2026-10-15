/*
 * FUN_10002b5c at 10002b5c
 * uint __stdcall FUN_10002b5c(int param_1, int param_2, int param_3, undefined4 param_4, uint param_5, undefined4 param_6, uint param_7)
 * Address ranges: 10002b5c-10002c4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10002b5c(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int extraout_ECX;
  void *this;
  void *this_00;
  uint extraout_EDX;
  uint uVar6;
  
  uVar3 = FUN_100025de(param_2);
  if ((char)uVar3 == '\0') {
    return 0x8876086c;
  }
  if (0x10 < (int)param_5) {
    return 0x8876086c;
  }
  uVar3 = FUN_100025f2(this_00,extraout_ECX);
  if ((char)uVar3 == '\0') {
    return 0x8876086b;
  }
  uVar6 = param_7 & 0xff ^ 1 | 0x8876086a;
  puVar4 = FUN_100031b7(this,param_2);
  uVar5 = FUN_10002220(param_3);
  uVar5 = FUN_10002709(*(byte **)(puVar4 + 0xd4),uVar5);
  if (((char)uVar5 == '\0') &&
     (uVar5 = FUN_10002709(*(byte **)(puVar4 + 0xdc),extraout_EDX), (char)uVar5 == '\0')) {
    return uVar6;
  }
  if (param_5 != 0) {
    if (*(int *)(DAT_100ba2b4 + 2000) != 0) {
      return uVar6;
    }
    cVar1 = puVar4[0xec];
    iVar2 = 0;
    while( true ) {
      if (cVar1 == '\0') {
        return uVar6;
      }
      if (puVar4[iVar2 + 0xec] == (char)param_5) break;
      cVar1 = puVar4[iVar2 + 0xed];
      iVar2 = iVar2 + 1;
    }
    uVar5 = 0;
    if (*(uint *)(&DAT_100ba93c + param_1 * 0x228) == 0) {
      return uVar6;
    }
    while (*(uint *)(*(int *)(&DAT_100ba938 + param_1 * 0x228) + uVar5 * 4) != (param_5 & 0xff)) {
      uVar5 = uVar5 + 1;
      if (*(uint *)(&DAT_100ba93c + param_1 * 0x228) <= uVar5) {
        return uVar6;
      }
    }
  }
  return 0;
}

