/*
 * FUN_18005f000 at 18005f000
 * undefined __fastcall FUN_18005f000(longlong * param_1, uint param_2, undefined4 param_3, float param_4)
 * Address ranges: 18005f000-18005f049
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f000(longlong *param_1,uint param_2,undefined4 param_3,float param_4)

{
  longlong *plVar1;
  
  if (param_2 < 0x10) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
    FUN_18005d900(plVar1,(longlong)(param_1 + 0x16),(longlong)(param_1 + 0x1ed0),param_2,param_3,
                  param_4);
  }
  return;
}

