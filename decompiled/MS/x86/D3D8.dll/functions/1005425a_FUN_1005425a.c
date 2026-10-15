/*
 * FUN_1005425a at 1005425a
 * uint __stdcall FUN_1005425a(int * param_1, int param_2, int param_3, byte param_4)
 * Address ranges: 1005425a-1005434b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005425a(int *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_100563a4(param_2,param_3,param_4);
  iVar1 = *(int *)(param_2 + 0x1a0);
  if (iVar1 == 0) {
    return uVar2;
  }
  if ((param_3 == 0) || (param_3 == 3)) {
    param_4 = 0xf;
  }
  uVar2 = FUN_100a05ed(param_2 + 0x18,(uint)(byte)(&DAT_100b03a0)[(uint)param_4 * 2],'\x01');
  if (param_3 == 0) {
    if (*(char *)(iVar1 + 0x49e) != '\0') {
      uVar2 = FUN_100536d9(param_1,iVar1,uVar2);
      goto LAB_10054318;
    }
  }
  else {
    if (param_3 != 3) {
      uVar2 = FUN_10053b71(param_1,iVar1,uVar2);
      return uVar2;
    }
    if (*(char *)(iVar1 + 0x49f) != '\0') {
      uVar2 = FUN_10053a08(param_1,iVar1,uVar2);
      goto LAB_10054318;
    }
  }
  uVar2 = FUN_10053b71(param_1,iVar1,uVar2);
LAB_10054318:
  FUN_100a138c((int *)(iVar1 + 0x18),param_1,0x36);
  return uVar2;
}

