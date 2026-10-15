/*
 * FUN_180021ac4 at 180021ac4
 * undefined8 __fastcall FUN_180021ac4(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180021ac4-180021d8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180021ac4(longlong param_1,byte param_2,byte param_3)

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
  
  if (*(ulonglong *)(param_1 + 0x248) == *(ulonglong *)(param_1 + 0x268)) {
    uVar8 = *(ulonglong *)(param_1 + 0x268) & 0xffffffffffffff00;
  }
  else {
    FUN_1800288dc(*(longlong *)(param_1 + 0x280));
    FUN_180014ee4(*(longlong **)(param_1 + 0x280),-1);
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1508) + 0xb78);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(longlong *)(lVar2 + 0x1500) + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    lVar1 = *(longlong *)(param_1 + 0x2c8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1508) + 0xb78);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(longlong *)(lVar2 + 0x1500) + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    if (*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
    }
    bVar4 = FUN_18000c348(*(longlong *)(param_1 + 0x280));
    lVar1 = *(longlong *)(param_1 + 0x240);
    lVar2 = *(longlong *)(param_1 + 0x248);
    lVar3 = *(longlong *)(param_1 + 0x268);
    FUN_18000d13c(*(longlong *)(param_1 + 0x280),*(longlong *)(param_1 + 0x2c0),0x50,
                  *(longlong *)(param_1 + 0x2c8),0x2a);
    FUN_18000c3d4(*(longlong *)(param_1 + 0x280));
    lVar9 = *(longlong *)(param_1 + 0x280);
    if (((*(char *)(lVar9 + 0x32f0) != '\0') || (*(char *)(param_1 + 600) != '\0')) ||
       (plVar6 = *(longlong **)(param_1 + 0x2d0), plVar6 == (longlong *)0x0)) {
      plVar6 = FUN_180022ef0(param_1 + 0x2d8,lVar9 + 0x2c90,*(uint *)(lVar9 + 0x3450));
      lVar9 = *(longlong *)(param_1 + 0x280);
      *(longlong **)(param_1 + 0x2d0) = plVar6;
      *(undefined1 *)(param_1 + 600) = 0;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = *(longlong **)
                  (param_1 + 0x288 +
                  (longlong)*(int *)(&DAT_180062bd8 + (ulonglong)*(uint *)(lVar9 + 0x3450) * 4) * 8)
        ;
      }
    }
    FUN_18000c6e8(lVar9,*(int *)(param_1 + 0x274),
                  *(undefined8 *)(param_1 + 0x2b0 + (ulonglong)*(uint *)(param_1 + 0x168) * 8),
                  *(undefined8 *)(param_1 + 0x2a0 + (ulonglong)*(uint *)(param_1 + 0x168) * 8),
                  plVar6);
    iVar10 = 0;
    do {
      cVar5 = FUN_1800118d4(*(longlong *)(param_1 + 0x280),iVar10);
      FUN_18000cce0(*(longlong *)(param_1 + 0x280),bVar4);
      FUN_18000c730(*(longlong *)(param_1 + 0x280));
      FUN_18000ca68(*(longlong *)(param_1 + 0x280),bVar4,'\x01');
      FUN_18000d004(*(longlong *)(param_1 + 0x280),bVar4);
      FUN_18000d1c4(*(longlong *)(param_1 + 0x280),bVar4);
      FUN_18004b214(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 0x1508),
                    (int)(lVar3 - lVar2 >> 2),1,(int)(lVar2 - lVar1 >> 2),0,0);
      iVar10 = iVar10 + 1;
    } while (cVar5 != '\0');
    FUN_18000d268(*(longlong *)(param_1 + 0x280));
    FUN_1800127e0(param_1);
    *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
    uVar7 = FUN_180021a10(param_1,param_2,param_3);
    uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  return uVar8;
}

