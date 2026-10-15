/*
 * FUN_100a2299 at 100a2299
 * undefined __fastcall FUN_100a2299(undefined4 param_1, uint * param_2, int param_3, char param_4, uint * param_5)
 * Address ranges: 100a2299-100a22cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100a2299(undefined4 param_1,uint *param_2,int param_3,char param_4,uint *param_5)

{
  uint *puVar1;
  
  if (param_4 == '0') {
    puVar1 = (uint *)&DAT_100d7360;
  }
  else {
    puVar1 = (uint *)&DAT_100d734c;
    if (param_4 != ' ') {
      puVar1 = (uint *)&DAT_100d7338;
    }
  }
  FUN_100a1c89(param_1,param_2,param_3,puVar1,param_5);
  return;
}

