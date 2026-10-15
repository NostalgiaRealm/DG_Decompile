/*
 * FUN_100288e0 at 100288e0
 * int __stdcall FUN_100288e0(int param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined4 * param_5, int param_6, undefined1 param_7, int * param_8)
 * Address ranges: 100288e0-100289d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100288e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
                int param_6,undefined1 param_7,int *param_8)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  ushort in_FPUControlWord;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  if ((undefined4 *)0xffff < param_5) {
    *param_5 = 0;
  }
  iVar3 = -0x7ff8ffa9;
  if (((param_4 != (int *)0x0) &&
      (((param_5 != (undefined4 *)0x0 || ((char)param_8 != '\0')) && (param_6 == 0)))) &&
     (*param_4 == 0x7c)) {
    iVar3 = -0x7789ff9c;
    uVar2 = FUN_100277d8((int)param_4);
    if (((char)uVar2 != '\0') && (iVar3 = -0x7789ff2c, *(char *)((int)local_10 + 0x108) != '\0')) {
      iVar3 = FUN_1002799e(local_10,param_1,param_2,param_3,param_4,(undefined4 *)0x0,param_5,
                           (undefined4 *)0x0,extraout_ECX,param_7,param_8);
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return iVar3;
}

