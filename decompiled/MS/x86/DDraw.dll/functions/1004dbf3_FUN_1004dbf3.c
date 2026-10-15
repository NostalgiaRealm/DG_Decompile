/*
 * FUN_1004dbf3 at 1004dbf3
 * undefined8 __fastcall FUN_1004dbf3(int param_1)
 * Address ranges: 1004dbf3-1004dc26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_1004dbf3(int param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (uint *)(param_1 + 0x18);
  do {
    uVar3 = *puVar1;
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar6 = iVar4 + (uint)(0xfffffffe < uVar3);
    LOCK();
    lVar2 = *(longlong *)puVar1;
    if (*(longlong *)puVar1 == lVar2) {
      *(longlong *)puVar1 = CONCAT44(iVar6,uVar3 + 1);
      uVar5 = uVar3;
      iVar7 = iVar4;
    }
    else {
      uVar5 = (uint)lVar2;
      iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    }
    UNLOCK();
  } while ((uVar5 != uVar3) || (iVar7 != iVar4));
  return CONCAT44(iVar6,uVar3 + 1);
}

