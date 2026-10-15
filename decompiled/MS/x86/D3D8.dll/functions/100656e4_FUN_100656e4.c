/*
 * FUN_100656e4 at 100656e4
 * int __fastcall FUN_100656e4(int param_1)
 * Address ranges: 100656e4-10065725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100656e4(int param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  
  cVar1 = FUN_10063c94(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_10064261(this);
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar2 = param_1 + 0xe8;
    }
    return iVar2;
  }
  FUN_10062426(this,'\0');
  return param_1 + 0x48;
}

