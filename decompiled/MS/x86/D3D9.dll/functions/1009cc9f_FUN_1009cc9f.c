/*
 * FUN_1009cc9f at 1009cc9f
 * undefined4 __stdcall FUN_1009cc9f(int param_1, undefined4 * param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1009cc9f-1009ccef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009cc9f(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar3 = FUN_1009383f(*(void **)(param_1 + 0x10),param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_1009cc25(param_1);
    if (param_3 != 0) {
      if (param_3 < uVar1) {
        return 0x80004005;
      }
      puVar2 = (undefined4 *)(param_1 + 0x20);
      for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

