/*
 * FUN_18002f128 at 18002f128
 * undefined8 __fastcall FUN_18002f128(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18002f128-18002f381
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002f128(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  
  if (*(ulonglong *)(param_1 + 0x28) == *(ulonglong *)(param_1 + 0x48)) {
    uVar8 = *(ulonglong *)(param_1 + 0x48) & 0xffffffffffffff00;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1508) + 0xb78);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(longlong *)(lVar2 + 0x1500) + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1508) + 0xb78);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(longlong *)(lVar2 + 0x1500) + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
    }
    bVar4 = FUN_1800193e0(*(longlong *)(param_1 + 0x60));
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x48);
    FUN_18001a1d0(*(longlong *)(param_1 + 0x60),*(longlong *)(param_1 + 0x90),0x3c,
                  *(longlong *)(param_1 + 0x98),0x2a);
    FUN_18001946c(*(longlong *)(param_1 + 0x60));
    lVar9 = *(longlong *)(param_1 + 0x60);
    if (((*(char *)(lVar9 + 0x3170) != '\0') || (*(char *)(param_1 + 0x38) != '\0')) ||
       (plVar6 = *(longlong **)(param_1 + 0xa0), plVar6 == (longlong *)0x0)) {
      plVar6 = FUN_180030498(param_1 + 0xa8,lVar9 + 0x2bf0,*(uint *)(lVar9 + 0x32d0));
      lVar9 = *(longlong *)(param_1 + 0x60);
      *(longlong **)(param_1 + 0xa0) = plVar6;
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = *(longlong **)
                  (param_1 + 0x68 +
                  (longlong)*(int *)(&DAT_180060eb0 + (ulonglong)*(uint *)(lVar9 + 0x32d0) * 4) * 8)
        ;
      }
    }
    FUN_180019780(lVar9,*(int *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x88),
                  *(undefined8 *)(param_1 + 0x80),plVar6);
    iVar10 = 0;
    do {
      cVar5 = FUN_180022da4(*(longlong *)(param_1 + 0x60),iVar10);
      FUN_180019d78(*(longlong *)(param_1 + 0x60),bVar4);
      FUN_1800197c8(*(longlong *)(param_1 + 0x60));
      FUN_180019b00(*(longlong *)(param_1 + 0x60),bVar4,'\x01');
      FUN_18001a090(*(longlong *)(param_1 + 0x60),bVar4);
      FUN_18001a258(*(longlong *)(param_1 + 0x60),bVar4);
      FUN_180048c08(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x1508),
                    (int)(lVar3 - lVar2 >> 2),1,(int)(lVar2 - lVar1 >> 2),0,0);
      iVar10 = iVar10 + 1;
    } while (cVar5 != '\0');
    FUN_18001a2fc(*(longlong *)(param_1 + 0x60));
    FUN_180035eb0(param_1);
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    uVar7 = FUN_18002f074(param_1,param_2,param_3);
    uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  return uVar8;
}

