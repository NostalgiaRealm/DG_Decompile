/*
 * FUN_1000b5c0 at 1000b5c0
 * undefined FUN_1000b5c0(void)
 * Address ranges: 1000b5c0-1000b67b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1000b5c0(int param_1)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)(param_1 + 0x3e);
  if (*pcVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    iVar2 = FUN_100076f8();
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_100076f8();
      if (iVar2 != 0) {
        uRam100aaa38 = *(undefined8 *)(iVar2 + 0xa4);
        _DAT_100aaa30 = *(undefined8 *)(iVar2 + 0x9c);
        DAT_100aaa40 = *(undefined8 *)(iVar2 + 0xac);
        FUN_10008100(iVar2);
      }
      uVar3 = FUN_10009878();
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x7bb) = 1;
      }
      *pcVar1 = '\x01';
    }
  }
  return *pcVar1;
}

