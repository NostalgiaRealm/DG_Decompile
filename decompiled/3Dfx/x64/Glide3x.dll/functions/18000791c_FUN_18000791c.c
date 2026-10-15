/*
 * FUN_18000791c at 18000791c
 * undefined __fastcall FUN_18000791c(longlong param_1)
 * Address ranges: 18000791c-1800079d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000791c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar6 = param_1;
  bVar2 = FUN_18000abcc(param_1,(byte *)(lVar1 + 0x156),*(char *)(lVar1 + 0x161));
  if ((bVar2) ||
     (bVar2 = FUN_18000abcc(lVar6,(byte *)(lVar1 + 0x15e),*(char *)(lVar1 + 0x161)), bVar2)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(int *)(lVar1 + 0x2a0) = (int)uVar4;
  if ((int)uVar4 == 1) {
    uVar3 = FUN_18000ac40(uVar4,lVar1 + 0x19f);
    uVar5 = ((uint)uVar3 & 0xff) + 1;
    uVar4 = (ulonglong)uVar5;
    *(uint *)(lVar1 + 0x2a0) = uVar5;
    if ((char)uVar3 == '\x01') {
      uVar4 = FUN_18000ac40(uVar4,lVar1 + 500);
      uVar5 = (uint)uVar4 & 0xff | 2;
      uVar4 = (ulonglong)uVar5;
      *(uint *)(lVar1 + 0x2a0) = uVar5;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 8) + 0x33);
  if (uVar5 < (uint)uVar4) {
    *(uint *)(lVar1 + 0x2a0) = uVar5;
    uVar4 = (ulonglong)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800079ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f0))(*(longlong **)(param_1 + 0x18),uVar4);
  return;
}

