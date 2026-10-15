/*
 * FUN_1004bcf6 at 1004bcf6
 * undefined __cdecl FUN_1004bcf6(undefined4 * param_1)
 * Address ranges: 1004bcf6-1004bd6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004bcf6(undefined4 *param_1)

{
  char cVar1;
  void *this;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  this = (void *)*param_1;
  iVar2 = param_1[5];
  pvVar3 = (void *)param_1[1];
  uVar4 = param_1[3];
  iVar5 = param_1[4];
  cVar1 = *(char *)(param_1 + 6);
  FUN_10042220(this,0,0,0);
  if ((uVar4 & 2) == 0) {
    FUN_1004d0b0((void *)((int)this + 0xf768),pvVar3,iVar5,iVar2,(undefined4 *)0x0);
  }
  else {
    FUN_1004cff5((void *)((int)this + 0xf768),(uint)pvVar3,iVar5,iVar2);
  }
  if (cVar1 != '\0') {
    FUN_10045d6c(this,(int)pvVar3);
  }
  return;
}

