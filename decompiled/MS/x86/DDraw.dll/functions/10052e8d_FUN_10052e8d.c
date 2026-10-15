/*
 * FUN_10052e8d at 10052e8d
 * undefined8 __fastcall FUN_10052e8d(void * param_1)
 * Address ranges: 10052e8d-10052ecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_10052e8d(void *param_1)

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
    FUN_10052e11(param_1,iVar3,iVar2);
  }
  return CONCAT44(iVar2,iVar3);
}

