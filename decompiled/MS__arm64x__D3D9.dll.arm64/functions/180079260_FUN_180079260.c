/*
 * FUN_180079260 at 180079260
 * undefined FUN_180079260(void)
 * Address ranges: 180079260-1800794ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180079260(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  
  lVar4 = param_2 + 0x140;
  lVar3 = 0;
  do {
    uVar2 = FUN_1800f4370(param_2 + 0x20,*(undefined4 *)(lVar4 + lVar3 * 4));
    *(undefined4 *)(lVar4 + lVar3 * 4) = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  lVar4 = param_2 + 0x100;
  lVar3 = 0;
  do {
    if ((*(uint *)(lVar4 + lVar3 * 4) & 0x3f00) == 0) {
      uVar2 = FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(lVar4 + lVar3 * 4) = 0;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  if ((*(uint *)(param_2 + 0x238) & 0x3f00) == 0) {
    uVar2 = FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x238) = 0;
  }
  lVar4 = param_2 + 0x2b4;
  lVar3 = 0;
  do {
    if ((*(uint *)(lVar4 + lVar3 * 4) & 0x3f00) == 0) {
      uVar2 = FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(lVar4 + lVar3 * 4) = 0;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  if ((*(uint *)(param_2 + 0x2c4) & 0x3f00) == 0) {
    uVar2 = FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x2c4) = 0;
  }
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c);
  if (cVar1 == '\x01') {
    FUN_18006ebe8(uVar2,param_2,param_3);
  }
  else if (cVar1 == '\x02') {
    uVar2 = FUN_1800791b0(uVar2,param_2,param_3);
    uVar2 = FUN_18006f0c8(uVar2,param_2,param_3,*(undefined4 *)(param_2 + 0x208),
                          ~(uint)*(byte *)(*(longlong *)(param_2 + 0x10) + 0x444),2);
    uVar2 = FUN_18006f0c8(uVar2,param_2,param_3,*(undefined4 *)(param_2 + 0x20c),
                          ~(uint)*(byte *)(*(longlong *)(param_2 + 0x10) + 0x445),3);
    bVar5 = 0xe;
    if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x443) != '\0') {
      bVar5 = 0;
    }
    uVar2 = FUN_18006f0c8(uVar2,param_2,param_3,*(undefined4 *)(param_2 + 0x200),
                          bVar5 | *(char *)(*(longlong *)(param_2 + 0x10) + 0x442) == '\0',4);
    uVar6 = 0;
    lVar4 = param_2 + 0x210;
    do {
      uVar2 = FUN_18006f0c8(uVar2,param_2,param_3,*(undefined4 *)(lVar4 + (ulonglong)uVar6 * 4),
                            ~(uint)*(byte *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar6 +
                                            0x446),uVar6 + 5);
      if ((*(uint *)(lVar4 + (ulonglong)uVar6 * 4) & 0x3f00) == 0) {
        uVar2 = FUN_1800f4370(param_2 + 0x20);
        *(undefined4 *)(lVar4 + (ulonglong)uVar6 * 4) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    if ((*(uint *)(param_2 + 0x200) & 0x3f00) == 0) {
      FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x200) = 0;
    }
    if ((*(uint *)(param_2 + 0x204) & 0x3f00) == 0) {
      FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x204) = 0;
    }
    if ((*(uint *)(param_2 + 0x208) & 0x3f00) == 0) {
      FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x208) = 0;
    }
    if ((*(uint *)(param_2 + 0x20c) & 0x3f00) == 0) {
      FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20c) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    FUN_18006f160(uVar2,param_2,param_3);
  }
  return;
}

