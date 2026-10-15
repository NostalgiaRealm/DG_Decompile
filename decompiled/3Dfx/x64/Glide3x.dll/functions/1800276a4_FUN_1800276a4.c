/*
 * FUN_1800276a4 at 1800276a4
 * undefined8 __fastcall FUN_1800276a4(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800276a4-180027877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800276a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 extraout_RAX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (*(ulonglong *)(param_1 + 0x248) == *(ulonglong *)(param_1 + 0x268)) {
    uVar7 = *(ulonglong *)(param_1 + 0x268) & 0xffffffffffffff00;
  }
  else {
    FUN_18000fd5c(*(longlong *)(param_1 + 0x280),param_2,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x240);
    lVar2 = *(longlong *)(param_1 + 0x248);
    lVar3 = *(longlong *)(param_1 + 0x268);
    FUN_1800288dc(*(longlong *)(param_1 + 0x280));
    FUN_180014ee4(*(longlong **)(param_1 + 0x280),-1);
    FUN_180027650(param_1);
    FUN_18000efc4(*(longlong *)(param_1 + 0x280));
    lVar10 = *(longlong *)(param_1 + 0x280);
    if (((*(char *)(lVar10 + 0x32f0) != '\0') || (*(char *)(param_1 + 600) != '\0')) ||
       (lVar6 = *(longlong *)(param_1 + 0x2d0), lVar6 == 0)) {
      lVar6 = FUN_1800278f0(param_1 + 0x2d8,lVar10 + 0x2c90,*(uint *)(lVar10 + 0x2a0));
      lVar10 = *(longlong *)(param_1 + 0x280);
      *(longlong *)(param_1 + 0x2d0) = lVar6;
      *(undefined1 *)(param_1 + 600) = 0;
      if (lVar6 == 0) {
        lVar6 = *(longlong *)
                 (param_1 + 0x288 +
                 (longlong)*(int *)(&DAT_180062d70 + (ulonglong)*(uint *)(lVar10 + 0x2a0) * 4) * 8);
      }
    }
    uVar7 = *(ulonglong *)(param_1 + 0x2a0 + (ulonglong)*(uint *)(param_1 + 0x168) * 8);
    uVar9 = *(ulonglong *)(param_1 + 0x2b0 + (ulonglong)*(uint *)(param_1 + 0x168) * 8);
    FUN_18000ef08(lVar10,*(int *)(param_1 + 0x274),uVar9,uVar7,lVar6);
    uVar11 = 0;
    do {
      uVar8 = (ulonglong)uVar11;
      cVar5 = FUN_1800118d4(*(longlong *)(param_1 + 0x280),uVar11);
      FUN_18000ec54(*(longlong *)(param_1 + 0x280),uVar8,uVar9,uVar7);
      FUN_18000ea30(*(longlong *)(param_1 + 0x280));
      uVar7 = 0;
      uVar9 = lVar2 - lVar1 >> 2 & 0xffffffff;
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
      (**(code **)(*plVar4 + 0x60))(plVar4,lVar3 - lVar2 >> 2 & 0xffffffff);
      uVar11 = uVar11 + 1;
    } while (cVar5 != '\0');
    FUN_1800127e0(param_1);
    *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
    FUN_180027564(param_1,(byte)param_2,(byte)param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330) + 0x620))
    ;
    uVar7 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  return uVar7;
}

