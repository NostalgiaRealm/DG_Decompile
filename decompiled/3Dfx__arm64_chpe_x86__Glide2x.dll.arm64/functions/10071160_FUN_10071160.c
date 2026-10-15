/*
 * FUN_10071160 at 10071160
 * undefined FUN_10071160(void)
 * Address ranges: 10071160-100711bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10071160(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong extraout_x11;
  ulonglong uVar3;
  int extraout_w12;
  
  iVar2 = FUN_100702e0(param_1,param_2);
  uVar3 = extraout_x11;
  if (iVar2 != -1) {
    uVar1 = *(uint *)(extraout_w12 + iVar2 * 4 + 0x360);
    if (uVar1 == 0xffffffff || uVar1 <= param_3) {
      return 0;
    }
    uVar3 = (ulonglong)*(byte *)(iVar2 + (param_3 + 0x26) * 0x10 + extraout_w12);
  }
  return uVar3 & 0xffffffff;
}

