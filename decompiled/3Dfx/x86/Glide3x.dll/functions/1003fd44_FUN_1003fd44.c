/*
 * FUN_1003fd44 at 1003fd44
 * undefined8 __fastcall FUN_1003fd44(void * param_1)
 * Address ranges: 1003fd44-1003fd82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_1003fd44(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0x910) == -1) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)((int)param_1 + 0x908);
    iVar3 = uVar1 + 1;
    *(int *)((int)param_1 + 0x908) = iVar3;
    iVar2 = *(int *)((int)param_1 + 0x90c) + (uint)(0xfffffffe < uVar1);
    *(int *)((int)param_1 + 0x90c) = iVar2;
    FUN_1003fcc8(param_1,iVar3,iVar2);
  }
  return CONCAT44(iVar2,iVar3);
}

