/*
 * FUN_1801ab3c8 at 1801ab3c8
 * undefined FUN_1801ab3c8(void)
 * Address ranges: 1801ab3c8-1801ab58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1801ab3c8(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  
  *(undefined1 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    uVar4 = FUN_1801bad48(&local_40);
    uVar1 = *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar4 * 4);
    uVar5 = 0x1688;
    if ((uVar4 - 0x24 & 0xfffffffa) == 0) {
      uVar5 = 0x1249;
    }
    cVar2 = FUN_1801a7528(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                          *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x34),1,local_40,uStack_3c,local_38,uVar1,uVar5,
                          0,local_30,1,1,0,0);
    *(char *)(param_1 + 400) = cVar2;
    if ((cVar2 != '\0') && (*(int *)(param_1 + 0x34) != 1)) {
      uVar3 = FUN_1801a7bc8(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),uStack_3c,0,uVar1);
      uVar4 = 0;
      *(undefined1 *)(param_1 + 400) = uVar3;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar7 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar7);
              uVar5 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
              thunk_FUN_180223c20(((ulonglong)(uVar7 + *(int *)(param_1 + 0x3c) * uVar4) << 5 | 0x10
                                  ) + *(longlong *)(param_1 + 0x164),0,0,uVar5);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x30));
          }
          uVar7 = *(uint *)(param_1 + 0x34);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
      }
      if (*(char *)(param_1 + 400) == '\0') {
        FUN_1801a7d98(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30),uVar7);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar6 = FUN_1802229a8(0x400);
      *(longlong *)(param_1 + 0x10) = lVar6;
      if (lVar6 == 0) goto LAB_1801ab574;
    }
    uVar3 = FUN_1801ab078(param_1,1,0);
    *(undefined1 *)(param_1 + 400) = uVar3;
  }
LAB_1801ab574:
  return *(undefined1 *)(param_1 + 400);
}

