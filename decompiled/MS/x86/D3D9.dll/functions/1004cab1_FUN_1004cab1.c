/*
 * FUN_1004cab1 at 1004cab1
 * undefined __stdcall FUN_1004cab1(int * param_1)
 * Address ranges: 1004cab1-1004cb7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004cab1(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  int iVar3;
  char cVar4;
  uint local_20;
  int iStack_1c;
  int local_14;
  int local_10;
  int *local_c;
  
  piVar1 = param_1;
  this = (void *)*param_1;
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 == 8) {
    cVar4 = '\x01';
    iVar3 = param_1[3];
    iVar2 = param_1[2];
    local_20 = 1;
  }
  else {
    if ((iVar3 == 9) || (iVar3 == 10)) {
      iVar3 = param_1[8];
      local_c = (int *)param_1[7];
      local_14 = iVar3 * 8;
      param_1 = (int *)0x0;
      local_10 = local_14 + 8;
      iVar2 = (**(code **)(*local_c + 0x20))(local_c,0,&local_14,&param_1);
      if (iVar2 < 0) {
        iStack_1c = 0;
        local_20 = 0;
      }
      else {
        local_20 = param_1[iVar3 * 2];
        iStack_1c = param_1[iVar3 * 2 + 1];
        local_10 = 0;
        local_14 = 0;
        (**(code **)(*local_c + 0x24))(local_c,0,&local_14);
      }
      cVar4 = (char)piVar1[0xb];
      this = (void *)*piVar1;
      iVar3 = piVar1[3];
      iVar2 = piVar1[2];
      goto LAB_1004cb71;
    }
    if (iVar3 != 0xb) {
      return;
    }
    cVar4 = (char)param_1[0xb];
    iVar3 = param_1[3];
    iVar2 = param_1[2];
    local_20 = (uint)(cVar4 == '\0');
  }
  iStack_1c = 0;
LAB_1004cb71:
  FUN_1004c05e(this,local_20,iStack_1c,iVar2,iVar3,cVar4);
  return;
}

