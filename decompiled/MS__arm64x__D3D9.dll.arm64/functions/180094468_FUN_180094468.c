/*
 * FUN_180094468 at 180094468
 * undefined FUN_180094468(void)
 * Address ranges: 180094468-18009463b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180094468(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  
  *(undefined1 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    uVar4 = func_0x0001801bad48(&local_50);
    uVar1 = *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar4 * 4);
    uVar5 = 0x1688;
    if ((uVar4 - 0x24 & 0xfffffffa) == 0) {
      uVar5 = 0x1249;
    }
    cVar2 = FUN_180090aa8(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                          *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x34),1,local_50,uStack_4c,local_48,uVar1,uVar5,
                          0,local_40,1,1,0,0);
    *(char *)(param_1 + 400) = cVar2;
    if ((cVar2 != '\0') && (*(int *)(param_1 + 0x34) != 1)) {
      uVar3 = FUN_180091088(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),uStack_4c,0,uVar1);
      uVar4 = 0;
      *(undefined1 *)(param_1 + 400) = uVar3;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar7 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1800a2b98(param_1,*(undefined4 *)(param_1 + 0x28),uVar7);
              uVar5 = FUN_1800a2b50(param_1,*(undefined4 *)(param_1 + 0x24));
              (*__imp_USER32_dll_SetRect)
                        (((ulonglong)(uVar7 + *(int *)(param_1 + 0x3c) * uVar4) << 5 | 0x10) +
                         *(longlong *)(param_1 + 0x164),0,0,uVar5);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x30));
          }
          uVar7 = *(uint *)(param_1 + 0x34);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
      }
      if (*(char *)(param_1 + 400) == '\0') {
        FUN_180091218(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30),uVar7);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar6 = thunk_FUN_180102f80(0x400);
      *(longlong *)(param_1 + 0x10) = lVar6;
      if (lVar6 == 0) goto LAB_180094620;
    }
    uVar3 = FUN_180094100(param_1,1,0);
    *(undefined1 *)(param_1 + 400) = uVar3;
  }
LAB_180094620:
  return *(undefined1 *)(param_1 + 400);
}

