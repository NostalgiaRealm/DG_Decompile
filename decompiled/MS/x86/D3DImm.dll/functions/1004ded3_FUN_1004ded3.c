/*
 * FUN_1004ded3 at 1004ded3
 * undefined4 __stdcall FUN_1004ded3(uint param_1, uint param_2, uint * param_3)
 * Address ranges: 1004ded3-1004df48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004ded3(uint param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  puVar2 = param_3;
  uVar6 = 0x80070057;
  param_1 = param_2;
  if (param_3 != (uint *)0x0) {
    iVar4 = FUN_10008271((void *)(iVar1 + 0x14c),&param_1);
    if (iVar4 != 0) {
      uVar5 = FUN_100081c6((void *)(iVar1 + 0x178),(int *)&param_1);
      uVar6 = 0;
      *puVar2 = (uint)(uVar5 != 0xffffffff);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar6;
}

