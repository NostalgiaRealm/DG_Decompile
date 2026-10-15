/*
 * FUN_1007f0eb at 1007f0eb
 * undefined4 __stdcall FUN_1007f0eb(int param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 1007f0eb-1007f1a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f0eb(int param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  char local_135;
  uint local_134;
  int local_130 [73];
  byte local_a;
  
  if ((param_2 != (byte *)0x0) && (param_3 != (undefined4 *)0x0)) {
    FUN_10003838(&local_135,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    local_134 = 0;
    uVar1 = FUN_10011cdf((int *)param_2,local_130,(int *)&local_134);
    cVar3 = '\0';
    if (local_a <= *(byte *)(*(int *)(param_1 + 0x14) + 0xcc)) {
      cVar3 = (char)uVar1;
    }
    if ((cVar3 != '\0') &&
       (puVar2 = (undefined4 *)FUN_10080370((void *)(param_1 + 0x3c),param_2,local_134,local_130),
       puVar2 != (undefined4 *)0x0)) {
      *param_3 = *puVar2;
      FUN_10003881(&local_135);
      return 0;
    }
    FUN_10003881(&local_135);
  }
  return 0x8876086c;
}

