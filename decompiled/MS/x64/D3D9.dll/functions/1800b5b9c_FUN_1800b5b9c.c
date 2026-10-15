/*
 * FUN_1800b5b9c at 1800b5b9c
 * undefined __fastcall FUN_1800b5b9c(longlong param_1)
 * Address ranges: 1800b5b9c-1800b5c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b5b9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x878) != *(int *)(lVar1 + 0x654)) {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      lVar2 = uVar4 * 0x38;
      FUN_1800b0a64(param_1,uVar3,5,(ulonglong)*(uint *)(param_1 + 0x6ae4 + lVar2));
      FUN_1800b0a64(param_1,uVar3,5,(ulonglong)*(uint *)(param_1 + 0x6ae8 + lVar2));
      FUN_1800b0a64(param_1,uVar3,5,(ulonglong)*(uint *)(param_1 + 0x6aec + lVar2));
      FUN_1800b0a64(param_1,uVar3,5,(ulonglong)*(uint *)(param_1 + 0x6af8 + lVar2));
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < 0x10);
  }
  FUN_18001d608(param_1);
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9eb) != *(int *)(lVar1 + 0x7c7)) {
    *(int *)(*(longlong *)(param_1 + 0x18) + 0x9eb) = *(int *)(lVar1 + 0x7c7);
    FUN_1800b5f2c(param_1,*(float *)(param_1 + 0xc4e0));
  }
  return;
}

