/*
 * FUN_1007b55c at 1007b55c
 * int __fastcall FUN_1007b55c(int param_1)
 * Address ranges: 1007b55c-1007b59d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1007b55c(int param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  
  cVar1 = FUN_10079aa0(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_1007a097(this);
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar2 = param_1 + 0xe8;
    }
    return iVar2;
  }
  FUN_10078233(this,'\0');
  return param_1 + 0x48;
}

