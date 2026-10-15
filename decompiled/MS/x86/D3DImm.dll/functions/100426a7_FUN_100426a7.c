/*
 * FUN_100426a7 at 100426a7
 * uint __thiscall FUN_100426a7(void * this, int param_1, int * param_2)
 * Address ranges: 100426a7-1004273b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100426a7(void *this,int param_1,int *param_2)

{
  BOOL BVar1;
  uint uVar2;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar2 = FUN_10006ddd(this,param_1,param_2);
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

