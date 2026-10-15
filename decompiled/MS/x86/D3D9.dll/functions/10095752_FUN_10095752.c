/*
 * FUN_10095752 at 10095752
 * undefined4 __stdcall FUN_10095752(int param_1, uint param_2, int param_3)
 * Address ranges: 10095752-100957bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10095752(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 < 0x10) {
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      if (*(int *)(param_1 + 0x5bdc + param_2 * 4) != param_3) {
        *(int *)(param_1 + 0x5bdc + param_2 * 4) = param_3;
        *(undefined1 *)(param_1 + 0x5c3a) = 1;
      }
      uVar3 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(int *)(iVar1 + 0x4f54 + param_2 * 4) = param_3;
      pbVar2 = (byte *)(iVar1 + 0xac4c + (param_2 >> 5) * 4 + ((int)(param_2 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
    }
  }
  return uVar3;
}

