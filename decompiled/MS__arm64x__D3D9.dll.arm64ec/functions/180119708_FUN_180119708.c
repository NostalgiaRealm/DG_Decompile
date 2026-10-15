/*
 * FUN_180119708 at 180119708
 * undefined FUN_180119708(void)
 * Address ranges: 180119708-18011975b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180119708(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int extraout_w15;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 8);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  iVar1 = FUN_180116ed0(uVar3,uVar2,*(undefined4 *)(param_1 + 0x50));
  iVar1 = iVar1 * (*(int *)(param_1 + 0x44) + 1);
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = FUN_180116ed0(uVar3 & 0xffffffff,uVar2 & 0xffffffff);
    iVar1 = iVar1 + extraout_w15;
  }
  return iVar1;
}

