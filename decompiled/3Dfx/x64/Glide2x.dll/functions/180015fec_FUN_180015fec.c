/*
 * FUN_180015fec at 180015fec
 * undefined __fastcall FUN_180015fec(longlong param_1)
 * Address ranges: 180015fec-1800160a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015fec(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar6 = param_1;
  bVar2 = FUN_18001e0dc(param_1,(byte *)(lVar1 + 0x151),*(char *)(lVar1 + 0x15c));
  if ((bVar2) ||
     (bVar2 = FUN_18001e0dc(lVar6,(byte *)(lVar1 + 0x159),*(char *)(lVar1 + 0x15c)), bVar2)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(int *)(lVar1 + 0x228) = (int)uVar4;
  if ((int)uVar4 == 1) {
    uVar3 = FUN_18001e150(uVar4,lVar1 + 0x161);
    uVar5 = ((uint)uVar3 & 0xff) + 1;
    uVar4 = (ulonglong)uVar5;
    *(uint *)(lVar1 + 0x228) = uVar5;
    if ((char)uVar3 == '\x01') {
      uVar4 = FUN_18001e150(uVar4,lVar1 + 0x1a2);
      uVar5 = (uint)uVar4 & 0xff | 2;
      uVar4 = (ulonglong)uVar5;
      *(uint *)(lVar1 + 0x228) = uVar5;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 8) + 0x33);
  if (uVar5 < (uint)uVar4) {
    *(uint *)(lVar1 + 0x228) = uVar5;
    uVar4 = (ulonglong)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00018001609a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1d0))(*(longlong **)(param_1 + 0x18),uVar4);
  return;
}

