/*
 * FUN_1000e878 at 1000e878
 * int __fastcall FUN_1000e878(int param_1)
 * Address ranges: 1000e878-1000e8b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000e878(int param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  
  cVar1 = FUN_1000ce28(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_1000d3f5(this);
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar2 = param_1 + 0xe8;
    }
    return iVar2;
  }
  FUN_1000b5ba(this,'\0');
  return param_1 + 0x48;
}

