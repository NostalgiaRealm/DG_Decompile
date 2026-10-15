/*
 * FUN_18004ad54 at 18004ad54
 * undefined __fastcall FUN_18004ad54(longlong param_1, int * param_2)
 * Address ranges: 18004ad54-18004adc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ad54(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if ((((*param_2 != *(int *)(param_1 + 0x660)) || (param_2[1] != *(int *)(param_1 + 0x664))) ||
      (param_2[2] != *(int *)(param_1 + 0x668))) || (param_2[3] != *(int *)(param_1 + 0x66c))) {
    lVar1 = 0;
    do {
      *(int *)(param_1 + 0x660 + lVar1 * 4) = param_2[lVar1];
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb8))(*(longlong **)(param_1 + 0x688),param_2);
  }
  return;
}

