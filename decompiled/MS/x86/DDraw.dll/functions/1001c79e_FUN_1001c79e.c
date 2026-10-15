/*
 * FUN_1001c79e at 1001c79e
 * undefined __fastcall FUN_1001c79e(int * param_1, uint * param_2, uint param_3, int param_4, int param_5, uint param_6)
 * Address ranges: 1001c79e-1001c839
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1001c79e(int *param_1,uint *param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2 >> 10 & 1;
  uVar2 = 0;
  if (*(char *)((int)param_2 + uVar3 * 2 + 6) != '\0') {
    uVar2 = 2;
  }
  uVar1 = param_6;
  if (param_6 == 0) {
    uVar1 = FUN_1001c444((int)param_2,param_3,
                         uVar2 | *(char *)((int)param_2 + uVar3 * 2 + 5) != '\0');
  }
  FUN_1001c4c2(param_1,param_2,uVar1,param_3,param_4);
  FUN_1001c589(param_1,param_2,param_5);
  if ((param_6 != uVar1) &&
     (((char)uVar1 != (char)param_3 ||
      (((byte)(uVar1 >> 8) & 0x3f) != ((byte)(param_3 >> 8) & 0x3f))))) {
    FUN_10056a5d((int)(param_2 + 3),uVar1);
  }
  return;
}

