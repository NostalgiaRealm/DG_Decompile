/*
 * FUN_18006ee30 at 18006ee30
 * undefined FUN_18006ee30(void)
 * Address ranges: 18006ee30-18006eebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006ee30(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x48b3) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800f42d0(param_2 + 0x20,4,1);
  }
  *(undefined4 *)(param_2 + 0x2c4) = uVar2;
  uVar5 = 0;
  lVar3 = param_2 + 0x2b4;
  lVar4 = 0x4886;
  do {
    if ((uint)uVar5 < (uint)*(byte *)(*(longlong *)(param_2 + 0x10) + lVar4)) {
      uVar2 = FUN_1800f42d0(param_2 + 0x20,4,1);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(lVar3 + (uVar5 & 0xffffffff) * 4) = uVar2;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulonglong)(byte)uVar1;
  } while ((uVar1 & 0xff) < 4);
  return;
}

