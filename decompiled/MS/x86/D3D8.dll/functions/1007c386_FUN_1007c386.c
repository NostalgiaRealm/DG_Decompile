/*
 * FUN_1007c386 at 1007c386
 * uint __stdcall FUN_1007c386(int param_1, int param_2, int * param_3)
 * Address ranges: 1007c386-1007c406
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007c386(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  iVar2 = param_2;
  local_8 = 0;
  uVar3 = FUN_1000462a((void *)(iVar1 + -0x58e0),param_2,param_3,&local_8);
  if (-1 < (int)uVar3) {
    if ((iVar2 == 3) || (iVar2 == 1)) {
      *(undefined4 *)(local_8 + 0x49b0) = *(undefined4 *)(iVar1 + 0x60);
    }
    if ((iVar2 == 2) || (iVar2 == 1)) {
      *(undefined4 *)(local_8 + 0x49ac) = *(undefined4 *)(iVar1 + 100);
    }
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar3;
}

