/*
 * FUN_1800c0934 at 1800c0934
 * undefined4 __fastcall FUN_1800c0934(longlong param_1, undefined4 * param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1800c0934-1800c099d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c0934(longlong param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar2 = FUN_1800b1f90(*(longlong *)(param_1 + 0x18),param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_1800c08a0(param_1);
    if (param_3 != 0) {
      if (param_3 < uVar1) {
        return 0x80004005;
      }
      puVar4 = (undefined4 *)(param_1 + 0x38);
      for (uVar3 = (ulonglong)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

