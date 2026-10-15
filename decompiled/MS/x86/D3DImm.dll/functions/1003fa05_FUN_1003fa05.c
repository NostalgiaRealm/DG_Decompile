/*
 * FUN_1003fa05 at 1003fa05
 * undefined4 __thiscall FUN_1003fa05(void * this, uint * param_1, int param_2)
 * Address ranges: 1003fa05-1003faf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003fa05(void *this,uint *param_1,int param_2)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar5 = 0x80070057;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x84) == 0)) {
    uVar1 = *(uint *)((int)this + 0x1528);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x1524) + uVar3 * 8) == param_2) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    if (uVar3 == uVar1) {
      local_c = param_1;
      uVar5 = 0x8007000e;
      local_10 = param_2;
      uVar4 = FUN_1001b6b8((void *)((int)this + 0x1524),&local_10);
      if ((char)uVar4 != '\0') {
        (**(code **)(*param_1 + 4))(param_1);
        *(void **)(param_2 + 0x84) = this;
        uVar5 = 0;
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar5;
}

