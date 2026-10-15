/*
 * FUN_140001cbc at 140001cbc
 * undefined __fastcall FUN_140001cbc(longlong param_1, uint param_2, uint param_3, uint param_4, char param_5)
 * Address ranges: 140001cbc-140001d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001cbc(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  LRESULT LVar3;
  uint uVar4;
  uint local_d8;
  uint local_d4;
  uint local_c8;
  CHAR local_b8 [136];
  
  LVar3 = FUN_14000e230(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar4 = 0;
  uVar1 = (uint)LVar3;
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar4);
      FUN_140001b14(param_1,(undefined8 *)&local_d8,uVar2);
      if (((local_d8 == param_2) && (local_d4 == param_3)) &&
         ((param_5 == '\0' || (local_c8 == param_4)))) {
        FUN_14000e4a0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar4);
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (uVar4 == uVar1) {
    FUN_140001344(param_1,local_b8,param_2,(ulonglong)param_3,param_4);
    FUN_14000e180(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),local_b8);
  }
  return;
}

