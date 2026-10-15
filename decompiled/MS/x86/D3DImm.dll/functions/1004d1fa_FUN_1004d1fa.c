/*
 * FUN_1004d1fa at 1004d1fa
 * undefined4 __stdcall FUN_1004d1fa(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 1004d1fa-1004d274
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d1fa(int param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = *param_2;
    if (*(uint *)(iVar1 + 0x1664) <= *param_2) {
      uVar3 = *(uint *)(iVar1 + 0x1664);
    }
    uVar3 = uVar3 * 0xc;
    if (uVar3 < 0x101) {
      puVar4 = *(undefined4 **)(iVar1 + 0x1660);
      for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_3 = *puVar4;
        puVar4 = puVar4 + 1;
        param_3 = param_3 + 1;
      }
    }
    else {
      FUN_1005ca00(param_3,*(undefined4 **)(iVar1 + 0x1660),uVar3);
    }
  }
  lpCriticalSection = DAT_1006bbd0;
  *param_2 = *(uint *)(iVar1 + 0x1664);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

