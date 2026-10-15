/*
 * FUN_1001bcf0 at 1001bcf0
 * undefined FUN_1001bcf0(void)
 * Address ranges: 1001bcf0-1001bdf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1001bcf0(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = (char *)(param_1 + 0x3e);
  if (*pcVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    iVar3 = FUN_10005e98();
    *(int *)(param_1 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      iVar3 = FUN_10005e98();
      if (iVar3 != 0) {
        uRam1009f788 = *(undefined8 *)(iVar3 + 0xa4);
        _DAT_1009f780 = *(undefined8 *)(iVar3 + 0x9c);
        DAT_1009f790 = *(undefined8 *)(iVar3 + 0xac);
        FUN_100068a0(iVar3);
      }
      piVar2 = (int *)(param_1 + 0x5c);
      piVar2[0] = 0;
      piVar2[1] = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x6c) = 0xffffffff00000000;
      *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
      iVar3 = FUN_1007a040(0x31000);
      *piVar2 = iVar3;
      if (iVar3 == 0) {
        FUN_10079ff0(0,0xc4);
        *piVar2 = 0;
      }
      else {
        FUN_1007a7b0(iVar3,0,0x31000);
      }
      *pcVar1 = '\x01';
    }
  }
  return *pcVar1;
}

