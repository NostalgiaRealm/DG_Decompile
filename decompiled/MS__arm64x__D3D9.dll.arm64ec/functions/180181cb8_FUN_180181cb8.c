/*
 * FUN_180181cb8 at 180181cb8
 * undefined FUN_180181cb8(void)
 * Address ranges: 180181cb8-180181d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180181cb8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x48b3) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180213760(param_2 + 0x20,4,1);
  }
  *(undefined4 *)(param_2 + 0x2c4) = uVar3;
  uVar4 = 0;
  lVar2 = param_2 + 0x2b4;
  do {
    if ((uint)uVar4 < (uint)*(byte *)(*(longlong *)(param_2 + 0x10) + 0x4886)) {
      uVar3 = FUN_180213760(param_2 + 0x20,4,1);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(lVar2 + (uVar4 & 0xffffffff) * 4) = uVar3;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)(byte)uVar1;
  } while ((uVar1 & 0xff) < 4);
  return;
}

