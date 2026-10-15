/*
 * FUN_10040aba at 10040aba
 * undefined4 __thiscall FUN_10040aba(void * this, undefined4 * param_1)
 * Address ranges: 10040aba-10040b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040aba(void *this,undefined4 *param_1)

{
  ushort uVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar4 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = 0;
    uVar1 = *(ushort *)(*(int *)((int)this + 0xa58) + 0x120);
    *param_1 = 0;
    do {
      if (*(int *)((int)this + uVar3 * 100 + 0x4f8) == 1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    uVar4 = 0x8876081d;
    if (uVar3 <= uVar1) {
      uVar4 = (**(code **)(**(int **)((int)this + 0x14) + 0x88))(param_1);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

