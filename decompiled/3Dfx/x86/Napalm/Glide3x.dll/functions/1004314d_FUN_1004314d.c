/*
 * FUN_1004314d at 1004314d
 * undefined8 __fastcall FUN_1004314d(void * param_1)
 * Address ranges: 1004314d-1004318b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_1004314d(void *param_1)

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
    FUN_100430d1(param_1,iVar3,iVar2);
  }
  return CONCAT44(iVar2,iVar3);
}

