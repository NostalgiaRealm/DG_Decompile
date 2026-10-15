/*
 * FUN_180082858 at 180082858
 * undefined FUN_180082858(void)
 * Address ranges: 180082858-1800828a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180082858(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar1 = uVar4 + uVar5 >> 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar2 * 0x18);
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) {
          return uVar2;
        }
        uVar5 = uVar1 + 1;
        uVar2 = (ulonglong)(uVar1 + 1);
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
    } while (uVar4 != uVar5);
  }
  return uVar2;
}

