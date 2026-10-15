/*
 * FUN_100d8750 at 100d8750
 * undefined FUN_100d8750(void)
 * Address ranges: 100d8750-100d8803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d8750(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 < 0x10) {
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      iVar1 = param_1 + param_2 * 4;
      if (*(int *)(iVar1 + 0x5bdc) != param_3) {
        *(int *)(iVar1 + 0x5bdc) = param_3;
        *(undefined1 *)(param_1 + 0x5c3a) = 1;
      }
      uVar3 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(int *)(iVar1 + param_2 * 4 + 0x4f54) = param_3;
      pbVar2 = (byte *)((param_2 >> 3 & 3) + iVar1 + ((param_2 >> 5) + 0x2b13) * 4);
      *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
  }
  return uVar3;
}

